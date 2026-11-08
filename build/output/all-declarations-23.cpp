#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dataPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_dataPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 30)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 30)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptyData"), GGS_string ("data"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 38)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("dataWithContentsOfFile"), GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("data"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 45)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dataPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_dataPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 59)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 59)) COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 59)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                            GGS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                            GGS_string & outArgument_outEnumeratedType,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_uintTypeIndex_2950 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), var_uintTypeIndex_2950, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 67)) ;
  }
  outArgument_outEnumerationList = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.plusPlusAssignOperation (GGS_enumerationDescriptorList_2E_element::init_21__21_ (var_uintTypeIndex_2950, GGS_string ("data"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 69)) ;
  outArgument_outEnumeratedType = GGS_string ("uint") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 78)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 86)) ;
  }
  GGS_formalParameterSignature var_argList_3857 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3947 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_t_3947, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 95)) ;
  }
  var_argList_3857.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 96)), var_t_3947, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 96)), GGS_string ("inFilePath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 96)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_t_3947, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 97)) ;
  }
  var_argList_3857.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 98)), var_t_3947, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 98)), GGS_string ("outFileModified"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 98)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 100)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 101)), var_argList_3857, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 103)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 105)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 99)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 114)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cStringRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 122)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_setterMap & outArgument_outSetterMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendByte"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 136)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendShortBE"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 144)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendShortLE"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 152)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendUIntBE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 160)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendUIntLE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 168)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inValue"), GGS_string ("appendUTF8String"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 176)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("data"), GGS_string ("inValue"), GGS_string ("appendData"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 184)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dataPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_dataPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 197))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST supportsCollectionValue'
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
//Overriding extension func '@stringsetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_stringsetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  GGS_formalInputParameterListAST var_defaultInitializer_1824 = GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListAST temp_0 = GGS_formalInputParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST_2E_element::init_21__21__21__21__21_ (GGS_string ("stringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), function_makeArrayTypeLName (GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), GGS_string ("inStringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), GGS_bool (false), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)) ;
  GGS_formalInputParameterListAST var_initializerFromStringArray_1885 = temp_0 ;
  GGS_formalInputParameterListAST temp_1 = GGS_formalInputParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)) ;
  temp_1.plusPlusAssignOperation (GGS_formalInputParameterListAST_2E_element::init_21__21__21__21__21_ (GGS_string ("lstringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)), GGS_string ("[lstring]").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)), GGS_string ("inLStringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)), GGS_bool (false), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)) ;
  GGS_formalInputParameterListAST var_initializerFromLStringArray_2067 = temp_1 ;
  GGS__5B_formalInputParameterListAST_5D_ temp_2 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  temp_2.plusPlusAssignOperation (var_defaultInitializer_1824  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  temp_2.plusPlusAssignOperation (var_initializerFromStringArray_1885  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  temp_2.plusPlusAssignOperation (var_initializerFromLStringArray_2067  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  result_result = temp_2 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_stringsetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 49))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_stringsetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 55)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 55)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)).operator_or (GGS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 59)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptySet"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 67)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 74)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithStringList"), GGS_string ("stringlist"), GGS_string ("inStringList"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 83)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithLStringList"), GGS_string ("lstringlist"), GGS_string ("inLStringList"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 92)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_setterMap & outArgument_outSetterMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringType_4425 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_4425, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 107)) ;
  }
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  outArgument_outSetterMap.setter_insertKey (GGS_string ("removeKey").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 110)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 111)), GGS_formalParameterSignature::class_func_listWithValue (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)), var_stringType_4425, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)), GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 114)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 109)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inValue"), GGS_string ("insert"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 117)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                 GGS_string & outArgument_outEnumeratedType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_5315 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringTypeIndex_5315, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 132)) ;
  }
  outArgument_outEnumerationList = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.plusPlusAssignOperation (GGS_enumerationDescriptorList_2E_element::init_21__21_ (var_stringTypeIndex_5315, GGS_string ("key"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 134)) ;
  outArgument_outEnumeratedType = GGS_string ("string") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getAddAssignArgumentList'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getAddAssignArgumentList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GGS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_5807 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("stringset"), var_stringTypeIndex_5807, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 142)) ;
  }
  GGS_functionSignature temp_0 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 143)) ;
  temp_0.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 143)), var_stringTypeIndex_5807, GGS_string ("inString"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 143)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 150)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("contains"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 151)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 158)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("anyString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 165)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringList"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 172)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'programFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_programFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_programFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_programFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_programFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_programFileGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'programFileGenerationTemplate programFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (Compiler * inCompiler,
                                                                                        const GGS_string & /* in_COMPONENT_5F_NAME */,
                                                                                        const GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                        const GGS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                        const GGS_programRuleList & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                        const GGS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#include \"project_header.h\"\n#include \"F_mainForLIBPM.h\"\n#include \"analyzeCommandLineOptions.h\"\n#include \"builtin-command-line-options.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"F_verbose_output.h\"\n#include \"LexiqueIntrospection.h\"\n#include \"F_DisplayException.h\"\n") ;
  GGS_uint index_309_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_309 (in_IMPORTED_5F_COMPONENT_5F_LIST) ;
    while (enumerator_309.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_309.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      enumerator_309.gotoNextObject () ;
      index_309_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                      print_tool_help_message                                                  \n//--------------------------------------------------------------------------------------------------\n\nstatic void print_tool_help_message (void) {\n  gCout.appendCString (\"Compiled with GALGAS revision NUMERO_REVISION_GALGAS\\n\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic const char * kSourceFileExtensions [] = {\n") ;
  GGS_uint index_1113_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator_programRuleList enumerator_1113 (in_PROGRAM_5F_RULE_5F_LIST) ;
    while (enumerator_1113.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1113.current_mSourceFileExtension (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_1113.gotoNextObject () ;
      index_1113_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;    \n\n//--------------------------------------------------------------------------------------------------\n\nstatic const char * kSourceFileHelpMessages [] = {\n") ;
  GGS_uint index_1546_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator_programRuleList enumerator_1546 (in_PROGRAM_5F_RULE_5F_LIST) ;
    while (enumerator_1546.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1546.current_mSourceFileHelp (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_1546.gotoNextObject () ;
      index_1546_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;    \n\n//--------------------------------------------------------------------------------------------------\n\nconst char * projectVersionString (void) {\n  return ") ;
  result.appendString (in_PROJECT_5F_VERSION_5F_STRING.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 43)).stringValue ()) ;
  result.appendString (" ;\n}\n\n") ;
  result.appendString (in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING.stringValue ()) ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                      M A I N    F O R    L I B P M                                            \n//\n//--------------------------------------------------------------------------------------------------\n\nint mainForLIBPM (int inArgc, const char * inArgv []) {\n//--- Analyze Command Line Options\n  GenericUniqueArray <String> sourceFilesArray ;\n  analyzeCommandLineOptions (inArgc, inArgv,\n                             sourceFilesArray,\n                             kSourceFileExtensions,\n                             kSourceFileHelpMessages,\n                             print_tool_help_message) ;\n//---\n  int returnCode = 0 ; // No error\n//--- Set Execution mode\n  String executionModeOptionErrorMessage ;\n  setExecutionMode (executionModeOptionErrorMessage) ;\n  if (executionModeOptionErrorMessage.length () > 0) {\n    gCout.appendString (executionModeOptionErrorMessage) ;\n    returnCode = 1 ;\n  }else{\n  //--- Common lexique object\n    Compiler * commonCompiler = nullptr ;\n    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;\n    try{\n      routine_before (commonCompiler COMMA_HERE) ;\n      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;\n      const bool verboseOptionOn = verboseOutput () ;\n      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {\n        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;\n        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;\n        const GGS_location location = commonCompiler->here () ;\n        const GGS_lstring sourceFilePath (sfp, location) ;\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_PROGRAM_5F_RULE_5F_LIST.getter_count (SOURCE_FILE ("program-file.cpp.galgasTemplate", 82)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("        int r = 0 ;\n        ") ;
    GGS_uint index_3868_IDX (0) ;
    if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
      UpEnumerator_programRuleList enumerator_3868 (in_PROGRAM_5F_RULE_5F_LIST) ;
      while (enumerator_3868.hasCurrentObject ()) {
        result.appendString ("if (fileExtension == ") ;
        result.appendString (enumerator_3868.current_mSourceFileExtension (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 87)).stringValue ()) ;
        result.appendString (") {\n") ;
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_3868.current_mReferenceGrammar (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("          switch (executionMode ()) {\n          case kExecutionModeNormal :\n            routine_") ;
          result.appendString (GGS_string ("programRule_").add_operation (index_3868_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 91)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 91)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (" (sourceFilePath, commonCompiler COMMA_HERE) ;\n            break ;\n          case kExecutionModeLexicalAnalysisOnly :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=lexical-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeSyntaxAnalysisOnly :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=syntax-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeIndexing :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=indexing\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeLatex :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=latex\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          }\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("          switch (executionMode ()) {\n          case kExecutionModeNormal :\n            routine_") ;
          result.appendString (GGS_string ("programRule_").add_operation (index_3868_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 109)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 109)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 109)).stringValue ()) ;
          result.appendString (" (sourceFilePath, commonCompiler COMMA_HERE) ;\n            break ;\n          case kExecutionModeLexicalAnalysisOnly :\n            cGrammar_") ;
          result.appendString (enumerator_3868.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 112)).stringValue ()) ;
          result.appendString ("::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeSyntaxAnalysisOnly :\n            cGrammar_") ;
          result.appendString (enumerator_3868.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 115)).stringValue ()) ;
          result.appendString ("::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeIndexing :\n            cGrammar_") ;
          result.appendString (enumerator_3868.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 118)).stringValue ()) ;
          result.appendString ("::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeLatex :\n            cGrammar_") ;
          result.appendString (enumerator_3868.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString ("::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          }\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_3868.gotoNextObject () ;
        if (enumerator_3868.hasCurrentObject ()) {
          result.appendString ("        }else ") ;
        }
        index_3868_IDX.increment () ;
      }
    }
    result.appendString ("        }else{\n          printf (\"*** Error: unhandled extension for file '%s' ***\\n\", sourceFilesArray (i COMMA_HERE).cString ()) ;\n          r = 1 ;\n        }\n        if (r != 0) {\n          returnCode = r ;\n        }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("      }\n    //--- Error or warnings \?\n      if (totalErrorCount () > 0) {\n        returnCode = 1 ; // Error code\n      }else if (totalWarningCount () > 0) {\n        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {\n          returnCode = 1 ; // Error code\n          if (verboseOptionOn) {\n            printf (\"** Note: warnings are treated as errors. **\\n\") ;\n          }\n        }\n      }\n    //--- Epilogue\n      routine_after (commonCompiler COMMA_HERE) ;\n    //--- Emit JSON issue file \?\n      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != \"\") {\n        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;\n      }\n    //--- Display error and warnings count\n      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {\n        String message ;\n        if (totalWarningCount () == 0) {\n          message.appendCString (\"No warning\") ;\n        }else if (totalWarningCount () == 1) {\n          message.appendCString (\"1 warning\") ;\n        }else{\n          message.appendSigned (totalWarningCount ()) ;\n          message.appendCString (\" warnings\") ;\n        }\n        message.appendCString (\", \") ;\n        if (totalErrorCount () == 0) {\n          message.appendCString (\"no error\") ;\n        }else if (totalErrorCount () == 1) {\n          message.appendCString (\"1 error\") ;\n        }else{\n          message.appendSigned (totalErrorCount ()) ;\n          message.appendCString (\" errors\") ;\n        }\n        message.appendCString (\".\\n\") ;\n        ggs_printMessage (message COMMA_HERE) ;\n      }\n    }catch (const ::std::exception & e) {\n      F_default_display_exception (e) ;\n      returnCode = 1 ; // Error code\n    }catch (...) {\n      printf (\"**** Unknow exception ****\\n\") ;\n      throw ;\n    }\n    macroDetachSharedObject (commonCompiler) ;\n  }\n  return returnCode ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileBeforeClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS_prologueEpilogueList constinArgument_inPrologueList,
                                                                    GGS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_usefulnessName_2736 = function_beforeNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 61)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 61)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_2736, var_usefulnessName_2736, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 62)) ;
  }
  ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_2736  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 63)) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_2945 = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_prologueEpilogueList enumerator_3043 (constinArgument_inPrologueList) ;
  while (enumerator_3043.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_3372 ;
    {
    GGS_formalParameterListForGeneration joker_3421 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_2736, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_formalParameterListAST::init (inCompiler COMMA_HERE), enumerator_3043.current (HERE).readProperty_mInstructionList (), enumerator_3043.current (HERE).readProperty_mEndOfInstructionList (), var_blockSemanticInstructionListForGeneration_3372, joker_3421, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 67)) ;
    }
    var_semanticInstructionListForGeneration_2945.plusPlusAssignOperation (GGS_semanticInstructionListForGeneration_2E_element::init_21_ (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_3372, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 78)) ;
    enumerator_3043.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_programListForGeneration_2E_element::init_21_ (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-before"), GGS_string ("before"), GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_2945, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 83)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS_programRuleList constinArgument_inProgramRules,
                                                                    GGS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_ruleIndex_4589 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_programRuleList enumerator_4624 (constinArgument_inProgramRules) ;
  while (enumerator_4624.hasCurrentObject ()) {
    GGS_lstring var_usefulnessName_4650 = function_rootRuleNameForUsefulEntitiesGraph (enumerator_4624.current (HERE).readProperty_mSourceFileExtension (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 111)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_4650, var_usefulnessName_4650, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 112)) ;
    }
    ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_4650  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 113)) ;
    GGS_formalParameterListAST temp_0 = GGS_formalParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 115)) ;
    temp_0.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("programComponentCompilation.galgas4", 115)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("programComponentCompilation.galgas4", 115)), GGS_lstring::init_21__21_ (GGS_string ("lstring"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 115)), inCompiler COMMA_HERE), enumerator_4624.current (HERE).readProperty_mSourceFileVariableName (), enumerator_4624.current (HERE).readProperty_mSourceFileVariableNameIsUnused (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 115)) ;
    GGS_formalParameterListAST var_argumentList_4886 = temp_0 ;
    GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_5291 ;
    GGS_formalParameterListForGeneration var_routineSignature_5340 ;
    {
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_4650, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_argumentList_4886, enumerator_4624.current (HERE).readProperty_mInstructionList (), enumerator_4624.current (HERE).readProperty_mEndOfInstructionList (), var_semanticInstructionListForGeneration_5291, var_routineSignature_5340, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 117)) ;
    }
    ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_programListForGeneration_2E_element::init_21_ (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-programrule"), GGS_string ("programRule_").add_operation (var_ruleIndex_4589.getter_string (SOURCE_FILE ("programComponentCompilation.galgas4", 132)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 132)), var_routineSignature_5340, GGS_bool (true), var_semanticInstructionListForGeneration_5291, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 128)) ;
    var_ruleIndex_4589.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 137)) ;
    enumerator_4624.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAfterClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GGS_prologueEpilogueList constinArgument_inEpilogueList,
                                                                   GGS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_usefulnessName_6377 = function_afterNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 155)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 155)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_6377, var_usefulnessName_6377, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 156)) ;
  }
  ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_6377  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 157)) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6622 = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_prologueEpilogueList enumerator_6683 (constinArgument_inEpilogueList) ;
  while (enumerator_6683.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_7012 ;
    {
    GGS_formalParameterListForGeneration joker_7061 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_6377, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_formalParameterListAST::init (inCompiler COMMA_HERE), enumerator_6683.current (HERE).readProperty_mInstructionList (), enumerator_6683.current (HERE).readProperty_mEndOfInstructionList (), var_blockSemanticInstructionListForGeneration_7012, joker_7061, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 161)) ;
    }
    var_semanticInstructionListForGeneration_6622.plusPlusAssignOperation (GGS_semanticInstructionListForGeneration_2E_element::init_21_ (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_7012, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 172)) ;
    enumerator_6683.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_programListForGeneration_2E_element::init_21_ (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-after"), GGS_string ("after"), GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_6622, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 175)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramComponentGalgas3&&????&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramComponentGalgas_33__26__26__3F__3F__3F__3F__26__3F__21_ (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GGS_prologueEpilogueList constinArgument_inPrologueList,
                                                                                    const GGS_programRuleList constinArgument_inProgramRules,
                                                                                    const GGS_prologueEpilogueList constinArgument_inEpilogueList,
                                                                                    const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    const GGS_string constinArgument_inProjectVersionString,
                                                                                    GGS_programComponentForGeneration & outArgument_outProgramComponentForGeneration,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProgramComponentForGeneration.drop () ; // Release 'out' argument
  GGS_analysisContext var_analysisContext_8339 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, function_buildPredefinedTypes (ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 206)), GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("programComponentCompilation.galgas4", 208)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_programListForGeneration var_decoratedDeclarationListForGeneration_8616 = GGS_programListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8339, ioArgument_ioTypeMap, constinArgument_inPrologueList, var_decoratedDeclarationListForGeneration_8616, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 213)) ;
  }
  {
  routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8339, ioArgument_ioTypeMap, constinArgument_inEpilogueList, var_decoratedDeclarationListForGeneration_8616, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 222)) ;
  }
  {
  routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8339, ioArgument_ioTypeMap, constinArgument_inProgramRules, var_decoratedDeclarationListForGeneration_8616, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 231)) ;
  }
  GGS_stringset var_inclusionSet_9374 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_beforeAfterRulesString_9399 = GGS_string::makeEmptyString () ;
  UpEnumerator_programListForGeneration enumerator_9442 (var_decoratedDeclarationListForGeneration_8616) ;
  while (enumerator_9442.hasCurrentObject ()) {
    var_beforeAfterRulesString_9399.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_9442.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 243)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 243)) ;
    GGS_string var_code_9657 ;
    callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_9442.current (HERE).readProperty_mDeclaration ().ptr (), ioArgument_ioTypeMap, var_inclusionSet_9374, var_code_9657, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 244)) ;
    var_beforeAfterRulesString_9399.plusAssignOperation(var_code_9657, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 245)) ;
    enumerator_9442.gotoNextObject () ;
  }
  UpEnumerator_programRuleList enumerator_9722 (constinArgument_inProgramRules) ;
  while (enumerator_9722.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_9722.current (HERE).readProperty_mReferenceGrammar ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_inclusionSet_9374.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (enumerator_9722.current (HERE).readProperty_mReferenceGrammar ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("programComponentCompilation.galgas4", 249)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 249))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 249)) ;
      }
    }
    enumerator_9722.gotoNextObject () ;
  }
  GGS_string var_cppContents_9905 = GGS_string (filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (inCompiler, GGS_string ("program"), GGS_stringlist::init (inCompiler COMMA_HERE), var_beforeAfterRulesString_9399, constinArgument_inProgramRules, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 252))) ;
  outArgument_outProgramComponentForGeneration = GGS_programComponentForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21_ (GGS_string ("zprogram"), GGS_bool (false), GGS_string ("program"), var_inclusionSet_9374, var_cppContents_9905, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalOrExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 37)) ;
  result_result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 38)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 39)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 39)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterIntervalMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  result_result = GGS_string ("testForInputUTF32CharRange (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_result.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 49)) ;
  result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_result.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 51)) ;
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 52)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result_result = GGS_string ("testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 60)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 60)).add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 60)) ;
  result_result.plusAssignOperation(GGS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 61)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringNotMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 69)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 69)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 69)) ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result_result.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 70)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 70)) ;
  result_result.plusAssignOperation(GGS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 71)) ;
  result_result.plusAssignOperation(constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 72)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 72)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 72)) ;
  const GGS_lexicalStringNotMatchAST temp_1 = this ;
  result_result.plusAssignOperation(temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 73)) ;
  result_result.plusAssignOperation(GGS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 74)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("testForInputUTF32Char (") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result_result.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 83)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 83)) ;
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 84)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterSetMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_result = GGS_string ("testForChar_").add_operation (temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 92)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 92)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_result = GGS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 106)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 106)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 113)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueGeneration.galgas4", 119)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'
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
//Overriding extension func '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_result = GGS_string ("::scanner_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 133)).add_operation (GGS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 133)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6095 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_6095.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6095.current (HERE).readProperty_mLexicalActualInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 135)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 135)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 135)) ;
    enumerator_6095.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 137)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateDefaultSendCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_result = GGS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 154)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 154)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 154)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalErrorByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalErrorByDefaultAST temp_0 = this ;
  result_result = GGS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 162)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 162)).add_operation (temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 162)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 162)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalImplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalImplicitRuleAST::getter_generateLexicalRuleCode (const GGS_string constinArgument_inScannerClassName,
                                                                        const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_tokenSortedlist var_tokenSortedList_8958 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_8949 ; // Joker input parameter
  GGS_bool joker_8975 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_8949, var_tokenSortedList_8958, joker_8975, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 197)) ;
  result_result = GGS_string::makeEmptyString () ;
  DownEnumerator_tokenSortedlist enumerator_9010 (var_tokenSortedList_8958) ;
  while (enumerator_9010.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 200)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 200)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 200)) ;
    result_result.plusAssignOperation(enumerator_9010.current (HERE).readProperty_mName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 201)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 201)) ;
    result_result.plusAssignOperation(GGS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 202)) ;
    result_result.plusAssignOperation(GGS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_9010.current (HERE).readProperty_mTerminalName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 203)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 203)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 203)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 203)) ;
    result_result.plusAssignOperation(GGS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 204)) ;
    result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 205)) ;
    enumerator_9010.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalImplicitRuleAST lexicalRuleUsesLoopLocalVar'
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
//Overriding extension func '@lexicalExplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalExplicitRuleAST::getter_generateLexicalRuleCode (const GGS_string constinArgument_inScannerClassName,
                                                                        const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("if (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 222)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 222)) ;
  result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 223)) ;
  {
  result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 224)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_10164 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_10164.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10164.current (HERE).readProperty_mInstruction ().ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 226)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 226)) ;
    enumerator_10164.gotoNextObject () ;
  }
  {
  result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 228)) ;
  }
  result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 229)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalExplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalExplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_10574 (temp_0.readProperty_mInstructionList ()) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas4", 236)).isValidAndTrue () ;
  if (enumerator_10574.hasCurrentObject () && bool_1) {
    while (enumerator_10574.hasCurrentObject () && bool_1) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_10574.current (HERE).readProperty_mInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 237)) ;
      enumerator_10574.gotoNextObject () ;
      if (enumerator_10574.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas4", 236)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall???&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (const GGS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inSourceType,
                                                                        const GGS_location constinArgument_inErrorLocation,
                                                                        GGS_semanticExpressionForGeneration & ioArgument_ioExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition var_targetTypeDef_4730 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 106)) ;
  GGS_unifiedTypeMapEntry temp_0 ;
  const GalgasBool test_1 = var_targetTypeDef_4730.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 107)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 107)).boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = var_targetTypeDef_4730.readProperty_unwrappedType () ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = constinArgument_inTargetType ;
  }
  GGS_unifiedTypeMapEntry var_targetTypeForBigIntAssignment_4776 = temp_0 ;
  GGS_bool var_handled_4955 = GGS_bool (false) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_bigIntSource_4980 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioExpression.ptr ())) ;
    if (nullptr == var_bigIntSource_4980.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4776, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_bigint var_bigIntValue_5125 = var_bigIntSource_4980.readProperty_mValue () ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5125.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 116)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5125.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 116)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 116)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5125.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 117)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 117)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 117)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 117)) ;
            }
          }
          ioArgument_ioExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4776, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5125.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 122)), inCompiler COMMA_HERE) ;
          var_handled_4955 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4776, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_bigint var_bigIntValue_5592 = var_bigIntSource_4980.readProperty_mValue () ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5592.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 127)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5592.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 127)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 127)).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GenericArray <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5592.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 128)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 128)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 128)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 128)) ;
              }
            }
            ioArgument_ioExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4776, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5592.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 133)), inCompiler COMMA_HERE) ;
            var_handled_4955 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4776, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GGS_bigint var_bigIntValue_6070 = var_bigIntSource_4980.readProperty_mValue () ;
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_6070.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 138)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_6070.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 138)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 138)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  GenericArray <FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_6070.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 139)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 139)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 139)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 139)) ;
                }
              }
              ioArgument_ioExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4776, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_6070.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 144)), inCompiler COMMA_HERE) ;
              var_handled_4955 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4776, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 147)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                GGS_bigint var_bigIntValue_6545 = var_bigIntSource_4980.readProperty_mValue () ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_6545.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 149)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_6545.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 149)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 149)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    GenericArray <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_6545.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 150)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 150)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 150)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 150)) ;
                  }
                }
                ioArgument_ioExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4776, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_6545.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 155)), inCompiler COMMA_HERE) ;
                var_handled_4955 = GGS_bool (true) ;
              }
            }
          }
        }
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = var_handled_4955.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 161)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_targetTypeDef_4730.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 162)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 161)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 163)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 163)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 162)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_unifiedTypeMapEntry var_targetUnwrappedType_7166 = var_targetTypeDef_4730.readProperty_unwrappedType () ;
          GGS_unifiedTypeMapEntry var_sourceUnwrappedType_7224 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 165)).readProperty_unwrappedType () ;
          var_handled_4955 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetUnwrappedType_7166, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 166)).objectCompare (extensionGetter_typeName (var_sourceUnwrappedType_7224, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 166)))) ;
        }
      }
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = var_handled_4955.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 169)).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 169)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 169)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 169)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GGS_string var_targetUnwrappedTypeName_7510 = extensionGetter_typeName (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 170)).readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 170)) ;
        var_handled_4955 = GGS_bool (ComparisonKind::equal, var_targetUnwrappedTypeName_7510.objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 171)))) ;
        GGS_unifiedTypeMapEntry var_sourceType_7654 = constinArgument_inSourceType ;
        if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)).isValid ()) {
          uint32_t variant_7684 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)).uintValue () ;
          bool loop_7684 = true ;
          while (loop_7684) {
            loop_7684 = var_handled_4955.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)).operator_and (extensionGetter_definition (var_sourceType_7654, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)).isValid () ;
            if (loop_7684) {
              loop_7684 = var_handled_4955.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)).operator_and (extensionGetter_definition (var_sourceType_7654, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)).boolValue () ;
            }
            if (loop_7684 && (0 == variant_7684)) {
              loop_7684 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 173)) ;
            }
            if (loop_7684) {
              variant_7684 -= 1 ;
              var_sourceType_7654 = extensionGetter_definition (var_sourceType_7654, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 174)).readProperty_superType () ;
              var_handled_4955 = GGS_bool (ComparisonKind::equal, var_targetUnwrappedTypeName_7510.objectCompare (extensionGetter_typeName (var_sourceType_7654, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)))) ;
            }
          }
        }
      }
    }
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_handled_4955.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 179)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GGS_unifiedTypeMapEntry var_sourceType_7960 = constinArgument_inSourceType ;
      GGS_bool var_ok_7994 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)))) ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)).isValid ()) {
        uint32_t variant_8050 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)).uintValue () ;
        bool loop_8050 = true ;
        while (loop_8050) {
          loop_8050 = var_ok_7994.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)).operator_and (extensionGetter_definition (var_sourceType_7960, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)).isValid () ;
          if (loop_8050) {
            loop_8050 = var_ok_7994.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)).operator_and (extensionGetter_definition (var_sourceType_7960, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)).boolValue () ;
          }
          if (loop_8050 && (0 == variant_8050)) {
            loop_8050 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)) ;
          }
          if (loop_8050) {
            variant_8050 -= 1 ;
            var_sourceType_7960 = extensionGetter_definition (var_sourceType_7960, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 183)).readProperty_superType () ;
            var_ok_7994 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_7960)) ;
          }
        }
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = var_ok_7994.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 186)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_typeKindEnum_2E_weakReferenceType var_targetWeakRef_8248 = var_targetTypeDef_4730.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 186)).unwrappedValue () ;
          if (!var_targetTypeDef_4730.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 186)).isValuated ()) {
            test_18 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_18) {
            var_sourceType_7960 = constinArgument_inSourceType ;
            var_ok_7994 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_8248.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 188)).objectCompare (extensionGetter_typeName (var_sourceType_7960, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 188)))) ;
            if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)).isValid ()) {
              uint32_t variant_8422 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)).uintValue () ;
              bool loop_8422 = true ;
              while (loop_8422) {
                loop_8422 = var_ok_7994.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)).operator_and (extensionGetter_definition (var_sourceType_7960, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)).isValid () ;
                if (loop_8422) {
                  loop_8422 = var_ok_7994.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)).operator_and (extensionGetter_definition (var_sourceType_7960, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)).boolValue () ;
                }
                if (loop_8422 && (0 == variant_8422)) {
                  loop_8422 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 189)) ;
                }
                if (loop_8422) {
                  variant_8422 -= 1 ;
                  var_sourceType_7960 = extensionGetter_definition (var_sourceType_7960, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 190)).readProperty_superType () ;
                  var_ok_7994 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_8248.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)).objectCompare (extensionGetter_typeName (var_sourceType_7960, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)))) ;
                }
              }
            }
          }
        }
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = var_ok_7994.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 195)).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          const GGS_propertyMap_2E_element var_prop_8735 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 195)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_4730.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
          if (!extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 195)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_4730.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
            test_19 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_19) {
            extensionMethod_checkSetAccess (var_prop_8735.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 196)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 196)) ;
            GGS_propertyAccessExpressionForGeneration var_conversionExpression_8891 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_8735.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioExpression, var_targetTypeDef_4730.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8891 ;
            var_ok_7994 = GGS_bool (ComparisonKind::equal, var_prop_8735.readProperty_mPropertyType ().objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_19) {
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          GGS_bool test_21 = var_ok_7994.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 205)) ;
          if (GalgasBool::boolTrue == test_21.boolEnum ()) {
            test_21 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 205)).readProperty_getterMap ().getter_contains (var_targetTypeDef_4730.readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 205)) ;
          }
          test_20 = test_21.boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GGS_methodKind var_kind_9362 ;
            GGS_functionSignature var_argumentTypeList_9400 ;
            GGS_bool var_hasCompilerArgument_9443 ;
            GGS_unifiedTypeMapEntry var_returnedType_9477 ;
            GGS_location joker_9426 ; // Joker input parameter
            GGS_methodQualifier joker_9499_2 ; // Joker input parameter
            GGS_string joker_9499_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 206)).readProperty_getterMap ().method_searchKey (var_targetTypeDef_4730.readProperty_typeName (), var_kind_9362, var_argumentTypeList_9400, joker_9426, var_hasCompilerArgument_9443, var_returnedType_9477, joker_9499_2, joker_9499_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 206)) ;
            var_ok_7994 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_9400.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 215)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_9477.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 215)) ;
            GGS_getterCallExpressionForGeneration var_conversionExpression_9630 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_9362, ioArgument_ioExpression, GGS_stringlist::init (inCompiler COMMA_HERE), var_targetTypeDef_4730.readProperty_typeName ().readProperty_string (), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_hasCompilerArgument_9443, inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_9630 ;
          }
        }
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        test_22 = var_ok_7994.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 229)).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("target object type is @").add_operation (var_targetTypeDef_4730.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 231)).add_operation (GGS_string (" and cannot be assigned from an @"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 231)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 232)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 232)).add_operation (GGS_string (" object; this type have no "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 232)).add_operation (var_targetTypeDef_4730.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 233)).add_operation (GGS_string (" func without argument that returns a @"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 234)).add_operation (var_targetTypeDef_4730.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 235)).add_operation (GGS_string (" object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 236)), fixItArray23  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 230)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator?operatorIsHandled??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (const GGS_bool constinArgument_inOperandIsHandled,
                                                                       const GGS_string constinArgument_inOperatorNameForErrorMessage,
                                                                       const GGS_location constinArgument_inErrorLocation,
                                                                       GGS_semanticExpressionForGeneration & ioArgument_ioLeftExpression,
                                                                       GGS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_leftResultType_10796 = ioArgument_ioLeftExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightResultType_10849 = ioArgument_ioRightExpression.readProperty_mResultType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 251)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)).add_operation (GGS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)).add_operation (GGS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)).add_operation (extensionGetter_definition (var_rightResultType_10849, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 255)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 255)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 255)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 252)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_rightType_11234 = var_rightResultType_10849 ;
    GGS_bool var_ok_11276 = GGS_bool (ComparisonKind::equal, var_leftResultType_10796.objectCompare (var_rightType_11234)) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)).isValid ()) {
      uint32_t variant_11313 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)).uintValue () ;
      bool loop_11313 = true ;
      while (loop_11313) {
        loop_11313 = var_ok_11276.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)).operator_and (extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)).isValid () ;
        if (loop_11313) {
          loop_11313 = var_ok_11276.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)).operator_and (extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)).boolValue () ;
        }
        if (loop_11313 && (0 == variant_11313)) {
          loop_11313 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 259)) ;
        }
        if (loop_11313) {
          variant_11313 -= 1 ;
          var_rightType_11234 = extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)).readProperty_superType () ;
          var_ok_11276 = GGS_bool (ComparisonKind::equal, var_leftResultType_10796.objectCompare (var_rightType_11234)) ;
        }
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_ok_11276.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 264)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_11540 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioRightExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_11540.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 265)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GGS_bigint var_bigIntValue_11690 = var_bigIntSource_11540.readProperty_mValue () ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11690.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11690.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11690.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)) ;
                }
              }
              ioArgument_ioRightExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10796, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11690.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 270)), inCompiler COMMA_HERE) ;
              var_ok_11276 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_6 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_6) {
              test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 272)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_6) {
                GGS_bigint var_bigIntValue_12130 = var_bigIntSource_11540.readProperty_mValue () ;
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12130.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12130.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12130.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)) ;
                  }
                }
                ioArgument_ioRightExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10796, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12130.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 277)), inCompiler COMMA_HERE) ;
                var_ok_11276 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_6) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 279)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GGS_bigint var_bigIntValue_12581 = var_bigIntSource_11540.readProperty_mValue () ;
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12581.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 281)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12581.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 281)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 281)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GenericArray <FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12581.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 282)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 282)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 282)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 282)) ;
                    }
                  }
                  ioArgument_ioRightExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10796, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12581.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 284)), inCompiler COMMA_HERE) ;
                  var_ok_11276 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_bigint var_bigIntValue_13029 = var_bigIntSource_11540.readProperty_mValue () ;
                    GalgasBool test_13 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_13) {
                      test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13029.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 288)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13029.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 288)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 288)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_13) {
                        GenericArray <FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13029.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 289)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 289)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 289)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 289)) ;
                      }
                    }
                    ioArgument_ioRightExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10796, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_13029.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 291)), inCompiler COMMA_HERE) ;
                    var_ok_11276 = GGS_bool (true) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_ok_11276.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 296)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_13477 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioLeftExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_13477.ptr ()) {
          test_15 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_15) {
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 297)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              GGS_bigint var_bigIntValue_13621 = var_bigIntSource_13477.readProperty_mValue () ;
              GalgasBool test_17 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_17) {
                test_17 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13621.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13621.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)).boolEnum () ;
                if (GalgasBool::boolTrue == test_17) {
                  GenericArray <FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13621.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)) ;
                }
              }
              ioArgument_ioLeftExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_rightType_11234, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13621.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 302)), inCompiler COMMA_HERE) ;
              var_ok_11276 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 304)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GGS_bigint var_bigIntValue_14048 = var_bigIntSource_13477.readProperty_mValue () ;
                GalgasBool test_20 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14048.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14048.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_20) {
                    GenericArray <FixItDescription> fixItArray21 ;
                    inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14048.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)) ;
                  }
                }
                ioArgument_ioLeftExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_rightType_11234, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14048.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 309)), inCompiler COMMA_HERE) ;
                var_ok_11276 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_19) {
              GalgasBool test_22 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_22) {
                test_22 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 311)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_22) {
                  GGS_bigint var_bigIntValue_14486 = var_bigIntSource_13477.readProperty_mValue () ;
                  GalgasBool test_23 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_23) {
                    test_23 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14486.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 313)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14486.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 313)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 313)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_23) {
                      GenericArray <FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14486.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)), fixItArray24  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)) ;
                    }
                  }
                  ioArgument_ioLeftExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_11234, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14486.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 316)), inCompiler COMMA_HERE) ;
                  var_ok_11276 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_22) {
                GalgasBool test_25 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 318)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_25) {
                    GGS_bigint var_bigIntValue_14921 = var_bigIntSource_13477.readProperty_mValue () ;
                    GalgasBool test_26 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_26) {
                      test_26 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14921.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 320)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14921.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 320)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 320)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_26) {
                        GenericArray <FixItDescription> fixItArray27 ;
                        inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14921.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 321)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 321)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 321)), fixItArray27  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 321)) ;
                      }
                    }
                    ioArgument_ioLeftExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_11234, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14921.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 323)), inCompiler COMMA_HERE) ;
                    var_ok_11276 = GGS_bool (true) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_ok_11276.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 328)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_propertyMap_2E_element var_prop_15399 = extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 328)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 328)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 328)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 328)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_28 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_28) {
          extensionMethod_checkSetAccess (var_prop_15399.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 329)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 329)) ;
          GGS_propertyAccessExpressionForGeneration var_conversionExpression_15557 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_15399.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 334)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_15557 ;
          var_ok_11276 = GGS_bool (ComparisonKind::equal, var_prop_15399.readProperty_mPropertyType ().objectCompare (var_leftResultType_10796)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_28) {
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        GGS_bool test_30 = var_ok_11276.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 338)) ;
        if (GalgasBool::boolTrue == test_30.boolEnum ()) {
          test_30 = extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 338)).readProperty_getterMap ().getter_contains (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 338)).readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 338)) ;
        }
        test_29 = test_30.boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          GGS_methodKind var_kind_16070 ;
          GGS_functionSignature var_argumentTypeList_16108 ;
          GGS_bool var_hasCompilerArgument_16151 ;
          GGS_unifiedTypeMapEntry var_returnedType_16185 ;
          GGS_location joker_16134 ; // Joker input parameter
          GGS_methodQualifier joker_16207_2 ; // Joker input parameter
          GGS_string joker_16207_1 ; // Joker input parameter
          extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 339)).readProperty_getterMap ().method_searchKey (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 340)).readProperty_typeName (), var_kind_16070, var_argumentTypeList_16108, joker_16134, var_hasCompilerArgument_16151, var_returnedType_16185, joker_16207_2, joker_16207_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 339)) ;
          var_ok_11276 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_16108.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 348)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_16185.objectCompare (var_leftResultType_10796)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 348)) ;
          GGS_getterCallExpressionForGeneration var_conversionExpression_16340 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_leftResultType_10796, constinArgument_inErrorLocation, var_kind_16070, ioArgument_ioRightExpression, GGS_stringlist::init (inCompiler COMMA_HERE), extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 356)).readProperty_typeName ().readProperty_string (), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_hasCompilerArgument_16151, inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_16340 ;
        }
      }
    }
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = var_ok_11276.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 362)).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        GenericArray <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 364)).add_operation (GGS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 364)).add_operation (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 364)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 364)).add_operation (GGS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 364)).add_operation (extensionGetter_definition (var_rightType_11234, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 365)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 365)).add_operation (GGS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 365)).add_operation (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 367)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 366)).add_operation (GGS_string ("' func without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 367)).add_operation (extensionGetter_definition (var_leftResultType_10796, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 367)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 367)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 367)), fixItArray32  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 363)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'generateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

static GGS_bool onceFunction_generateFewHeaderFiles (Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_generateFewHeaderFiles = false ;
static GGS_bool gOnceFunctionResult_generateFewHeaderFiles ;

//--------------------------------------------------------------------------------------------------

GGS_bool function_generateFewHeaderFiles (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateFewHeaderFiles) {
    gOnceFunctionResult_generateFewHeaderFiles = onceFunction_generateFewHeaderFiles (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateFewHeaderFiles = true ;
  }
  return gOnceFunctionResult_generateFewHeaderFiles ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_generateFewHeaderFiles (void) {
  gOnceFunctionResult_generateFewHeaderFiles.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_generateFewHeaderFiles (nullptr,
                                                                  releaseOnceFunctionResult_generateFewHeaderFiles) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_generateFewHeaderFiles [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_generateFewHeaderFiles (Compiler * inCompiler,
                                                                    const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_generateFewHeaderFiles (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateFewHeaderFiles ("generateFewHeaderFiles",
                                                                        functionWithGenericHeader_generateFewHeaderFiles,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        0,
                                                                        functionArgs_generateFewHeaderFiles) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionComponentDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                         GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 123)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionComponentDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                   const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                   const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                   const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                   GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionMap var_boolOptionMap_5726 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_commandLineOptionMap var_uintOptionMap_5776 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_commandLineOptionMap var_stringOptionMap_5826 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_optionNameSet_5856 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  UpEnumerator__5B_commandLineOptionAST_5D_ enumerator_5911 (temp_0.readProperty_mOptions ()) ;
  while (enumerator_5911.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_optionNameSet_5856.getter_contains (enumerator_5911.current (HERE).readProperty_mOptionInternalName ().readProperty_string () COMMA_SOURCE_FILE ("optionCompilation.galgas4", 141)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5911.current (HERE).readProperty_mOptionInternalName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_5911.current (HERE).readProperty_mOptionInternalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 143)).add_operation (GGS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 143)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 142)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, enumerator_5911.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          var_boolOptionMap_5726.setter_insertKey (enumerator_5911.current (HERE).readProperty_mOptionInternalName (), enumerator_5911.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_5911.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_5911.current (HERE).readProperty_mOptionComment ().readProperty_string (), GGS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 147)) ;
          }
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_5911.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas4", 154)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_5911.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 155)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::equal, enumerator_5911.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            {
            GGS_string temp_7 ;
            const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, enumerator_5911.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              temp_7 = GGS_string ("0") ;
            }else if (GalgasBool::boolFalse == test_8) {
              temp_7 = enumerator_5911.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string () ;
            }
            var_uintOptionMap_5776.setter_insertKey (enumerator_5911.current (HERE).readProperty_mOptionInternalName (), enumerator_5911.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_5911.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_5911.current (HERE).readProperty_mOptionComment ().readProperty_string (), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 160)) ;
            }
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::equal, enumerator_5911.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas4", 167)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5911.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 168)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_5911.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              {
              var_stringOptionMap_5826.setter_insertKey (enumerator_5911.current (HERE).readProperty_mOptionInternalName (), enumerator_5911.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_5911.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_5911.current (HERE).readProperty_mOptionComment ().readProperty_string (), enumerator_5911.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 173)) ;
              }
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::equal, enumerator_5911.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas4", 180)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_5911.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 181)) ;
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_5911.current (HERE).readProperty_mOptionTypeName ().readProperty_location (), GGS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray14  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 186)) ;
          }
        }
      }
    }
    var_optionNameSet_5856.plusPlusAssignOperation (enumerator_5911.current (HERE).readProperty_mOptionInternalName ().readProperty_string ()  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 190)) ;
    enumerator_5911.gotoNextObject () ;
  }
  {
  const GGS_optionComponentDeclarationAST temp_15 = this ;
  const GGS_optionComponentDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_15.readProperty_mOptionComponentName (), temp_16.readProperty_isPredefined (), var_boolOptionMap_5726, var_uintOptionMap_5776, var_stringOptionMap_5826, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 193)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionComponentDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                  const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                  GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_9063 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 212)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9063, var_nameForUsefulness_9063, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 213)) ;
  }
  GGS_bool var_optionIsPredefined_9350 ;
  GGS_commandLineOptionMap var_boolOptionMap_9403 ;
  GGS_commandLineOptionMap var_uintOptionMap_9451 ;
  GGS_commandLineOptionMap var_stringOptionMap_9499 ;
  const GGS_optionComponentDeclarationAST temp_1 = this ;
  constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionIsPredefined_9350, var_boolOptionMap_9403, var_uintOptionMap_9451, var_stringOptionMap_9499, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 215)) ;
  GGS_commandLineOptionSortedList var_boolOptionSortedList_9579 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_9626 (var_boolOptionMap_9403) ;
  while (enumerator_9626.hasCurrentObject ()) {
    var_boolOptionSortedList_9579.plusPlusAssignOperation (GGS_commandLineOptionSortedList_2E_element::init_21__21__21__21__21_ (enumerator_9626.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_9626.current (HERE).readProperty_mOptionChar (), enumerator_9626.current (HERE).readProperty_mOptionString (), enumerator_9626.current (HERE).readProperty_mComment (), enumerator_9626.current (HERE).readProperty_mDefaultValue (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 225)) ;
    enumerator_9626.gotoNextObject () ;
  }
  GGS_commandLineOptionSortedList var_uintOptionSortedList_9880 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_9927 (var_uintOptionMap_9451) ;
  while (enumerator_9927.hasCurrentObject ()) {
    var_uintOptionSortedList_9880.plusPlusAssignOperation (GGS_commandLineOptionSortedList_2E_element::init_21__21__21__21__21_ (enumerator_9927.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_9927.current (HERE).readProperty_mOptionChar (), enumerator_9927.current (HERE).readProperty_mOptionString (), enumerator_9927.current (HERE).readProperty_mComment (), enumerator_9927.current (HERE).readProperty_mDefaultValue (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 235)) ;
    enumerator_9927.gotoNextObject () ;
  }
  GGS_commandLineOptionSortedList var_stringOptionSortedList_10181 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_10230 (var_stringOptionMap_9499) ;
  while (enumerator_10230.hasCurrentObject ()) {
    var_stringOptionSortedList_10181.plusPlusAssignOperation (GGS_commandLineOptionSortedList_2E_element::init_21__21__21__21__21_ (enumerator_10230.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_10230.current (HERE).readProperty_mOptionChar (), enumerator_10230.current (HERE).readProperty_mOptionString (), enumerator_10230.current (HERE).readProperty_mComment (), enumerator_10230.current (HERE).readProperty_mDefaultValue (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 245)) ;
    enumerator_10230.gotoNextObject () ;
  }
  const GGS_optionComponentDeclarationAST temp_2 = this ;
  const GGS_optionComponentDeclarationAST temp_3 = this ;
  const GGS_optionComponentDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_optionComponentForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("option ").add_operation (temp_2.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 265)), GGS_bool (true), GGS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas4", 267)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 267)), var_optionIsPredefined_9350, temp_4.readProperty_mOptionComponentName ().readProperty_string (), var_boolOptionSortedList_9579, var_uintOptionSortedList_9880, var_stringOptionSortedList_10181, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 264)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@optionComponentForGeneration isPredefined'
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
//Overriding extension func '@optionComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_optionComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  const GGS_optionComponentForGeneration temp_0 = this ;
  GGS_headerKind temp_1 ;
  const GalgasBool test_2 = temp_0.readProperty_mIsPredefined ().boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("optionCompilation.galgas4", 300)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("optionCompilation.galgas4", 300)) ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionComponentForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
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
    outArgument_outHeader = GGS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.readProperty_mOptionComponentName (), temp_3.readProperty_mBoolOptionSortedList (), temp_4.readProperty_mUIntOptionSortedList (), temp_5.readProperty_mStringOptionSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas4", 310))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionComponentForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
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
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas4", 327)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 327))  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 327)) ;
    const GGS_optionComponentForGeneration temp_3 = this ;
    const GGS_optionComponentForGeneration temp_4 = this ;
    const GGS_optionComponentForGeneration temp_5 = this ;
    const GGS_optionComponentForGeneration temp_6 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.readProperty_mOptionComponentName (), temp_4.readProperty_mBoolOptionSortedList (), temp_5.readProperty_mUIntOptionSortedList (), temp_6.readProperty_mStringOptionSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas4", 328))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionComponentForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                    GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                    GGS_stringlist & ioArgument_ioSwiftAppProductFileList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_bool test_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("optionCompilation.galgas4", 343)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_1.boolEnum ()) {
      const GGS_optionComponentForGeneration temp_2 = this ;
      test_1 = temp_2.readProperty_mIsPredefined ().operator_not (SOURCE_FILE ("optionCompilation.galgas4", 343)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionComponentForGeneration temp_3 = this ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas4", 345)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 345)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 345))  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 345)) ;
      const GGS_optionComponentForGeneration temp_4 = this ;
      ioArgument_ioSwiftAppProductFileList.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("option-").add_operation (temp_4.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas4", 346)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 346)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 346)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 346)) ;
      {
      const GGS_optionComponentForGeneration temp_5 = this ;
      const GGS_optionComponentForGeneration temp_6 = this ;
      const GGS_optionComponentForGeneration temp_7 = this ;
      const GGS_optionComponentForGeneration temp_8 = this ;
      const GGS_optionComponentForGeneration temp_9 = this ;
      const GGS_optionComponentForGeneration temp_10 = this ;
      GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("option-").add_operation (temp_5.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas4", 349)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 349)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 349)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), GGS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftUI (inCompiler, GGS_string ("option-").add_operation (temp_6.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas4", 354)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 354)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 354)), temp_7.readProperty_mOptionComponentName (), temp_8.readProperty_mBoolOptionSortedList (), temp_9.readProperty_mUIntOptionSortedList (), temp_10.readProperty_mStringOptionSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas4", 353))), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 347)) ;
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
                                                                               const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST
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
                                                                                         const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n") ;
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
                                                                                      const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST
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
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//   Options View\n//--------------------------------------------------------------------------------------------------\n\nstruct OptionView : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mCompilerTools : [CompilerTool] = compilerTools ()\n  @AppStorage(SELECTED_COMPILER_TOOL_INDEX_PREFKEY) private var mSelectedCompilerIndex = 0\n  @State private var mCommandLine = compilerCommandExplained ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Bool options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_1838_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1838 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_1838.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_1838.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_1838.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : Bool = ") ;
      result.appendString (enumerator_1838.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_1838.gotoNextObject () ;
      index_1838_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // UInt options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_2277_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2277 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2277.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_2277.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_2277.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : UInt = ") ;
      result.appendString (enumerator_2277.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2277.gotoNextObject () ;
      index_2277_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // String options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_2720_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2720 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2720.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_2720.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_2720.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : String = ") ;
      result.appendString (enumerator_2720.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 49)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2720.gotoNextObject () ;
      index_2720_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Body\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @ViewBuilder var body : some View {\n    VStack {\n      HStack {\n        Picker(\"Compiler\", selection: self.$mSelectedCompilerIndex) {\n          ForEach (self.mCompilerTools, id: \\.id) { tool in\n            Text (tool.url.lastPathComponent).tag (tool.id)\n          }\n        }.pickerStyle (.automatic)\n        Spacer ()\n      }\n      ScrollView {\n        VStack (alignment: .leading) {\n") ;
  GGS_uint index_3581_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_3581 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_3581.hasCurrentObject ()) {
      result.appendString ("          Toggle (") ;
      result.appendString (enumerator_3581.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 68)).stringValue ()) ;
      result.appendString (", isOn: self.$") ;
      result.appendString (enumerator_3581.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_3581.gotoNextObject () ;
      index_3581_.increment () ;
    }
  }
  GGS_uint index_3800_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_3800 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_3800.hasCurrentObject ()) {
      result.appendString ("          HStack { Text (") ;
      result.appendString (enumerator_3800.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 71)).stringValue ()) ;
      result.appendString (") ; TextField (\"\", value: self.$") ;
      result.appendString (enumerator_3800.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (", format: .number.precision (.fractionLength (0)))\n") ;
      enumerator_3800.gotoNextObject () ;
      index_3800_.increment () ;
    }
  }
  GGS_uint index_4095_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_4095 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_4095.hasCurrentObject ()) {
      result.appendString ("          HStack { Text (") ;
      result.appendString (enumerator_4095.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 74)).stringValue ()) ;
      result.appendString (") ; TextField (\"\", text: self.$") ;
      result.appendString (enumerator_4095.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (") }\n") ;
      enumerator_4095.gotoNextObject () ;
      index_4095_.increment () ;
    }
  }
  result.appendString ("        }.padding ()\n      }.background (.white)\n      HStack { Text (\"Build Command\") ; Spacer () }\n      TextEditor (text: .constant (self.mCommandLine))\n      .font (.system (size: 12).monospaced())\n      .frame (height: 64)\n    }.padding ()\n    .onReceive (NotificationCenter.default.publisher (for: UserDefaults.didChangeNotification)) { _ in\n      self.mCommandLine = compilerCommandExplained ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\nprivate func compilerCommandExplained () -> String {\n  let command : CommandLineToolInvocation = commandLineToolInvocation ()\n  var result = command.tool.lastPathComponent\n  for arg in command.arguments {\n    result += \" \" + arg\n  }\n  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstruct CommandLineToolInvocation {\n  let tool : URL\n  let arguments : [String]\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc commandLineToolInvocation () -> CommandLineToolInvocation {\n  let ud = UserDefaults.standard\n  let compilerTools : [CompilerTool] = compilerTools ()\n  let selectedCompilerIndex : Int = ud.integer (forKey: SELECTED_COMPILER_TOOL_INDEX_PREFKEY)\n  let tool = compilerTools [selectedCompilerIndex].url\n  var arguments = [String] ()\n") ;
  GGS_uint index_5816_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_5816 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_5816.hasCurrentObject ()) {
      result.appendString ("  if ud.bool (forKey: ") ;
      result.appendString (enumerator_5816.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) {\n    arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_5816.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 120)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 120)).stringValue ()) ;
      result.appendString (")\n  }\n") ;
      enumerator_5816.gotoNextObject () ;
      index_5816_.increment () ;
    }
  }
  GGS_uint index_6076_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_6076 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_6076.hasCurrentObject ()) {
      result.appendString ("  do{\n    let v : Int = ud.integer (forKey: ") ;
      result.appendString (enumerator_6076.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY)\n    if v != ") ;
      result.appendString (enumerator_6076.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString (" {\n      arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_6076.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 127)).add_operation (GGS_string ("="), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 127)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 127)).stringValue ()) ;
      result.appendString (" + String (v))\n    }\n  }\n") ;
      enumerator_6076.gotoNextObject () ;
      index_6076_.increment () ;
    }
  }
  GGS_uint index_6440_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_6440 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_6440.hasCurrentObject ()) {
      result.appendString ("  do{\n    let v : String = ud.string (forKey: ") ;
      result.appendString (enumerator_6440.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) \?\? \"\"\n    if v != ") ;
      result.appendString (enumerator_6440.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 134)).stringValue ()) ;
      result.appendString (" {\n      arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_6440.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 135)).add_operation (GGS_string ("="), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 135)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 135)).stringValue ()) ;
      result.appendString (" + v)\n    }\n  }\n") ;
      enumerator_6440.gotoNextObject () ;
      index_6440_.increment () ;
    }
  }
  result.appendString ("  return CommandLineToolInvocation (tool: tool, arguments: arguments)\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'buildLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

static GGS_lexicalTypeMap onceFunction_buildLexicalTypeMap (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap result_result ; // Returned variable
  result_result = GGS_lexicalTypeMap::init (inCompiler COMMA_HERE) ;
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("string"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 357)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 357)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 357)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("char"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 358)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 358)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 358)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("uint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 359)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 359)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 359)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("uint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 360)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 360)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 360)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 361)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 361)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 361)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 362)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 362)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 362)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("double"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 363)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 363)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 363)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 364)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 364)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 364)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GGS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap function_buildLexicalTypeMap (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_buildLexicalTypeMap) {
    gOnceFunctionResult_buildLexicalTypeMap = onceFunction_buildLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_buildLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_buildLexicalTypeMap ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_buildLexicalTypeMap (void) {
  gOnceFunctionResult_buildLexicalTypeMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_buildLexicalTypeMap (nullptr,
                                                               releaseOnceFunctionResult_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_buildLexicalTypeMap [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_buildLexicalTypeMap (Compiler * inCompiler,
                                                                 const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildLexicalTypeMap ("buildLexicalTypeMap",
                                                                     functionWithGenericHeader_buildLexicalTypeMap,
                                                                     & kTypeDescriptor_GALGAS_lexicalTypeMap,
                                                                     0,
                                                                     functionArgs_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap??&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap_3F__3F__26_ (const GGS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                                   const GGS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                                   GGS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_lexicalAttributeListAST enumerator_14138 (constinArgument_inLexicalAttributeList) ;
  while (enumerator_14138.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_contains (enumerator_14138.current (HERE).readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 384)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_lexicalTypeEnum var_lexicalType_14322 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_14138.current (HERE).readProperty_mTypeName (), var_lexicalType_14322, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 385)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_14138.current (HERE).readProperty_mName (), var_lexicalType_14322, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 386)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_m_14440 = GGS_string::makeEmptyString () ;
      var_m_14440.plusAssignOperation(GGS_string ("the @").add_operation (enumerator_14138.current (HERE).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 389)).add_operation (GGS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 389)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 389)) ;
      UpEnumerator_lexicalTypeMap enumerator_14576 (constinArgument_inLexicalTypeMap) ;
      while (enumerator_14576.hasCurrentObject ()) {
        var_m_14440.plusAssignOperation(GGS_string (" @").add_operation (enumerator_14576.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 391)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 391)) ;
        enumerator_14576.gotoNextObject () ;
        if (enumerator_14576.hasCurrentObject ()) {
          var_m_14440.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 393)) ;
        }
      }
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_14138.current (HERE).readProperty_mTypeName ().readProperty_location (), var_m_14440, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 395)) ;
    }
    enumerator_14138.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'groupSyntaxComponentsGalgas3??&'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (const GGS_galgas_33_SyntaxComponentListAST constinArgument_inAllSyntaxComponents,
                                                          const GGS_syntaxExtensions constinArgument_inSyntaxExtensions,
                                                          GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioDeclarationList,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_componentNameSet_1622 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_galgas_33_SyntaxComponentListAST enumerator_1664 (constinArgument_inAllSyntaxComponents) ;
  while (enumerator_1664.hasCurrentObject ()) {
    var_componentNameSet_1622.plusPlusAssignOperation (enumerator_1664.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string ()  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 33)) ;
    GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_1760 = enumerator_1664.current (HERE).readProperty_mNonterminalDeclarationList () ;
    GGS_syntaxRuleListAST var_ruleList_1835 = enumerator_1664.current (HERE).readProperty_mRuleList () ;
    UpEnumerator_galgas_33_SyntaxExtensionListAST enumerator_1961 (extensionGetter_listForKey (constinArgument_inSyntaxExtensions, enumerator_1664.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 36))) ;
    while (enumerator_1961.hasCurrentObject ()) {
      var_nonterminalDeclarationList_1760.plusAssignOperation(enumerator_1961.current (HERE).readProperty_mNonterminalDeclarationList (), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 37)) ;
      var_ruleList_1835.plusAssignOperation(enumerator_1961.current (HERE).readProperty_mRuleList (), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 38)) ;
      enumerator_1961.gotoNextObject () ;
    }
    ioArgument_ioDeclarationList.plusPlusAssignOperation (GGS_galgas_33_SyntaxComponentAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), enumerator_1664.current (HERE).readProperty_mSyntaxComponentName (), enumerator_1664.current (HERE).readProperty_mImportedLexiqueFilePath (), var_nonterminalDeclarationList_1760, var_ruleList_1835, enumerator_1664.current (HERE).readProperty_mHasTranslateFeature (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 40)) ;
    enumerator_1664.gotoNextObject () ;
  }
  UpEnumerator_syntaxExtensionsDictionary enumerator_2443 (constinArgument_inSyntaxExtensions.readProperty_dictionary ()) ;
  while (enumerator_2443.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_componentNameSet_1622.getter_contains (enumerator_2443.current (HERE).readProperty_key () COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 51)).operator_not (SOURCE_FILE ("syntaxCompilation.galgas4", 51)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        UpEnumerator_galgas_33_SyntaxExtensionListAST enumerator_2556 (enumerator_2443.current (HERE).readProperty_extensionList ()) ;
        while (enumerator_2556.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_2556.current (HERE).readProperty_mSyntaxComponentName ().readProperty_location (), GGS_string ("there is no '").add_operation (enumerator_2556.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 53)).add_operation (GGS_string ("' syntax component"), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 53)), fixItArray1  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 53)) ;
          enumerator_2556.gotoNextObject () ;
        }
      }
    }
    enumerator_2443.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithoutArgument&&?name?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                   const GGS_string constinArgument_inClassFunctionName,
                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                   const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_1720 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1720, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 30)) ;
  }
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 35)), inCompiler COMMA_HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1720 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithArgument&&?name?argTypeName?argName?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                          GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                          const GGS_string constinArgument_inClassFunctionName,
                                                                                                                          const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                          const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                          const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                          const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_2433 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2433, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 52)) ;
  }
  GGS_unifiedTypeMapEntry var_t_2520 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2520, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 53)) ;
  }
  {
  GGS_functionSignature temp_0 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 56)) ;
  temp_0.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 56)), var_t_2520, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 56)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 55)), inCompiler COMMA_HERE), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2433 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 54)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith2Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                         GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                         const GGS_string constinArgument_inClassFunctionName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                         const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                         const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_3344 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3344, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 73)) ;
  }
  GGS_functionSignature var_argumentTypeList_3369 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3437 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3437, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 76)) ;
  }
  var_argumentTypeList_3369.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 77)), var_t_3437, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 77)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3437, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 78)) ;
  }
  var_argumentTypeList_3369.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 79)), var_t_3437, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 79)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 81)), inCompiler COMMA_HERE), var_argumentTypeList_3369, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3344 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 80)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith3Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?argTypeName3?argName3?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                                                           GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                           const GGS_string constinArgument_inClassFunctionName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_33_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_33_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                           const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_4566 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4566, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 101)) ;
  }
  GGS_unifiedTypeMapEntry var_t_4653 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4653, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 102)) ;
  }
  GGS_functionSignature var_argumentTypeList_4681 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeList_4681.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 104)), var_t_4653, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 104)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4653, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 105)) ;
  }
  var_argumentTypeList_4681.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 106)), var_t_4653, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 106)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4653, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 107)) ;
  }
  var_argumentTypeList_4681.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 108)), var_t_4653, constinArgument_inArgument_33_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 108)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 110)), inCompiler COMMA_HERE), var_argumentTypeList_4681, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4566 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 109)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const GGS_string & constinArgument_inPosfix,
                                                                                    const GGS_semanticInstructionListForGeneration & constinArgument_inInstructionList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration result_result ; // Returned variable
  result_result = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticInstructionListForGeneration enumerator_2033 (constinArgument_inInstructionList) ;
  while (enumerator_2033.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((cPtr_semanticInstructionForGeneration *) enumerator_2033.current_mInstruction (HERE).ptr (), constinArgument_inPosfix, result_result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 43)) ;
    enumerator_2033.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_syntaxSignatureOfInstructionList [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_syntaxSignatureOfInstructionList (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_semanticInstructionListForGeneration operand1 = GGS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  return function_syntaxSignatureOfInstructionList (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxSignatureOfInstructionList ("syntaxSignatureOfInstructionList",
                                                                                  functionWithGenericHeader_syntaxSignatureOfInstructionList,
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
                                                                                  2,
                                                                                  functionArgs_syntaxSignatureOfInstructionList) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool function_compareSyntaxSignature (const GGS_semanticInstructionListForGeneration & constinArgument_inReferenceSignature,
                                          const GGS_semanticInstructionListForGeneration & constinArgument_inTestedSignature,
                                          const GGS_location & constinArgument_inErrorLocation,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
  UpEnumerator_semanticInstructionListForGeneration enumerator_2917 (constinArgument_inReferenceSignature) ;
  UpEnumerator_semanticInstructionListForGeneration enumerator_2947 (constinArgument_inTestedSignature) ;
  bool bool_0 = result_result.isValidAndTrue () ;
  if (enumerator_2917.hasCurrentObject () && enumerator_2947.hasCurrentObject () && bool_0) {
    while (enumerator_2917.hasCurrentObject () && enumerator_2947.hasCurrentObject () && bool_0) {
      result_result = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_2917.current (HERE).readProperty_mInstruction ().ptr (), enumerator_2947.current (HERE).readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 70)) ;
      enumerator_2917.gotoNextObject () ;
      enumerator_2947.gotoNextObject () ;
      if (enumerator_2917.hasCurrentObject () && enumerator_2947.hasCurrentObject ()) {
        bool_0 = result_result.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = result_result.operator_and (GGS_bool (ComparisonKind::lowerThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 72)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 72)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_semanticInstructionForGeneration var_instruction_3188 = constinArgument_inTestedSignature.getter_mInstructionAtIndex (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 73)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 73)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_syntaxInstructionForGeneration var_si_3280 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3188.ptr ())) ;
        if (nullptr == var_si_3280.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_si_3280.readProperty_mInstructionLocation (), GGS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 75)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 78)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = result_result.operator_and (GGS_bool (ComparisonKind::greaterThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 80)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 80)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 80)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 81)) ;
        GGS_semanticInstructionForGeneration var_instruction_3822 = constinArgument_inReferenceSignature.getter_mInstructionAtIndex (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 83)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 83)) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_syntaxInstructionForGeneration var_si_3914 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3822.ptr ())) ;
          if (nullptr == var_si_3914.ptr ()) {
            test_7 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_7) {
            GenericArray <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (var_si_3914.readProperty_mInstructionLocation (), GGS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray8  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 85)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 88)) ;
        }
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_compareSyntaxSignature [4] = {
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compareSyntaxSignature (Compiler * inCompiler,
                                                                    const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_semanticInstructionListForGeneration operand0 = GGS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GGS_semanticInstructionListForGeneration operand1 = GGS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GGS_location operand2 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  return function_compareSyntaxSignature (operand0,
                                          operand1,
                                          operand2,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compareSyntaxSignature ("compareSyntaxSignature",
                                                                        functionWithGenericHeader_compareSyntaxSignature,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        3,
                                                                        functionArgs_compareSyntaxSignature) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'projectCreationFileWrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'helpers' directory

static const cRegularFileWrapper * gWrapperAllFiles_projectCreationFileWrapper_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'helpers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_projectCreationFileWrapper_2 [1] = {
  nullptr
} ;

//--- Directory 'helpers'

const cDirectoryWrapper gWrapperDirectory_2_projectCreationFileWrapper (
  "helpers",
  0,
  gWrapperAllFiles_projectCreationFileWrapper_2,
  0,
  gWrapperAllDirectories_projectCreationFileWrapper_2
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_projectCreationFileWrapper_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_projectCreationFileWrapper_1 [2] = {
  & gWrapperDirectory_2_projectCreationFileWrapper,
  nullptr
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_1_projectCreationFileWrapper (
  "build",
  0,
  gWrapperAllFiles_projectCreationFileWrapper_1,
  1,
  gWrapperAllDirectories_projectCreationFileWrapper_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_projectCreationFileWrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_projectCreationFileWrapper_0 [2] = {
  & gWrapperDirectory_1_projectCreationFileWrapper,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper (
  "",
  0,
  gWrapperAllFiles_projectCreationFileWrapper_0,
  1,
  gWrapperAllDirectories_projectCreationFileWrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("project (0:0:1) -> ") ;
  result.appendString (in_PROJECT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("+PROJECT.galgas4project.galgasTemplate", 1)).stringValue ()) ;
  result.appendString (" {\n  %makefile-unix\n  %makefile-macosx\n  %makefile-x86linux32-on-macosx\n  %makefile-x86linux64-on-macosx\n  %makefile-arm64-linux-on-macosx\n  %makefile-win32-on-macosx\n  %MacSwiftApp\n  %applicationBundleBase : \"fr.what\"\n  %codeblocks-windows\n  %codeblocks-linux32\n  %codeblocks-linux64\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (Compiler * /* inCompiler */,
                                                                            const GGS_string & in_PROJECT_5F_NAME
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("gui cocoa {\n  with option ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_options\n\n  with lexique ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique {\n    fileExtension: \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n    title: \"Source\"\n    blockComment : \"#\"\n  }\n\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("grammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar \"LL1\" {\n  syntax ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_syntax\n  <start_symbol> ()\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("lexique ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique {\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Identifiers and keywords                                                                     \n//-----------------------------------------------------------------------------------------------------------------------\n\n@string tokenString\n\nstyle keywordsStyle -> \"Keywords\"\n\n$identifier$ ! tokenString %errorMessage \"an identifier\"\n\n//--- This is the keyword list\nlist keyWordList style keywordsStyle %errorMessage \"the '%K' keyword\" {\n  \"begin\",\n  \"end\"\n}\n\nrule 'a'->'z' |  'A'->'Z' {\n  repeat\n    enterCharacterIntoString (!\?tokenString !*)\n  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n  end\n  send %searchString tokenString in keyWordList default $identifier$\n}\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Literal decimal integers                                                                     \n//-----------------------------------------------------------------------------------------------------------------------\n\nstyle integerStyle -> \"Integer Constants\"\n@uint uint32value\n$integer$ !uint32value style integerStyle %errorMessage \"a 32-bit unsigned decimal number\"\n\n%errorMessage decimalNumberTooLarge : \"decimal number too large\"\n%errorMessage internalError : \"internal error\"\n\nrule '0'->'9' {\n  enterCharacterIntoString (!\?tokenString !*)\n  repeat\n  while '0'->'9' :\n    enterCharacterIntoString (!\?tokenString !*)\n  while '_' :\n  end\n  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n  send $integer$\n}\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Literal character strings                                                                    \n//-----------------------------------------------------------------------------------------------------------------------\n\nstyle stringStyle -> \"String Constants\"\n$\"string\"$ ! tokenString style stringStyle %nonAtomicSelection %errorMessage \"a character string constant \\\"...\\\"\"\n\n\n%errorMessage incorrectStringEnd : \"string does not end with '\\\"'\"\n\nrule '\"' {\n  repeat\n   while ' ' | '!' | '#'-> '\\uFFFD' :\n    enterCharacterIntoString (!\?tokenString !*)\n  end\n  select\n  case '\"' :\n    send $\"string\"$\n  default\n    error incorrectStringEnd\n  end\n}\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Delimiters                                                                                   \n//-----------------------------------------------------------------------------------------------------------------------\n\nstyle delimitersStyle -> \"Delimiters\"\nlist delimitorsList style delimitersStyle %errorMessage \"the '%K' delimitor\" {\n  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n}\n\nrule list delimitorsList\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Comments                                                                                     \n//-----------------------------------------------------------------------------------------------------------------------\n\nstyle commentStyle -> \"Comments\"\n$comment$ style commentStyle %nonAtomicSelection %errorMessage \"a comment\"\nrule \"//\" {\n  repeat\n  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n  end\n  drop $comment$\n}\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Separators                                                                                   \n//-----------------------------------------------------------------------------------------------------------------------\n\nrule '\\u0001' -> ' ' {\n}\n\n//-----------------------------------------------------------------------------------------------------------------------\n\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("option ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_options {\n\n// ADD YOUR CODE\n\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--- Prologue routine\nbefore {\n}\n\n//--- 'when' clauses\ncase . \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\"\nmessage \"a source text file with the .") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (" extension\"\ngrammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar\n\?sourceFilePath:@lstring inSourceFile {\n  grammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar () in inSourceFile\n}\n\n//--- Epilogue routine\nafter {\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (Compiler * /* inCompiler */,
                                                                                const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n// ADD YOUR CODE\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (Compiler * /* inCompiler */,
                                                                             const GGS_string & in_PROJECT_5F_NAME
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("syntax ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_syntax (") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique) {\n\nrule <start_symbol> () {\n  // ADD YOUR SYNTAX INSTRUCTIONS\n}\n\n// ADD OTHER RULES\n\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation_3F_ (const GGS_string constinArgument_inProjectPath,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_projectName_2550 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas4", 47)) ;
  GGS_string var_s_31__2602 = GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2550 COMMA_SOURCE_FILE ("projectCreation.galgas4", 48))) ;
  var_s_31__2602.method_writeToFile (constinArgument_inProjectPath.add_operation (GGS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 49)).add_operation (var_projectName_2550, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 49)).add_operation (GGS_string (".galgas4project"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 49)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 49)) ;
  GGS_string var_galgas_5F_sources_5F_DIR_2784 = constinArgument_inProjectPath.add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 51)) ;
  var_galgas_5F_sources_5F_DIR_2784.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 52)) ;
  GGS_string var_s_32__2876 = GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2550 COMMA_SOURCE_FILE ("projectCreation.galgas4", 53))) ;
  var_s_32__2876.method_writeToFile (var_galgas_5F_sources_5F_DIR_2784.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 54)).add_operation (var_projectName_2550, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 54)).add_operation (GGS_string ("-cocoa.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 54)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 54)) ;
  GGS_string var_s_33__3030 = GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2550 COMMA_SOURCE_FILE ("projectCreation.galgas4", 55))) ;
  var_s_33__3030.method_writeToFile (var_galgas_5F_sources_5F_DIR_2784.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 56)).add_operation (var_projectName_2550, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 56)).add_operation (GGS_string ("-grammar.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 56)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 56)) ;
  GGS_string var_s_34__3188 = GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2550 COMMA_SOURCE_FILE ("projectCreation.galgas4", 57))) ;
  var_s_34__3188.method_writeToFile (var_galgas_5F_sources_5F_DIR_2784.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 58)).add_operation (var_projectName_2550, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 58)).add_operation (GGS_string ("-lexique.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 58)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 58)) ;
  GGS_string var_s_35__3346 = GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2550 COMMA_SOURCE_FILE ("projectCreation.galgas4", 59))) ;
  var_s_35__3346.method_writeToFile (var_galgas_5F_sources_5F_DIR_2784.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 60)).add_operation (var_projectName_2550, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 60)).add_operation (GGS_string ("-options.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 60)) ;
  GGS_string var_s_36__3504 = GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2550 COMMA_SOURCE_FILE ("projectCreation.galgas4", 61))) ;
  var_s_36__3504.method_writeToFile (var_galgas_5F_sources_5F_DIR_2784.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 62)).add_operation (var_projectName_2550, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 62)).add_operation (GGS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 62)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 62)) ;
  GGS_string var_s_37__3661 = GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2550 COMMA_SOURCE_FILE ("projectCreation.galgas4", 63))) ;
  var_s_37__3661.method_writeToFile (var_galgas_5F_sources_5F_DIR_2784.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 64)).add_operation (var_projectName_2550, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 64)).add_operation (GGS_string ("-semantics.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 64)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 64)) ;
  GGS_string var_s_38__3823 = GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2550 COMMA_SOURCE_FILE ("projectCreation.galgas4", 65))) ;
  var_s_38__3823.method_writeToFile (var_galgas_5F_sources_5F_DIR_2784.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 66)).add_operation (var_projectName_2550, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 66)).add_operation (GGS_string ("-syntax.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 66)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 66)) ;
  {
  routine_println_3F_ (GGS_string ("*** DONE ***"), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 68)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation_3F_ (const GGS_string constinArgument_inProjectPath,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inProjectPath.getter_count (SOURCE_FILE ("projectCreation.galgas4", 74)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 75)).add_operation (GGS_string (" option) ***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 75)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 75)) ;
      }
      GGS_string var_projectName_4400 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas4", 77)) ;
      GGS_bool var_ok_4460 = var_projectName_4400.getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 78)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas4", 78)) ;
      GGS_uint var_idx_4520 = GGS_uint (uint32_t (1U)) ;
      if (var_projectName_4400.getter_count (SOURCE_FILE ("projectCreation.galgas4", 80)).isValid ()) {
        uint32_t variant_4532 = var_projectName_4400.getter_count (SOURCE_FILE ("projectCreation.galgas4", 80)).uintValue () ;
        bool loop_4532 = true ;
        while (loop_4532) {
          loop_4532 = GGS_bool (ComparisonKind::lowerThan, var_idx_4520.objectCompare (var_projectName_4400.getter_count (SOURCE_FILE ("projectCreation.galgas4", 81)))).operator_and (var_ok_4460 COMMA_SOURCE_FILE ("projectCreation.galgas4", 81)).isValid () ;
          if (loop_4532) {
            loop_4532 = GGS_bool (ComparisonKind::lowerThan, var_idx_4520.objectCompare (var_projectName_4400.getter_count (SOURCE_FILE ("projectCreation.galgas4", 81)))).operator_and (var_ok_4460 COMMA_SOURCE_FILE ("projectCreation.galgas4", 81)).boolValue () ;
          }
          if (loop_4532 && (0 == variant_4532)) {
            loop_4532 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas4", 80)) ;
          }
          if (loop_4532) {
            variant_4532 -= 1 ;
            GGS_char var_c_4617 = var_projectName_4400.getter_characterAtIndex (var_idx_4520, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 82)) ;
            var_ok_4460 = var_c_4617.getter_isalnum (SOURCE_FILE ("projectCreation.galgas4", 83)).operator_or (GGS_bool (ComparisonKind::equal, var_c_4617.objectCompare (GGS_char (utf32 (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas4", 83)) ;
            var_idx_4520.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 84)) ;
          }
        }
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_ok_4460.operator_not (SOURCE_FILE ("projectCreation.galgas4", 86)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          routine_println_3F_ (GGS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4400, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 87)).add_operation (GGS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character."), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 88)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 87)) ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_ok_4460.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_ok_4460 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas4", 92)).operator_not (SOURCE_FILE ("projectCreation.galgas4", 92)) ;
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_ok_4460.operator_not (SOURCE_FILE ("projectCreation.galgas4", 93)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              routine_println_3F_ (GGS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 94)).add_operation (GGS_string ("' directory already exists.***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 94)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 94)) ;
              }
            }
          }
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_ok_4460.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          {
          routine_performProjectCreation_3F_ (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 98)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'compilerCppName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_compilerCppName (Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("inCompiler") ;
//---
  return result_result ;
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

static const GALGAS_TypeDescriptor * functionArgs_compilerCppName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compilerCppName (Compiler * inCompiler,
                                                             const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
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

static GGS_string onceFunction_syntaxDirectedTranslationResultVarName (Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("ioSyntaxDirectedTranslationResult") ;
//---
  return result_result ;
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

static const GALGAS_TypeDescriptor * functionArgs_syntaxDirectedTranslationResultVarName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_syntaxDirectedTranslationResultVarName (Compiler * inCompiler,
                                                                                    const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
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
//Overriding extension func '@galgas3GrammarComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_GrammarComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  result_result = GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 309)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@galgas3SyntaxComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_SyntaxComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  result_result = GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 315)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@predefinedTypeAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_predefinedTypeAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_predefinedTypeAST temp_0 = this ;
  result_result = GGS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 321)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@sortedListDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_sortedListDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_sortedListDeclarationAST temp_0 = this ;
  result_result = GGS_string ("sorted list @").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 328)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@filewrapperDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_filewrapperDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  result_result = GGS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 335)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@optionComponentDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_optionComponentDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  result_result = GGS_string ("option ").add_operation (temp_0.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 342)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@onceFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_onceFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  result_result = GGS_string ("once function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 349)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@externFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  result_result = GGS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 355)) ;
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
                                                                                                    GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
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
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 379)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_extensionGetterMapForType var_extensionGetterMapForType_16197 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_16197, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 380)) ;
      UpEnumerator_extensionGetterMapForType enumerator_16251 (var_extensionGetterMapForType_16197) ;
      while (enumerator_16251.hasCurrentObject ()) {
        GGS_functionSignature var_formalArgumentList_16309 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalInputParameterListAST enumerator_16383 (enumerator_16251.current (HERE).readProperty_mInputFormalParameterList ()) ;
        while (enumerator_16383.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_16493 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16383.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_16493, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 384)) ;
          }
          var_formalArgumentList_16309.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_16383.current (HERE).readProperty_mFormalSelector (), var_typeIndex_16493, enumerator_16383.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_16383.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 385)) ;
          enumerator_16383.gotoNextObject () ;
        }
        GGS_unifiedTypeMapEntry var_returnedType_16784 ;
        {
        extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16251.current (HERE).readProperty_mResultTypeName (), var_returnedType_16784, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 391)) ;
        }
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, enumerator_16251.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 392)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = ioArgument_ioGetterMap.getter_contains (enumerator_16251.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 393)).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 394)), enumerator_16251.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 394)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, enumerator_16251.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 396)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = ioArgument_ioGetterMap.getter_contains (enumerator_16251.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 397)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 398)), enumerator_16251.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 398)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_16251.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 400)))) COMMA_SOURCE_FILE ("semanticContext.galgas4", 400)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_16251.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 403)), var_formalArgumentList_16309, enumerator_16251.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), var_returnedType_16784, GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas4", 408)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 401)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_16251.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 414)), var_formalArgumentList_16309, enumerator_16251.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), var_returnedType_16784, enumerator_16251.current (HERE).readProperty_mQualifier (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 412)) ;
              }
            }
          }
        }
        enumerator_16251.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = constinArgument_inExtensionMethodMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 426)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_extensionMethodMapForType var_extensionMethodMapForType_18190 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_18190, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 427)) ;
      UpEnumerator_extensionMethodMapForType enumerator_18244 (var_extensionMethodMapForType_18190) ;
      while (enumerator_18244.hasCurrentObject ()) {
        GGS_formalParameterSignature var_formalArgumentList_18283 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalParameterListAST enumerator_18372 (enumerator_18244.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_18372.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_18509 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18372.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_18509, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 431)) ;
          }
          var_formalArgumentList_18283.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_18372.current (HERE).readProperty_mFormalSelector (), var_typeIndex_18509, enumerator_18372.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_18372.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 435)) ;
          enumerator_18372.gotoNextObject () ;
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_18244.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 441)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = ioArgument_ioInstanceMethodMap.getter_contains (enumerator_18244.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 442)).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 443)), enumerator_18244.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 443)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_18244.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 445)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = ioArgument_ioInstanceMethodMap.getter_contains (enumerator_18244.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 446)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 447)), enumerator_18244.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 447)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_18244.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 449)))) COMMA_SOURCE_FILE ("semanticContext.galgas4", 449)).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18244.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 452)), var_formalArgumentList_18283, enumerator_18244.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas4", 456)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 450)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18244.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 462)), var_formalArgumentList_18283, enumerator_18244.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), enumerator_18244.current (HERE).readProperty_mQualifier (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 460)) ;
              }
            }
          }
        }
        enumerator_18244.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = constinArgument_inExtensionSetterMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 473)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_extensionSetterMapForType var_extensionSetterMapForType_20070 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_20070, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 474)) ;
      UpEnumerator_extensionSetterMapForType enumerator_20124 (var_extensionSetterMapForType_20070) ;
      while (enumerator_20124.hasCurrentObject ()) {
        GGS_formalParameterSignature var_formalArgumentList_20189 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalParameterListAST enumerator_20253 (enumerator_20124.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_20253.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_20348 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_20253.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_20348, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 478)) ;
          }
          var_formalArgumentList_20189.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_20253.current (HERE).readProperty_mFormalSelector (), var_typeIndex_20348, enumerator_20253.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_20253.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 479)) ;
          enumerator_20253.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_20124.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 487)), var_formalArgumentList_20189, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 490)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 485)) ;
        }
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          test_13 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas4", 493)).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_20124.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a class does not accept any mutating proc; use proc instead"), fixItArray14  COMMA_SOURCE_FILE ("semanticContext.galgas4", 494)) ;
          }
        }
        enumerator_20124.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = constinArgument_inExtensionInitializerMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 499)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_extensionInitializerMapForType var_initializerMapForType_21142 ;
      constinArgument_inExtensionInitializerMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_initializerMapForType_21142, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 500)) ;
      UpEnumerator_extensionInitializerMapForType enumerator_21188 (var_initializerMapForType_21142) ;
      while (enumerator_21188.hasCurrentObject ()) {
        GGS_functionSignature var_formalArgumentList_21242 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalInputParameterListAST enumerator_21299 (enumerator_21188.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_21299.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_21391 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21299.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_21391, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 504)) ;
          }
          var_formalArgumentList_21242.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_21299.current (HERE).readProperty_mFormalSelector (), var_typeIndex_21391, enumerator_21299.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_21299.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 505)) ;
          enumerator_21299.gotoNextObject () ;
        }
        {
        ioArgument_ioInitializerMap.setter_insertKey (enumerator_21188.current (HERE).readProperty_lkey (), var_formalArgumentList_21242, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 507)) ;
        }
        enumerator_21188.gotoNextObject () ;
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
  GGS_uint var_currentDirectoryIndex_22450 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas4", 532)) ;
  GGS_stringlist var_files_22578 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GGS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas4", 534)) ;
  outArgument_outWrapperFileMap = GGS_wrapperFileMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_22661 (var_files_22578) ;
  while (enumerator_22661.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_contains (enumerator_22661.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas4", 537)) COMMA_SOURCE_FILE ("semanticContext.galgas4", 537)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_absoluteFilePath_22766 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 538)).add_operation (enumerator_22661.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 538)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_22661.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas4", 540)), inCompiler COMMA_HERE), var_absoluteFilePath_22766, GGS_bool (true), var_currentDirectoryIndex_22450, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 539)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas4", 546)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_contains (enumerator_22661.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas4", 547)) COMMA_SOURCE_FILE ("semanticContext.galgas4", 547)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_absoluteFilePath_23140 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 548)).add_operation (enumerator_22661.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 548)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_22661.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas4", 550)), inCompiler COMMA_HERE), var_absoluteFilePath_23140, GGS_bool (false), var_currentDirectoryIndex_22450, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 549)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas4", 556)) ;
        }
      }
    }
    enumerator_22661.gotoNextObject () ;
  }
  GGS_stringlist var_directories_23496 = constinArgument_inAbsoluteSourcePath.getter_directories (GGS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas4", 560)) ;
  outArgument_outWrapperDirectoryMap = GGS_wrapperDirectoryMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_23589 (var_directories_23496) ;
  while (enumerator_23589.hasCurrentObject ()) {
    GGS_uint var_theDirectoryIndex_23629 = ioArgument_ioWrapperDirectoryIndex ;
    GGS_wrapperFileMap var_internalWrapperFileMap_23865 ;
    GGS_wrapperDirectoryMap var_internalWrapperDirectoryMap_23900 ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 565)).add_operation (enumerator_23589.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 565)), constinArgument_inPathInWrapper.add_operation (enumerator_23589.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 566)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 566)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_23865, var_internalWrapperDirectoryMap_23900, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas4", 564)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_23589.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas4", 575)), inCompiler COMMA_HERE), var_internalWrapperFileMap_23865, var_internalWrapperDirectoryMap_23900, var_theDirectoryIndex_23629, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 574)) ;
    }
    enumerator_23589.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                               const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                               const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                               const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                               const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap var_filewrapperTemplateMap_24908 = GGS_filewrapperTemplateMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  UpEnumerator_filewrapperTemplateListAST enumerator_24971 (temp_0.readProperty_mFilewrapperTemplateList ()) ;
  while (enumerator_24971.hasCurrentObject ()) {
    GGS_functionSignature var_templateSignature_25026 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalTemplateInputParameterListAST enumerator_25091 (enumerator_24971.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_25091.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_25205 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_25091.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_25205, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 599)) ;
      }
      var_templateSignature_25026.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_25091.current (HERE).readProperty_mFormalTemplateSelector (), var_parameterTypeIndex_25205, enumerator_25091.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_25091.current (HERE).readProperty_mIsUnused (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 600)) ;
      enumerator_25091.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_24908.setter_insertKey (enumerator_24971.current (HERE).readProperty_mFilewrapperTemplateName (), var_templateSignature_25026, enumerator_24971.current (HERE).readProperty_mFilewrapperTemplatePath (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 606)) ;
    }
    enumerator_24971.gotoNextObject () ;
  }
  GGS_wrapperExtensionMap var_textExtensionMap_25654 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  UpEnumerator_lstringlist enumerator_25684 (temp_1.readProperty_mFilewrapperTextFileExtensionList ()) ;
  while (enumerator_25684.hasCurrentObject ()) {
    {
    var_textExtensionMap_25654.setter_insertKey (enumerator_25684.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 615)) ;
    }
    enumerator_25684.gotoNextObject () ;
  }
  GGS_wrapperExtensionMap var_binaryFileExtensionMap_25850 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_2 = this ;
  UpEnumerator_lstringlist enumerator_25886 (temp_2.readProperty_mFilewrapperBinaryFileExtensionList ()) ;
  while (enumerator_25886.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_textExtensionMap_25654.getter_contains (enumerator_25886.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 620)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_25886.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_25886.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 621)).add_operation (GGS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 621)), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas4", 621)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      {
      var_binaryFileExtensionMap_25850.setter_insertKey (enumerator_25886.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 623)) ;
      }
    }
    enumerator_25886.gotoNextObject () ;
  }
  GGS_wrapperFileMap var_regularRootFileMap_26207 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_26253 ;
  GGS_string var_absoluteSourcePath_26287 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas4", 630)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_filewrapperDeclarationAST temp_7 = this ;
      var_absoluteSourcePath_26287 = temp_7.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_filewrapperDeclarationAST temp_8 = this ;
    const GGS_filewrapperDeclarationAST temp_9 = this ;
    var_absoluteSourcePath_26287 = temp_8.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas4", 633)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 633)).add_operation (temp_9.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 633)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_absoluteSourcePath_26287.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas4", 635)).operator_not (SOURCE_FILE ("semanticContext.galgas4", 635)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_filewrapperDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_26287, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 636)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 636)), fixItArray12  COMMA_SOURCE_FILE ("semanticContext.galgas4", 636)) ;
      var_regularRootFileMap_26207.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_26253.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    GGS_uint var_wrapperFileIndex_26795 = GGS_uint (uint32_t (0U)) ;
    GGS_uint var_wrapperDirectoryIndex_26830 = GGS_uint (uint32_t (0U)) ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_26287, GGS_string ("/"), var_textExtensionMap_25654, var_binaryFileExtensionMap_25850, var_regularRootFileMap_26207, var_wrapperDirectoryMap_26253, var_wrapperFileIndex_26795, var_wrapperDirectoryIndex_26830, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas4", 642)) ;
    }
  }
  {
  const GGS_filewrapperDeclarationAST temp_13 = this ;
  const GGS_filewrapperDeclarationAST temp_14 = this ;
  const GGS_filewrapperDeclarationAST temp_15 = this ;
  const GGS_filewrapperDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_13.readProperty_mFilewrapperName (), temp_14.readProperty_mFilewrapperPath (), temp_15.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_26207, var_wrapperDirectoryMap_26253, var_filewrapperTemplateMap_24908, temp_16.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 654)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externFunctionDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_functionSignature var_functionSignature_28127 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  UpEnumerator_formalInputParameterListAST enumerator_28190 (temp_0.readProperty_mFormalArgumentList ()) ;
  while (enumerator_28190.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_28277 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_28190.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_28277, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 678)) ;
    }
    var_functionSignature_28127.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_28190.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_28277, enumerator_28190.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), enumerator_28190.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 679)) ;
    enumerator_28190.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_resultTypeIndex_28505 ;
  {
  const GGS_externFunctionDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mResultTypeName (), var_resultTypeIndex_28505, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 682)) ;
  }
  {
  const GGS_externFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.readProperty_mFunctionName (), var_functionSignature_28127, var_resultTypeIndex_28505, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 684)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_resultTypeIndex_29483 ;
  {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mResultTypeName (), var_resultTypeIndex_29483, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 703)) ;
  }
  {
  const GGS_onceFunctionDeclarationAST temp_1 = this ;
  const GGS_onceFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_1.readProperty_mFunctionName (), GGS_functionSignature::init (inCompiler COMMA_HERE), var_resultTypeIndex_29483, temp_2.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 705)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3SyntaxComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                  GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 719)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                   const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                   const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                   const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_grammarLabelMap var_grammarLabelMap_31289 = GGS_grammarLabelMap::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  UpEnumerator_nonTerminalLabelListAST enumerator_31342 (temp_0.readProperty_mStartSymbolLabelList ()) ;
  while (enumerator_31342.hasCurrentObject ()) {
    GGS_formalParameterSignature var_formalArgumentList_31427 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_31487 (enumerator_31342.current (HERE).readProperty_mFormalArgumentList ()) ;
    while (enumerator_31487.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentType_31576 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_31487.current (HERE).readProperty_mFormalArgumentTypeName (), var_argumentType_31576, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 745)) ;
      }
      var_formalArgumentList_31427.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_31487.current (HERE).readProperty_mFormalSelector (), var_argumentType_31576, enumerator_31487.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_31487.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 746)) ;
      enumerator_31487.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_31289.setter_insertKey (enumerator_31342.current (HERE).readProperty_mLabelName (), var_formalArgumentList_31427, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 752)) ;
    }
    enumerator_31342.gotoNextObject () ;
  }
  {
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_grammarMap.setter_insertGrammar (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_31289, temp_2.readProperty_mHasIndexing ().readProperty_bool (), temp_3.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 758)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  GGS_lstring var_key_33326 = GGS_lstring::init_21__21_ (GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 790)), temp_1.readProperty_mGrammarComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_33326, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 791)) ;
  }
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator_lstringlist enumerator_33481 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_33481.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_33326, GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (enumerator_33481.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 793)), enumerator_33481.current_mValue (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas4", 793)) ;
    }
    enumerator_33481.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3SyntaxComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_lstring var_key_34325 = GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 807)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_34325, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 808)) ;
  }
  {
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_34325, GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 809)), temp_4.readProperty_mLexiqueName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas4", 809)) ;
  }
  const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
  UpEnumerator_syntaxRuleListAST enumerator_34613 (temp_5.readProperty_mRuleList ()) ;
  while (enumerator_34613.hasCurrentObject ()) {
    UpEnumerator_syntaxRuleLabelListAST enumerator_34650 (enumerator_34613.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_34650.hasCurrentObject ()) {
      UpEnumerator_formalParameterListAST enumerator_34691 (enumerator_34650.current (HERE).readProperty_mFormalArguments ()) ;
      while (enumerator_34691.hasCurrentObject ()) {
        switch (enumerator_34691.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_34325, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_34691.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 814)), enumerator_34691.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas4", 814)) ;
            }
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          break ;
        }
        enumerator_34691.gotoNextObject () ;
      }
      enumerator_34650.gotoNextObject () ;
    }
    enumerator_34613.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externFunctionDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas4", 832)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                      GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas4", 845)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                     GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                     GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                     GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                     GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                     GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                     GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas4", 858)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument&&?argTypeName?argName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                            GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                            const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                            const GGS_string constinArgument_inInputArgumentName,
                                                                                                            const GGS_string constinArgument_inSetterName,
                                                                                                            const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1754 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_1754, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 31)) ;
  }
  GGS_formalParameterSignature var_argList_1805 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_1805.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 33)), var_argumentTypeIndex_1754, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 33)), constinArgument_inInputArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 33)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 35)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 36)), var_argList_1805, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 39)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments&&?outputArgTypeName?outputArgName?inputArgTypeName?inputArgName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                                      GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                      const GGS_string constinArgument_inOutputArgumentTypeName,
                                                                                                                                                                      const GGS_string constinArgument_inOutputArgumentName,
                                                                                                                                                                      const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                                                                                      const GGS_string constinArgument_inInputArgumentName,
                                                                                                                                                                      const GGS_string constinArgument_inSetterName,
                                                                                                                                                                      const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_outputArgumentTypeIndex_2697 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_2697, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 54)) ;
  }
  GGS_unifiedTypeMapEntry var_inputArgumentTypeIndex_2794 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_2794, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 55)) ;
  }
  GGS_formalParameterSignature var_argList_2850 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2850.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 57)), var_outputArgumentTypeIndex_2697, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticsSetters.galgas4", 57)), constinArgument_inOutputArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 57)) ;
  var_argList_2850.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 58)), var_inputArgumentTypeIndex_2794, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 58)), constinArgument_inInputArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 58)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 60)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 61)), var_argList_2850, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 64)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 59)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments&&?arg1TypeName?arg1Name?arg2TypeName?arg2Name?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                           GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_31_TypeName,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_31_Name,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_32_TypeName,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_32_Name,
                                                                                                                                                           const GGS_string constinArgument_inSetterName,
                                                                                                                                                           const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_argList_3769 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_3873 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_3873, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 80)) ;
  }
  var_argList_3769.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 81)), var_argumentTypeIndex_3873, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 81)), constinArgument_inInputArgument_31_Name, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 81)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_3873, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 82)) ;
  }
  var_argList_3769.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 83)), var_argumentTypeIndex_3873, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 83)), constinArgument_inInputArgument_32_Name, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 83)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 85)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 86)), var_argList_3769, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 89)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 84)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument&??compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                  const GGS_string constinArgument_inSetterName,
                                                                  const GGS_bool constinArgument_inHasCompilerArgument,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 100)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 101)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 104)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 99)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (GGS_stringset & outArgument_outUnicodeTestFunctions,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas4", 31)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas4", 31)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
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
  GGS_string var_str_1474 = constinArgument_inRoutineName.readProperty_string () ;
  UpEnumerator_formalParameterSignature enumerator_1520 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_1520.hasCurrentObject ()) {
    switch (enumerator_1520.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_str_1474.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 29)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_str_1474.plusAssignOperation(GGS_string ("&"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 31)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_str_1474.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 33)) ;
      }
      break ;
    }
    var_str_1474.plusAssignOperation(enumerator_1520.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 35)) ;
    enumerator_1520.gotoNextObject () ;
  }
  result_result = GGS_lstring::init_21__21_ (var_str_1474, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_routineMangledName [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineMangledName (Compiler * inCompiler,
                                                                const GALGAS_ObjectArray & inEffectiveParameterArray,
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
  UpEnumerator_formalParameterSignature enumerator_2092 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_2092.hasCurrentObject ()) {
    switch (enumerator_2092.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        result_result.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 48)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        result_result.plusAssignOperation(GGS_string ("!\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 50)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        result_result.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 52)) ;
      }
      break ;
    }
    result_result.plusAssignOperation(enumerator_2092.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 54)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 54)) ;
    enumerator_2092.gotoNextObject () ;
    if (enumerator_2092.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 56)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 58)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_routineArgumentFromFormalParameters [2] = {
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineArgumentFromFormalParameters (Compiler * inCompiler,
                                                                                 const GALGAS_ObjectArray & inEffectiveParameterArray,
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
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ("galgas_cli_options",
                                         "checkEntityUsefulness",
                                         0,
                                         "check-usefulness",
                                         "Check Entity Usefulness") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ("galgas_cli_options",
                                         "displayUnicodeLexicalTestFunctions",
                                         0,
                                         "display-lexical-test-functions",
                                         "Display Unicode Lexical Test Functions") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitClassGraph ("galgas_cli_options",
                                         "emitClassGraph",
                                         0,
                                         "emit-class-graph",
                                         "Emit class graph in dot file") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ("galgas_cli_options",
                                         "emitSyntaxDiagrams",
                                         0,
                                         "emit-syntax-diagrams",
                                         "Emit grammar syntax diagrams in TEX files") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ("galgas_cli_options",
                                         "generateManyFiles",
                                         0,
                                         "generate-many-cpp-files",
                                         "Generate many C++ implementation files") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ("galgas_cli_options",
                                         "generateOneHeader",
                                         0,
                                         "generate-one-cpp-header",
                                         "Generate one C++ header file for all declarations") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ("galgas_cli_options",
                                         "outputHTMLgrammarFile",
                                         0,
                                         "output-html-grammar-file",
                                         "Output a HTML file for every grammar component") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ("galgas_cli_options",
                                         "outputHTMLTypeListFile",
                                         84,
                                         "output-html-type-dump-file",
                                         "Output a HTML file that contains all defined types") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputGrammarSwiftDescriptionFile ("galgas_cli_options",
                                         "outputGrammarSwiftDescriptionFile",
                                         0,
                                         "output-swift-description-grammar-file",
                                         "Output a Swift description file for every grammar component") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ("galgas_cli_options",
                                         "printPredefinedLexicalActions",
                                         0,
                                         "print-predefined-lexical-actions",
                                         "Print the list of predefined lexical routines and functions") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int ("galgas_cli_options",
                                         "check_big_int",
                                         0,
                                         "check-big-int",
                                         "Run bit integers checks") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warnsOnEnumerationNameMismatch ("galgas_cli_options",
                                         "warnsOnEnumerationNameMismatch",
                                         0,
                                         "warns-on-enumeration-name-mismatch",
                                         "Warns on enumeration name mismatch") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warnsOnOldStyleEnumeration ("galgas_cli_options",
                                         "warnsOnOldStyleEnumeration",
                                         0,
                                         "warns-on-old-style-enumeration",
                                         "Warns on old style enumeration") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ("galgas_cli_options",
                                         "create_project",
                                         0,
                                         "create-project",
                                         "Create a new GALGAS Project",
                                         "") ;

StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ("galgas_cli_options",
                                         "extractLIBPMOption",
                                         0,
                                         "extract-libpm",
                                         "Extract embedded LIBPM at given path",
                                         "") ;

StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ("galgas_cli_options",
                                         "cppCompile",
                                         0,
                                         "compile",
                                         "Perform C++ compilation on 'string' target",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalOrExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 37)) ;
  result_result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 38)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 39)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 39)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterIntervalMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  result_outGeneratedCode = GGS_string ("self.testForInputFromChar (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 52)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.testForInputString (").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 60)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", advance: true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 61)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringNotMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("self.notTestForInputString (") ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 70)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 70)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", error: &scanningOk)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 71)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("self.testForInputChar (") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 81)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterSetMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.testForChar_").add_operation (temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 88)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 88)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 100)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 107)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 107)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalUnsignedInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 113)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCurrentCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
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
//Overriding extension func '@lexicalFunctionInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 127)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 127)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_5966 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_5966.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_5966.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 129)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 129)) ;
    enumerator_5966.gotoNextObject () ;
    if (enumerator_5966.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 130)) ;
    }
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 132)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSendTerminalByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 146)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 146)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 146)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 146)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 146)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalErrorByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalImplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalImplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  GGS_tokenSortedlist var_tokenSortedList_8214 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_8205 ; // Joker input parameter
  GGS_bool joker_8231 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_8205, var_tokenSortedList_8214, joker_8231, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)) ;
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  DownEnumerator_tokenSortedlist enumerator_8276 (var_tokenSortedList_8214) ;
  while (enumerator_8276.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if scanningOk && self.testForInputString ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 182)) ;
    result_outGeneratedCode.plusAssignOperation(enumerator_8276.current (HERE).readProperty_mName ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 183)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 183)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string (", advance: true) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 184)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("  tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 185)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 185)).add_operation (enumerator_8276.current (HERE).readProperty_mTerminalName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 185)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 185)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 185)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 185)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 186)) ;
    enumerator_8276.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalExplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalExplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("if scanningOk && (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 197)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 197)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 198)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 199)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_9149 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_9149.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_9149.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 201)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 201)) ;
    enumerator_9149.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 203)) ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 204)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction?&&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (const GGS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GGS_bool & ioArgument_ioUseColumnMarker,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_templateInstructionListForGeneration enumerator_2253 (constinArgument_inInstructionList) ;
  while (enumerator_2253.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((cPtr_templateInstructionForGeneration *) enumerator_2253.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 42)) ;
    enumerator_2253.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionStringForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                 GGS_bool & /* ioArgument__5F_ioUseColumnMarker */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("templateCodeGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 60)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 60)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionExpressionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GGS_bool & /* ioArgument__5F_ioUseColumnMarker */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_cppName_3479 ;
  const GGS_templateInstructionExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3479, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 72)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (var_cppName_3479, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 73)).add_operation (GGS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 73)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 73)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateBlockInstructionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_indendationVarCppName_4077 ;
  const GGS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_4077, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 85)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_4077, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 86)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 86)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 86)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (int32_t (").add_operation (var_indendationVarCppName_4077, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 87)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 87)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 87)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 88)) ;
  {
  const GGS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 89)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_4077, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 97)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 97)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 97)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (- int32_t (").add_operation (var_indendationVarCppName_4077, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 98)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 98)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 98)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 99)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                            GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                            GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                            GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                            GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                             GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                             GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                             GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 123)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionIfForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionIfForGeneration temp_0 = this ;
  UpEnumerator_templateInstructionIfBranchListForGeneration enumerator_6322 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_6322.hasCurrentObject ()) {
    GGS_string var_ifVarCppName_6575 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_6322.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_6575, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)) ;
    GGS_string var_testVar_6602 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 143)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 144)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_6602, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 145)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 145)).add_operation (var_ifVarCppName_6575, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 145)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 145)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 145)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_testVar_6602, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 146)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 146)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 146)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolTrue : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 147)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 148)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_6322.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 149)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 157)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 158)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolFalse : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 159)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 160)) ;
    }
    enumerator_6322.gotoNextObject () ;
  }
  {
  const GGS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 163)) ;
  }
  const GGS_templateInstructionIfForGeneration temp_2 = this ;
  UpEnumerator_templateInstructionIfBranchListForGeneration enumerator_7625 (temp_2.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_7625.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 172)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  } break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 173)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolNotValid :\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 174)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 175)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 176)) ;
    enumerator_7625.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionForeachAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_6923 ;
  const GGS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_6923, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 198)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptor_7045 = extensionGetter_definition (var_expression_6923.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 206)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptor_7045.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 207)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6923.readProperty_mLocation (), GGS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_6923.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 208)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 208)).add_operation (GGS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 208)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 208)) ;
    }
  }
  GGS_templateInstructionListForGeneration var_beforeInstructionList_7343 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_7343, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 212)) ;
  }
  const GGS_templateInstructionForeachAST temp_4 = this ;
  GGS_string var_enumeratorCppName_7640 = GGS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 221)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 221)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 221)) ;
  GGS_templateVariableMap var_doVariableMap_7739 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GGS_templateInstructionForeachAST temp_5 = this ;
  const GGS_templateInstructionForeachAST temp_6 = this ;
  GGS_string var_cppIndexVarName_7800 = GGS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 223)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 223)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 223)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 223)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas4", 224)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 224)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      {
      const GGS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_7739.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7800, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 226)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_templateInstructionForeachAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 228)).objectCompare (var_enumerationDescriptor_7045.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 228)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_templateInstructionForeachAST temp_12 = this ;
      const GGS_templateInstructionForeachAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfProperties (), var_enumerationDescriptor_7045.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 230)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 230)).add_operation (GGS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 230)).add_operation (temp_13.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 231)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 230)).add_operation (GGS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 231)), fixItArray14  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 229)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    const GGS_templateInstructionForeachAST temp_15 = this ;
    UpEnumerator_enumerationDescriptorList enumerator_8364 (var_enumerationDescriptor_7045) ;
    UpEnumerator_lstringlist enumerator_8396 (temp_15.readProperty_mEnumeration ()) ;
    while (enumerator_8364.hasCurrentObject () && enumerator_8396.hasCurrentObject ()) {
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, enumerator_8396.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          {
          var_doVariableMap_7739.setter_insertKey (enumerator_8396.current_mValue (HERE), enumerator_8364.current (HERE).readProperty_mEnumeratedType (), var_enumeratorCppName_7640.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 239)).add_operation (enumerator_8364.current (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas4", 239)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 239)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 239)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 236)) ;
          }
        }
      }
      enumerator_8364.gotoNextObject () ;
      enumerator_8396.gotoNextObject () ;
    }
  }
  GGS_templateAnalysisContext var_doAnalysisContext_8718 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_7739, inCompiler COMMA_HERE) ;
  GGS_templateInstructionListForGeneration var_doInstructionList_8870 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_8718, ioArgument_ioTypeMap, temp_17.readProperty_mDoInstructionList (), var_doInstructionList_8870, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 249)) ;
  }
  GGS_templateInstructionListForGeneration var_betweenInstructionList_9160 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_18 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_18.readProperty_mBetweenInstructionList (), var_betweenInstructionList_9160, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 259)) ;
  }
  GGS_templateInstructionListForGeneration var_afterInstructionList_9463 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_19 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_19.readProperty_mAfterInstructionList (), var_afterInstructionList_9463, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 269)) ;
  }
  const GGS_templateInstructionForeachAST temp_20 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionForeachForGeneration::init_21__21__21__21__21__21__21__21_ (temp_20.readProperty_mIsAscending (), var_expression_6923, var_enumeratorCppName_7640, var_beforeInstructionList_7343, var_doInstructionList_8870, var_cppIndexVarName_7800, var_betweenInstructionList_9160, var_afterInstructionList_9463, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 278)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionForeachForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_foreachVarCppName_11275 ;
  const GGS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_11275, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 314)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 316)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 317)).add_operation (GGS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 317)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 317)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_foreachVarCppName_11275, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 320)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 320)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 320)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 321)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_mIsAscending ().boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string ("Up") ;
  }else if (GalgasBool::boolFalse == test_6) {
    temp_5 = GGS_string ("Down") ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_5, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 322)) ;
  const GGS_templateInstructionForeachForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("Enumerator_").add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 323)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 323)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 323)) ;
  const GGS_templateInstructionForeachForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 324)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 324)).add_operation (var_foreachVarCppName_11275, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 324)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 324)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 324)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_templateInstructionForeachForGeneration temp_10 = this ;
    const GGS_templateInstructionForeachForGeneration temp_11 = this ;
    test_9 = GGS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 326)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 326)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 326)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_templateInstructionForeachForGeneration temp_12 = this ;
      const GGS_templateInstructionForeachForGeneration temp_13 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 327)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 327)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 327)).add_operation (GGS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 327)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 327)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_templateInstructionForeachForGeneration temp_15 = this ;
    test_14 = GGS_bool (ComparisonKind::greaterThan, temp_15.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 329)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_templateInstructionForeachForGeneration temp_16 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 330)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 330)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 330)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 331)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_17 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 332)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 340)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 341)) ;
    }
  }
  const GGS_templateInstructionForeachForGeneration temp_18 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 343)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 343)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 343)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 344)) ;
  }
  {
  const GGS_templateInstructionForeachForGeneration temp_19 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 346)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_20 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_20.readProperty_mEnumeratorCppName ().add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 355)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 355)) ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_templateInstructionForeachForGeneration temp_22 = this ;
    test_21 = GGS_bool (ComparisonKind::greaterThan, temp_22.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 357)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_templateInstructionForeachForGeneration temp_23 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (temp_23.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 358)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 358)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 358)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 359)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_24 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_24.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 360)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 368)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 369)) ;
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_templateInstructionForeachForGeneration temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 372)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_templateInstructionForeachForGeneration temp_27 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_27.readProperty_mIndexCppName ().add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 373)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 373)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 375)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 376)) ;
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_templateInstructionForeachForGeneration temp_29 = this ;
    test_28 = GGS_bool (ComparisonKind::greaterThan, temp_29.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 378)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_templateInstructionForeachForGeneration temp_30 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 379)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 379)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 379)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 380)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_31 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 381)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 389)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 390)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 393)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 394)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString_26_ (GGS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_21781 = GGS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 593)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_s_21781.getter_count (SOURCE_FILE ("templateSyntax.galgas4", 594)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_outResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionStringAST::init_21_ (var_s_21781, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 595)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_receiverExpression_3871 ;
  const GGS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_receiverExpression_3871, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 77)) ;
  GGS_unifiedTypeMapEntry var_receiverType_3921 = var_receiverExpression_3871.readProperty_mResultType () ;
  GGS_string var_receiverTypeName_3973 = extensionGetter_definition (var_receiverType_3921, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 85)).readProperty_typeName ().readProperty_string () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = extensionGetter_definition (var_receiverType_3921, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 87)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas4", 87)) ;
    if (GalgasBool::boolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3921, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 87)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas4", 87)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 88)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_templateGetterCallInExpressionAST temp_4 = this ;
        test_1 = extensionGetter_definition (var_receiverType_3921, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 89)).readProperty_propertyMap ().getter_contains (temp_4.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 89)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_templateGetterCallInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 90)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_4445 = extensionGetter_definition (var_receiverType_3921, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 93)).readProperty_getterMap () ;
    GGS_functionSignature var_getterFormalArgumentTypeList_4544 ;
    GGS_methodKind var_kind_4593 ;
    GGS_bool var_hasCompilerArgument_4612 ;
    GGS_unifiedTypeMapEntry var_returnedType_4661 ;
    GGS_stringlist var_fieldList_4682 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    const GGS_templateGetterCallInExpressionAST temp_7 = this ;
    GGS_string var_actualGetterName_4717 = temp_7.readProperty_mGetterName ().readProperty_string () ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateGetterCallInExpressionAST temp_9 = this ;
      test_8 = var_getterMap_4445.getter_contains (temp_9.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 101)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GGS_string var_actualGetterNameString_5006 ;
        const GGS_templateGetterCallInExpressionAST temp_10 = this ;
        GGS_location joker_4924 ; // Joker input parameter
        GGS_methodQualifier joker_4989 ; // Joker input parameter
        var_getterMap_4445.method_searchKey (temp_10.readProperty_mGetterName (), var_kind_4593, var_getterFormalArgumentTypeList_4544, joker_4924, var_hasCompilerArgument_4612, var_returnedType_4661, joker_4989, var_actualGetterNameString_5006, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 102)) ;
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_actualGetterNameString_5006.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_templateGetterCallInExpressionAST temp_12 = this ;
            GenericArray <FixItDescription> fixItArray13 ;
            appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, var_actualGetterName_4717) ;
            inCompiler->emitSemanticError (temp_12.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 112)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_uint var_matchingReaderCount_5200 = GGS_uint (uint32_t (0U)) ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3921, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 116)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas4", 116)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          var_getterFormalArgumentTypeList_4544 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
          var_hasCompilerArgument_4612 = GGS_bool (true) ;
          var_returnedType_4661 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("templateAnalysis.galgas4", 119)) ;
          var_kind_4593 = GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas4", 120)) ;
          UpEnumerator_typedPropertyList enumerator_5518 (extensionGetter_definition (var_receiverType_3921, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 121)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_5518.hasCurrentObject ()) {
            GGS_getterMap var_aMap_5571 = extensionGetter_definition (enumerator_5518.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 122)).readProperty_getterMap () ;
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_templateGetterCallInExpressionAST temp_16 = this ;
              const GGS_getterMap_2E_element var_entry_5635 = var_aMap_5571.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_5571.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_15 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_15) {
                var_matchingReaderCount_5200.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 124)) ;
                var_getterFormalArgumentTypeList_4544 = var_entry_5635.readProperty_mArgumentTypeList () ;
                var_hasCompilerArgument_4612 = var_entry_5635.readProperty_mHasCompilerArgument () ;
                var_returnedType_4661 = var_entry_5635.readProperty_mReturnedType () ;
                var_kind_4593 = var_entry_5635.readProperty_mKind () ;
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = GGS_bool (ComparisonKind::notEqual, var_entry_5635.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    var_actualGetterName_4717 = var_entry_5635.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
                var_fieldList_4682.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_5518.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 132)) ;
              }
            }
            enumerator_5518.gotoNextObject () ;
          }
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            test_18 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_5200.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              const GGS_templateGetterCallInExpressionAST temp_19 = this ;
              const GGS_templateGetterCallInExpressionAST temp_20 = this ;
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_19.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3973, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 137)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 137)).add_operation (temp_20.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 137)).add_operation (GGS_string ("' func, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 137)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)) ;
              var_getterFormalArgumentTypeList_4544.drop () ; // Release error dropped variable
              var_hasCompilerArgument_4612.drop () ; // Release error dropped variable
              var_returnedType_4661.drop () ; // Release error dropped variable
              var_kind_4593.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_22 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_22) {
              test_22 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_5200.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_22) {
                GGS_string var_s_6552 = GGS_string::makeEmptyString () ;
                UpEnumerator_stringlist enumerator_6574 (var_fieldList_4682) ;
                while (enumerator_6574.hasCurrentObject ()) {
                  var_s_6552.plusAssignOperation(enumerator_6574.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 143)) ;
                  enumerator_6574.gotoNextObject () ;
                  if (enumerator_6574.hasCurrentObject ()) {
                    var_s_6552.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 144)) ;
                  }
                }
                const GGS_templateGetterCallInExpressionAST temp_23 = this ;
                const GGS_templateGetterCallInExpressionAST temp_24 = this ;
                GenericArray <FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3973, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 147)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 147)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 147)).add_operation (GGS_string ("' func, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 147)).add_operation (var_s_6552, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 148)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 148)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 146)) ;
                var_getterFormalArgumentTypeList_4544.drop () ; // Release error dropped variable
                var_hasCompilerArgument_4612.drop () ; // Release error dropped variable
                var_returnedType_4661.drop () ; // Release error dropped variable
                var_kind_4593.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = GGS_bool (ComparisonKind::equal, var_getterMap_4445.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 151)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            const GGS_templateGetterCallInExpressionAST temp_27 = this ;
            GenericArray <FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3973, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)).add_operation (GGS_string ("' type does not define any func"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)), fixItArray28  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 152)) ;
            var_getterFormalArgumentTypeList_4544.drop () ; // Release error dropped variable
            var_hasCompilerArgument_4612.drop () ; // Release error dropped variable
            var_returnedType_4661.drop () ; // Release error dropped variable
            var_kind_4593.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_26) {
          const GGS_templateGetterCallInExpressionAST temp_29 = this ;
          const GGS_templateGetterCallInExpressionAST temp_30 = this ;
          GenericArray <FixItDescription> fixItArray31 ;
          appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, var_getterMap_4445.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 159))) ;
          inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3973, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 157)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 157)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 157)).add_operation (GGS_string ("' func"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 157)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 156)) ;
          var_getterFormalArgumentTypeList_4544.drop () ; // Release error dropped variable
          var_hasCompilerArgument_4612.drop () ; // Release error dropped variable
          var_returnedType_4661.drop () ; // Release error dropped variable
          var_kind_4593.drop () ; // Release error dropped variable
        }
      }
    }
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      const GGS_templateGetterCallInExpressionAST temp_33 = this ;
      test_32 = GGS_bool (ComparisonKind::notEqual, temp_33.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 163)).objectCompare (var_getterFormalArgumentTypeList_4544.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 163)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        const GGS_templateGetterCallInExpressionAST temp_34 = this ;
        const GGS_templateGetterCallInExpressionAST temp_35 = this ;
        const GGS_templateGetterCallInExpressionAST temp_36 = this ;
        GenericArray <FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (temp_34.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_35.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 164)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 164)).add_operation (var_receiverTypeName_3973, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 164)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 164)).add_operation (var_getterFormalArgumentTypeList_4544.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 165)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 165)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 164)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 165)).add_operation (temp_36.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 166)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 166)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 165)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 166)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 164)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_32) {
      GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_7976 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_templateGetterCallInExpressionAST temp_38 = this ;
      UpEnumerator_templateExpressionListAST enumerator_8041 (temp_38.readProperty_mExpressionList ()) ;
      UpEnumerator_functionSignature enumerator_8068 (var_getterFormalArgumentTypeList_4544) ;
      while (enumerator_8041.hasCurrentObject () && enumerator_8068.hasCurrentObject ()) {
        GalgasBool test_39 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_39) {
          test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_8068.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_8041.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_39) {
            GGS_string temp_40 ;
            const GalgasBool test_41 = GGS_bool (ComparisonKind::notEqual, enumerator_8068.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_41) {
              temp_40 = enumerator_8068.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 171)) ;
            }else if (GalgasBool::boolFalse == test_41) {
              temp_40 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_8201 = GGS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 171)) ;
            GenericArray <FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, EnumFixItKind::fixItReplace, var_s_8201) ;
            inCompiler->emitSemanticError (enumerator_8041.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_8201, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 172)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 172)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 172)) ;
          }
        }
        GGS_semanticExpressionForGeneration var_exp_8641 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_8041.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_8641, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 174)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8068.current (HERE).readProperty_mFormalArgumentType (), var_exp_8641.readProperty_mResultType (), enumerator_8041.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_8641, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 181)) ;
        }
        var_constructorEffectiveParameterList_7976.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_exp_8641, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 182)) ;
        enumerator_8041.gotoNextObject () ;
        enumerator_8068.gotoNextObject () ;
      }
      GalgasBool test_43 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_43) {
        const GGS_templateGetterCallInExpressionAST temp_44 = this ;
        test_43 = GGS_bool (ComparisonKind::notEqual, var_actualGetterName_4717.objectCompare (temp_44.readProperty_mGetterName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_43) {
          const GGS_templateGetterCallInExpressionAST temp_45 = this ;
          GenericArray <FixItDescription> fixItArray46 ;
          appendFixItActions (fixItArray46, EnumFixItKind::fixItReplace, var_actualGetterName_4717) ;
          inCompiler->emitSemanticError (temp_45.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray46  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 185)) ;
        }
      }
      const GGS_templateGetterCallInExpressionAST temp_47 = this ;
      outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_4661, temp_47.readProperty_mGetterName ().readProperty_location (), var_kind_4593, var_receiverExpression_3871, var_fieldList_4682, var_actualGetterName_4717, var_constructorEffectiveParameterList_7976, var_hasCompilerArgument_4612, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateClassFunctionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateClassFunctionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_constructorType_9859 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 212)) ;
  GGS_classFunctionMap var_classFunctionMap_9991 = extensionGetter_definition (var_constructorType_9859, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 214)).readProperty_classFunctionMap () ;
  GGS_unifiedTypeMapEntry var_returnedType_10109 ;
  GGS_bool var_hasCompilerArgument_10134 ;
  GGS_functionSignature var_classFuncFormalArgumentTypeList_10179 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateClassFunctionAST temp_2 = this ;
    const GGS_classFunctionMap_2E_element var_entry_10220 = var_classFunctionMap_9991.readSubscript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_classFunctionMap_9991.readSubscript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      var_classFuncFormalArgumentTypeList_10179 = var_entry_10220.readProperty_mArgumentTypeList () ;
      var_hasCompilerArgument_10134 = var_entry_10220.readProperty_mHasCompilerArgument () ;
      var_returnedType_10109 = var_entry_10220.readProperty_mReturnedType () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_9991.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 224)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_templateClassFunctionAST temp_4 = this ;
        const GGS_templateClassFunctionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 226)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 226)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 225)) ;
        var_classFuncFormalArgumentTypeList_10179.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10134.drop () ; // Release error dropped variable
        var_returnedType_10109.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_templateClassFunctionAST temp_7 = this ;
      const GGS_templateClassFunctionAST temp_8 = this ;
      const GGS_templateClassFunctionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, EnumFixItKind::fixItReplace, var_classFunctionMap_9991.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 232))) ;
      inCompiler->emitSemanticError (temp_7.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 230)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 230)).add_operation (temp_9.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 230)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 230)), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)) ;
      var_classFuncFormalArgumentTypeList_10179.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10134.drop () ; // Release error dropped variable
      var_returnedType_10109.drop () ; // Release error dropped variable
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_11029 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS_semanticExpressionListForGeneration var_classFunctionEffectiveParameterList_11092 ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_templateClassFunctionAST temp_12 = this ;
    test_11 = GGS_bool (ComparisonKind::notEqual, temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 238)).objectCompare (var_classFuncFormalArgumentTypeList_10179.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 238)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_templateClassFunctionAST temp_13 = this ;
      const GGS_templateClassFunctionAST temp_14 = this ;
      const GGS_templateClassFunctionAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_14.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 240)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 240)).add_operation (extensionGetter_definition (var_constructorType_9859, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 240)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 240)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 240)).add_operation (var_classFuncFormalArgumentTypeList_10179.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 241)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 241)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 240)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 241)).add_operation (temp_15.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 242)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 242)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 241)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 242)), fixItArray16  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 239)) ;
      var_classFunctionEffectiveParameterList_11092.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    var_classFunctionEffectiveParameterList_11092 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_templateClassFunctionAST temp_17 = this ;
    UpEnumerator_templateExpressionListAST enumerator_11682 (temp_17.readProperty_mExpressionList ()) ;
    UpEnumerator_functionSignature enumerator_11709 (var_classFuncFormalArgumentTypeList_10179) ;
    while (enumerator_11682.hasCurrentObject () && enumerator_11709.hasCurrentObject ()) {
      {
      var_requiredTypes_11029.setter_append (enumerator_11709.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 247)) ;
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::notEqual, enumerator_11709.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_11682.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GGS_string temp_19 ;
          const GalgasBool test_20 = GGS_bool (ComparisonKind::notEqual, enumerator_11709.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            temp_19 = enumerator_11709.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 249)) ;
          }else if (GalgasBool::boolFalse == test_20) {
            temp_19 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_11899 = GGS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 249)) ;
          GenericArray <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, EnumFixItKind::fixItReplace, var_s_11899) ;
          inCompiler->emitSemanticError (enumerator_11682.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11899, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 250)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 250)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 250)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_exp_12322 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_11682.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_12322, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 252)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11709.current (HERE).readProperty_mFormalArgumentType (), var_exp_12322.readProperty_mResultType (), enumerator_11682.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_12322, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 259)) ;
      }
      var_classFunctionEffectiveParameterList_11092.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_exp_12322, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 260)) ;
      enumerator_11682.gotoNextObject () ;
      enumerator_11709.gotoNextObject () ;
    }
  }
  const GGS_templateClassFunctionAST temp_22 = this ;
  const GGS_templateClassFunctionAST temp_23 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_10109, temp_22.readProperty_mClassFunctionName ().readProperty_location (), var_constructorType_9859, temp_23.readProperty_mClassFunctionName ().readProperty_string (), var_classFunctionEffectiveParameterList_11092, var_hasCompilerArgument_10134, var_requiredTypes_11029, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFileWrapperTemplateCallAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GGS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 286)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateAndOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14267 ;
  const GGS_templateAndOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_14267, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 301)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14511 ;
  const GGS_templateAndOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_14511, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 309)) ;
  {
  const GGS_templateAndOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14267.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 318)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas4", 318)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 318)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14267, var_rightExpression_14511, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 317)) ;
  }
  const GGS_templateAndOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14267.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14267, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas4", 329)), var_rightExpression_14511, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateOrOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_15610 ;
  const GGS_templateOrOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_15610, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 344)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_15854 ;
  const GGS_templateOrOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_15854, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 352)) ;
  {
  const GGS_templateOrOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_15610.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 361)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas4", 361)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 361)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15610, var_rightExpression_15854, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 360)) ;
  }
  const GGS_templateOrOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_15610.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_15610, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas4", 372)), var_rightExpression_15854, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateXorOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16952 ;
  const GGS_templateXorOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_16952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 387)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_17196 ;
  const GGS_templateXorOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_17196, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 395)) ;
  {
  const GGS_templateXorOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16952.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 404)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas4", 404)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 404)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16952, var_rightExpression_17196, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 403)) ;
  }
  const GGS_templateXorOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16952.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16952, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas4", 415)), var_rightExpression_17196, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateTrueBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTrueBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                  GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                  const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                  GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateTrueBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFalseBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFalseBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                   GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFalseBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_19117 = GGS_string::makeEmptyString () ;
  const GGS_templateLiteralStringExpressionAST temp_0 = this ;
  UpEnumerator_stringlist enumerator_19131 (temp_0.readProperty_mLiteralStringList ()) ;
  while (enumerator_19131.hasCurrentObject ()) {
    var_s_19117.plusAssignOperation(enumerator_19131.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 455)) ;
    enumerator_19131.gotoNextObject () ;
  }
  const GGS_templateLiteralStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_19117, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralUIntExpressionAST temp_0 = this ;
  const GGS_templateLiteralUIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralCharExpressionAST temp_0 = this ;
  const GGS_templateLiteralCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralDoubleExpressionAST temp_0 = this ;
  const GGS_templateLiteralDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_double (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateNotOperatorAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_21655 ;
  const GGS_templateNotOperatorAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_21655, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 516)) ;
  GGS_unifiedTypeMapEntry var_type_21731 = var_expression_21655.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_21731, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 525)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas4", 525)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 525)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 525)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateNotOperatorAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_21731, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 527)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 527)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 527)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 526)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateNotOperatorAST temp_4 = this ;
    outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_21731, temp_4.readProperty_mOperatorLocation (), var_expression_21655, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLogicalNegateAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_22738 ;
  const GGS_templateLogicalNegateAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_22738, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 549)) ;
  GGS_unifiedTypeMapEntry var_type_22814 = var_expression_22738.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_22814, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 558)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas4", 558)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 558)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 558)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLogicalNegateAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_22814, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 560)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 560)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 560)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 559)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateLogicalNegateAST temp_4 = this ;
    outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_22814, temp_4.readProperty_mOperatorLocation (), var_expression_22738, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateTestDynamicClassAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_23868 ;
  const GGS_templateTestDynamicClassAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_23868, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 581)) ;
  const GGS_templateTestDynamicClassAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_23917 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 589)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_23868.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 591)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas4", 591)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_24163 = var_castType_23917 ;
      GGS_bool var_found_24190 = GGS_bool (ComparisonKind::equal, var_t_24163.objectCompare (var_expression_23868.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 595)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 595)).isValid ()) {
        uint32_t variant_24230 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 595)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 595)).uintValue () ;
        bool loop_24230 = true ;
        while (loop_24230) {
          loop_24230 = var_found_24190.operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 596)).operator_and (extensionGetter_definition (var_t_24163, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 596)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas4", 596)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 596)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 596)).isValid () ;
          if (loop_24230) {
            loop_24230 = var_found_24190.operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 596)).operator_and (extensionGetter_definition (var_t_24163, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 596)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas4", 596)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 596)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 596)).boolValue () ;
          }
          if (loop_24230 && (0 == variant_24230)) {
            loop_24230 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas4", 595)) ;
          }
          if (loop_24230) {
            variant_24230 -= 1 ;
            var_t_24163 = extensionGetter_definition (var_t_24163, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 597)).readProperty_superType () ;
            var_found_24190 = GGS_bool (ComparisonKind::equal, var_t_24163.objectCompare (var_expression_23868.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_24190.operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 600)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_templateTestDynamicClassAST temp_4 = this ;
          const GGS_templateTestDynamicClassAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 602)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 602)).add_operation (extensionGetter_definition (var_expression_23868.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 602)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 602)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 602)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 601)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_23868.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_23868.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 606)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 605)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 606)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 605)) ;
  }
  const GGS_templateTestDynamicClassAST temp_8 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_23868, var_castType_23917, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateOptionAccessAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateOptionAccessAST temp_0 = this ;
  GGS_lstring var_usefulnessName_25394 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 626)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_25394 COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 627)) ;
  }
  GGS_bool var_optionComponentIsPredefined_25698 ;
  GGS_commandLineOptionMap var_boolOptionMap_25758 ;
  GGS_commandLineOptionMap var_uintOptionMap_25804 ;
  GGS_commandLineOptionMap var_stringOptionMap_25850 ;
  const GGS_templateOptionAccessAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_25698, var_boolOptionMap_25758, var_uintOptionMap_25804, var_stringOptionMap_25850, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 628)) ;
  const GGS_templateOptionAccessAST temp_2 = this ;
  GGS_bool var_found_25876 = var_boolOptionMap_25758.getter_contains (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 635)) ;
  GGS_unifiedTypeMapEntry var_returnedType_25960 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_25876.operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 637)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_templateOptionAccessAST temp_4 = this ;
      var_found_25876 = var_uintOptionMap_25804.getter_contains (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 638)) ;
      var_returnedType_25960 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_found_25876.operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 641)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_templateOptionAccessAST temp_6 = this ;
      var_found_25876 = var_stringOptionMap_25850.getter_contains (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 642)) ;
      var_returnedType_25960 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_found_25876.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_templateOptionAccessAST temp_9 = this ;
        test_8 = GGS_bool (ComparisonKind::equal, temp_9.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("value"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_templateOptionAccessAST temp_10 = this ;
          const GGS_templateOptionAccessAST temp_11 = this ;
          const GGS_templateOptionAccessAST temp_12 = this ;
          outArgument_outExpression = GGS_optionValueExpressionForGeneration::init_21__21__21__21__21_ (var_returnedType_25960, temp_10.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25698, temp_11.readProperty_mOptionComponentName ().readProperty_string (), temp_12.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_templateOptionAccessAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::equal, temp_14.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("char"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            const GGS_templateOptionAccessAST temp_15 = this ;
            const GGS_templateOptionAccessAST temp_16 = this ;
            const GGS_templateOptionAccessAST temp_17 = this ;
            outArgument_outExpression = GGS_optionCharExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_15.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25698, temp_16.readProperty_mOptionComponentName ().readProperty_string (), temp_17.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_13) {
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            const GGS_templateOptionAccessAST temp_19 = this ;
            test_18 = GGS_bool (ComparisonKind::equal, temp_19.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              const GGS_templateOptionAccessAST temp_20 = this ;
              const GGS_templateOptionAccessAST temp_21 = this ;
              const GGS_templateOptionAccessAST temp_22 = this ;
              outArgument_outExpression = GGS_optionStringExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_20.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25698, temp_21.readProperty_mOptionComponentName ().readProperty_string (), temp_22.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_23 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_23) {
              const GGS_templateOptionAccessAST temp_24 = this ;
              test_23 = GGS_bool (ComparisonKind::equal, temp_24.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("comment"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_23) {
                const GGS_templateOptionAccessAST temp_25 = this ;
                const GGS_templateOptionAccessAST temp_26 = this ;
                const GGS_templateOptionAccessAST temp_27 = this ;
                outArgument_outExpression = GGS_optionCommentExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_25.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25698, temp_26.readProperty_mOptionComponentName ().readProperty_string (), temp_27.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_23) {
              const GGS_templateOptionAccessAST temp_28 = this ;
              GenericArray <FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (temp_28.readProperty_mGetterName ().readProperty_location (), GGS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray29  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 679)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    GGS_stringset var_s_27802 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    UpEnumerator_commandLineOptionMap enumerator_27827 (var_boolOptionMap_25758) ;
    while (enumerator_27827.hasCurrentObject ()) {
      var_s_27802.plusPlusAssignOperation (enumerator_27827.current (HERE).readProperty_lkey ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 684)) ;
      enumerator_27827.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_27892 (var_uintOptionMap_25804) ;
    while (enumerator_27892.hasCurrentObject ()) {
      var_s_27802.plusPlusAssignOperation (enumerator_27892.current (HERE).readProperty_lkey ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 687)) ;
      enumerator_27892.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_27957 (var_stringOptionMap_25850) ;
    while (enumerator_27957.hasCurrentObject ()) {
      var_s_27802.plusPlusAssignOperation (enumerator_27957.current (HERE).readProperty_lkey ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 690)) ;
      enumerator_27957.gotoNextObject () ;
    }
    const GGS_templateOptionAccessAST temp_30 = this ;
    const GGS_templateOptionAccessAST temp_31 = this ;
    const GGS_templateOptionAccessAST temp_32 = this ;
    GenericArray <FixItDescription> fixItArray33 ;
    appendFixItActions (fixItArray33, EnumFixItKind::fixItReplace, var_s_27802) ;
    inCompiler->emitSemanticError (temp_30.readProperty_mOptionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_31.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 693)).add_operation (GGS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 693)).add_operation (temp_32.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 693)).add_operation (GGS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 693)), fixItArray33  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 692)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFunctionCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFunctionCallAST temp_0 = this ;
  GGS_lstring var_usefulnessName_28747 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 710)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_28747 COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 711)) ;
  }
  GGS_functionSignature var_functionSignature_29059 ;
  GGS_unifiedTypeMapEntry var_resultType_29108 ;
  GGS_bool var_isInternal_29135 ;
  const GGS_templateFunctionCallAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_29059, var_resultType_29108, var_isInternal_29135, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 713)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_29135.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateFunctionCallAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_29200 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 721)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_templateFunctionCallAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 722)).objectCompare (var_procDeclarationLocation_29200.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 722)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_templateFunctionCallAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_29200.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 723)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 723)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 723)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 723)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_templateFunctionCallAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_29059.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 727)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 727)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateFunctionCallAST temp_10 = this ;
      const GGS_templateFunctionCallAST temp_11 = this ;
      const GGS_templateFunctionCallAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 729)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 729)).add_operation (var_functionSignature_29059.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 729)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 729)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 729)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 729)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 730)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 730)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 730)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 730)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 728)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_29913 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_templateFunctionCallAST temp_14 = this ;
    UpEnumerator_functionSignature enumerator_30009 (var_functionSignature_29059) ;
    UpEnumerator_templateExpressionListAST enumerator_30043 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_30009.hasCurrentObject () && enumerator_30043.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_30276 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_30043.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_30276, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 736)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_30009.current (HERE).readProperty_mFormalArgumentType (), var_expression_30276.readProperty_mResultType (), enumerator_30043.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_30276, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 743)) ;
      }
      var_semanticExpressionListForGeneration_29913.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_expression_30276, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 744)) ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_30009.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_30043.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_30009.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_30009.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 746)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_30600 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 746)) ;
          GenericArray <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_s_30600) ;
          inCompiler->emitSemanticError (enumerator_30043.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_30600, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 747)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 747)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 747)) ;
        }
      }
      enumerator_30009.gotoNextObject () ;
      enumerator_30043.gotoNextObject () ;
    }
    const GGS_templateFunctionCallAST temp_19 = this ;
    const GGS_templateFunctionCallAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_29108, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_29913, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateExtensionTemplateCallAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GGS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 769)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateVarInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_32335 ;
  GGS_string var_sourceVariableCppName_32346 ;
  const GGS_templateVarInExpressionAST temp_0 = this ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_32335, var_sourceVariableCppName_32346, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 785)) ;
  const GGS_templateVarInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_32335, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_32346, var_sourceVariableCppName_32346, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateAddOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_33281 ;
  const GGS_templateAddOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_33281, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 805)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_33525 ;
  const GGS_templateAddOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_33525, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 813)) ;
  {
  const GGS_templateAddOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_33281.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 822)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas4", 822)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 822)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_33281, var_rightExpression_33525, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 821)) ;
  }
  const GGS_templateAddOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_33281.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_33281, GGS_binaryOperator::class_func_add (SOURCE_FILE ("templateAnalysis.galgas4", 833)), var_rightExpression_33525, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateSubOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_34767 ;
  const GGS_templateSubOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_34767, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 850)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_35011 ;
  const GGS_templateSubOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_35011, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 858)) ;
  {
  const GGS_templateSubOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_34767.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 867)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas4", 867)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 867)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_34767, var_rightExpression_35011, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 866)) ;
  }
  const GGS_templateSubOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_34767.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_34767, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("templateAnalysis.galgas4", 878)), var_rightExpression_35011, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateMultiplyOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_36262 ;
  const GGS_templateMultiplyOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_36262, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 895)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_36506 ;
  const GGS_templateMultiplyOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_36506, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 903)) ;
  {
  const GGS_templateMultiplyOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_36262.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 912)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas4", 912)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 912)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_36262, var_rightExpression_36506, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 911)) ;
  }
  const GGS_templateMultiplyOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_36262.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_36262, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas4", 923)), var_rightExpression_36506, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateDivideOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_37758 ;
  const GGS_templateDivideOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_37758, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 940)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_38002 ;
  const GGS_templateDivideOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_38002, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 948)) ;
  {
  const GGS_templateDivideOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_37758.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 957)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas4", 957)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 957)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_37758, var_rightExpression_38002, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 956)) ;
  }
  const GGS_templateDivideOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_37758.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_37758, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas4", 968)), var_rightExpression_38002, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateModuloOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_39248 ;
  const GGS_templateModuloOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_39248, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 985)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_39492 ;
  const GGS_templateModuloOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_39492, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 993)) ;
  {
  const GGS_templateModuloOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_39248.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1002)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas4", 1002)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1002)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_39248, var_rightExpression_39492, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1001)) ;
  }
  const GGS_templateModuloOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_39248.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_39248, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas4", 1013)), var_rightExpression_39492, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_40704 ;
  const GGS_templateUnaryMinusOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_40704, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1030)) ;
  GGS_unifiedTypeMapEntry var_type_40780 = var_expression_40704.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_40780, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1039)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas4", 1039)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1039)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1039)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateUnaryMinusOperationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_40780, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1041)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1041)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1041)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1040)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateUnaryMinusOperationAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_40780, temp_4.readProperty_mOperatorLocation (), var_expression_40704, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_42012 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_42012, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1064)) ;
  GGS_unifiedTypeMapEntry var_type_42092 = var_expression_42012.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_type_42092, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1073)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas4", 1073)))) ;
    if (GalgasBool::boolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_type_42092, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1073)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas4", 1073)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1073)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_structFieldAccessTemplateExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GGS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1074)) ;
    }
  }
  GGS_propertyMap var_propertyMap_42331 = extensionGetter_definition (var_type_42092, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1076)).readProperty_propertyMap () ;
  GGS_AccessControl var_accessControl_42426 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_5 = this ;
  GGS_bool joker_42441 ; // Joker input parameter
  var_propertyMap_42331.method_searchKey (temp_5.readProperty_mStructFieldName (), var_accessControl_42426, joker_42441, var_type_42092, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1077)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_6 = this ;
  extensionMethod_checkSetAccess (var_accessControl_42426, GGS_selfAvailability::class_func_none (SOURCE_FILE ("templateAnalysis.galgas4", 1078)), temp_6.readProperty_mStructFieldName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1078)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_7 = this ;
  const GGS_structFieldAccessTemplateExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_type_42092, temp_7.readProperty_mOperatorLocation (), var_expression_42012, temp_8.readProperty_mStructFieldName ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_43443 ;
  const GGS_templateEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_43443, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1100)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_43691 ;
  const GGS_templateEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_43691, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1108)) ;
  {
  const GGS_templateEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_43443.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1117)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas4", 1117)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1117)).operator_or (extensionGetter_definition (var_leftExpression_43443.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1117)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1117)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1117)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1117)), GGS_string ("=="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_43443, var_rightExpression_43691, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1116)) ;
  }
  const GGS_templateEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_43443, GGS_comparison::class_func_equal (SOURCE_FILE ("templateAnalysis.galgas4", 1128)), var_rightExpression_43691, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateNonEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_44864 ;
  const GGS_templateNonEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_44864, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1143)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_45112 ;
  const GGS_templateNonEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_45112, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1151)) ;
  {
  const GGS_templateNonEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_44864.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1160)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas4", 1160)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1160)).operator_or (extensionGetter_definition (var_leftExpression_44864.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1160)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1160)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1160)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1160)), GGS_string ("!="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_44864, var_rightExpression_45112, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1159)) ;
  }
  const GGS_templateNonEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_44864, GGS_comparison::class_func_notEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1171)), var_rightExpression_45112, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateStrictInfTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_46289 ;
  const GGS_templateStrictInfTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_46289, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1186)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_46537 ;
  const GGS_templateStrictInfTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_46537, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1194)) ;
  {
  const GGS_templateStrictInfTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_46289.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1203)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1203)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1203)), GGS_string ("<"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_46289, var_rightExpression_46537, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1202)) ;
  }
  const GGS_templateStrictInfTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_46289, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("templateAnalysis.galgas4", 1214)), var_rightExpression_46537, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInfOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_47644 ;
  const GGS_templateInfOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_47644, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1229)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_47892 ;
  const GGS_templateInfOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_47892, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1237)) ;
  {
  const GGS_templateInfOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_47644.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1246)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1246)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1246)), GGS_string ("<="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_47644, var_rightExpression_47892, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1245)) ;
  }
  const GGS_templateInfOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_47644, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1257)), var_rightExpression_47892, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateStrictSupTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_49002 ;
  const GGS_templateStrictSupTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_49002, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1272)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_49250 ;
  const GGS_templateStrictSupTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_49250, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1280)) ;
  {
  const GGS_templateStrictSupTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_49002.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1289)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1289)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1289)), GGS_string (">"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_49002, var_rightExpression_49250, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1288)) ;
  }
  const GGS_templateStrictSupTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_49002, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("templateAnalysis.galgas4", 1300)), var_rightExpression_49250, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateSupOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_50359 ;
  const GGS_templateSupOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_50359, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1315)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_50607 ;
  const GGS_templateSupOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_50607, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1323)) ;
  {
  const GGS_templateSupOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_50359.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1332)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1332)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1332)), GGS_string (">="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_50359, var_rightExpression_50607, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1331)) ;
  }
  const GGS_templateSupOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_50359, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1343)), var_rightExpression_50607, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLeftShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_51724 ;
  const GGS_templateLeftShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_51724, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1358)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_51972 ;
  const GGS_templateLeftShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_51972, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1366)) ;
  GGS_unifiedTypeMapEntry var_leftType_52054 = var_leftExpression_51724.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_52119 = var_rightExpression_51972.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_52054, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1376)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas4", 1376)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1376)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1376)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateLeftShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_52054, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1378)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1378)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1378)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1377)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_52119, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1380)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateLeftShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_52119, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1382)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1382)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1382)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1381)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateLeftShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_52054, temp_8.readProperty_mOperatorLocation (), var_leftExpression_51724, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("templateAnalysis.galgas4", 1390)), var_rightExpression_51972, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateRightShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_53497 ;
  const GGS_templateRightShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_53497, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1406)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_53745 ;
  const GGS_templateRightShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_53745, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1414)) ;
  GGS_unifiedTypeMapEntry var_leftType_53827 = var_leftExpression_53497.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_53892 = var_rightExpression_53745.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_53827, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1424)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas4", 1424)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1424)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1424)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateRightShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_53827, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1426)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1426)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1426)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1425)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_53892, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1428)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateRightShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_53892, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1430)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1430)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1430)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1429)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateRightShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_53827, temp_8.readProperty_mOperatorLocation (), var_leftExpression_53497, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("templateAnalysis.galgas4", 1438)), var_rightExpression_53745, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      const GGS_templateInstructionListAST constinArgument_inInstructionList,
                                                                      GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_templateInstructionListAST enumerator_55620 (constinArgument_inInstructionList) ;
  while (enumerator_55620.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateInstructionAST *) enumerator_55620.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1468)) ;
    enumerator_55620.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionStringAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                            const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                            GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                            GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringAST temp_0 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionStringForGeneration::init_21_ (temp_0.readProperty_mTemplateString (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1487)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionExpressionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_56942 ;
  const GGS_templateInstructionExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_56942, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1499)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_56942.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1506)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GGS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_56942.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1507)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1507)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1507)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1507)) ;
    }
  }
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionExpressionForGeneration::init_21_ (var_expression_56942, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1509)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateBlockInstructionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_57827 ;
  const GGS_templateBlockInstructionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_57827, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1521)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_57827.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1528)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bigint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_getterCallExpressionForGeneration var_conversionExpression_57922 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_expression_57827.readProperty_mResultType (), var_expression_57827.readProperty_mLocation (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas4", 1532)), var_expression_57827, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_string ("uint"), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE) ;
      var_expression_57827 = var_conversionExpression_57922 ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_57827.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1540)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_templateBlockInstructionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mLocation (), GGS_string ("expression type should be '@uint' (it is '@").add_operation (extensionGetter_definition (var_expression_57827.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1541)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1541)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1541)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1541)) ;
      }
    }
  }
  GGS_templateInstructionListForGeneration var_blockInstructionList_58390 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateBlockInstructionAST temp_5 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mBlockInstructionList (), var_blockInstructionList_58390, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1544)) ;
  }
  const GGS_templateBlockInstructionAST temp_6 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateBlockInstructionForGeneration::init_21__21__21_ (var_expression_57827, temp_6.readProperty_mLocation (), var_blockInstructionList_58390, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1552)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                       GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                       const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                       GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                       GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionGetColumnLocationForGeneration::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1564)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                        const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                        GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionGotoColumnLocationForGeneration::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1576)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionIfAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_60218 = GGS_templateInstructionIfBranchListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_templateInstructionIfAST temp_0 = this ;
  UpEnumerator_templateInstructionIfBranchListAST enumerator_60343 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_60343.hasCurrentObject ()) {
    GGS_semanticExpressionForGeneration var_expression_60574 ;
    callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_60343.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_60574, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1591)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_60574.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1598)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_60574.readProperty_mLocation (), GGS_string ("'if' expression type should be '@bool' (it is '@").add_operation (extensionGetter_definition (var_expression_60574.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1599)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1599)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1599)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1599)) ;
      }
    }
    GGS_templateInstructionListForGeneration var_instructionList_60826 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
    {
    routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_60343.current (HERE).readProperty_mInstructionList (), var_instructionList_60826, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1602)) ;
    }
    var_templateInstructionIfBranchList_60218.plusPlusAssignOperation (GGS_templateInstructionIfBranchListForGeneration_2E_element::init_21__21_ (var_expression_60574, var_instructionList_60826, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1610)) ;
    enumerator_60343.gotoNextObject () ;
  }
  GGS_templateInstructionListForGeneration var_elseInstructionList_61205 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionIfAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_61205, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1614)) ;
  }
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionIfForGeneration::init_21__21_ (var_templateInstructionIfBranchList_60218, var_elseInstructionList_61205, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1623)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionSwitchAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_switchExpression_5458 ;
  const GGS_templateInstructionSwitchAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_switchExpression_5458, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 134)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_enumType var_enumType_5488 = extensionGetter_definition (var_switchExpression_5458.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 141)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas4", 141)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_5458.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 141)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas4", 141)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_constantsNamedInSwitchInstruction_5584 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      GGS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_5707 = GGS_templateInstructionSwitchBranchListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_templateInstructionSwitchAST temp_2 = this ;
      UpEnumerator_templateInstructionSwitchBranchListAST enumerator_5797 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
      while (enumerator_5797.hasCurrentObject ()) {
        GGS__5B_extractedAssociatedValueForGeneration_5D_ var_extractedAssociatedValuesForGeneration_5887 = GGS__5B_extractedAssociatedValueForGeneration_5D_::init (inCompiler COMMA_HERE) ;
        GGS_templateAnalysisContext var_analysisContext_5942 = constinArgument_inAnalysisContext ;
        UpEnumerator__5B_lstring_5D_ enumerator_6036 (enumerator_5797.current (HERE).readProperty_constantList ()) ;
        while (enumerator_6036.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_enumType_5488.readProperty_constantMap ().getter_contains (enumerator_6036.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 149)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_5584.getter_contains (enumerator_6036.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 150)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_6036.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6036.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 152)).add_operation (GGS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 152)), fixItArray5  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 151)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_5584.plusPlusAssignOperation (enumerator_6036.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 154)) ;
              GGS_associatedValueDescriptorList var_associatedTypeList_6509 ;
              GGS_uint joker_6469 ; // Joker input parameter
              var_enumType_5488.readProperty_constantMap ().method_searchKey (enumerator_6036.current (HERE), joker_6469, var_associatedTypeList_6509, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 155)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6509.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 156)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_5797.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 156)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 156)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_6036.current (HERE).readProperty_location (), GGS_string ("the associated values of '").add_operation (enumerator_6036.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 158)).add_operation (GGS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 158)), fixItArray7  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 157)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_associatedTypeList_6509.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 159)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_5797.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 159)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 159)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_6036.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6036.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 161)).add_operation (GGS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 161)), fixItArray9  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 160)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::notEqual, var_associatedTypeList_6509.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 162)).objectCompare (enumerator_5797.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 162)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GGS_string temp_11 ;
                      const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6509.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 165)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_12) {
                        temp_11 = GGS_string ("s") ;
                      }else if (GalgasBool::boolFalse == test_12) {
                        temp_11 = GGS_string::makeEmptyString () ;
                      }
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_6036.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6036.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (GGS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (var_associatedTypeList_6509.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 164)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 164)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (GGS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)), fixItArray13  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 163)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    UpEnumerator_associatedValueDescriptorList enumerator_7389 (var_associatedTypeList_6509) ;
                    UpEnumerator__5B_switchExtractedValuesAST_5D_ enumerator_7460 (enumerator_5797.current (HERE).readProperty_associatedValuesExtraction ()) ;
                    GGS_uint index_7371 (uint32_t (0)) ;
                    while (enumerator_7389.hasCurrentObject () && enumerator_7460.hasCurrentObject ()) {
                      GalgasBool test_14 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_14) {
                        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_7460.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_14) {
                          GalgasBool test_15 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_15) {
                            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_7389.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 169)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_7460.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ())).boolEnum () ;
                            if (GalgasBool::boolTrue == test_15) {
                              GenericArray <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_7460.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_location (), GGS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_7389.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)), fixItArray16  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)) ;
                            }
                          }
                        }
                      }
                      GGS_string var_cppName_7908 = GGS_string ("extractedValue_").add_operation (enumerator_7460.current (HERE).readProperty_mExtractedValueName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 173)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).add_operation (enumerator_7460.current (HERE).readProperty_mExtractedValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)).add_operation (index_7371.getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 174)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)) ;
                      var_extractedAssociatedValuesForGeneration_5887.plusPlusAssignOperation (GGS_extractedAssociatedValueForGeneration::init_21__21__21_ (enumerator_7389.current (HERE).readProperty_type (), var_cppName_7908, enumerator_7389.current (HERE).readProperty_name (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 175)) ;
                      GalgasBool test_17 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_17) {
                        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_7460.current (HERE).readProperty_mExtractedValueName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_17) {
                          {
                          var_analysisContext_5942.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_7460.current (HERE).readProperty_mExtractedValueName (), enumerator_7389.current (HERE).readProperty_type (), var_cppName_7908, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 180)) ;
                          }
                        }
                      }
                      enumerator_7389.gotoNextObject () ;
                      enumerator_7460.gotoNextObject () ;
                      index_7371.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 167)) ;
                    }
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_6036.current (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_6036.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (GGS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (extensionGetter_definition (var_switchExpression_5458.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 191)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (GGS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 191)), fixItArray18  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 189)) ;
          }
          enumerator_6036.gotoNextObject () ;
        }
        GGS_templateInstructionListForGeneration var_templateInstructionList_8810 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
        {
        routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_5942, ioArgument_ioTypeMap, enumerator_5797.current (HERE).readProperty_instructionList (), var_templateInstructionList_8810, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 195)) ;
        }
        var_templateInstructionSwitchBranchList_5707.plusPlusAssignOperation (GGS_templateInstructionSwitchBranchListForGeneration_2E_element::init_21__21__21__21_ (enumerator_5797.current (HERE).readProperty_constantList (), var_extractedAssociatedValuesForGeneration_5887, enumerator_5797.current (HERE).readProperty_endOfBranch ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 206)), var_templateInstructionList_8810, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 203)) ;
        enumerator_5797.gotoNextObject () ;
      }
      GGS_stringset var_forgottenConstants_9419 = var_enumType_5488.readProperty_constantMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 211)).substract_operation (var_constantsNamedInSwitchInstruction_5584, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 211)) ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::greaterThan, var_forgottenConstants_9419.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 212)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_string var_s_9563 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_9581 (var_forgottenConstants_9419) ;
          while (enumerator_9581.hasCurrentObject ()) {
            var_s_9563.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_9581.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 215)) ;
            enumerator_9581.gotoNextObject () ;
          }
          const GGS_templateInstructionSwitchAST temp_20 = this ;
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_switchExpressionEndLocation (), GGS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9563, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 218)), fixItArray21  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 217)) ;
        }
      }
      ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionSwitchForGeneration::init_21__21__21_ (var_switchExpression_5458.readProperty_mResultType (), var_switchExpression_5458, var_templateInstructionSwitchBranchList_5707, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 221)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GenericArray <FixItDescription> fixItArray22 ;
    inCompiler->emitSemanticError (var_switchExpression_5458.readProperty_mLocation (), GGS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (extensionGetter_definition (var_switchExpression_5458.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 228)).readProperty_typeKind (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)).add_operation (GGS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 228)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionSwitchForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_switchVarCppName_11637 ;
  const GGS_templateInstructionSwitchForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_switchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_11637, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 261)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_switchVarCppName_11637, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)).add_operation (GGS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 270)) ;
  const GGS_templateInstructionSwitchForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_1.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 271)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 271)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::invalid :\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 272)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 273)) ;
  const GGS_templateInstructionSwitchForGeneration temp_2 = this ;
  UpEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_11963 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
  while (enumerator_11963.hasCurrentObject ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_12033 (enumerator_11963.current (HERE).readProperty_mConstantList ()) ;
    while (enumerator_12033.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 277)) ;
      const GGS_templateInstructionSwitchForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_3.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 278)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 278)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 279)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12033.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas4", 280)).add_operation (GGS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 280)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 280)) ;
      enumerator_12033.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 282)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 283)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_11963.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 284)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ enumerator_12481 (enumerator_11963.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12481.hasCurrentObject ()) {
          extensionMethod_addHeaderFileName (enumerator_12481.current (HERE).readProperty_mType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 286)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12481.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_12481.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)) ;
          enumerator_12481.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_switchVarCppName_11637, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)).add_operation (GGS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11963.current (HERE).readProperty_mConstantList ().readSubscript__3F_ (GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas4", 291)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 291)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 291)) ;
        UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ enumerator_12956 (enumerator_11963.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12956.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12956.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 293)) ;
          enumerator_12956.gotoNextObject () ;
          if (enumerator_12956.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 294)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 296)) ;
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_11963.current (HERE).readProperty_mInstructionList ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 298)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 299)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_11963.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 300)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 308)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 310)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 311)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 312)) ;
    }
    enumerator_11963.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_routineSignature_4541 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator_formalParameterListAST enumerator_4614 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_4614.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_4708 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_4614.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_4708, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 112)) ;
    }
    var_routineSignature_4541.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_4614.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_4708, enumerator_4614.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_4614.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 113)) ;
    enumerator_4614.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 120)) ;
  {
  const GGS_procDeclarationAST temp_2 = this ;
  const GGS_procDeclarationAST temp_3 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_2.readProperty_mRoutineName (), var_routineSignature_4541, temp_3.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 122)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_routineSignature_5892 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator_formalParameterListAST enumerator_5965 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_5965.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_6001 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_5965.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 141)) ;
    var_routineSignature_5892.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_5965.current (HERE).readProperty_mFormalSelector (), var_parameterType_6001, enumerator_5965.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_5965.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 142)) ;
    enumerator_5965.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  GGS_lstring var_mangledName_6275 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_5892, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 148)) ;
  GGS_lstring var_nameForUsefulness_6384 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_6275, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 150)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6384, var_nameForUsefulness_6384, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 151)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_procDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6384  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 153)) ;
    }
  }
  GGS_analysisContext var_analysisContext_6657 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("procedure-declaration.galgas4", 160)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_instructionList_7109 ;
  GGS_formalParameterListForGeneration var_formalArgumentList_7137 ;
  {
  const GGS_procDeclarationAST temp_4 = this ;
  const GGS_procDeclarationAST temp_5 = this ;
  const GGS_procDeclarationAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_6384, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6657, ioArgument_ioTypeMap, temp_4.readProperty_mFormalArgumentListAST (), temp_5.readProperty_mRoutineInstructionList (), temp_6.readProperty_mEndOfRoutineInstructionList (), var_instructionList_7109, var_formalArgumentList_7137, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 163)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("proc ").add_operation (var_mangledName_6275.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 175)), GGS_bool (true), GGS_string ("proc-").add_operation (var_mangledName_6275.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 177)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 177)), var_mangledName_6275.readProperty_string (), var_formalArgumentList_7137, GGS_bool (false), var_instructionList_7109, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 174)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@routineImplementationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_string & outArgument_outImplementation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineImplementationForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_generateHeader ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (temp_2.readProperty_routineMangledName ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 207)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 207))  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 207)) ;
    }
  }
  GGS_string var_code_8949 ;
  {
  const GGS_routineImplementationForGeneration temp_3 = this ;
  const GGS_routineImplementationForGeneration temp_4 = this ;
  const GGS_routineImplementationForGeneration temp_5 = this ;
  const GGS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (temp_3.readProperty_mGenerateStatic (), GGS_string ("routine_").add_operation (temp_4.readProperty_routineMangledName ().getter_identifierRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 211)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 211)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_8949, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 209)) ;
  }
  const GGS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.readProperty_routineMangledName (), var_code_8949 COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 222))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classFuncExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_typeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_classFuncExpressionAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_5314 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_typeName (), joker_5314, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 137)) ;
      }
    }
  }
  const GGS_classFuncExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_expressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 139)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedType_6382 ;
  GGS_unifiedTypeMapEntry var_classFuncType_6428 ;
  GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_6491 ;
  GGS_bool var_hasCompilerArgument_6543 ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_6598 ;
  {
  const GGS_classFuncExpressionAST temp_0 = this ;
  const GGS_classFuncExpressionAST temp_1 = this ;
  const GGS_classFuncExpressionAST temp_2 = this ;
  const GGS_classFuncExpressionAST temp_3 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_typeName (), temp_1.readProperty_classFuncName (), temp_2.readProperty_expressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_6382, var_classFuncType_6428, var_constructorEffectiveParameterList_6491, var_hasCompilerArgument_6543, var_requiredTypes_6598, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 152)) ;
  }
  const GGS_classFuncExpressionAST temp_4 = this ;
  GGS_lstring var_constructorTypeUsefulnessName_6626 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_classFuncType_6428, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 169)).readProperty_typeName ().readProperty_string (), temp_4.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 169)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_6626 COMMA_SOURCE_FILE ("expression-class-func.galgas4", 170)) ;
  }
  const GGS_classFuncExpressionAST temp_5 = this ;
  GGS_lstring var_returnedTypeUsefulnessName_6868 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_returnedType_6382, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 171)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 171)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_6868 COMMA_SOURCE_FILE ("expression-class-func.galgas4", 172)) ;
  }
  const GGS_classFuncExpressionAST temp_6 = this ;
  const GGS_classFuncExpressionAST temp_7 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_6382, temp_6.readProperty_classFuncName ().readProperty_location (), var_classFuncType_6428, temp_7.readProperty_classFuncName ().readProperty_string (), var_constructorEffectiveParameterList_6491, var_hasCompilerArgument_6543, var_requiredTypes_6598, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                       const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       const GGS_lstring constinArgument_inTypeName,
                                                                                                       const GGS_lstring constinArgument_inConstructorName,
                                                                                                       const GGS_actualOutputArgumentList constinArgument_inInitializerEffectiveParameterExpressions,
                                                                                                       const GGS_location /* constinArgument__5F_inLocationForOldStyleCollectionInitializerError */,
                                                                                                       GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                                       GGS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                                                                                       GGS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                                       GGS_bool & outArgument_outHasCompilerArgument,
                                                                                                       GGS__5B_unifiedTypeMapEntry_5D_ & outArgument_outRequiredTypes,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outRequiredTypes.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  outArgument_outRequiredTypes = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outConstructorType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 209)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-class-func.galgas4", 211)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 212)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_classFunctionMap var_classFunctionMap_9009 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 217)).readProperty_classFunctionMap () ;
    GGS_functionSignature var_constructorFormalArgumentTypeList_9128 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_classFunctionMap_2E_element var_entry_9173 = var_classFunctionMap_9009.readSubscript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_classFunctionMap_9009.readSubscript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        var_constructorFormalArgumentTypeList_9128 = var_entry_9173.readProperty_mArgumentTypeList () ;
        outArgument_outHasCompilerArgument = var_entry_9173.readProperty_mHasCompilerArgument () ;
        outArgument_outReturnedType = var_entry_9173.readProperty_mReturnedType () ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_9009.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 225)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 227)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 227)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 227)), fixItArray5  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 226)) ;
          var_constructorFormalArgumentTypeList_9128.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, EnumFixItKind::fixItReplace, var_classFunctionMap_9009.getter_keyList (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 235))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 232)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 232)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 232)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 233)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 233)), fixItArray6  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 231)) ;
        var_constructorFormalArgumentTypeList_9128.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 239)).objectCompare (var_constructorFormalArgumentTypeList_9128.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 239)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 241)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 241)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 242)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 241)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 242)).add_operation (var_constructorFormalArgumentTypeList_9128.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 243)).getter_string (SOURCE_FILE ("expression-class-func.galgas4", 243)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 242)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 243)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 244)).getter_string (SOURCE_FILE ("expression-class-func.galgas4", 244)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 243)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 244)), fixItArray8  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 240)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    UpEnumerator_actualOutputArgumentList enumerator_10599 (constinArgument_inInitializerEffectiveParameterExpressions) ;
    UpEnumerator_functionSignature enumerator_10664 (var_constructorFormalArgumentTypeList_9128) ;
    while (enumerator_10599.hasCurrentObject () && enumerator_10664.hasCurrentObject ()) {
      {
      outArgument_outRequiredTypes.setter_append (enumerator_10664.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 249)) ;
      }
      GGS_semanticExpressionForGeneration var_exp_11099 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10599.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10664.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11099, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 250)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10664.current (HERE).readProperty_mFormalArgumentType (), var_exp_11099.readProperty_mResultType (), enumerator_10599.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_11099, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 259)) ;
      }
      outArgument_outConstructorEffectiveParameterList.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_exp_11099, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 265)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, enumerator_10664.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10599.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GGS_string temp_10 ;
          const GalgasBool test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_10664.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            temp_10 = enumerator_10664.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 268)) ;
          }else if (GalgasBool::boolFalse == test_11) {
            temp_10 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_11466 = GGS_string ("!").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 267)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, EnumFixItKind::fixItReplace, var_s_11466) ;
          inCompiler->emitSemanticError (enumerator_10599.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11466, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 272)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 272)), fixItArray12  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 271)) ;
        }
      }
      enumerator_10599.gotoNextObject () ;
      enumerator_10664.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       GGS_string & outArgument_outCppExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classFuncExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 296)) ;
  const GGS_classFuncExpressionForGeneration temp_1 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_12835 (temp_1.readProperty_requiredTypes ()) ;
  while (enumerator_12835.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12835.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 298)) ;
    enumerator_12835.gotoNextObject () ;
  }
  GGS_stringlist var_parameterList_12928 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_classFuncExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_12957 (temp_2.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_12957.hasCurrentObject ()) {
    GGS_string var_parameter_13191 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12957.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_13191, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 302)) ;
    var_parameterList_12928.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_parameter_13191, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 309)) ;
    enumerator_12957.gotoNextObject () ;
  }
  const GGS_classFuncExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_classFuncType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 311)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 311)) ;
  const GGS_classFuncExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string ("::class_func_").add_operation (temp_4.readProperty_classFuncName ().getter_identifierRepresentation (SOURCE_FILE ("expression-class-func.galgas4", 312)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 312)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 312)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 313)) ;
  UpEnumerator_stringlist enumerator_13456 (var_parameterList_12928) ;
  while (enumerator_13456.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_13456.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 315)) ;
    enumerator_13456.gotoNextObject () ;
    if (enumerator_13456.hasCurrentObject ()) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 316)) ;
    }
  }
  GGS_bool var_needsComma_13578 = GGS_bool (ComparisonKind::greaterThan, var_parameterList_12928.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 318)).objectCompare (GGS_uint (uint32_t (0U)))) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_classFuncExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_needsComma_13578.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 321)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 323)) COMMA_SOURCE_FILE ("expression-class-func.galgas4", 323)) ;
      }
      outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 324)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 324)) ;
      var_needsComma_13578 = GGS_bool (true) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_needsComma_13578.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_classFuncExpressionForGeneration temp_9 = this ;
      outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 328)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 328)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 328)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 328)) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_classFuncExpressionForGeneration temp_10 = this ;
    outArgument_outCppExpression.plusAssignOperation(extensionGetter_sourceFile (temp_10.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 330)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 330)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 330)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@collectionValueAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_collectionValueAST temp_0 = this ;
  UpEnumerator_collectionValueElementList enumerator_4322 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_4322.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4322.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 112)) ;
    enumerator_4322.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@collectionValueAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_4995 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_collectionValueAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_targetType_4995 = constinArgument_inType ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_collectionValueAST temp_2 = this ;
    var_targetType_4995 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 131)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_targetType_4995.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-primary-collection-value.galgas4", 134)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_collectionValueAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 135)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_4995, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 136)).readProperty_supportCollectionValue ().operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas4", 136)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_collectionValueAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (extensionGetter_definition (var_targetType_4995, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 138)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 138)).add_operation (GGS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 138)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 137)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GGS_initializerMap var_initializerMap_5504 = extensionGetter_definition (var_targetType_4995, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 141)).readProperty_initializerMap () ;
      GGS_functionSignature var_emptyArgumentList_5587 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_initializerMap_5504.getter_contains (extensionGetter_initializerSignature (var_emptyArgumentList_5587, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 143)) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 143)).operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas4", 143)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_collectionValueAST temp_10 = this ;
          const GGS_collectionValueAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 144)).add_operation (GGS_string (" has no @() initializer"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 144)), fixItArray12  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 144)) ;
        }
      }
      GGS_lstring var_nameForUsefulness_5831 = function_initializerNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4995, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 148)).readProperty_typeName (), extensionGetter_initializerSignature (var_emptyArgumentList_5587, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 149)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 147)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_5831 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 151)) ;
      }
      GGS_unifiedTypeMapEntry var_elementType_6106 = extensionGetter_definition (var_targetType_4995, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 153)).readProperty_typeForEnumeratedElement () ;
      GGS_collectionValueElementListForGeneration var_expressionListForGeneration_6218 = GGS_collectionValueElementListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_collectionValueAST temp_13 = this ;
      UpEnumerator_collectionValueElementList enumerator_6274 (temp_13.readProperty_mExpressionList ()) ;
      while (enumerator_6274.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expressionForGeneration_6581 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6274.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_elementType_6106, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_6581, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 156)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_elementType_6106, var_expressionForGeneration_6581.readProperty_mResultType (), enumerator_6274.current (HERE).readProperty_location (), var_expressionForGeneration_6581, inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 166)) ;
        }
        var_expressionListForGeneration_6218.plusPlusAssignOperation (GGS_collectionValueElementListForGeneration_2E_element::init_21__21_ (var_expressionForGeneration_6581, enumerator_6274.current (HERE).readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 172)) ;
        enumerator_6274.gotoNextObject () ;
      }
      const GGS_collectionValueAST temp_14 = this ;
      outArgument_outExpression = GGS_expressionCollectionForGeneration::init_21__21__21_ (var_targetType_4995, temp_14.readProperty_mEndOfCollectionValue (), var_expressionListForGeneration_6218, inCompiler COMMA_HERE) ;
      GGS_lstring var_typeUsefulnessName_7146 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4995, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 180)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 180)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_7146 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 181)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@expressionCollectionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 209)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-collection-value.galgas4", 211)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 211)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 212)) ;
  const GGS_expressionCollectionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 214)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 214)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 214)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 214)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 214)) ;
  const GGS_expressionCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 215)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 215)) ;
  const GGS_expressionCollectionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::init (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 217)) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 217)) ;
  }
  const GGS_expressionCollectionForGeneration temp_4 = this ;
  UpEnumerator_collectionValueElementListForGeneration enumerator_9041 (temp_4.readProperty_expressionList ()) ;
  while (enumerator_9041.hasCurrentObject ()) {
    GGS_string var_argumentCppName_9240 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_9041.current (HERE).readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_9240, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 220)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (".plusPlusAssignOperation ("), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 227)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 227)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(var_argumentCppName_9240.add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 228)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 228)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (enumerator_9041.current (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 229)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 229)) ;
    enumerator_9041.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_3373 ;
  GGS_string var_sourceVariableCppName_3398 ;
  GGS_string var_nameForCheckingFormalParameterUsing_3440 ;
  {
  const GGS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_3373, var_sourceVariableCppName_3398, var_nameForCheckingFormalParameterUsing_3440, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 72)) ;
  }
  const GGS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_3373, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_3398, var_nameForCheckingFormalParameterUsing_3440, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 106)) ;
  const GGS_varInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = temp_1.readProperty_mCppVarName () ;
  {
  const GGS_varInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 108)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                 GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_3648 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 86)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3648 COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 87)) ;
  }
  GGS_bool var_optionComponentIsPredefined_3958 ;
  GGS_commandLineOptionMap var_boolOptionMap_4018 ;
  GGS_commandLineOptionMap var_uintOptionMap_4064 ;
  GGS_commandLineOptionMap var_stringOptionMap_4110 ;
  const GGS_optionExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_3958, var_boolOptionMap_4018, var_uintOptionMap_4064, var_stringOptionMap_4110, inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 89)) ;
  const GGS_optionExpressionAST temp_2 = this ;
  GGS_bool var_found_4142 = var_boolOptionMap_4018.getter_contains (temp_2.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 96)) ;
  GGS_unifiedTypeMapEntry var_returnedType_4231 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_4142.operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 98)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_optionExpressionAST temp_4 = this ;
      var_found_4142 = var_uintOptionMap_4064.getter_contains (temp_4.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 99)) ;
      var_returnedType_4231 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType () ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_found_4142.operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 102)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_optionExpressionAST temp_6 = this ;
      var_found_4142 = var_stringOptionMap_4110.getter_contains (temp_6.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 103)) ;
      var_returnedType_4231 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_found_4142.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_optionExpressionAST temp_9 = this ;
        test_8 = GGS_bool (ComparisonKind::equal, temp_9.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("value"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_optionExpressionAST temp_10 = this ;
          const GGS_optionExpressionAST temp_11 = this ;
          const GGS_optionExpressionAST temp_12 = this ;
          outArgument_outExpression = GGS_optionValueExpressionForGeneration::init_21__21__21__21__21_ (var_returnedType_4231, temp_10.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_3958, temp_11.readProperty_mOptionComponentName ().readProperty_string (), temp_12.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_optionExpressionAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::equal, temp_14.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("char"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            const GGS_optionExpressionAST temp_15 = this ;
            const GGS_optionExpressionAST temp_16 = this ;
            const GGS_optionExpressionAST temp_17 = this ;
            outArgument_outExpression = GGS_optionCharExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_15.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_3958, temp_16.readProperty_mOptionComponentName ().readProperty_string (), temp_17.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_13) {
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            const GGS_optionExpressionAST temp_19 = this ;
            test_18 = GGS_bool (ComparisonKind::equal, temp_19.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              const GGS_optionExpressionAST temp_20 = this ;
              const GGS_optionExpressionAST temp_21 = this ;
              const GGS_optionExpressionAST temp_22 = this ;
              outArgument_outExpression = GGS_optionStringExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_20.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_3958, temp_21.readProperty_mOptionComponentName ().readProperty_string (), temp_22.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_23 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_23) {
              const GGS_optionExpressionAST temp_24 = this ;
              test_23 = GGS_bool (ComparisonKind::equal, temp_24.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("comment"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_23) {
                const GGS_optionExpressionAST temp_25 = this ;
                const GGS_optionExpressionAST temp_26 = this ;
                const GGS_optionExpressionAST temp_27 = this ;
                outArgument_outExpression = GGS_optionCommentExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_25.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_3958, temp_26.readProperty_mOptionComponentName ().readProperty_string (), temp_27.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_23) {
              const GGS_optionExpressionAST temp_28 = this ;
              GenericArray <FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (temp_28.readProperty_mOptionGetterName ().readProperty_location (), GGS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray29  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 136)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    GGS_stringlist var_s_6100 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    UpEnumerator_commandLineOptionMap enumerator_6125 (var_boolOptionMap_4018) ;
    while (enumerator_6125.hasCurrentObject ()) {
      var_s_6100.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_6125.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 141)) ;
      enumerator_6125.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_6193 (var_uintOptionMap_4064) ;
    while (enumerator_6193.hasCurrentObject ()) {
      var_s_6100.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_6193.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 144)) ;
      enumerator_6193.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_6261 (var_stringOptionMap_4110) ;
    while (enumerator_6261.hasCurrentObject ()) {
      var_s_6100.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_6261.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 147)) ;
      enumerator_6261.gotoNextObject () ;
    }
    const GGS_optionExpressionAST temp_30 = this ;
    const GGS_optionExpressionAST temp_31 = this ;
    const GGS_optionExpressionAST temp_32 = this ;
    GenericArray <FixItDescription> fixItArray33 ;
    appendFixItActions (fixItArray33, EnumFixItKind::fixItReplace, var_s_6100) ;
    inCompiler->emitSemanticError (temp_30.readProperty_mOptionEntryName ().readProperty_location (), GGS_string ("the '").add_operation (temp_31.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 150)).add_operation (GGS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 150)).add_operation (temp_32.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 150)).add_operation (GGS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 150)), fixItArray33  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 149)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionValueExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionValueExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 174)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionValueExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 175)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 175))  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 175)) ;
    }
  }
  const GGS_optionValueExpressionForGeneration temp_3 = this ;
  const GGS_optionValueExpressionForGeneration temp_4 = this ;
  const GGS_optionValueExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 177)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 177)).add_operation (GGS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 177)).add_operation (temp_4.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 177)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 177)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 177)).add_operation (temp_5.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 178)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 178)).add_operation (GGS_string (".readProperty_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 178)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionCharExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                        GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionCharExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 197)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionCharExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 198)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 198))  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 198)) ;
    }
  }
  const GGS_optionCharExpressionForGeneration temp_3 = this ;
  const GGS_optionCharExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 200)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 200)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 200)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 201)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 201)).add_operation (GGS_string (".readProperty_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 201)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionStringExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                          GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionStringExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 220)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionStringExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 221)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 221))  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 221)) ;
    }
  }
  const GGS_optionStringExpressionForGeneration temp_3 = this ;
  const GGS_optionStringExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_string (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 223)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 223)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 223)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 224)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 224)).add_operation (GGS_string (".readProperty_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 224)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionCommentExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionCommentExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 235)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionCommentExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 236)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 236))  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 236)) ;
    }
  }
  const GGS_optionCommentExpressionForGeneration temp_3 = this ;
  const GGS_optionCommentExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 238)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 238)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 238)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 239)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 239)).add_operation (GGS_string (".readProperty_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 239)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                      GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                      GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionAST temp_0 = this ;
  const GGS_literalCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mCharacter ().readProperty_location (), temp_1.readProperty_mCharacter ().readProperty_char (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (utf32 (").add_operation (temp_0.readProperty_mCharacter ().getter_uint (SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)).getter_string (SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionAST temp_0 = this ;
  const GGS_literalBigIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalUIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_uint (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 171)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 171)).add_operation (GGS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalUInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_uint_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 188)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 188)).add_operation (GGS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 188)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalSIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_sint (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 205)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 205)).add_operation (GGS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 205)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalSInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_sint_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 222)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 222)).add_operation (GGS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 239)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 239)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 239)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 240)) COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 240)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 241)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 241)) ;
  const GGS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 242)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 242)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 242)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 242)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_3940 = GGS_string::makeEmptyString () ;
  const GGS_literalStringExpressionAST temp_0 = this ;
  UpEnumerator_stringlist enumerator_3954 (temp_0.readProperty_mStringSequence ()) ;
  while (enumerator_3954.hasCurrentObject ()) {
    var_s_3940.plusAssignOperation(enumerator_3954.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 93)) ;
    enumerator_3954.gotoNextObject () ;
  }
  const GGS_literalStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_3940, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_literalStringExpressionForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mString ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCppExpression = GGS_string ("GGS_string::makeEmptyString ()") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_literalStringExpressionForGeneration temp_2 = this ;
    outArgument_outCppExpression = GGS_string ("GGS_string (").add_operation (temp_2.readProperty_mString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("expression-primary-literal-string.galgas4", 117)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 117)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 117)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueIntrospectionExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_3846 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 91)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3846 COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 92)) ;
  }
  const GGS_lexiqueIntrospectionExpressionAST temp_1 = this ;
  GGS_bool joker_4175_7 ; // Joker input parameter
  GGS_terminalMap joker_4175_6 ; // Joker input parameter
  GGS_indexingListAST joker_4175_5 ; // Joker input parameter
  GGS_terminalDeclarationListAST joker_4175_4 ; // Joker input parameter
  GGS_lexicalAttributeListAST joker_4175_3 ; // Joker input parameter
  GGS_lexicalStyleListAST joker_4175_2 ; // Joker input parameter
  GGS_lexicalListDeclarationListAST joker_4175_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueComponentName (), joker_4175_7, joker_4175_6, joker_4175_5, joker_4175_4, joker_4175_3, joker_4175_2, joker_4175_1, inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 94)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_lexiqueIntrospectionExpressionAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mLexiqueGetterName ().readProperty_string ().objectCompare (GGS_string ("symbols"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_lexiqueIntrospectionExpressionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mLexiqueGetterName ().readProperty_location (), GGS_string ("unknown func"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 100)) ;
    }
  }
  const GGS_lexiqueIntrospectionExpressionAST temp_6 = this ;
  const GGS_lexiqueIntrospectionExpressionAST temp_7 = this ;
  const GGS_lexiqueIntrospectionExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_lexiqueIntrospectionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-primary-lexique.galgas4", 104)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 104)), temp_6.readProperty_mLexiqueComponentName ().readProperty_location (), temp_7.readProperty_mLexiqueComponentName ().readProperty_string (), temp_8.readProperty_mLexiqueGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueIntrospectionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                        GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueIntrospectionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas4", 128)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 128))  COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 128)) ;
  const GGS_lexiqueIntrospectionForGeneration temp_1 = this ;
  const GGS_lexiqueIntrospectionForGeneration temp_2 = this ;
  const GGS_lexiqueIntrospectionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas4", 129)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 129)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 129)).add_operation (temp_2.readProperty_mLexiqueGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas4", 130)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 129)).add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 130)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 131)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 131)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 131)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4125 ;
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-minus.galgas4", 90)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4125, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 87)) ;
  GGS_unifiedTypeMapEntry var_type_4201 = var_expression_4125.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_4240 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_4125.ptr ())) ;
    if (nullptr == var_exp_4240.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_4240.readProperty_mResultType (), var_exp_4240.readProperty_mLocation (), var_exp_4240.readProperty_mValue ().operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 101)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_4201, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 104)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas4", 104)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 104)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas4", 104)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_unaryMinusExpressionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4201, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 106)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 106)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 106)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 105)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_unaryMinusExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_4201, temp_5.readProperty_mOperatorLocation (), var_expression_4125, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 133)) ;
  GGS_string var_operand_6065 ;
  const GGS_unaryMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_6065, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 135)) ;
  const GGS_unaryMinusExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_6065.add_operation (GGS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 144)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 144)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4090 ;
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-not.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4090, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4166 = var_expression_4090.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (nullptr != dynamic_cast <const cPtr_trueExpressionForGeneration *> (var_expression_4090.ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_falseExpressionForGeneration *> (var_expression_4090.ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 101)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("expression-not.galgas4", 101)) COMMA_SOURCE_FILE ("expression-not.galgas4", 101)).operator_not (SOURCE_FILE ("expression-not.galgas4", 101)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_notExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas4", 102)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_4166, temp_8.readProperty_mOperatorLocation (), var_expression_4090, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 131)) ;
  GGS_string var_operand_5858 ;
  const GGS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5858, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 133)) ;
  const GGS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5858.add_operation (GGS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4163 ;
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4163, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4239 = var_expression_4163.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4239, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)) COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryWrappingMinusExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4239, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryWrappingMinusExpressionForGeneration::init_21__21__21_ (var_type_4239, temp_4.readProperty_mOperatorLocation (), var_expression_4163, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 126)) ;
  GGS_string var_operand_5666 ;
  const GGS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5666, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 128)) ;
  outArgument_outCppExpression = var_operand_5666.add_operation (GGS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 136)) ;
}

