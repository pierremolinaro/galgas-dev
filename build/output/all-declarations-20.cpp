#include "all-declarations-20.h"
//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@s64PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_s_36__34_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("min"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 52)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@s64PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_s_36__34_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 65)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 101)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 108)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("u32"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("s64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 134)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("s64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 141)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("s64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 148)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("s64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 155)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@s64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_s_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_s_36__34__5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 167)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@charPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_charPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-char.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-char.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-char.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@charPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 37)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 38)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Length"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf32CharConstantRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 52)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 59)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isalnum"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isalpha"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("iscntrl"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isdigit"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("islower"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isupper"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 101)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isxdigit"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 108)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeLetter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeMark"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeNumber"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 129)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeSeparator"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeCommand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodePunctuation"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 150)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeSymbol"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 157)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 164)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeToLower"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 171)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeToUpper"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 178)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@charPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("replacementCharacter"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 192)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeCharacterWithUnsigned"), GGS_string ("u32"), GGS_string ("inValue"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 199)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeCharacterFromRawKeyboard"), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 208)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@charPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_charPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_char_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 220)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u32PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_u_33__32_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_u_33__32__5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u32PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_u_33__32_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 42)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u32PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_33__32_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("random"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 57)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("valueWithMask"), GGS_string ("u32"), GGS_string ("inLowerIndex"), GGS_string ("u32"), GGS_string ("inUpperIndex"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 64)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u32PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_33__32_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 82)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 96)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 110)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lsbIndex"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 117)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantBitCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 124)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("oneBitCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 131)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 138)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 145)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("u32"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 152)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 163)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeValueAssigned"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 170)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("u32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 184)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("u32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 191)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("u32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 198)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("u32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 205)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u32PredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_33__32_PredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setRandomSeed"), GGS_string ("u32"), GGS_string ("inSeed"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 219)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_filewrapperPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@filewrapperPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_filewrapperPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_filewrapper_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 36)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_setterMap & outArgument_outSetterMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inDirectoryPath"), GGS_string ("setCurrentDirectory"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 44)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_getterMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 58)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allTextFilePaths"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 59)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allBinaryFilePaths"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allDirectoryPaths"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("currentDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allFilePathsWithExtension"), GGS_string ("string"), GGS_string ("inExtension"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoryExistsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("bool"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileExistsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("bool"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 101)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("textFileContentsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 108)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryFileContentsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("data"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("absolutePathForPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoriesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("[string]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 129)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryFilesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("[string]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("textFilesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("[string]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 143)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@doublePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_doublePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 34)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@doublePredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 41)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 42)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 49)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 56)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 63)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 70)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cos"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 77)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sin"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 84)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("tan"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 91)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("log10"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 98)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("log2"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("logn"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("exp"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 119)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cosDegree"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sinDegree"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("tanDegree"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 140)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sqrt"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 147)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("power"), GGS_string ("f64"), GGS_string ("inExponant"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 154)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryImage"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 161)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@doublePredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("pi"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 175)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doubleWithBinaryImage"), GGS_string ("u64"), GGS_string ("inBinaryImage"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 182)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@doublePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_doublePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_f_36__34__5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 196)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@applicationPredefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum cPtr_applicationPredefinedTypeAST::getter_typeKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeKindEnum result ; // Returned variable
  result = GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type-application.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@applicationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_applicationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_application_5F_package (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 36)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@applicationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_applicationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-application.galgas4", 42)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@applicationPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GGS_classFunctionMap & outArgument_outMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compilationMode"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("runningOnWindows"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 57)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("runningOnUnix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 64)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("errorCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 71)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("warningCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 78)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("system"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 85)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("projectVersionString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 92)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("galgasVersionString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 99)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("keywordIdentifierSet"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 279)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("keywordListForIdentifier"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 286)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@applicationPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("exit"), GGS_string ("u32"), GGS_string ("inErrorCode"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 302)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@boolPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_boolPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 31)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@boolPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_boolPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_bool_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 37)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 51)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 52)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("ocString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 59)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 94)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dataPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ cPtr_dataPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ; // Returned variable
  GGS__5B__5B_formalInputParameterAST_5D__5D_ temp_0 = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 30)) ;
  temp_0.plusPlusAssignOperation (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 30)) ;
  result = temp_0 ;
//---
  return result ;
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
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 59)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 59)) COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 59)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                            GGS__5B_enumerationDescriptor_5D_ & outArgument_outEnumerationList,
                                                            GGS_string & outArgument_outEnumeratedTypeName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_enumerationDescriptor_5D_ temp_0 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 67)) ;
  outArgument_outEnumerationList = temp_0 ;
  outArgument_outEnumeratedTypeName = GGS_string ("u8") ;
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
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 76)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 84)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_3737 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3827 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_t_3827, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 93)) ;
  }
  var_argList_3737.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 94)), var_t_3827, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 94)), GGS_string ("inFilePath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 94)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_t_3827, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 95)) ;
  }
  var_argList_3737.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 96)), var_t_3827, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 96)), GGS_string ("outFileModified"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 96)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_string ("writeToFileWhenDifferentContents").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 98)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 99)), var_argList_3737, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 101)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 103)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 97)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 113)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cStringRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 120)) ;
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
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u8"), GGS_string ("inValue"), GGS_string ("appendU8"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 134)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u16"), GGS_string ("inValue"), GGS_string ("appendU16BE"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 142)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u16"), GGS_string ("inValue"), GGS_string ("appendU16LE"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 150)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("inValue"), GGS_string ("appendUIntBE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 158)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("inValue"), GGS_string ("appendUIntLE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 166)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inValue"), GGS_string ("appendUTF8String"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 174)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("data"), GGS_string ("inValue"), GGS_string ("appendData"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 182)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dataPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_dataPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_data_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 195)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_stringsetPredefinedTypeAST::getter_supportsCollectionValue (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ cPtr_stringsetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ; // Returned variable
  GGS__5B_formalInputParameterAST_5D_ var_defaultInitializer_1822 = GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_formalInputParameterAST_5D_ temp_0 = GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterAST::init_21__21__21__21__21_ (GGS_string ("stringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), function_makeArrayTypeLName (GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), GGS_string ("inStringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), GGS_bool (false), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)) ;
  GGS__5B_formalInputParameterAST_5D_ var_initializerFromStringArray_1881 = temp_0 ;
  GGS__5B_formalInputParameterAST_5D_ temp_1 = GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)) ;
  temp_1.plusPlusAssignOperation (GGS_formalInputParameterAST::init_21__21__21__21__21_ (GGS_string ("lstringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)), GGS_string ("[lstring]").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)), GGS_string ("inLStringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)), GGS_bool (false), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)) ;
  GGS__5B_formalInputParameterAST_5D_ var_initializerFromLStringArray_2061 = temp_1 ;
  GGS__5B__5B_formalInputParameterAST_5D__5D_ temp_2 = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  temp_2.plusPlusAssignOperation (var_defaultInitializer_1822  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  temp_2.plusPlusAssignOperation (var_initializerFromStringArray_1881  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  temp_2.plusPlusAssignOperation (var_initializerFromLStringArray_2061  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  result = temp_2 ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_stringsetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_stringset_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 49)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_stringsetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 55)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 55)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)).operator_or (GGS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 59)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)) ;
//---
  return result ;
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
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithStringArray"), GGS_string ("[string]"), GGS_string ("inStringArray"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 83)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithLStringArray"), GGS_string ("[lstring]"), GGS_string ("inLStringArray"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 92)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_setterMap & outArgument_outSetterMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringType_4413 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_4413, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 107)) ;
  }
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_0 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)) ;
  temp_0.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)), var_stringType_4413, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)), GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)) ;
  outArgument_outSetterMap.setter_insertKey (GGS_string ("removeKey").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 110)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 111)), temp_0, GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 114)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 109)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inValue"), GGS_string ("insert"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 117)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS__5B_enumerationDescriptor_5D_ & outArgument_outEnumerationList,
                                                                 GGS_string & outArgument_outEnumeratedType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_5299 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringTypeIndex_5299, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 132)) ;
  }
  outArgument_outEnumerationList = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_stringTypeIndex_5299, GGS_string ("key"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 134)) ;
  outArgument_outEnumeratedType = GGS_string ("string") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 142)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("contains"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 150)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("any"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 157)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("array"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 164)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                    const GGS__5B_nonterminalDeclarationAST_5D_ constinArgument_inNonterminalDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_nonterminalDeclarationAST_5D_ enumerator_1611 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_1611.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_1654 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_1611.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_1611.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_1611.current (HERE).readProperty_mNonterminalName ().readProperty_location (), enumerator_1611.current (HERE).readProperty_mLabels (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_1611.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 32)), var_entry_1654.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 29)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_1611.current (HERE).readProperty_mNonterminalName (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 38)), function_transformLabelMap (enumerator_1611.current (HERE).readProperty_mLabels (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 39)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 36)) ;
      }
    }
    enumerator_1611.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                                const GGS__5B_syntaxRuleAST_5D_ constinArgument_inRuleList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_2540 (constinArgument_inRuleList) ;
  while (enumerator_2540.hasCurrentObject ()) {
    GGS__5B_nonTerminalLabelAST_5D_ var_nonTerminalLabelListAST_2562 = GGS__5B_nonTerminalLabelAST_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_2638 (enumerator_2540.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_2638.hasCurrentObject ()) {
      var_nonTerminalLabelListAST_2562.plusPlusAssignOperation (GGS_nonTerminalLabelAST::init_21__21__21_ (enumerator_2638.current (HERE).readProperty_mLabelName (), enumerator_2638.current (HERE).readProperty_mFormalArguments (), enumerator_2638.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 52)) ;
      enumerator_2638.gotoNextObject () ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_2814 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_2540.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_2540.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_2540.current (HERE).readProperty_mNonterminalName ().readProperty_location (), var_nonTerminalLabelListAST_2562, ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_2540.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 62)), var_entry_2814.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 59)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_2540.current (HERE).readProperty_mNonterminalName (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 68)), function_transformLabelMap (var_nonTerminalLabelListAST_2562, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 69)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 66)) ;
      }
    }
    enumerator_2540.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList_3F__3F__3F__26__26__26_ (const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                    const GGS_lstring constinArgument_inSyntaxComponentName,
                                                    const GGS__5B_syntaxRuleAST_5D_ constinArgument_inRuleList,
                                                    GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                    GGS__5B_syntaxComponentForGrammarAnalysis_5D_ & ioArgument_ioSyntaxComponentListForGrammarAnalysis,
                                                    GGS_u_33__32_ & ioArgument_ioAddedNonTerminalCount,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_productionRuleForGrammarAnalysis_5D_ var_productionRulesList_3922 = GGS__5B_productionRuleForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_3998 (constinArgument_inRuleList) ;
  while (enumerator_3998.hasCurrentObject ()) {
    GGS_u_33__32_ var_nonTerminalIndex_4091 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_4109 ; // Joker input parameter
    constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_3998.current (HERE).readProperty_mNonterminalName (), var_nonTerminalIndex_4091, joker_4109, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 85)) ;
    GGS__5B_syntaxInstructionAST_5D_ var_parsedSyntaxInstructionList_4196 = enumerator_3998.current (HERE).readProperty_mLabelList ().getter_first (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 87)).readProperty_mSyntaxInstructionList () ;
    GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_instructionList_4315 = GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_parsedSyntaxInstructionList_4196, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalMapForGrammarAnalysis, ioArgument_ioAddedNonTerminalCount, var_instructionList_4315, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 90)) ;
    }
    var_productionRulesList_3922.plusPlusAssignOperation (GGS_productionRuleForGrammarAnalysis::init_21__21__21__21_ (enumerator_3998.current (HERE).readProperty_mNonterminalName (), var_nonTerminalIndex_4091, var_instructionList_4315, var_productionRulesList_3922.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 102)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 98)) ;
    enumerator_3998.gotoNextObject () ;
  }
  ioArgument_ioSyntaxComponentListForGrammarAnalysis.plusPlusAssignOperation (GGS_syntaxComponentForGrammarAnalysis::init_21__21_ (var_productionRulesList_3922, constinArgument_inSyntaxComponentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 105)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap_3F__3F__3F__3F_ (const GGS_location constinArgument_inNonTerminalLocation,
                                            const GGS__5B_nonTerminalLabelAST_5D_ constinArgument_inLabels,
                                            const GGS_location constinArgument_inOriginalNonTerminalLocation,
                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_labelStringSet_5356 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_5393 (constinArgument_inLabels) ;
  while (enumerator_5393.hasCurrentObject ()) {
    var_labelStringSet_5356.plusPlusAssignOperation (enumerator_5393.current (HERE).readProperty_mLabelName ().readProperty_string ()  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 119)) ;
    GGS__5B_signatureElementForGrammarAnalysis_5D_ var_formalParametersList_5538 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_5393.current (HERE).readProperty_mLabelName (), var_formalParametersList_5538, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 120)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_5393.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 121)).objectCompare (var_formalParametersList_5538.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 121)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_5393.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 124)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string::makeEmptyString () ;
        }
        GGS_string temp_3 ;
        const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, var_formalParametersList_5538.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 128)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          temp_3 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_4) {
          temp_3 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5393.current (HERE).readProperty_mLabelName ().readProperty_location (), enumerator_5393.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 122)).getter_string (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 122)).add_operation (GGS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 122)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 123)).add_operation (GGS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 124)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_5393.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 126)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 126)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 125)).add_operation (GGS_string (" names "), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 126)).add_operation (var_formalParametersList_5538.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 127)).getter_string (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 127)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 127)).add_operation (GGS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 127)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 127)), fixItArray5  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 122)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_6160 (enumerator_5393.current (HERE).readProperty_mFormalArgumentList ()) ;
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_6212 (var_formalParametersList_5538) ;
      while (enumerator_6160.hasCurrentObject () && enumerator_6212.hasCurrentObject ()) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_6212.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().objectCompare (enumerator_6160.current (HERE).readProperty_mFormalArgumentPassingMode ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_6212.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_location (), GGS_string (" this formal parameter is declared with '").add_operation (extensionGetter_string (enumerator_6212.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 134)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 134)).add_operation (GGS_string ("' passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 135)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_5393.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 137)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 137)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 136)).add_operation (GGS_string (" is declared with '"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 137)).add_operation (extensionGetter_string (enumerator_6160.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 138)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 138)).add_operation (GGS_string ("' passing mode"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 138)), fixItArray7  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 133)) ;
          }
        }
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_6212.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_string ().objectCompare (enumerator_6160.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_6212.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_location (), GGS_string (" this formal parameter is declared of '@").add_operation (enumerator_6212.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 143)).add_operation (GGS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 144)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_5393.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 146)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 146)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 145)).add_operation (GGS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 146)).add_operation (enumerator_6160.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 147)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 147)), fixItArray9  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 142)) ;
          }
        }
        enumerator_6160.gotoNextObject () ;
        enumerator_6212.gotoNextObject () ;
      }
    }
    enumerator_5393.gotoNextObject () ;
  }
  UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_7541 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis) ;
  while (enumerator_7541.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_labelStringSet_5356.getter_contains (enumerator_7541.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 155)).operator_not (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 155)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GGS_string ("this non terminal does not declare the '").add_operation (enumerator_7541.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 157)).add_operation (GGS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 157)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 158)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 157)).add_operation (GGS_string (" does"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 158)), fixItArray11  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 156)) ;
      }
    }
    enumerator_7541.gotoNextObject () ;
  }
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
                                                                    const GGS__5B_prologueEpilogueAST_5D_ constinArgument_inPrologueList,
                                                                    GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_usefulnessName_2537 = function_beforeNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 52)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 52)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_2537, var_usefulnessName_2537, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 53)) ;
  }
  ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_2537  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 54)) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_2746 = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_prologueEpilogueAST_5D_ enumerator_2842 (constinArgument_inPrologueList) ;
  while (enumerator_2842.hasCurrentObject ()) {
    GGS__5B_semanticInstructionForGeneration_5D_ var_blockSemanticInstructionListForGeneration_3167 ;
    {
    GGS__5B_formalParameterForGeneration_5D_ joker_3216 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_2537, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_HERE), enumerator_2842.current (HERE).readProperty_mInstructionList (), enumerator_2842.current (HERE).readProperty_mEndOfInstructionList (), var_blockSemanticInstructionListForGeneration_3167, joker_3216, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 58)) ;
    }
    var_semanticInstructionListForGeneration_2746.plusPlusAssignOperation (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_3167, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 69)) ;
    enumerator_2842.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-before"), GGS_string ("before"), GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_2746, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 74)) ;
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
                                                                    const GGS__5B_programRuleAST_5D_ constinArgument_inProgramRules,
                                                                    GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_u_33__32_ var_ruleIndex_4365 = GGS_u_33__32_ (uint32_t (0U)) ;
  UpEnumerator__5B_programRuleAST_5D_ enumerator_4400 (constinArgument_inProgramRules) ;
  while (enumerator_4400.hasCurrentObject ()) {
    GGS_lstring var_usefulnessName_4426 = function_rootRuleNameForUsefulEntitiesGraph (enumerator_4400.current (HERE).readProperty_mSourceFileExtension (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 101)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_4426, var_usefulnessName_4426, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 102)) ;
    }
    ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_4426  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 103)) ;
    GGS__5B_formalParameterAST_5D_ temp_0 = GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 105)) ;
    temp_0.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("programComponentCompilation.galgas4", 105)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("programComponentCompilation.galgas4", 105)), GGS_lstring::init_21__21_ (GGS_string ("lstring"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 105)), inCompiler COMMA_HERE), enumerator_4400.current (HERE).readProperty_mSourceFileVariableName (), enumerator_4400.current (HERE).readProperty_mSourceFileVariableNameIsUnused (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 105)) ;
    GGS__5B_formalParameterAST_5D_ var_argumentList_4660 = temp_0 ;
    GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_5065 ;
    GGS__5B_formalParameterForGeneration_5D_ var_routineSignature_5114 ;
    {
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_4426, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_argumentList_4660, enumerator_4400.current (HERE).readProperty_mInstructionList (), enumerator_4400.current (HERE).readProperty_mEndOfInstructionList (), var_semanticInstructionListForGeneration_5065, var_routineSignature_5114, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 107)) ;
    }
    ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-programrule"), GGS_string ("programRule_").add_operation (var_ruleIndex_4365.getter_string (SOURCE_FILE ("programComponentCompilation.galgas4", 122)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 122)), var_routineSignature_5114, GGS_bool (true), var_semanticInstructionListForGeneration_5065, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 118)) ;
    var_ruleIndex_4365.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 127)) ;
    enumerator_4400.gotoNextObject () ;
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
                                                                   const GGS__5B_prologueEpilogueAST_5D_ constinArgument_inEpilogueList,
                                                                   GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_usefulnessName_6159 = function_afterNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 145)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 145)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_6159, var_usefulnessName_6159, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 146)) ;
  }
  ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_6159  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 147)) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_6402 = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_prologueEpilogueAST_5D_ enumerator_6463 (constinArgument_inEpilogueList) ;
  while (enumerator_6463.hasCurrentObject ()) {
    GGS__5B_semanticInstructionForGeneration_5D_ var_blockSemanticInstructionListForGeneration_6788 ;
    {
    GGS__5B_formalParameterForGeneration_5D_ joker_6837 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_6159, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_HERE), enumerator_6463.current (HERE).readProperty_mInstructionList (), enumerator_6463.current (HERE).readProperty_mEndOfInstructionList (), var_blockSemanticInstructionListForGeneration_6788, joker_6837, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 151)) ;
    }
    var_semanticInstructionListForGeneration_6402.plusPlusAssignOperation (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_6788, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 162)) ;
    enumerator_6463.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-after"), GGS_string ("after"), GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_6402, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 165)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramComponentGalgas3&&????&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramComponentGalgas_33__26__26__3F__3F__3F__3F__26__3F__21_ (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GGS__5B_prologueEpilogueAST_5D_ constinArgument_inPrologueList,
                                                                                    const GGS__5B_programRuleAST_5D_ constinArgument_inProgramRules,
                                                                                    const GGS__5B_prologueEpilogueAST_5D_ constinArgument_inEpilogueList,
                                                                                    const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    const GGS_string constinArgument_inProjectVersionString,
                                                                                    GGS_programComponentForGeneration & outArgument_outProgramComponentForGeneration,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProgramComponentForGeneration.drop () ; // Release 'out' argument
  GGS_analysisContext var_analysisContext_8110 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, function_buildPredefinedTypes (ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 196)), GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("programComponentCompilation.galgas4", 198)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS__5B_semanticDeclarationForGeneration_5D_ var_decoratedDeclarationListForGeneration_8397 = GGS__5B_semanticDeclarationForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8110, ioArgument_ioTypeMap, constinArgument_inPrologueList, var_decoratedDeclarationListForGeneration_8397, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 203)) ;
  }
  {
  routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8110, ioArgument_ioTypeMap, constinArgument_inEpilogueList, var_decoratedDeclarationListForGeneration_8397, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 212)) ;
  }
  {
  routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8110, ioArgument_ioTypeMap, constinArgument_inProgramRules, var_decoratedDeclarationListForGeneration_8397, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 221)) ;
  }
  GGS_stringset var_inclusionSet_9155 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_beforeAfterRulesString_9180 = GGS_string::makeEmptyString () ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_9223 (var_decoratedDeclarationListForGeneration_8397) ;
  while (enumerator_9223.hasCurrentObject ()) {
    var_beforeAfterRulesString_9180.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_9223.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 233)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 233)) ;
    GGS_string var_code_9412 ;
    callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_9223.current (HERE).ptr (), ioArgument_ioTypeMap, var_inclusionSet_9155, var_code_9412, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 234)) ;
    var_beforeAfterRulesString_9180.plusAssignOperation(var_code_9412, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 235)) ;
    enumerator_9223.gotoNextObject () ;
  }
  UpEnumerator__5B_programRuleAST_5D_ enumerator_9477 (constinArgument_inProgramRules) ;
  while (enumerator_9477.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_9477.current (HERE).readProperty_mReferenceGrammar ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_inclusionSet_9155.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (enumerator_9477.current (HERE).readProperty_mReferenceGrammar ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("programComponentCompilation.galgas4", 239)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 239))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 239)) ;
      }
    }
    enumerator_9477.gotoNextObject () ;
  }
  GGS_string var_cppContents_9660 = GGS_programFileGenerationTemplate::class_func_programFileImplementation (GGS_string ("program"), GGS__5B_string_5D_::init (inCompiler COMMA_HERE), var_beforeAfterRulesString_9180, constinArgument_inProgramRules, constinArgument_inProjectVersionString, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 242)) ;
  outArgument_outProgramComponentForGeneration = GGS_programComponentForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21_ (GGS_string ("zprogram"), GGS_bool (false), GGS_string ("program"), var_inclusionSet_9155, var_cppContents_9660, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalOrExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 37)) ;
  result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 38)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 39)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 39)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterIntervalMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  result = GGS_string ("testForInputUTF32CharRange (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 49)) ;
  result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 51)) ;
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 52)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result = GGS_string ("testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 60)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 60)).add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 60)) ;
  result.plusAssignOperation(GGS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 61)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringNotMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 69)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 69)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 69)) ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 70)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 70)) ;
  result.plusAssignOperation(GGS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 71)) ;
  result.plusAssignOperation(constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 72)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 72)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 72)) ;
  const GGS_lexicalStringNotMatchAST temp_1 = this ;
  result.plusAssignOperation(temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 73)) ;
  result.plusAssignOperation(GGS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 74)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("testForInputUTF32Char (") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 83)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 83)) ;
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 84)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterSetMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result = GGS_string ("testForChar_").add_operation (temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 92)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 92)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result = GGS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 107)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 107)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 114)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueGeneration.galgas4", 120)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("previousChar ()") ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result = GGS_string ("::scanner_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 134)).add_operation (GGS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 134)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ enumerator_6120 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_6120.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6120.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 136)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 136)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 136)) ;
    enumerator_6120.gotoNextObject () ;
  }
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 138)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateDefaultSendCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result = GGS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 155)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 155)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 155)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalErrorByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalErrorByDefaultAST temp_0 = this ;
  result = GGS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 163)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 163)).add_operation (temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 163)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 163)) ;
//---
  return result ;
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
  GGS_string result ; // Returned variable
  GGS_sortedTokenArray var_tokenSortedList_8245 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_8236 ; // Joker input parameter
  GGS_bool joker_8262 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_8236, var_tokenSortedList_8245, joker_8262, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 184)) ;
  result = GGS_string::makeEmptyString () ;
  DownEnumerator_sortedTokenArray enumerator_8297 (var_tokenSortedList_8245) ;
  while (enumerator_8297.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 187)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 187)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 187)) ;
    result.plusAssignOperation(enumerator_8297.current (HERE).readProperty_mName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 188)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 188)) ;
    result.plusAssignOperation(GGS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 189)) ;
    result.plusAssignOperation(GGS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_8297.current (HERE).readProperty_mTerminalName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 190)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 190)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 190)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 190)) ;
    result.plusAssignOperation(GGS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 191)) ;
    result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 192)) ;
    enumerator_8297.gotoNextObject () ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalImplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalImplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
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
  GGS_string result ; // Returned variable
  result = GGS_string ("if (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 209)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 209)) ;
  result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 210)) ;
  {
  result.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 211)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_9451 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_9451.hasCurrentObject ()) {
    result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_9451.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 213)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 213)) ;
    enumerator_9451.gotoNextObject () ;
  }
  {
  result.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 215)) ;
  }
  result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 216)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalExplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalExplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_9848 (temp_0.readProperty_mInstructionList ()) ;
  bool bool_1 = result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas4", 223)).isValidAndTrue () ;
  if (enumerator_9848.hasCurrentObject () && bool_1) {
    while (enumerator_9848.hasCurrentObject () && bool_1) {
      result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_9848.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 224)) ;
      enumerator_9848.gotoNextObject () ;
      if (enumerator_9848.hasCurrentObject ()) {
        bool_1 = result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas4", 223)).isValidAndTrue () ;
      }
    }
  }
//---
  return result ;
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
  GGS_unifiedTypeDefinition var_targetTypeDef_3522 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 81)) ;
  GGS_unifiedTypeMapEntry temp_0 ;
  const GalgasBool test_1 = var_targetTypeDef_3522.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 82)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 82)).boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = var_targetTypeDef_3522.readProperty_unwrappedType () ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = constinArgument_inTargetType ;
  }
  GGS_unifiedTypeMapEntry var_targetTypeForBigIntAssignment_3568 = temp_0 ;
  GGS_bool var_handled_3747 = GGS_bool (false) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_bigIntSource_3772 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioExpression.ptr ())) ;
    if (nullptr == var_bigIntSource_3772.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("u32").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 89)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_bigint var_bigIntValue_3916 = var_bigIntSource_3772.readProperty_mValue () ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_3916.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 91)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_3916.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 91)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 91)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_3916.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)).add_operation (GGS_string (") does not fit in an @u32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)) ;
            }
          }
          ioArgument_ioExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_3916.getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 97)), inCompiler COMMA_HERE) ;
          var_handled_3747 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("s32").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 100)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_bigint var_bigIntValue_4378 = var_bigIntSource_3772.readProperty_mValue () ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_4378.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 102)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_4378.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 102)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 102)).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GenericArray <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_4378.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)).add_operation (GGS_string (") does not fit in an @s32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)) ;
              }
            }
            ioArgument_ioExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4378.getter_s_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 108)), inCompiler COMMA_HERE) ;
            var_handled_3747 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("u64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 111)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GGS_bigint var_bigIntValue_4849 = var_bigIntSource_3772.readProperty_mValue () ;
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_4849.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 113)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_4849.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 113)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 113)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  GenericArray <FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_4849.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)).add_operation (GGS_string (") does not fit in an @u64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)) ;
                }
              }
              ioArgument_ioExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4849.getter_u_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 119)), inCompiler COMMA_HERE) ;
              var_handled_3747 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("u8").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 122)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                GGS_bigint var_bigIntValue_5312 = var_bigIntSource_3772.readProperty_mValue () ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5312.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 124)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5312.objectCompare (GGS_bigint ("256", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 124)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 124)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    GenericArray <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5312.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)).add_operation (GGS_string (") does not fit in an @u8"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)) ;
                  }
                }
                ioArgument_ioExpression = GGS_literalU_38_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5312.getter_u_38_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 130)), inCompiler COMMA_HERE) ;
                var_handled_3747 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_15 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_15) {
                test_15 = GGS_bool (ComparisonKind::equal, GGS_string ("s64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 133)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_15) {
                  GGS_bigint var_bigIntValue_5764 = var_bigIntSource_3772.readProperty_mValue () ;
                  GalgasBool test_16 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_16) {
                    test_16 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5764.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 135)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5764.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 135)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 135)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_16) {
                      GenericArray <FixItDescription> fixItArray17 ;
                      inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5764.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)).add_operation (GGS_string (") does not fit in an @s64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)), fixItArray17  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)) ;
                    }
                  }
                  ioArgument_ioExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5764.getter_s_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 141)), inCompiler COMMA_HERE) ;
                  var_handled_3747 = GGS_bool (true) ;
                }
              }
            }
          }
        }
      }
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 147)).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_targetTypeDef_3522.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 148)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 147)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 149)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 149)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 148)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GGS_unifiedTypeMapEntry var_targetUnwrappedType_6377 = var_targetTypeDef_3522.readProperty_unwrappedType () ;
          GGS_unifiedTypeMapEntry var_sourceUnwrappedType_6435 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 151)).readProperty_unwrappedType () ;
          var_handled_3747 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetUnwrappedType_6377, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 152)).objectCompare (extensionGetter_typeName (var_sourceUnwrappedType_6435, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 152)))) ;
        }
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 155)).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 155)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 155)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 155)).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GGS_string var_targetUnwrappedTypeName_6721 = extensionGetter_typeName (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 156)).readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 156)) ;
        var_handled_3747 = GGS_bool (ComparisonKind::equal, var_targetUnwrappedTypeName_6721.objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 157)))) ;
        GGS_unifiedTypeMapEntry var_sourceType_6865 = constinArgument_inSourceType ;
        if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).isValid ()) {
          uint32_t variant_6895 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).uintValue () ;
          bool loop_6895 = true ;
          while (loop_6895) {
            loop_6895 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_and (extensionGetter_definition (var_sourceType_6865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).isValid () ;
            if (loop_6895) {
              loop_6895 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_and (extensionGetter_definition (var_sourceType_6865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).boolValue () ;
            }
            if (loop_6895 && (0 == variant_6895)) {
              loop_6895 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)) ;
            }
            if (loop_6895) {
              variant_6895 -= 1 ;
              var_sourceType_6865 = extensionGetter_definition (var_sourceType_6865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 160)).readProperty_superType () ;
              var_handled_3747 = GGS_bool (ComparisonKind::equal, var_targetUnwrappedTypeName_6721.objectCompare (extensionGetter_typeName (var_sourceType_6865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 161)))) ;
            }
          }
        }
      }
    }
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 165)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      GGS_unifiedTypeMapEntry var_sourceType_7170 = constinArgument_inSourceType ;
      GGS_bool var_ok_7204 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 167)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 167)))) ;
      if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).isValid ()) {
        uint32_t variant_7260 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).uintValue () ;
        bool loop_7260 = true ;
        while (loop_7260) {
          loop_7260 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_and (extensionGetter_definition (var_sourceType_7170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).isValid () ;
          if (loop_7260) {
            loop_7260 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_and (extensionGetter_definition (var_sourceType_7170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).boolValue () ;
          }
          if (loop_7260 && (0 == variant_7260)) {
            loop_7260 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)) ;
          }
          if (loop_7260) {
            variant_7260 -= 1 ;
            var_sourceType_7170 = extensionGetter_definition (var_sourceType_7170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 169)).readProperty_superType () ;
            var_ok_7204 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_7170)) ;
          }
        }
      }
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          const GGS_propertyMap_2E_element var_prop_7959 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
          if (!extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
            test_21 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_21) {
            extensionMethod_checkSetAccess (var_prop_7959.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)) ;
            GGS_propertyAccessExpressionForGeneration var_conversionExpression_8115 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_7959.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioExpression, var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8115 ;
            var_ok_7204 = GGS_bool (ComparisonKind::equal, var_prop_7959.readProperty_mPropertyType ().objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_21) {
        GalgasBool test_22 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_22) {
          GGS_bool test_23 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)) ;
          if (GalgasBool::boolTrue == test_23.boolEnum ()) {
            test_23 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)).readProperty_getterMap ().getter_contains (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)) ;
          }
          test_22 = test_23.boolEnum () ;
          if (GalgasBool::boolTrue == test_22) {
            GGS_methodKind var_kind_8586 ;
            GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_8633 ;
            GGS_bool var_hasCompilerArgument_8676 ;
            GGS_unifiedTypeMapEntry var_returnedType_8710 ;
            GGS_location joker_8659 ; // Joker input parameter
            GGS_methodQualifier joker_8732_2 ; // Joker input parameter
            GGS_string joker_8732_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 192)).readProperty_getterMap ().method_searchKey (var_targetTypeDef_3522.readProperty_typeName (), var_kind_8586, var_argumentTypeList_8633, joker_8659, var_hasCompilerArgument_8676, var_returnedType_8710, joker_8732_2, joker_8732_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 192)) ;
            var_ok_7204 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_8633.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 201)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_8710.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 201)) ;
            GGS_getterCallExpressionForGeneration var_conversionExpression_8863 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_8586, ioArgument_ioExpression, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_hasCompilerArgument_8676, inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8863 ;
          }
        }
      }
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 215)).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          GenericArray <FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("target object type is @").add_operation (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 217)).add_operation (GGS_string (" and cannot be assigned from an @"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 217)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 218)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 218)).add_operation (GGS_string (" object; this type have no "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 218)).add_operation (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 219)).add_operation (GGS_string (" func without argument that returns a @"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 220)).add_operation (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 221)).add_operation (GGS_string (" object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 222)), fixItArray25  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 216)) ;
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
  GGS_unifiedTypeMapEntry var_leftResultType_10027 = ioArgument_ioLeftExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightResultType_10080 = ioArgument_ioRightExpression.readProperty_mResultType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 237)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (GGS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (GGS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 240)).add_operation (extensionGetter_definition (var_rightResultType_10080, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 238)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_rightType_10463 = var_rightResultType_10080 ;
    GGS_bool var_ok_10505 = GGS_bool (ComparisonKind::equal, var_leftResultType_10027.objectCompare (var_rightType_10463)) ;
    if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).isValid ()) {
      uint32_t variant_10542 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).uintValue () ;
      bool loop_10542 = true ;
      while (loop_10542) {
        loop_10542 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_and (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).isValid () ;
        if (loop_10542) {
          loop_10542 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_and (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).boolValue () ;
        }
        if (loop_10542 && (0 == variant_10542)) {
          loop_10542 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) ;
        }
        if (loop_10542) {
          variant_10542 -= 1 ;
          var_rightType_10463 = extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 246)).readProperty_superType () ;
          var_ok_10505 = GGS_bool (ComparisonKind::equal, var_leftResultType_10027.objectCompare (var_rightType_10463)) ;
        }
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 250)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_10768 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioRightExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_10768.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("u32").objectCompare (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 251)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GGS_bigint var_bigIntValue_10917 = var_bigIntSource_10768.readProperty_mValue () ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_10917.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_10917.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_10917.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)).add_operation (GGS_string (") does not fit in an @u32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)) ;
                }
              }
              ioArgument_ioRightExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10027, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_10917.getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 256)), inCompiler COMMA_HERE) ;
              var_ok_10505 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_6 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_6) {
              test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("s32").objectCompare (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 258)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_6) {
                GGS_bigint var_bigIntValue_11352 = var_bigIntSource_10768.readProperty_mValue () ;
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11352.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11352.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11352.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)).add_operation (GGS_string (") does not fit in an @s32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)) ;
                  }
                }
                ioArgument_ioRightExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10027, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11352.getter_s_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 263)), inCompiler COMMA_HERE) ;
                var_ok_10505 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_6) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("u64").objectCompare (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 265)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GGS_bigint var_bigIntValue_11796 = var_bigIntSource_10768.readProperty_mValue () ;
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11796.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11796.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GenericArray <FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11796.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)).add_operation (GGS_string (") does not fit in an @u64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)) ;
                    }
                  }
                  ioArgument_ioRightExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10027, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11796.getter_u_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 270)), inCompiler COMMA_HERE) ;
                  var_ok_10505 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("s64").objectCompare (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 272)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_bigint var_bigIntValue_12233 = var_bigIntSource_10768.readProperty_mValue () ;
                    GalgasBool test_13 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_13) {
                      test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12233.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12233.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_13) {
                        GenericArray <FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12233.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)).add_operation (GGS_string (") does not fit in an @s64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)) ;
                      }
                    }
                    ioArgument_ioRightExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10027, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12233.getter_s_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 277)), inCompiler COMMA_HERE) ;
                    var_ok_10505 = GGS_bool (true) ;
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
      test_15 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 282)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_12673 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioLeftExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_12673.ptr ()) {
          test_15 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_15) {
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = GGS_bool (ComparisonKind::equal, GGS_string ("u32").objectCompare (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 283)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              GGS_bigint var_bigIntValue_12816 = var_bigIntSource_12673.readProperty_mValue () ;
              GalgasBool test_17 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_17) {
                test_17 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12816.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12816.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)).boolEnum () ;
                if (GalgasBool::boolTrue == test_17) {
                  GenericArray <FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12816.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)).add_operation (GGS_string (") does not fit in an @u32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)) ;
                }
              }
              ioArgument_ioLeftExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_rightType_10463, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_12816.getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 288)), inCompiler COMMA_HERE) ;
              var_ok_10505 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = GGS_bool (ComparisonKind::equal, GGS_string ("s32").objectCompare (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 290)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GGS_bigint var_bigIntValue_13238 = var_bigIntSource_12673.readProperty_mValue () ;
                GalgasBool test_20 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13238.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13238.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_20) {
                    GenericArray <FixItDescription> fixItArray21 ;
                    inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13238.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)).add_operation (GGS_string (") does not fit in an @s32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)) ;
                  }
                }
                ioArgument_ioLeftExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_rightType_10463, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13238.getter_s_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 295)), inCompiler COMMA_HERE) ;
                var_ok_10505 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_19) {
              GalgasBool test_22 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_22) {
                test_22 = GGS_bool (ComparisonKind::equal, GGS_string ("u64").objectCompare (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 297)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_22) {
                  GGS_bigint var_bigIntValue_13669 = var_bigIntSource_12673.readProperty_mValue () ;
                  GalgasBool test_23 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_23) {
                    test_23 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13669.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13669.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_23) {
                      GenericArray <FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13669.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)).add_operation (GGS_string (") does not fit in an @u64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)), fixItArray24  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)) ;
                    }
                  }
                  ioArgument_ioLeftExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_10463, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13669.getter_u_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 302)), inCompiler COMMA_HERE) ;
                  var_ok_10505 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_22) {
                GalgasBool test_25 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, GGS_string ("s64").objectCompare (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 304)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_25) {
                    GGS_bigint var_bigIntValue_14093 = var_bigIntSource_12673.readProperty_mValue () ;
                    GalgasBool test_26 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_26) {
                      test_26 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14093.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14093.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_26) {
                        GenericArray <FixItDescription> fixItArray27 ;
                        inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14093.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)).add_operation (GGS_string (") does not fit in an @s64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)), fixItArray27  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)) ;
                      }
                    }
                    ioArgument_ioLeftExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_10463, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14093.getter_s_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 309)), inCompiler COMMA_HERE) ;
                    var_ok_10505 = GGS_bool (true) ;
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
      test_28 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_propertyMap_2E_element var_prop_14563 = extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_28 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_28) {
          extensionMethod_checkSetAccess (var_prop_14563.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 315)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 315)) ;
          GGS_propertyAccessExpressionForGeneration var_conversionExpression_14721 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_14563.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 320)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_14721 ;
          var_ok_10505 = GGS_bool (ComparisonKind::equal, var_prop_14563.readProperty_mPropertyType ().objectCompare (var_leftResultType_10027)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_28) {
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        GGS_bool test_30 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)) ;
        if (GalgasBool::boolTrue == test_30.boolEnum ()) {
          test_30 = extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)).readProperty_getterMap ().getter_contains (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)).readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)) ;
        }
        test_29 = test_30.boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          GGS_methodKind var_kind_15234 ;
          GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_15281 ;
          GGS_bool var_hasCompilerArgument_15324 ;
          GGS_unifiedTypeMapEntry var_returnedType_15358 ;
          GGS_location joker_15307 ; // Joker input parameter
          GGS_methodQualifier joker_15380_2 ; // Joker input parameter
          GGS_string joker_15380_1 ; // Joker input parameter
          extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 325)).readProperty_getterMap ().method_searchKey (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 326)).readProperty_typeName (), var_kind_15234, var_argumentTypeList_15281, joker_15307, var_hasCompilerArgument_15324, var_returnedType_15358, joker_15380_2, joker_15380_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 325)) ;
          var_ok_10505 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_15281.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 334)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_15358.objectCompare (var_leftResultType_10027)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 334)) ;
          GGS_getterCallExpressionForGeneration var_conversionExpression_15513 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_leftResultType_10027, constinArgument_inErrorLocation, var_kind_15234, ioArgument_ioRightExpression, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 342)).readProperty_typeName ().readProperty_string (), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_hasCompilerArgument_15324, inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_15513 ;
        }
      }
    }
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 348)).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        GenericArray <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (GGS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (GGS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).add_operation (GGS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).add_operation (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 352)).add_operation (GGS_string ("' func without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).add_operation (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)), fixItArray32  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 349)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@galgas3GrammarComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_GrammarComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  result = GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 358)) ;
//---
  return result ;
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
  GGS_lstring var_key_13651 = GGS_lstring::init_21__21_ (GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 370)), temp_1.readProperty_mGrammarComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_13651, temp_2, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 371)) ;
  }
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_13823 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_13823.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_13651, GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (enumerator_13823.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 373)), enumerator_13823.current (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 373)) ;
    }
    enumerator_13823.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string constinArgument_inProductDirectory,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                  GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_buildOptionValue::class_func_quiet (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 386)).operator_not (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 386)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
      routine_println_3F_ (GGS_string ("*** Analyzing '").add_operation (temp_1.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 387)).add_operation (GGS_string ("' grammar"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 387)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 387)) ;
      }
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  GGS_lstring var_grammarNameForUsefulness_14771 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 390)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_14771, var_grammarNameForUsefulness_14771, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 391)) ;
  }
  GGS_stringset var_unicodeStringToGenerate_15034 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator__5B_templateReplacementAST_5D_ enumerator_15100 (temp_3.readProperty_mTemplateReplacementList ()) ;
  while (enumerator_15100.hasCurrentObject ()) {
    var_unicodeStringToGenerate_15034.plusPlusAssignOperation (enumerator_15100.current (HERE).readProperty_mMatchString ().readProperty_string ()  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 395)) ;
    var_unicodeStringToGenerate_15034.plusPlusAssignOperation (enumerator_15100.current (HERE).readProperty_mReplacementString ().readProperty_string ()  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 396)) ;
    enumerator_15100.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_galgas_33_GrammarComponentAST temp_5 = this ;
    const GGS_templateDelimiterDescriptorAST var_t_15424 = temp_5.readProperty_mTemplateDelimiterDescriptor ().unwrappedValue () ;
    if (!temp_5.readProperty_mTemplateDelimiterDescriptor ().isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::equal, var_t_15424.readProperty_mOpenTemplateDelimiter ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_t_15424.readProperty_mOpenTemplateDelimiter ().readProperty_location (), GGS_string ("code mode enter string should not ne empty"), fixItArray7  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 402)) ;
        }
      }
      var_unicodeStringToGenerate_15034.plusPlusAssignOperation (var_t_15424.readProperty_mOpenTemplateDelimiter ().readProperty_string ()  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 404)) ;
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::equal, var_t_15424.readProperty_mCloseTemplateDelimiter ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_t_15424.readProperty_mCloseTemplateDelimiter ().readProperty_location (), GGS_string ("code mode exit string should not ne empty"), fixItArray9  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 406)) ;
        }
      }
      var_unicodeStringToGenerate_15034.plusPlusAssignOperation (var_t_15424.readProperty_mCloseTemplateDelimiter ().readProperty_string ()  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 408)) ;
    }
  }
  GGS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_16039 = GGS_terminalSymbolsMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_16123 = GGS_nonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_lexiqueComponentName_16179 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 413)) ;
  GGS__5B_syntaxComponentForGrammarAnalysis_5D_ var_syntaxComponentListForGrammarAnalysis_16289 = GGS__5B_syntaxComponentForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_nonTerminalToAdd_5D_ var_nonTerminalToAddList_16361 = GGS__5B_nonTerminalToAdd_5D_::init (inCompiler COMMA_HERE) ;
  GGS_u_33__32_ var_addedNonTerminalCount_16401 = GGS_u_33__32_ (uint32_t (0U)) ;
  const GGS_galgas_33_GrammarComponentAST temp_10 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_16463 (temp_10.readProperty_mSyntaxComponents ()) ;
  while (enumerator_16463.hasCurrentObject ()) {
    GGS_lstring var_syntaxNameForUsefulness_16494 = function_syntaxNameForUsefulEntitiesGraph (enumerator_16463.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 418)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_14771, var_syntaxNameForUsefulness_16494 COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 419)) ;
    }
    GGS_u_33__32_ var_addedNonTerminalCountRef_16692 = var_addedNonTerminalCount_16401 ;
    GGS_lstring var_lexiqueName_16867 ;
    GGS__5B_nonterminalDeclarationAST_5D_ var_nonterminalDeclarationList_16922 ;
    GGS__5B_syntaxRuleAST_5D_ var_ruleList_16980 ;
    GGS_bool var_hasTranslateFeature_17009 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_16463.current (HERE), var_lexiqueName_16867, var_nonterminalDeclarationList_16922, var_ruleList_16980, var_hasTranslateFeature_17009, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 421)) ;
    GGS_lstring var_lexiqueNameForUsefulness_17047 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_16867, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 428)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_14771, var_lexiqueNameForUsefulness_17047 COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 429)) ;
    }
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_galgas_33_GrammarComponentAST temp_12 = this ;
      test_11 = temp_12.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_17009.operator_not (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 431)) COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 431)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_galgas_33_GrammarComponentAST temp_13 = this ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_16463.current (HERE).readProperty_location (), GGS_string ("as '").add_operation (temp_13.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 432)).add_operation (GGS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 432)), fixItArray14  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 432)) ;
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        const GGS_galgas_33_GrammarComponentAST temp_16 = this ;
        test_15 = var_hasTranslateFeature_17009.operator_and (temp_16.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 433)) COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 433)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_galgas_33_GrammarComponentAST temp_17 = this ;
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mGrammarComponentName ().readProperty_location (), GGS_string ("as '").add_operation (enumerator_16463.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 434)).add_operation (GGS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 434)), fixItArray18  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 434)) ;
        }
      }
    }
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::equal, var_lexiqueComponentName_16179.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        var_lexiqueComponentName_16179 = var_lexiqueName_16867 ;
      }
    }
    if (GalgasBool::boolFalse == test_19) {
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::notEqual, var_lexiqueName_16867.readProperty_string ().objectCompare (var_lexiqueComponentName_16179.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (enumerator_16463.current (HERE).readProperty_location (), GGS_string ("this syntax component uses '").add_operation (var_lexiqueName_16867.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 440)).add_operation (GGS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 441)).add_operation (var_lexiqueComponentName_16179.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 441)).add_operation (GGS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 442)), fixItArray21  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 440)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_16123, var_nonterminalDeclarationList_16922, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 445)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_16123, var_ruleList_16980, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 450)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_16123, enumerator_16463.current (HERE), var_ruleList_16980, var_actuallyUsedTerminalSymbolMap_16039, var_syntaxComponentListForGrammarAnalysis_16289, var_addedNonTerminalCount_16401, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 455)) ;
    }
    GGS_u_33__32_ var_i_18778 = GGS_u_33__32_ (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_16401.isValid ()) {
      uint32_t variant_18790 = var_addedNonTerminalCount_16401.uintValue () ;
      bool loop_18790 = true ;
      while (loop_18790) {
        loop_18790 = GGS_bool (ComparisonKind::lowerThan, var_i_18778.objectCompare (var_addedNonTerminalCount_16401.subtract_operation (var_addedNonTerminalCountRef_16692, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 464)))).isValid () ;
        if (loop_18790) {
          loop_18790 = GGS_bool (ComparisonKind::lowerThan, var_i_18778.objectCompare (var_addedNonTerminalCount_16401.subtract_operation (var_addedNonTerminalCountRef_16692, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 464)))).boolValue () ;
        }
        if (loop_18790 && (0 == variant_18790)) {
          loop_18790 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 464)) ;
        }
        if (loop_18790) {
          variant_18790 -= 1 ;
          var_nonTerminalToAddList_16361.plusPlusAssignOperation (GGS_nonTerminalToAdd::init_21__21_ (enumerator_16463.current (HERE).readProperty_string (), var_i_18778, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 465)) ;
          var_i_18778.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 466)) ;
        }
      }
    }
    enumerator_16463.gotoNextObject () ;
  }
  GGS_u_33__32_ var_startSymbolIndex_19192 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_19266 ;
  const GGS_galgas_33_GrammarComponentAST temp_22 = this ;
  var_nonTerminalMapForGrammarAnalysis_16123.method_searchKey (temp_22.readProperty_mStartSymbolName (), var_startSymbolIndex_19192, var_startSymbolAltMap_19266, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 471)) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_23 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_24 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_25 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_23.readProperty_mStartSymbolName ().readProperty_location (), temp_24.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_16123.getter_locationForKey (temp_25.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 480)), var_startSymbolAltMap_19266, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 477)) ;
  }
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_19667 = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_26 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_19742 (temp_26.readProperty_mUnusedNonterminalList ()) ;
  while (enumerator_19742.hasCurrentObject ()) {
    GGS_u_33__32_ var_nonterminalIndex_19847 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_19865 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_16123.method_searchKey (enumerator_19742.current (HERE), var_nonterminalIndex_19847, joker_19865, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 486)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_19667.setter_insertKey (enumerator_19742.current (HERE), var_nonterminalIndex_19847, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 487)) ;
    }
    enumerator_19742.gotoNextObject () ;
  }
  GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_20124 = GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_20199 (var_nonTerminalMapForGrammarAnalysis_16123) ;
  while (enumerator_20199.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_20124.plusPlusAssignOperation (GGS_sortedNonTerminalSymbolForGrammarAnalysis::init_21__21__21_ (enumerator_20199.current (HERE).readProperty_lkey (), enumerator_20199.current (HERE).readProperty_mNonTerminalIndex (), enumerator_20199.current (HERE).readProperty_mNonterminalSymbolParametersMap (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 492)) ;
    enumerator_20199.gotoNextObject () ;
  }
  GalgasBool test_27 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_27) {
    test_27 = GGS_buildOptionValue::class_func_emitSyntaxDiagrams (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 495)).boolEnum () ;
    if (GalgasBool::boolTrue == test_27) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_28 = this ;
      const GGS_galgas_33_GrammarComponentAST temp_29 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_28.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_16123, var_syntaxComponentListForGrammarAnalysis_16289, temp_29.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 496)) ;
      }
    }
  }
  GGS_string var_dotDocumentFilePath_20869 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 505)) ;
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    test_30 = GGS_buildOptionValue::class_func_emitClassGraph (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 506)).boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_20869, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 507)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_30) {
    {
    GGS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_20869, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 512)) ;
    }
  }
  GGS_stringset var_implementationFileHeader_21449 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_21503 (var_nonTerminalMapForGrammarAnalysis_16123) ;
  while (enumerator_21503.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_21578 (enumerator_21503.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_21578.hasCurrentObject ()) {
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_21649 (enumerator_21578.current (HERE).readProperty_mFormalParametersList ()) ;
      while (enumerator_21649.hasCurrentObject ()) {
        switch (enumerator_21649.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            GGS_unifiedTypeMapEntry var_t_21810 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_21649.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 523)) ;
            extensionMethod_addHeaderFileName (var_t_21810, var_implementationFileHeader_21449, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 524)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_21649.gotoNextObject () ;
      }
      enumerator_21578.gotoNextObject () ;
    }
    enumerator_21503.gotoNextObject () ;
  }
  GalgasBool test_31 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_31) {
    test_31 = GGS_buildOptionValue::class_func_generateOneHeader (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 530)).boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      var_implementationFileHeader_21449 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    }
  }
  GGS_string var_templateDescriptorString_22175 = GGS_string (", ") ;
  GalgasBool test_32 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_32) {
    const GGS_galgas_33_GrammarComponentAST temp_33 = this ;
    const GGS_templateDelimiterDescriptorAST var_t_22218 = temp_33.readProperty_mTemplateDelimiterDescriptor ().unwrappedValue () ;
    if (!temp_33.readProperty_mTemplateDelimiterDescriptor ().isValuated ()) {
      test_32 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_32) {
      const GGS_galgas_33_GrammarComponentAST temp_34 = this ;
      var_templateDescriptorString_22175.plusAssignOperation(GGS_string ("kUnicodeString_").add_operation (temp_34.readProperty_mGrammarComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 536)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 536)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 536)).add_operation (var_t_22218.readProperty_mOpenTemplateDelimiter ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 536)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 536)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 536)) ;
      var_templateDescriptorString_22175.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 537)) ;
      const GGS_galgas_33_GrammarComponentAST temp_35 = this ;
      var_templateDescriptorString_22175.plusAssignOperation(GGS_string ("kUnicodeString_").add_operation (temp_35.readProperty_mGrammarComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 538)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 538)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 538)).add_operation (var_t_22218.readProperty_mOpenTemplateDelimiter ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 538)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 538)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 538)) ;
    }
  }
  if (GalgasBool::boolFalse == test_32) {
    var_templateDescriptorString_22175.plusAssignOperation(GGS_string ("std::initializer_list <utf32> (), std::initializer_list <utf32> ()"), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 540)) ;
  }
  var_templateDescriptorString_22175.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 549)) ;
  GalgasBool test_36 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_36) {
    const GGS_galgas_33_GrammarComponentAST temp_37 = this ;
    test_36 = GGS_bool (ComparisonKind::equal, temp_37.readProperty_mTemplateReplacementList ().getter_count (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 550)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_36) {
      var_templateDescriptorString_22175.plusAssignOperation(GGS_string ("nullptr"), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 551)) ;
    }
  }
  if (GalgasBool::boolFalse == test_36) {
    const GGS_galgas_33_GrammarComponentAST temp_38 = this ;
    var_templateDescriptorString_22175.plusAssignOperation(temp_38.readProperty_mGrammarComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 553)).add_operation (GGS_string ("_kTemplateReplacementArray"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 553)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 553)) ;
  }
  var_templateDescriptorString_22175.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 555)) ;
  const GGS_galgas_33_GrammarComponentAST temp_39 = this ;
  var_templateDescriptorString_22175.plusAssignOperation(temp_39.readProperty_mTemplateReplacementList ().getter_count (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 556)).getter_string (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 556)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 556)) ;
  const GGS_galgas_33_GrammarComponentAST temp_40 = this ;
  GGS_string var_HTMLFilePath_23545 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 558)).add_operation (temp_40.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 558)).add_operation (GGS_string (".html"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 558)) ;
  GGS_string var_grammarCppFile_24161 ;
  GGS_string var_grammarHTMLHelperContents_24196 ;
  GGS_string var_swiftGrammarDescription_24242 ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_41 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_42 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_43 = this ;
  GGS_string temp_44 ;
  const GalgasBool test_45 = temp_43.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_45) {
    temp_44 = function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE) ;
  }else if (GalgasBool::boolFalse == test_45) {
    temp_44 = GGS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21_ (temp_41.readProperty_mGrammarComponentName (), temp_42.readProperty_mGrammarClass (), var_startSymbolIndex_19192, var_lexiqueComponentName_16179.readProperty_string (), var_actuallyUsedTerminalSymbolMap_16039, var_syntaxComponentListForGrammarAnalysis_16289, var_unusedNonTerminalSymbolsForGrammar_19667, var_HTMLFilePath_23545, var_nonTerminalSymbolSortedListForGrammarAnalysis_20124, temp_44, var_templateDescriptorString_22175, var_grammarCppFile_24161, var_grammarHTMLHelperContents_24196, var_swiftGrammarDescription_24242, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 559)) ;
  }
  GalgasBool test_46 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_46) {
    test_46 = GGS_buildOptionValue::class_func_outputHTMLgrammarFile (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 576)).boolEnum () ;
    if (GalgasBool::boolTrue == test_46) {
      var_HTMLFilePath_23545.getter_deletingLastPathComponent (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 577)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 577)) ;
      GGS_bool joker_24562 ; // Joker input parameter
      var_grammarHTMLHelperContents_24196.method_writeToFileWhenDifferentContents (var_HTMLFilePath_23545, joker_24562, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 578)) ;
    }
  }
  if (GalgasBool::boolFalse == test_46) {
    {
    GGS_string::class_method_deleteFileIfExists (var_HTMLFilePath_23545, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 580)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_47 = this ;
  GGS_string var_swiftFilePath_24733 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 583)).add_operation (temp_47.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 583)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 583)) ;
  GalgasBool test_48 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_48) {
    test_48 = GGS_buildOptionValue::class_func_outputGrammarSwiftDescriptionFile (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 584)).boolEnum () ;
    if (GalgasBool::boolTrue == test_48) {
      var_swiftFilePath_24733.getter_deletingLastPathComponent (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 585)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 585)) ;
      GGS_bool joker_25031 ; // Joker input parameter
      var_swiftGrammarDescription_24242.method_writeToFileWhenDifferentContents (var_swiftFilePath_24733, joker_25031, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 586)) ;
    }
  }
  if (GalgasBool::boolFalse == test_48) {
    {
    GGS_string::class_method_deleteFileIfExists (var_swiftFilePath_24733, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 588)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_49 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_50 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_51 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_52 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_53 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_54 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_grammarForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("grammar-").add_operation (temp_49.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 595)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 595)), temp_50.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_16179.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_16123, var_nonTerminalToAddList_16361, temp_51.readProperty_mSyntaxComponents (), temp_52.readProperty_mStartSymbolName ().readProperty_string (), temp_53.readProperty_mHasTranslateFeature (), var_grammarCppFile_24161, var_unicodeStringToGenerate_15034, temp_54.readProperty_mTemplateReplacementList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 592)) ;
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
  constinArgument_inDotDocumentFilePath.getter_deletingLastPathComponent (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 617)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 617)) ;
  GGS_string var_document_26098 = GGS_string ("digraph G {\n") ;
  var_document_26098.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 619)) ;
  var_document_26098.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 620)) ;
  UpEnumerator_unifiedTypeMap enumerator_26247 (constinArgument_inTypeMap) ;
  while (enumerator_26247.hasCurrentObject ()) {
    switch (enumerator_26247.current (HERE).readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
    case GGS_typeDefinition::Enumeration::invalid:
      break ;
    case GGS_typeDefinition::Enumeration::enum_unsolved:
      break ;
    case GGS_typeDefinition::Enumeration::enum_solved:
      {
        GGS_unifiedTypeDefinition extractedValue_26357_definition_0 ;
        enumerator_26247.current (HERE).readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_26357_definition_0) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extractedValue_26357_definition_0.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 625)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            switch (extractedValue_26357_definition_0.readProperty_superType ().enumValue ()) {
            case GGS_unifiedTypeMapEntry::Enumeration::invalid:
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
              {
                var_document_26098.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_26357_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 628)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 628)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 628)) ;
              }
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
              {
                GGS_unifiedTypeMapElementClass extractedValue_26558_superType_0 ;
                extractedValue_26357_definition_0.readProperty_superType ().getAssociatedValuesFor_element (extractedValue_26558_superType_0) ;
                GalgasBool test_1 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_1) {
                  const GGS_typeDefinition_2E_solved var_solvedType_26588 = extractedValue_26558_superType_0.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 630)).unwrappedValue () ;
                  if (!extractedValue_26558_superType_0.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 630)).isValuated ()) {
                    test_1 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_1) {
                    var_document_26098.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_26357_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 631)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 631)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 631)) ;
                    var_document_26098.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_26357_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 632)).add_operation (GGS_string ("\" -> \"@"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 632)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 632)) ;
                    var_document_26098.plusAssignOperation(var_solvedType_26588.readProperty_definition ().readProperty_typeName ().readProperty_string ().add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 633)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 633)) ;
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
    enumerator_26247.gotoNextObject () ;
  }
  var_document_26098.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 639)) ;
  GGS_bool joker_26982 ; // Joker input parameter
  var_document_26098.method_writeToFileWhenDifferentContents (constinArgument_inDotDocumentFilePath, joker_26982, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 640)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeArrayTypeName (const GGS_string & constinArgument_inTypeName,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("[").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 23)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 23)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeArrayTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (function_makeArrayTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 29)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@arrayTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  result = GGS_string ("array [@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 42)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 42)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                   GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                   GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                   GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                   GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                   GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                   GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  const GGS_arrayTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2967 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 55)), temp_1.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2967, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 56)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_3 = this ;
  const GGS_arrayTypeDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_elementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 57)), temp_4.readProperty_elementTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 57)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST enterDeclarationInSemanticContext'
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
  GGS_unifiedTypeMapEntry var_uintType_3923 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("u32"), var_uintType_3923, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 71)) ;
  }
  GGS_unifiedTypeMapEntry var_elementType_4008 ;
  {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_elementTypeName (), var_elementType_4008, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 73)) ;
  }
  GGS_getterMap var_getterMap_4098 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_4098, inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 75)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4098, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 76)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_1 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4098, ioArgument_ioTypeMap, GGS_string ("first"), temp_1.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 83)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4098, ioArgument_ioTypeMap, GGS_string ("last"), temp_2.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 90)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4098, ioArgument_ioTypeMap, GGS_string ("removingFirst"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inIndex"), temp_3.readProperty_arrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 97)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4098, ioArgument_ioTypeMap, GGS_string ("sublist"), GGS_string ("from"), GGS_string ("u32"), GGS_string ("inStartIndex"), GGS_string ("count"), GGS_string ("u32"), GGS_string ("inCount"), temp_4.readProperty_arrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 105)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_5342 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_5438 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_5 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 121)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("removeAll").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 119)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 120)), temp_5, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 123)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 118)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_6 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 129)) ;
  temp_6.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 129)), var_elementType_4008, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 129)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 129)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("append").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 127)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 128)), temp_6, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 131)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 126)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_7 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 137)) ;
  temp_7.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 137)), var_elementType_4008, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas4", 137)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 137)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("removeFirst").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 135)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 136)), temp_7, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 139)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 134)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_8 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 145)) ;
  temp_8.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 145)), var_elementType_4008, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas4", 145)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 145)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("removeLast").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 143)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 144)), temp_8, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 147)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 142)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_9 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 154)) ;
  temp_9.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 153)), var_elementType_4008, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas4", 153)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 153)) ;
  temp_9.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("at").getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 154)), var_uintType_3923, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 154)), GGS_string ("inIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 154)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("remove").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 151)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 152)), temp_9, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 157)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 150)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_10 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 165)) ;
  temp_10.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 164)), var_elementType_4008, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 164)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 164)) ;
  temp_10.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("at").getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 165)), var_uintType_3923, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 165)), GGS_string ("inInsertionIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 165)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("insert").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 162)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 163)), temp_10, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 168)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 161)) ;
  }
  GGS_initializerMap var_initializerMap_6779 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_6836 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_11 = this ;
  var_initializerMap_6779.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_6836, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 175)), temp_11.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_6836, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 174)) ;
  }
  GGS_readSubscriptMap var_readSubscriptMap_7039 = GGS_readSubscriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_12 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 180)) ;
  temp_12.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 180)), var_uintType_3923, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 180)) ;
  GGS__5B_functionSignatureElement_5D_ var_subscriptArgumentList_7098 = temp_12 ;
  {
  var_readSubscriptMap_7039.setter_insertKey (extensionGetter_subcriptSignature (var_subscriptArgumentList_7098, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 182)).getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 182)), var_subscriptArgumentList_7098, var_elementType_4008, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 181)) ;
  }
  GGS_writeSubscriptMap var_writeSubcriptMap_7358 = GGS_writeSubscriptMap::init (inCompiler COMMA_HERE) ;
  {
  var_writeSubcriptMap_7358.setter_insertKey (extensionGetter_subcriptSignature (var_subscriptArgumentList_7098, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 189)).getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 189)), var_subscriptArgumentList_7098, var_elementType_4008, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 188)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_13 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_13.readProperty_arrayTypeName (), GGS_bool (false), var_initializerMap_6779, var_getterMap_4098, var_setterMap_5438, var_instanceMethodMap_5342, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 194)) ;
  }
  GGS_typeFeatures var_features_7998 = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-array.galgas4", 210)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-array.galgas4", 210)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 210)) ;
  {
  const GGS_arrayTypeDeclarationAST temp_14 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_14.readProperty_arrayTypeName (), var_features_7998, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 211)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_8325 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  var_enumerationDescriptor_8325.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_elementType_4008, GGS_string ("entry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 220)) ;
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8441 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_15.readProperty_arrayTypeName (), temp_16.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 227)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-array.galgas4", 228)), GGS_bool (true), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_6779, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_4098, var_setterMap_5438, var_instanceMethodMap_5342, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 239)), var_readSubscriptMap_7039, var_writeSubcriptMap_7358, var_enumerationDescriptor_8325, var_features_7998, GGS_bool (false), var_elementType_4008, GGS_string ("array-").add_operation (temp_17.readProperty_arrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-array.galgas4", 246)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 246)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-array.galgas4", 247)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8441.readProperty_typeName (), var_typeDefinition_8441, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 249)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                            const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                            const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                            GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_10351 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 267)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10351, var_nameForUsefulness_10351, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 268)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10351  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 270)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_10615 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 272)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10351, var_elementTypeNameForUsefulness_10615 COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 273)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_elementTypeNameForUsefulness_10615  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 275)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_10993 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_arrayTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 280)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 278)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_10993, var_initializerNameForUsefulness_10993, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 282)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_10993  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 284)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11386 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_15.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 287)) ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_arrayTypeForGeneration::init_21_infoMessage_21__21_ (GGS_string ("array type ").add_operation (temp_16.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 289)), var_selfType_11386, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_17.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 291)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 288)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_12342 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 310)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_arrayTypeGenerationTemplate::class_func_arrayTypeHeader_31_ (var_selfTypeDefinition_12342.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 313)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_12342.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 314)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 311)) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_12342.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 318)), var_selfTypeDefinition_12342.readProperty_isConcrete (), var_selfTypeDefinition_12342.readProperty_initializerMap (), var_selfTypeDefinition_12342.readProperty_classFunctionMap (), var_selfTypeDefinition_12342.readProperty_getterMap (), var_selfTypeDefinition_12342.readProperty_setterMap (), var_selfTypeDefinition_12342.readProperty_instanceMethodMap (), var_selfTypeDefinition_12342.readProperty_classMethodMap (), var_selfTypeDefinition_12342.readProperty_readSubscriptMap (), var_selfTypeDefinition_12342.readProperty_writeSubscriptMap (), var_selfTypeDefinition_12342.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_12342.readProperty_features (), var_selfTypeDefinition_12342.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_12342.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 316)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 316)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outImplementation,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 340)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 341)) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13804 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 342)) ;
  const GGS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outImplementation = GGS_arrayTypeGenerationTemplate::class_func_arrayTypeSpecificImplementation (var_selfTypeDefinition_13804.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 345)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_13804.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 346)), var_selfTypeDefinition_13804.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-array.galgas4", 347)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 347)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 343)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'makeDictionaryTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeDictionaryTypeName (const GGS_string & constinArgument_inKeyTypeName,
                                            const GGS_string & constinArgument_inValueTypeName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("[").add_operation (constinArgument_inKeyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 23)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 23)).add_operation (constinArgument_inValueTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 23)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 23)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeDictionaryTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeDictionaryTypeLName (const GGS_lstring & constinArgument_inKeyTypeName,
                                              const GGS_lstring & constinArgument_inValueTypeName,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (function_makeDictionaryTypeName (constinArgument_inKeyTypeName.readProperty_string (), constinArgument_inValueTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 30)), constinArgument_inKeyTypeName.readProperty_location ().getter_union (constinArgument_inValueTypeName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 31)), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dictionaryDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_dictionaryDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_dictionaryDeclarationAST temp_0 = this ;
  result = GGS_string ("dictionary ").add_operation (temp_0.readProperty_dictionaryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 49)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  GGS_lstring joker_2935 ; // Joker input parameter
  const GGS_dictionaryDeclarationAST temp_0 = this ;
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_2935, temp_0.readProperty_valueTypeName (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 58)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                    GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                    GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                    GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                    GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                    GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictionaryDeclarationAST temp_0 = this ;
  const GGS_dictionaryDeclarationAST temp_1 = this ;
  GGS_lstring var_key_3816 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_dictionaryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 74)), temp_1.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3816, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 75)) ;
  }
  {
  const GGS_dictionaryDeclarationAST temp_3 = this ;
  const GGS_dictionaryDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_keyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 76)), temp_4.readProperty_keyTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 76)) ;
  }
  {
  const GGS_dictionaryDeclarationAST temp_5 = this ;
  const GGS_dictionaryDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_valueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 77)), temp_6.readProperty_valueTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 77)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                              const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                              const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                              const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                              const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_keyType_5003 ;
  {
  const GGS_dictionaryDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_keyTypeName ().readProperty_string (), var_keyType_5003, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 93)) ;
  }
  GGS_unifiedTypeMapEntry var_valueType_5089 ;
  {
  const GGS_dictionaryDeclarationAST temp_1 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_1.readProperty_valueTypeName ().readProperty_string (), var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 95)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ temp_2 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 97)) ;
  temp_2.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_keyType_5003, GGS_string ("key"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 97)) ;
  temp_2.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_valueType_5089, GGS_string ("value"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 97)) ;
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_5136 = temp_2 ;
  GGS_getterMap var_getterMap_5293 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_5293, inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 99)) ;
  }
  {
  const GGS_dictionaryDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5293, ioArgument_ioTypeMap, GGS_string ("contains"), GGS_string::makeEmptyString (), temp_3.readProperty_keyTypeName ().readProperty_string (), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 101)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5293, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 109)) ;
  }
  GGS_setterMap var_setterMap_5764 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_4 = this ;
  GGS__5B_formalParameterSignatureElement_5D_ temp_5 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 121)) ;
  temp_5.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("key").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 121)), var_keyType_5003, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dictionary.galgas4", 121)), GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 121)) ;
  var_setterMap_5764.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("remove"), temp_4.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dictionary.galgas4", 120)), temp_5, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dictionary.galgas4", 123)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 118)) ;
  }
  GGS_initializerMap var_initializerMap_6065 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_6120 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_6 = this ;
  var_initializerMap_6065.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_6120, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 130)), temp_6.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_6120, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 129)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_6319 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_dictionaryTypeName (), GGS_bool (false), var_initializerMap_6065, var_getterMap_5293, var_setterMap_5764, var_instanceMethodMap_6319, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 135)) ;
  }
  GGS_typeFeatures var_features_6765 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-dictionary.galgas4", 151)).operator_or (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-dictionary.galgas4", 151)) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 151)) ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_dictionaryDeclarationAST temp_9 = this ;
    test_8 = temp_9.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_features_6765.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-dictionary.galgas4", 153)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 153)) ;
    }
  }
  {
  const GGS_dictionaryDeclarationAST temp_10 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_10.readProperty_dictionaryTypeName (), var_features_6765, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 155)) ;
  }
  const GGS_dictionaryDeclarationAST temp_11 = this ;
  GGS_lstring var_optionalElementTypeName_7143 = function_makeOptionalTypeLName (temp_11.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 163)) ;
  GGS_unifiedTypeMapEntry var_optionalElementType_7303 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_7143, var_optionalElementType_7303, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 164)) ;
  }
  GGS_readSubscriptMap var_readSubscriptMap_7369 = GGS_readSubscriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_12 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 167)) ;
  temp_12.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 167)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 167)) ;
  GGS__5B_functionSignatureElement_5D_ var_firstArgumentTypeList_7426 = temp_12 ;
  {
  var_readSubscriptMap_7369.setter_insertKey (extensionGetter_subcriptSignature (var_firstArgumentTypeList_7426, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 169)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 169)), var_firstArgumentTypeList_7426, var_optionalElementType_7303, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 168)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_13 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 175)) ;
  temp_13.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 174)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 174)) ;
  temp_13.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("default").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 175)), var_valueType_5089, GGS_string ("inDefaultValue"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 175)) ;
  GGS__5B_functionSignatureElement_5D_ var_secondArgumentTypeList_7665 = temp_13 ;
  {
  var_readSubscriptMap_7369.setter_insertKey (extensionGetter_subcriptSignature (var_secondArgumentTypeList_7665, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 178)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 178)), var_secondArgumentTypeList_7665, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 177)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_14 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 183)) ;
  temp_14.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("unwrap").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 183)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 183)) ;
  GGS__5B_functionSignatureElement_5D_ var_thirdArgumentTypeList_7968 = temp_14 ;
  {
  var_readSubscriptMap_7369.setter_insertKey (extensionGetter_subcriptSignature (var_thirdArgumentTypeList_7968, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 186)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 186)), var_thirdArgumentTypeList_7968, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 185)) ;
  }
  GGS_writeSubscriptMap var_writeSubcriptMap_8224 = GGS_writeSubscriptMap::init (inCompiler COMMA_HERE) ;
  {
  var_writeSubcriptMap_8224.setter_insertKey (extensionGetter_subcriptSignature (var_firstArgumentTypeList_7426, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 193)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 193)), var_firstArgumentTypeList_7426, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 192)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_15 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 198)) ;
  temp_15.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("unique").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 198)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 198)) ;
  GGS__5B_functionSignatureElement_5D_ var_writeUnique_5F_ArgumentTypeList_8412 = temp_15 ;
  {
  var_writeSubcriptMap_8224.setter_insertKey (extensionGetter_subcriptSignature (var_writeUnique_5F_ArgumentTypeList_8412, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 201)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 201)), var_writeUnique_5F_ArgumentTypeList_8412, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 200)) ;
  }
  const GGS_dictionaryDeclarationAST temp_16 = this ;
  const GGS_dictionaryDeclarationAST temp_17 = this ;
  GGS__5B_typedProperty_5D_ temp_18 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 216)) ;
  const GGS_dictionaryDeclarationAST temp_19 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8673 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_16.readProperty_dictionaryTypeName (), temp_17.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 211)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-dictionary.galgas4", 212)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), temp_18, var_initializerMap_6065, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_5293, var_setterMap_5764, var_instanceMethodMap_6319, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 223)), var_readSubscriptMap_7369, var_writeSubcriptMap_8224, var_enumerationDescriptor_5136, var_features_6765, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 229)), GGS_string ("dictionary-").add_operation (temp_19.readProperty_dictionaryTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-dictionary.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 230)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-dictionary.galgas4", 231)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8673.readProperty_typeName (), var_typeDefinition_8673, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 233)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                             const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                             GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictionaryDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_keyType_10403 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_keyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 250)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_keyType_10403, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 251)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-dictionary.galgas4", 251)) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 251)).operator_not (SOURCE_FILE ("declaration-type-dictionary.galgas4", 251)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_dictionaryDeclarationAST temp_2 = this ;
      const GGS_dictionaryDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_keyTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_3.readProperty_keyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 252)).add_operation (GGS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 252)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 252)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_5 = this ;
  GGS_lstring var_nameForUsefulness_10651 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_dictionaryTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 255)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10651, var_nameForUsefulness_10651, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 256)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_dictionaryDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10651  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 258)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_8 = this ;
  GGS_lstring var_keyTypeNameForUsefulness_10892 = function_typeNameForUsefulEntitiesGraph (temp_8.readProperty_keyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 260)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10651, var_keyTypeNameForUsefulness_10892 COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 261)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_dictionaryDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_keyTypeNameForUsefulness_10892  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 263)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_11 = this ;
  GGS_lstring var_valueTypeNameForUsefulness_11159 = function_typeNameForUsefulEntitiesGraph (temp_11.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 265)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10651, var_valueTypeNameForUsefulness_11159 COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 266)) ;
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_dictionaryDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_valueTypeNameForUsefulness_11159  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 268)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_14 = this ;
  GGS_lstring var_initializerNameForUsefulness_11499 = function_initializerNameForUsefulEntitiesGraph (temp_14.readProperty_dictionaryTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 273)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 271)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_11499, var_initializerNameForUsefulness_11499, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 275)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_dictionaryDeclarationAST temp_16 = this ;
    test_15 = temp_16.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_11499  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 277)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_17 = this ;
  GGS_lstring var_optionalElementTypeName_11883 = function_makeOptionalTypeLName (temp_17.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 280)) ;
  GGS_unifiedTypeMapEntry var_optionalElementType_11973 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_11883, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 281)) ;
  const GGS_dictionaryDeclarationAST temp_18 = this ;
  const GGS_dictionaryDeclarationAST temp_19 = this ;
  const GGS_dictionaryDeclarationAST temp_20 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_dictionaryTypeForGeneration::init_21_infoMessage_21__21_valueType_21_keyType_21_optionalValueType (GGS_string ("dictionary ").add_operation (temp_18.readProperty_dictionaryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 284)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_19.readProperty_dictionaryTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 285)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_20.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 286)), var_keyType_10403, var_optionalElementType_11973, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 283)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outHeader,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictionaryTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_valueType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 305)) ;
  const GGS_dictionaryTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_optionalValueType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 306)) ;
  const GGS_dictionaryTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13254 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 307)) ;
  const GGS_dictionaryTypeForGeneration temp_3 = this ;
  const GGS_dictionaryTypeForGeneration temp_4 = this ;
  const GGS_dictionaryTypeForGeneration temp_5 = this ;
  outArgument_outHeader = GGS_dictionaryGenerationTemplate::class_func_dictTypeHeader_31_ (var_selfTypeDefinition_13254.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 310)), var_selfTypeDefinition_13254.readProperty_enumerationDescriptorList (), extensionGetter_identifierRepresentation (temp_4.readProperty_keyType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 312)), extensionGetter_identifierRepresentation (temp_5.readProperty_valueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 313)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 308)) ;
  const GGS_dictionaryTypeForGeneration temp_6 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_13254.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 317)), var_selfTypeDefinition_13254.readProperty_isConcrete (), var_selfTypeDefinition_13254.readProperty_initializerMap (), var_selfTypeDefinition_13254.readProperty_classFunctionMap (), var_selfTypeDefinition_13254.readProperty_getterMap (), var_selfTypeDefinition_13254.readProperty_setterMap (), var_selfTypeDefinition_13254.readProperty_instanceMethodMap (), var_selfTypeDefinition_13254.readProperty_classMethodMap (), var_selfTypeDefinition_13254.readProperty_readSubscriptMap (), var_selfTypeDefinition_13254.readProperty_writeSubscriptMap (), var_selfTypeDefinition_13254.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_13254.readProperty_features (), var_selfTypeDefinition_13254.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_13254.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 315)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_string & outArgument_outImplementation,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictionaryTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 339)) ;
  const GGS_dictionaryTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_14733 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 340)) ;
  const GGS_dictionaryTypeForGeneration temp_2 = this ;
  const GGS_dictionaryTypeForGeneration temp_3 = this ;
  const GGS_dictionaryTypeForGeneration temp_4 = this ;
  const GGS_dictionaryTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_dictionaryGenerationTemplate::class_func_dictTypeSpecificImplementation (extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 342)), var_selfTypeDefinition_14733.readProperty_enumerationDescriptorList (), extensionGetter_identifierRepresentation (temp_3.readProperty_keyType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 344)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_14733.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 345)), extensionGetter_identifierRepresentation (temp_4.readProperty_valueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 346)), extensionGetter_identifierRepresentation (temp_5.readProperty_optionalValueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 347)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 341)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'kForbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_kForbiddenKeysForStruct (Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 62)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 62)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 62)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("dynamicType")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 62)) ;
  result = temp_0 ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_kForbiddenKeysForStruct = false ;
static GGS_stringset gOnceFunctionResult_kForbiddenKeysForStruct ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_kForbiddenKeysForStruct (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_kForbiddenKeysForStruct) {
    gOnceFunctionResult_kForbiddenKeysForStruct = onceFunction_kForbiddenKeysForStruct (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_kForbiddenKeysForStruct = true ;
  }
  return gOnceFunctionResult_kForbiddenKeysForStruct ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_kForbiddenKeysForStruct (void) {
  gOnceFunctionResult_kForbiddenKeysForStruct.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_kForbiddenKeysForStruct (nullptr,
                                                                   releaseOnceFunctionResult_kForbiddenKeysForStruct) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structDeclarationAST temp_0 = this ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_key_3791 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 91)), temp_1.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3791, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 92)) ;
  }
  const GGS_structDeclarationAST temp_3 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_3945 (temp_3.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_3945.hasCurrentObject ()) {
    GGS_lstring var_propertyKey_3984 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_3945.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 94)), enumerator_3945.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3791, var_propertyKey_3984 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 95)) ;
    }
    enumerator_3945.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@structDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_structDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_structDeclarationAST temp_0 = this ;
  result = GGS_string ("struct @").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 102)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                          const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                          const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_structTypeIndex_5069 ;
  {
  const GGS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), var_structTypeIndex_5069, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 116)) ;
  }
  GGS_propertyMap var_propertyMap_5148 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_constructorPropertyTypeList_5202 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_typedPropertyList_5261 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_1 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_5310 (temp_1.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_5310.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyTypeEntry_5392 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5310.current (HERE).readProperty_typeName (), var_propertyTypeEntry_5392, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 122)) ;
    }
    GGS_string temp_2 ;
    const GalgasBool test_3 = enumerator_5310.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = enumerator_5310.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = GGS_string::makeEmptyString () ;
    }
    GGS_lstring var_selector_5421 = temp_2.getter_nowhere (SOURCE_FILE ("declaration-type-struct.galgas4", 123)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = enumerator_5310.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("declaration-type-struct.galgas4", 124)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_constructorPropertyTypeList_5202.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (var_selector_5421, var_propertyTypeEntry_5392, enumerator_5310.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 125)) ;
      }
    }
    var_typedPropertyList_5261.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_propertyTypeEntry_5392, enumerator_5310.current (HERE).readProperty_name (), enumerator_5310.current (HERE).readProperty_initialization (), enumerator_5310.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 131)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 131)), enumerator_5310.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 127)) ;
    {
    var_propertyMap_5148.setter_insertKey (enumerator_5310.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_5310.current (HERE).readProperty_accessControl (), var_structTypeIndex_5069, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 136)), enumerator_5310.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 137)), var_propertyTypeEntry_5392, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 134)) ;
    }
    enumerator_5310.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_6192 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6192, inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 142)) ;
  }
  GGS_setterMap var_setterMap_6245 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_6285 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_6333 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_structTypeName (), GGS_bool (false), var_initializerMap_6285, var_getterMap_6192, var_setterMap_6245, var_instanceMethodMap_6333, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 147)) ;
  }
  GGS_typeFeatures var_features_6792 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-struct.galgas4", 162)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_initializerMap_6285.getter_count (SOURCE_FILE ("declaration-type-struct.galgas4", 164)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_features_6792.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 165)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 165)) ;
      {
      const GGS_structDeclarationAST temp_7 = this ;
      var_initializerMap_6285.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_5202, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 167)), temp_7.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_5202, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 166)) ;
      }
    }
  }
  const GGS_structDeclarationAST temp_8 = this ;
  switch (temp_8.readProperty_comparison ().enumValue ()) {
  case GGS_structComparison::Enumeration::invalid:
    break ;
  case GGS_structComparison::Enumeration::enum_none:
    break ;
  case GGS_structComparison::Enumeration::enum_equatable:
    {
      var_features_6792.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 175)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_6792.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 177)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 177)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 177)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 177)) ;
    }
    break ;
  }
  {
  const GGS_structDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_structTypeName (), var_features_6792, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 179)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedType_7618 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_structDeclarationAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_enumeratedElementTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      var_enumeratedType_7618 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 189)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    {
    const GGS_structDeclarationAST temp_12 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_12.readProperty_enumeratedElementTypeName (), var_enumeratedType_7618, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 191)) ;
    }
  }
  const GGS_structDeclarationAST temp_13 = this ;
  const GGS_structDeclarationAST temp_14 = this ;
  const GGS_structDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_7849 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_structTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 199)), GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-struct.galgas4", 200)), GGS_bool (false), var_typedPropertyList_5261, var_propertyMap_5148, var_typedPropertyList_5261, var_initializerMap_6285, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6192, var_setterMap_6245, var_instanceMethodMap_6333, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 211)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_6792, GGS_bool (false), var_enumeratedType_7618, GGS_string ("struct-").add_operation (temp_15.readProperty_structTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-struct.galgas4", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 218)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-struct.galgas4", 219)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7849.readProperty_typeName (), var_typeDefinition_7849, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 221)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                         const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                         GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_structType_9433 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 234)) ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_structNameForUsefulness_9506 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 235)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_structDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mStructurePropertyListAST ().getter_count (SOURCE_FILE ("declaration-type-struct.galgas4", 237)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_structDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_structTypeName ().readProperty_location (), GGS_string ("a structure cannot be empty: it must have at least one property"), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 238)) ;
    }
  }
  GGS__5B_typedProperty_5D_ var_typedPropertyList_9779 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_constructorArgumentList_9828 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_propertyMap_9884 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_6 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_9927 (temp_6.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_9927.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_9966 = function_typeNameForUsefulEntitiesGraph (enumerator_9927.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 244)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9506, var_propertyTypeNameForUsefulness_9966 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 245)) ;
    }
    GGS_unifiedTypeMapEntry var_t_10166 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9927.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 246)) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = function_kForbiddenKeysForStruct (inCompiler COMMA_HERE).getter_contains (enumerator_9927.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 247)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_string var_m_10310 = GGS_string ("an property cannot be named:") ;
        UpEnumerator_stringset enumerator_10362 (function_kForbiddenKeysForStruct (inCompiler COMMA_HERE)) ;
        while (enumerator_10362.hasCurrentObject ()) {
          var_m_10310.plusAssignOperation(GGS_string (" ").add_operation (enumerator_10362.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 250)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 250)) ;
          enumerator_10362.gotoNextObject () ;
        }
        var_m_10310.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 252)) ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_9927.current (HERE).readProperty_name ().readProperty_location (), var_m_10310, fixItArray8  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 253)) ;
      }
    }
    {
    var_propertyMap_9884.setter_insertKey (enumerator_9927.current (HERE).readProperty_name (), var_t_10166, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 266)) ;
    }
    switch (enumerator_9927.current (HERE).readProperty_initialization ().enumValue ()) {
    case GGS_propertyInCollectionInitializationAST::Enumeration::invalid:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_none:
      {
        var_constructorArgumentList_9828.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10166, enumerator_9927.current (HERE).readProperty_name (), enumerator_9927.current (HERE).readProperty_initialization (), enumerator_9927.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 273)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 273)), enumerator_9927.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 269)) ;
      }
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_some:
      break ;
    }
    var_typedPropertyList_9779.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10166, enumerator_9927.current (HERE).readProperty_name (), enumerator_9927.current (HERE).readProperty_initialization (), enumerator_9927.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 281)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 281)), enumerator_9927.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 277)) ;
    const GGS_structDeclarationAST temp_9 = this ;
    switch (temp_9.readProperty_comparison ().enumValue ()) {
    case GGS_structComparison::Enumeration::invalid:
      break ;
    case GGS_structComparison::Enumeration::enum_none:
      break ;
    case GGS_structComparison::Enumeration::enum_equatable:
      {
        GGS_typeFeatures var_propertyFeatures_11663 = extensionGetter_definition (var_t_10166, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 288)).readProperty_features () ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = var_propertyFeatures_11663.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 289)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 289)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 289)).operator_and (var_propertyFeatures_11663.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 290)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 290)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 290)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 289)).operator_and (var_propertyFeatures_11663.getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-struct.galgas4", 291)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 291)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 291)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 290)).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_9927.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not equatable, because '").add_operation (enumerator_9927.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 293)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 293)), fixItArray11  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 292)) ;
          }
        }
      }
      break ;
    case GGS_structComparison::Enumeration::enum_comparable:
      {
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = extensionGetter_definition (var_t_10166, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 296)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 296)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 296)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 296)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_9927.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not comparable, because '").add_operation (enumerator_9927.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 298)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 298)), fixItArray13  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 297)) ;
          }
        }
      }
      break ;
    }
    enumerator_9927.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_12503 ;
  GGS_string var_initializationCode_12540 ;
  const GGS_structDeclarationAST temp_14 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_14.readProperty_mStructurePropertyListAST (), var_structNameForUsefulness_9506, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_12503, var_initializationCode_12540, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 303)) ;
  GGS_bool var_constructorNeedsCompilerVar_12581 = var_unusedVariableCppNameSet_12503.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 313)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 313)) ;
  const GGS_structDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_structTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("struct ").add_operation (temp_15.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 315)), var_structType_9433, var_typedPropertyList_9779, var_constructorArgumentList_9828, var_initializationCode_12540, var_constructorNeedsCompilerVar_12581, extensionGetter_definition (var_structType_9433, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 321)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 321)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 321)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 314)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9506, var_structNameForUsefulness_9506, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 324)) ;
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    const GGS_structDeclarationAST temp_17 = this ;
    GGS_bool test_18 = temp_17.readProperty_isUsefullStruct () ;
    if (GalgasBool::boolTrue != test_18.boolEnum ()) {
      const GGS_structDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_isPredefined () ;
    }
    test_16 = test_18.boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_structNameForUsefulness_9506  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 326)) ;
    }
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = extensionGetter_definition (var_structType_9433, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 329)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 329)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 329)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_structDeclarationAST temp_21 = this ;
      GGS_lstring var_initializerForUsefulness_13388 = function_initializerNameForUsefulEntitiesGraph (temp_21.readProperty_structTypeName (), extensionGetter_initializerSignature (var_constructorArgumentList_9828, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 330)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_13388, var_initializerForUsefulness_13388, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 334)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_13388, var_structNameForUsefulness_9506 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 335)) ;
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_structDeclarationAST temp_23 = this ;
        GGS_bool test_24 = temp_23.readProperty_isUsefullStruct () ;
        if (GalgasBool::boolTrue != test_24.boolEnum ()) {
          const GGS_structDeclarationAST temp_25 = this ;
          test_24 = temp_25.readProperty_isPredefined () ;
        }
        test_22 = test_24.boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerForUsefulness_13388  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 337)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                 GGS_string & outArgument_outHeader,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_14743 (temp_0.readProperty_mTypedPropertyList ()) ;
  while (enumerator_14743.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_14743.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 361)) ;
    enumerator_14743.gotoNextObject () ;
  }
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_14844 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 363)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_structureGenerationTemplate::class_func_structTypeHeader_31_ (var_selfTypeDefinition_14844.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 366)), temp_3.readProperty_mTypedPropertyList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 364)) ;
  const GGS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_14844.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 371)), var_selfTypeDefinition_14844.readProperty_isConcrete (), var_selfTypeDefinition_14844.readProperty_initializerMap (), var_selfTypeDefinition_14844.readProperty_classFunctionMap (), var_selfTypeDefinition_14844.readProperty_getterMap (), var_selfTypeDefinition_14844.readProperty_setterMap (), var_selfTypeDefinition_14844.readProperty_instanceMethodMap (), var_selfTypeDefinition_14844.readProperty_classMethodMap (), var_selfTypeDefinition_14844.readProperty_readSubscriptMap (), var_selfTypeDefinition_14844.readProperty_writeSubscriptMap (), var_selfTypeDefinition_14844.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_14844.readProperty_features (), var_selfTypeDefinition_14844.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_14844.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 369)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 369)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_string & outArgument_outImplementation,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 394)) ;
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_16131 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 395)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  const GGS_structTypeForGeneration temp_4 = this ;
  const GGS_structTypeForGeneration temp_5 = this ;
  const GGS_structTypeForGeneration temp_6 = this ;
  const GGS_structTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_structureGenerationTemplate::class_func_structTypeSpecificImplementation (var_selfTypeDefinition_16131.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 398)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar (), temp_7.readProperty_synthetizeAnInitializer (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_16131.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 404)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 396)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@enumDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_enumDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_enumDeclarationAST temp_0 = this ;
  result = GGS_string ("enum @").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 117)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumDeclarationAST temp_0 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_4492 (temp_0.readProperty_mConstantList ()) ;
  while (enumerator_4492.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_4492.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 124)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_enumDeclarationAST temp_2 = this ;
        GGS_lstring var_associatedTypeName_4578 = GGS_lstring::init_21__21_ (function_makeEmbeddedTypeName (temp_2.readProperty_enumTypeName ().readProperty_string (), enumerator_4492.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 126)), enumerator_4492.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
        GGS__5B_propertyInCollectionAST_5D_ var_propertyListAST_4766 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_associatedValue_5D_ enumerator_4828 (enumerator_4492.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_4828.hasCurrentObject ()) {
          GGS_lstring var_associatedValueTypeName_4869 = enumerator_4828.current (HERE).readProperty_typeName () ;
          var_propertyListAST_4766.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-enum.galgas4", 133)), var_associatedValueTypeName_4869, enumerator_4828.current (HERE).readProperty_valueName (), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-enum.galgas4", 136)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas4", 138)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 132)) ;
          enumerator_4828.gotoNextObject () ;
        }
        const GGS_enumDeclarationAST temp_3 = this ;
        GGS_structDeclarationAST var_s_5212 = GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_associatedTypeName_4578, var_propertyListAST_4766, GGS_string::makeEmptyString (), temp_3.readProperty_comparison (), GGS_bool (true), inCompiler COMMA_HERE) ;
        ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (var_s_5212  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 148)) ;
        {
        GGS_lstring joker_5556 ; // Joker input parameter
        extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_5556, var_associatedTypeName_4578, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 149)) ;
        }
      }
    }
    enumerator_4492.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                              GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumDeclarationAST temp_0 = this ;
  const GGS_enumDeclarationAST temp_1 = this ;
  GGS_lstring var_key_6384 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 168)), temp_1.readProperty_enumTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6384, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 169)) ;
  }
  GGS_bool var_circularReference_6612 = GGS_bool (true) ;
  const GGS_enumDeclarationAST temp_3 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_6662 (temp_3.readProperty_mConstantList ()) ;
  bool bool_4 = var_circularReference_6612.isValidAndTrue () ;
  if (enumerator_6662.hasCurrentObject () && bool_4) {
    while (enumerator_6662.hasCurrentObject () && bool_4) {
      GGS_bool var_namesCurrentType_6713 = GGS_bool (false) ;
      UpEnumerator__5B_associatedValue_5D_ enumerator_6776 (enumerator_6662.current (HERE).readProperty_associatedValueTypeList ()) ;
      bool bool_5 = var_namesCurrentType_6713.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 174)).isValidAndTrue () ;
      if (enumerator_6776.hasCurrentObject () && bool_5) {
        while (enumerator_6776.hasCurrentObject () && bool_5) {
          GGS_lstring var_propertyKey_6842 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_6776.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 175)), enumerator_6776.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, var_propertyKey_6842.readProperty_string ().objectCompare (var_key_6384.readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_namesCurrentType_6713 = GGS_bool (true) ;
            }
          }
          enumerator_6776.gotoNextObject () ;
          if (enumerator_6776.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_6713.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 174)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_namesCurrentType_6713.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 180)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_circularReference_6612 = GGS_bool (false) ;
        }
      }
      enumerator_6662.gotoNextObject () ;
      if (enumerator_6662.hasCurrentObject ()) {
        bool_4 = var_circularReference_6612.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_circularReference_6612.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_enumDeclarationAST temp_9 = this ;
      UpEnumerator__5B_enumConstant_5D_ enumerator_7242 (temp_9.readProperty_mConstantList ()) ;
      while (enumerator_7242.hasCurrentObject ()) {
        UpEnumerator__5B_associatedValue_5D_ enumerator_7299 (enumerator_7242.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_7299.hasCurrentObject ()) {
          GGS_lstring var_propertyKey_7340 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_7299.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 188)), enumerator_7299.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = GGS_bool (ComparisonKind::notEqual, var_propertyKey_7340.readProperty_string ().objectCompare (var_key_6384.readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6384, var_propertyKey_7340 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 190)) ;
              }
            }
          }
          enumerator_7299.gotoNextObject () ;
        }
        enumerator_7242.gotoNextObject () ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                        const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classFunctionMap var_classFunctionMap_8305 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_8347 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_enumTypeEntry_8445 ;
  {
  const GGS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_enumTypeName (), var_enumTypeEntry_8445, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 211)) ;
  }
  GGS_constantIndexMap var_constantMap_8510 = GGS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  GGS_bool var_hasAssociatedValues_8542 = GGS_bool (false) ;
  const GGS_enumDeclarationAST temp_1 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_8595 (temp_1.readProperty_mConstantList ()) ;
  while (enumerator_8595.hasCurrentObject ()) {
    GGS__5B_associatedValueDescriptor_5D_ var_associatedTypeList_8651 = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_HERE) ;
    GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_8714 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_associatedValue_5D_ enumerator_8775 (enumerator_8595.current (HERE).readProperty_associatedValueTypeList ()) ;
    while (enumerator_8775.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_associatedTypeEntry_8864 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8775.current (HERE).readProperty_typeName (), var_associatedTypeEntry_8864, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 219)) ;
      }
      var_argumentTypeList_8714.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_8775.current (HERE).readProperty_valueName (), var_associatedTypeEntry_8864, enumerator_8775.current (HERE).readProperty_typeName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 220)) ;
      var_associatedTypeList_8651.plusPlusAssignOperation (GGS_associatedValueDescriptor::init_21__21_ (var_associatedTypeEntry_8864, enumerator_8775.current (HERE).readProperty_valueName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 221)) ;
      var_hasAssociatedValues_8542 = GGS_bool (true) ;
      enumerator_8775.gotoNextObject () ;
    }
    {
    var_constantMap_8510.setter_insertKey (enumerator_8595.current (HERE).readProperty_name (), var_constantMap_8510.getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 224)), var_associatedTypeList_8651, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 224)) ;
    }
    {
    var_classFunctionMap_8305.setter_insertOrReplace (enumerator_8595.current (HERE).readProperty_name (), var_argumentTypeList_8714, GGS_bool (false), var_enumTypeEntry_8445 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 225)) ;
    }
    enumerator_8595.gotoNextObject () ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_9458 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_2 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_9507 (temp_2.readProperty_mConstantList ()) ;
  while (enumerator_9507.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_9507.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 235)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS__5B_unifiedTypeMapEntry_5D_ var_associatedTypeList_9616 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
        GGS__5B_formalParameterSignatureElement_5D_ var_argumentTypeList_9688 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_associatedValue_5D_ enumerator_9751 (enumerator_9507.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_9751.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_associatedTypeEntry_9842 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9751.current (HERE).readProperty_typeName (), var_associatedTypeEntry_9842, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 239)) ;
          }
          var_argumentTypeList_9688.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_9751.current (HERE).readProperty_valueName (), var_associatedTypeEntry_9842, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-enum.galgas4", 240)), enumerator_9751.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 240)) ;
          var_associatedTypeList_9616.plusPlusAssignOperation (var_associatedTypeEntry_9842  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 241)) ;
          var_hasAssociatedValues_8542 = GGS_bool (true) ;
          enumerator_9751.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_9458.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("extract").add_operation (enumerator_9507.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 245)), enumerator_9507.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-enum.galgas4", 246)), var_argumentTypeList_9688, enumerator_9507.current (HERE).readProperty_name ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-enum.galgas4", 250)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 244)) ;
        }
      }
    }
    enumerator_9507.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_10470 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_10470, inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 256)) ;
  }
  const GGS_enumDeclarationAST temp_4 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_10506 (temp_4.readProperty_mConstantList ()) ;
  while (enumerator_10506.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_10506.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 258)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_enumDeclarationAST temp_6 = this ;
        GGS_string var_associatedTypeName_10592 = function_makeEmbeddedTypeName (temp_6.readProperty_enumTypeName ().readProperty_string (), enumerator_10506.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 259)) ;
        GGS_string var_optionalTypeName_10697 = function_makeOptionalTypeName (var_associatedTypeName_10592, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 260)) ;
        {
        routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10470, ioArgument_ioTypeMap, GGS_string ("get").add_operation (enumerator_10506.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 264)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 264)), var_optionalTypeName_10697, GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 261)) ;
        }
      }
    }
    enumerator_10506.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_7 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_11103 (temp_7.readProperty_mConstantList ()) ;
  while (enumerator_11103.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10470, ioArgument_ioTypeMap, GGS_string ("is").add_operation (enumerator_11103.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 275)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 275)), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 272)) ;
    }
    enumerator_11103.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_11411 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_enumDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_enumTypeName (), GGS_bool (false), var_initializerMap_11411, var_getterMap_10470, var_setterMap_8347, var_instanceMethodMap_9458, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 282)) ;
  }
  GGS_typeFeatures var_features_11882 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-enum.galgas4", 298)) ;
  const GGS_enumDeclarationAST temp_9 = this ;
  switch (temp_9.readProperty_comparison ().enumValue ()) {
  case GGS_structComparison::Enumeration::invalid:
    break ;
  case GGS_structComparison::Enumeration::enum_none:
    break ;
  case GGS_structComparison::Enumeration::enum_equatable:
    {
      var_features_11882.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 303)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 303)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_11882.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 305)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 305)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 305)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 305)) ;
    }
    break ;
  }
  {
  const GGS_enumDeclarationAST temp_10 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_10.readProperty_enumTypeName (), var_features_11882, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 307)) ;
  }
  const GGS_enumDeclarationAST temp_11 = this ;
  const GGS_enumDeclarationAST temp_12 = this ;
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12353 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_11.readProperty_enumTypeName (), temp_12.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 320)), GGS_typeKindEnum::class_func_enumType (var_constantMap_8510  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 321)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_11411, var_classFunctionMap_8305, var_getterMap_10470, var_setterMap_8347, var_instanceMethodMap_9458, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 332)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_11882, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 338)), GGS_string ("enum-").add_operation (temp_13.readProperty_enumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 339)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 339)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-enum.galgas4", 340)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12353.readProperty_typeName (), var_typeDefinition_12353, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 342)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_14000 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 356)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14000, var_nameForUsefulness_14000, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 357)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_enumDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_14000  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 359)) ;
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_associatedValuesTypes_14291 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_constantList_14327 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_enumConstantForGeneration_5D_ var_enumConstantListForGeneration_14392 = GGS__5B_enumConstantForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  GGS_constantIndexMap var_constantMap_14436 = GGS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_3 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_14496 (temp_3.readProperty_mConstantList ()) ;
  while (enumerator_14496.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_14496.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 367)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_enumDeclarationAST temp_5 = this ;
        GGS_string var_associatedTypeName_14582 = function_makeEmbeddedTypeName (temp_5.readProperty_enumTypeName ().readProperty_string (), enumerator_14496.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 368)) ;
        GGS_string var_optionalTypeName_14687 = function_makeOptionalTypeName (var_associatedTypeName_14582, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 369)) ;
        GGS_unifiedTypeMapEntry var_associatedType_14775 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (var_optionalTypeName_14687, enumerator_14496.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 370)) ;
        {
        var_associatedValuesTypes_14291.setter_append (var_associatedType_14775, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 371)) ;
        }
      }
    }
    var_constantList_14327.plusPlusAssignOperation (enumerator_14496.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 373)) ;
    GGS__5B_associatedValueDescriptor_5D_ var_associatedTypeList_15008 = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_HERE) ;
    GGS_stringset var_associatedValueNameSet_15054 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_associatedValue_5D_ enumerator_15121 (enumerator_14496.current (HERE).readProperty_associatedValueTypeList ()) ;
    while (enumerator_15121.hasCurrentObject ()) {
      GGS_lstring var_propertyTypeNameForUsefulness_15160 = function_typeNameForUsefulEntitiesGraph (enumerator_15121.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 377)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14000, var_propertyTypeNameForUsefulness_15160 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 378)) ;
      }
      GGS_unifiedTypeMapEntry var_associatedTypeEntry_15365 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_15121.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 379)) ;
      var_associatedTypeList_15008.plusPlusAssignOperation (GGS_associatedValueDescriptor::init_21__21_ (var_associatedTypeEntry_15365, enumerator_15121.current (HERE).readProperty_valueName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 380)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_associatedValueNameSet_15054.getter_contains (enumerator_15121.current (HERE).readProperty_valueName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 381)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_15121.current (HERE).readProperty_valueName ().readProperty_location (), GGS_string ("duplicated name"), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 382)) ;
        }
      }
      var_associatedValueNameSet_15054.plusPlusAssignOperation (enumerator_15121.current (HERE).readProperty_valueName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 384)) ;
      const GGS_enumDeclarationAST temp_8 = this ;
      switch (temp_8.readProperty_comparison ().enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GGS_unifiedTypeDefinition var_associatedType_15863 = extensionGetter_definition (var_associatedTypeEntry_15365, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 389)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_associatedType_15863.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 390)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 390)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 390)).operator_and (var_associatedType_15863.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 391)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 391)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 391)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 390)).operator_and (var_associatedType_15863.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-enum.galgas4", 392)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 392)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 392)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 391)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_15121.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_15121.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 393)).add_operation (GGS_string (" should be equatable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 393)), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 393)) ;
            }
          }
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GGS_unifiedTypeDefinition var_associatedType_16278 = extensionGetter_definition (var_associatedTypeEntry_15365, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 396)) ;
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = var_associatedType_16278.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 397)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 397)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 397)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_15121.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_15121.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 398)).add_operation (GGS_string (" should be comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 398)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 398)) ;
            }
          }
        }
        break ;
      }
      enumerator_15121.gotoNextObject () ;
    }
    {
    var_constantMap_14436.setter_insertKey (enumerator_14496.current (HERE).readProperty_name (), var_constantMap_14436.getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 402)), var_associatedTypeList_15008, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 402)) ;
    }
    var_enumConstantListForGeneration_14392.plusPlusAssignOperation (GGS_enumConstantForGeneration::init_21__21_ (enumerator_14496.current (HERE).readProperty_name ().readProperty_string (), var_associatedTypeList_15008, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 403)) ;
    enumerator_14496.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeMapEntry var_selfType_16730 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_13.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 406)) ;
  const GGS_enumDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_enumTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("enum ").add_operation (temp_14.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 408)), var_selfType_16730, var_enumConstantListForGeneration_14392, var_associatedValuesTypes_14291, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 407)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_hasAssociatedValues_17990 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_18043 (temp_0.readProperty_constantList ()) ;
  bool bool_1 = var_hasAssociatedValues_17990.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 439)).isValidAndTrue () ;
  if (enumerator_18043.hasCurrentObject () && bool_1) {
    while (enumerator_18043.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_17990 = GGS_bool (ComparisonKind::greaterThan, enumerator_18043.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 440)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) ;
      enumerator_18043.gotoNextObject () ;
      if (enumerator_18043.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_17990.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 439)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_18176 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 442)) ;
  const GGS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_enumGenerationTemplate::class_func_enumTypeHeader_31_ (var_selfTypeDefinition_18176.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_18176.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 445)), temp_3.readProperty_constantList (), var_hasAssociatedValues_17990, inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 443)) ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_18176.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_18176.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 451)), var_selfTypeDefinition_18176.readProperty_isConcrete (), var_selfTypeDefinition_18176.readProperty_initializerMap (), var_selfTypeDefinition_18176.readProperty_classFunctionMap (), var_selfTypeDefinition_18176.readProperty_getterMap (), var_selfTypeDefinition_18176.readProperty_setterMap (), var_selfTypeDefinition_18176.readProperty_instanceMethodMap (), var_selfTypeDefinition_18176.readProperty_classMethodMap (), var_selfTypeDefinition_18176.readProperty_readSubscriptMap (), var_selfTypeDefinition_18176.readProperty_writeSubscriptMap (), var_selfTypeDefinition_18176.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_18176.readProperty_features (), var_selfTypeDefinition_18176.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_18176.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 449)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 449)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_19544 (temp_0.readProperty_associatedValuesTypes ()) ;
  while (enumerator_19544.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19544.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 474)) ;
    enumerator_19544.gotoNextObject () ;
  }
  GGS_bool var_hasAssociatedValues_19639 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_1 = this ;
  UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_19692 (temp_1.readProperty_constantList ()) ;
  bool bool_2 = var_hasAssociatedValues_19639.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 477)).isValidAndTrue () ;
  if (enumerator_19692.hasCurrentObject () && bool_2) {
    while (enumerator_19692.hasCurrentObject () && bool_2) {
      var_hasAssociatedValues_19639 = GGS_bool (ComparisonKind::greaterThan, enumerator_19692.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 478)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) ;
      enumerator_19692.gotoNextObject () ;
      if (enumerator_19692.hasCurrentObject ()) {
        bool_2 = var_hasAssociatedValues_19639.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 477)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 480)) ;
  const GGS_enumTypeForGeneration temp_4 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_19886 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 481)) ;
  const GGS_enumTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_enumGenerationTemplate::class_func_enumTypeSpecificImplementation (var_selfTypeDefinition_19886.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_19886.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 484)), temp_5.readProperty_constantList (), var_hasAssociatedValues_19639, extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_19886.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 487)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 482)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                   GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                   GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                   GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                   GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                   GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                   GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionSetDeclarationAST temp_0 = this ;
  const GGS_optionSetDeclarationAST temp_1 = this ;
  GGS_lstring var_key_3454 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mOptionSetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 81)), temp_1.readProperty_mOptionSetTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_optionSetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3454, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 82)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@optionSetDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_optionSetDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_optionSetDeclarationAST temp_0 = this ;
  result = GGS_string ("optionset @").add_operation (temp_0.readProperty_mOptionSetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 88)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                             const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                             const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                             const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                             const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_slotNameSet_4498 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_optionSetDeclarationAST temp_0 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_4541 (temp_0.readProperty_mFlagList ()) ;
  while (enumerator_4541.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_slotNameSet_4498.getter_contains (enumerator_4541.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 104)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4541.current (HERE).readProperty_location (), GGS_string ("duplicated slot name"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 105)) ;
      }
    }
    var_slotNameSet_4498.plusPlusAssignOperation (enumerator_4541.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 107)) ;
    enumerator_4541.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_optionSetType_4777 ;
  {
  const GGS_optionSetDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mOptionSetTypeName (), var_optionSetType_4777, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 110)) ;
  }
  GGS_getterMap var_getterMap_4869 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_4869, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 112)) ;
  }
  {
  const GGS_optionSetDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4869, ioArgument_ioTypeMap, GGS_string ("contains"), GGS_string::makeEmptyString (), temp_4.readProperty_mOptionSetTypeName ().readProperty_string (), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 113)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_5200 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  const GGS_optionSetDeclarationAST temp_5 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_5248 (temp_5.readProperty_mFlagList ()) ;
  while (enumerator_5248.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_classFunctionMap_5200.getter_contains (enumerator_5248.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 126)).operator_not (SOURCE_FILE ("declaration-type-optionset.galgas4", 126)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        {
        var_classFunctionMap_5200.setter_insertKey (enumerator_5248.current (HERE), GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), var_optionSetType_4777, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 127)) ;
        }
      }
    }
    enumerator_5248.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_5580 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_5637 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionSetDeclarationAST temp_7 = this ;
  var_initializerMap_5580.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_5637, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 139)), temp_7.readProperty_mOptionSetTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_5637, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 138)) ;
  }
  GGS_setterMap var_setterMap_5839 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_5882 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionSetDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mOptionSetTypeName (), GGS_bool (false), var_initializerMap_5580, var_getterMap_4869, var_setterMap_5839, var_instanceMethodMap_5882, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 145)) ;
  }
  GGS_typeFeatures var_features_6363 = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 161)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 161)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 161)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 161)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 161)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 162)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 161)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-optionset.galgas4", 163)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 162)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 163)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 163)).operator_or (GGS_typeFeatures::class_func_andAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 164)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 163)).operator_or (GGS_typeFeatures::class_func_orAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 165)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 164)).operator_or (GGS_typeFeatures::class_func_xorAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 166)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 165)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 167)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 166)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_optionSetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isEquatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      var_features_6363.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optionset.galgas4", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 169)) ;
    }
  }
  {
  const GGS_optionSetDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mOptionSetTypeName (), var_features_6363, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 171)) ;
  }
  const GGS_optionSetDeclarationAST temp_12 = this ;
  const GGS_optionSetDeclarationAST temp_13 = this ;
  const GGS_optionSetDeclarationAST temp_14 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_7051 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_12.readProperty_mOptionSetTypeName (), temp_13.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 184)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-optionset.galgas4", 185)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_5580, var_classFunctionMap_5200, var_getterMap_4869, var_setterMap_5839, var_instanceMethodMap_5882, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 196)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_6363, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 202)), GGS_string ("optionset-").add_operation (temp_14.readProperty_mOptionSetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 203)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 203)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-optionset.galgas4", 204)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7051.readProperty_typeName (), var_typeDefinition_7051, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 206)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                            const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                            const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                            GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionSetDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 219)).objectCompare (GGS_u_33__32_ (uint32_t (64U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionSetDeclarationAST temp_2 = this ;
      GGS_location var_s_8797 = temp_2.readProperty_mFlagList ().readSubscript__3F_ (GGS_u_33__32_ (uint32_t (64U)), inCompiler COMMA_HERE).readProperty_location () ;
      const GGS_optionSetDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_8797, GGS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 221)).getter_string (SOURCE_FILE ("declaration-type-optionset.galgas4", 221)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 221)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 221)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 221)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_5 = this ;
  GGS_lstring var_optionSetNameForUsefulness_8944 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mOptionSetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 224)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_optionSetNameForUsefulness_8944, var_optionSetNameForUsefulness_8944, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 225)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_optionSetDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_optionSetNameForUsefulness_8944  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 227)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_8 = this ;
  GGS_lstring var_initializerNameForUsefulness_9299 = function_initializerNameForUsefulEntitiesGraph (temp_8.readProperty_mOptionSetTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 232)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 230)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_9299, var_initializerNameForUsefulness_9299, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 234)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_optionSetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_9299  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 236)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_11 = this ;
  const GGS_optionSetDeclarationAST temp_12 = this ;
  const GGS_optionSetDeclarationAST temp_13 = this ;
  const GGS_optionSetDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_optionSetTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("optionset ").add_operation (temp_11.readProperty_mOptionSetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 240)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mOptionSetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 241)), temp_13.readProperty_mFlagList (), temp_14.readProperty_isEquatable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 239)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                    GGS_string & outArgument_outHeader,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionSetTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_10628 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 263)) ;
  const GGS_optionSetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_structGenerationTemplate::class_func_optionSetTypeHeader_31_ (var_selfTypeDefinition_10628.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_10628.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 266)), temp_1.readProperty_mFlagList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 264)) ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_10628.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_10628.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 271)), var_selfTypeDefinition_10628.readProperty_isConcrete (), var_selfTypeDefinition_10628.readProperty_initializerMap (), var_selfTypeDefinition_10628.readProperty_classFunctionMap (), var_selfTypeDefinition_10628.readProperty_getterMap (), var_selfTypeDefinition_10628.readProperty_setterMap (), var_selfTypeDefinition_10628.readProperty_instanceMethodMap (), var_selfTypeDefinition_10628.readProperty_classMethodMap (), var_selfTypeDefinition_10628.readProperty_readSubscriptMap (), var_selfTypeDefinition_10628.readProperty_writeSubscriptMap (), var_selfTypeDefinition_10628.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_10628.readProperty_features (), var_selfTypeDefinition_10628.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_10628.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 269)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 269)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_string & outArgument_outImplementation,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionSetTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 293)) ;
  const GGS_optionSetTypeForGeneration temp_1 = this ;
  const GGS_optionSetTypeForGeneration temp_2 = this ;
  const GGS_optionSetTypeForGeneration temp_3 = this ;
  const GGS_optionSetTypeForGeneration temp_4 = this ;
  const GGS_optionSetTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_structGenerationTemplate::class_func_optionSetTypeSpecificImplementation (extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 295)).readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 296)), temp_3.readProperty_mFlagList (), GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 298)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 298)).subtract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 298)), temp_5.readProperty_equatable (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 294)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@graphDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_graphDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_graphDeclarationAST temp_0 = this ;
  result = GGS_string ("graph @").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 96)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                               GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                               GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                               GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                               GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                               GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationAST temp_0 = this ;
  const GGS_graphDeclarationAST temp_1 = this ;
  GGS_lstring var_key_4779 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 109)), temp_1.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4779, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 110)) ;
  }
  const GGS_graphDeclarationAST temp_3 = this ;
  const GGS_graphDeclarationAST temp_4 = this ;
  GGS_lstring var_arrayTypeKey_4916 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mAssociatedArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 111)), temp_4.readProperty_mAssociatedArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4779, var_arrayTypeKey_4916 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 112)) ;
  }
  GGS_lstring var_lstringArrayTypeName_5102 = function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 113)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 113)) ;
  GGS_lstring var_lstringArrayTypeKey_5172 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (var_lstringArrayTypeName_5102.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 114)), var_lstringArrayTypeName_5102.readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4779, var_lstringArrayTypeKey_5172 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 115)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                         const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                         const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeEntry_6159 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeEntry_6159, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 128)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeEntry_6277 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeEntry_6277, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 130)) ;
  }
  {
  const GGS_graphDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_6368 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), joker_6368, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 132)) ;
  }
  GGS_unifiedTypeMapEntry var_associatedArrayType_6492 ;
  {
  const GGS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedArrayTypeName (), var_associatedArrayType_6492, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 134)) ;
  }
  GGS_unifiedTypeMapEntry var_associatedElementType_6637 ;
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mAssociatedElementTypeName (), var_associatedElementType_6637, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 136)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringArrayTypeEntry_6793 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 138)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 138)).readProperty_string (), var_lstringArrayTypeEntry_6793, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 138)) ;
  }
  GGS_getterMap var_getterMap_6885 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6885, inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 140)) ;
  }
  GGS_setterMap var_setterMap_6916 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_6959 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 146)), var_associatedArrayType_6492, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 148)), GGS_string ("outSortedInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 145)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 152)), var_lstringArrayTypeEntry_6793, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 154)), GGS_string ("outSortedLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 151)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 158)), var_associatedArrayType_6492, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 160)), GGS_string ("outUnsortedInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 157)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 164)), var_lstringArrayTypeEntry_6793, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 166)), GGS_string ("outUnsortedLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 163)) ;
  {
  var_instanceMethodMap_6959.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("topologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 170)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 171)), var_formalParameterList_7054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 173)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 175)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 169)) ;
  }
  {
  var_instanceMethodMap_6959.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("depthFirstTopologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 179)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 180)), var_formalParameterList_7054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 182)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 184)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 178)) ;
  }
  var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 190)), var_associatedArrayType_6492, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 192)), GGS_string ("outInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 189)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 196)), var_lstringArrayTypeEntry_6793, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 198)), GGS_string ("outLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 195)) ;
  {
  var_instanceMethodMap_6959.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("circularities"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 202)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 203)), var_formalParameterList_7054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 205)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 207)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 201)) ;
  }
  {
  var_instanceMethodMap_6959.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoSuccessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 211)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 212)), var_formalParameterList_7054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 214)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 216)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 210)) ;
  }
  {
  var_instanceMethodMap_6959.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoPredecessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 220)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 221)), var_formalParameterList_7054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 223)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 225)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 219)) ;
  }
  {
  const GGS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("nodeList"), temp_3.readProperty_mAssociatedArrayTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 229)) ;
  }
  {
  const GGS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("reversedGraph"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 237)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("undefinedNodeCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 245)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("undefinedNodeKeyList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 253)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("undefinedNodeReferenceList"), GGS_string ("[lstring]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 261)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("graphviz"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 269)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("isNodeDefined"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 277)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 287)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 297)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("lkeyList"), GGS_string ("[lstring]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 305)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("edges"), GGS_string ("[stringString]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 313)) ;
  }
  {
  const GGS_graphDeclarationAST temp_5 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("subgraphFromNodes"), GGS_string::makeEmptyString (), GGS_string ("[lstring]"), GGS_string ("inStartNodeLStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), temp_5.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 321)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("accessibleNodesFrom"), GGS_string::makeEmptyString (), GGS_string ("[lstring]"), GGS_string ("inStartNodeStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), GGS_string ("[lstring]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 335)) ;
  }
  var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 347)), var_lstringTypeEntry_6277, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 349)), GGS_string ("inLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 346)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 353)), var_associatedElementType_6637, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 355)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 352)) ;
  const GGS_graphDeclarationAST temp_6 = this ;
  UpEnumerator__5B_graphInsertModifier_5D_ enumerator_13222 (temp_6.readProperty_mInsertModifierList ()) ;
  while (enumerator_13222.hasCurrentObject ()) {
    {
    var_setterMap_6916.setter_insertOrReplace (enumerator_13222.current (HERE).readProperty_mInsertModifierName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 361)), var_formalParameterList_7054, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 364)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 359)) ;
    }
    enumerator_13222.gotoNextObject () ;
  }
  {
  var_setterMap_6916.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToDominators"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 370)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 371)), GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 374)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 369)) ;
  }
  var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 379)), var_stringTypeEntry_6159, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 379)), GGS_string ("inNodeName"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 379)) ;
  {
  var_setterMap_6916.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 381)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 382)), var_formalParameterList_7054, GGS_bool (true), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 385)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 380)) ;
  }
  var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("from").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 390)), var_lstringTypeEntry_6277, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 390)), GGS_string ("inSourceNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 390)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("to").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 391)), var_lstringTypeEntry_6277, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 391)), GGS_string ("inTargetNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 391)) ;
  {
  var_setterMap_6916.setter_insertKey (GGS_string ("addEdge").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 393)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 394)), var_formalParameterList_7054, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 397)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 392)) ;
  }
  var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 403)), var_lstringTypeEntry_6277, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 405)), GGS_string ("inNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 402)) ;
  {
  var_setterMap_6916.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("noteNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 408)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 409)), var_formalParameterList_7054, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 412)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 407)) ;
  }
  GGS_initializerMap var_initializerMap_15091 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_constructorPropertyTypeList_15148 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_7 = this ;
  var_initializerMap_15091.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_15148, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 419)), temp_7.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_15148, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 418)) ;
  }
  {
  const GGS_graphDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mGraphTypeName (), GGS_bool (false), var_initializerMap_15091, var_getterMap_6885, var_setterMap_6916, var_instanceMethodMap_6959, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 423)) ;
  }
  GGS_typeFeatures var_features_15792 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-graph.galgas4", 438)) ;
  {
  const GGS_graphDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_mGraphTypeName (), var_features_15792, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 439)) ;
  }
  const GGS_graphDeclarationAST temp_10 = this ;
  const GGS_graphDeclarationAST temp_11 = this ;
  const GGS_graphDeclarationAST temp_12 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_16072 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_10.readProperty_mGraphTypeName (), temp_11.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 452)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-graph.galgas4", 453)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_15091, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6885, var_setterMap_6916, var_instanceMethodMap_6959, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 464)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_15792, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 470)), GGS_string ("graph-").add_operation (temp_12.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-graph.galgas4", 471)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 471)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-graph.galgas4", 472)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_16072.readProperty_typeName (), var_typeDefinition_16072, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 474)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                        const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                        GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_17747 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 487)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17747, var_nameForUsefulness_17747, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 488)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_graphDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_17747  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 490)) ;
    }
  }
  const GGS_graphDeclarationAST temp_3 = this ;
  GGS_lstring var_associatedTypeNameForUsefulness_17995 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mAssociatedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 492)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17747, var_associatedTypeNameForUsefulness_17995 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 493)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_graphDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_associatedTypeNameForUsefulness_17995  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 495)) ;
    }
  }
  const GGS_graphDeclarationAST temp_6 = this ;
  GGS_lstring var_initializerNameForUsefulness_18374 = function_initializerNameForUsefulEntitiesGraph (temp_6.readProperty_mGraphTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 500)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 498)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_18374, var_initializerNameForUsefulness_18374, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 502)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_graphDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_18374  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 504)) ;
    }
  }
  const GGS_graphDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_graphTypeEntry_18751 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 507)) ;
  const GGS_graphDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_associatedArrayType_18828 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 508)) ;
  const GGS_graphDeclarationAST temp_11 = this ;
  GGS_unifiedTypeMapEntry var_associatedListElementTypeEntry_18920 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mAssociatedElementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 509)) ;
  GGS_unifiedTypeMapEntry var_lstringArrayTypeEntry_19025 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 510)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 510)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 510)) ;
  GGS_unifiedTypeMapEntry var_stringArrayTypeEntry_19128 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 511)) ;
  GGS_stringset temp_12 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 513)) ;
  temp_12.plusPlusAssignOperation (GGS_string ("noteNode")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 513)) ;
  temp_12.plusPlusAssignOperation (GGS_string ("addArc")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 513)) ;
  GGS_stringset var_reservedModifierNames_19271 = temp_12 ;
  const GGS_graphDeclarationAST temp_13 = this ;
  UpEnumerator__5B_graphInsertModifier_5D_ enumerator_19347 (temp_13.readProperty_mInsertModifierList ()) ;
  while (enumerator_19347.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_reservedModifierNames_19271.getter_contains (enumerator_19347.current (HERE).readProperty_mInsertModifierName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 515)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_19347.current (HERE).readProperty_mInsertModifierName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_19347.current (HERE).readProperty_mInsertModifierName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 517)).add_operation (GGS_string ("' mutating proc name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 517)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 516)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_19347.current (HERE).readProperty_mInsertErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 519)) ;
    }
    enumerator_19347.gotoNextObject () ;
  }
  const GGS_graphDeclarationAST temp_16 = this ;
  const GGS_graphDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_graphDeclarationForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("graph ").add_operation (temp_16.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 523)), var_graphTypeEntry_18751, var_associatedArrayType_18828, var_associatedListElementTypeEntry_18920, var_lstringArrayTypeEntry_19025, var_stringArrayTypeEntry_19128, temp_17.readProperty_mInsertModifierList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 522)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outHeader,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20947 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 552)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_mAssociatedArrayTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 553)) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_2.readProperty_mLStringArrayType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 554)) ;
  const GGS_graphDeclarationForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_3.readProperty_mStringArrayType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 555)) ;
  const GGS_graphDeclarationForGeneration temp_4 = this ;
  const GGS_graphDeclarationForGeneration temp_5 = this ;
  const GGS_graphDeclarationForGeneration temp_6 = this ;
  const GGS_graphDeclarationForGeneration temp_7 = this ;
  const GGS_graphDeclarationForGeneration temp_8 = this ;
  outArgument_outHeader = GGS_graphGenerationTemplate::class_func_graphTypeHeader_31_ (var_selfTypeDefinition_20947.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 558)), temp_5.readProperty_mAssociatedArrayTypeEntry (), temp_6.readProperty_mAssociatedElementTypeEntry (), temp_7.readProperty_mLStringArrayType (), temp_8.readProperty_mStringArrayType (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 556)) ;
  const GGS_graphDeclarationForGeneration temp_9 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_20947.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_9.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 566)), var_selfTypeDefinition_20947.readProperty_isConcrete (), var_selfTypeDefinition_20947.readProperty_initializerMap (), var_selfTypeDefinition_20947.readProperty_classFunctionMap (), var_selfTypeDefinition_20947.readProperty_getterMap (), var_selfTypeDefinition_20947.readProperty_setterMap (), var_selfTypeDefinition_20947.readProperty_instanceMethodMap (), var_selfTypeDefinition_20947.readProperty_classMethodMap (), var_selfTypeDefinition_20947.readProperty_readSubscriptMap (), var_selfTypeDefinition_20947.readProperty_writeSubscriptMap (), var_selfTypeDefinition_20947.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20947.readProperty_features (), var_selfTypeDefinition_20947.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20947.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 564)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 564)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 588)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedArrayTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 589)) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 590)) ;
  const GGS_graphDeclarationForGeneration temp_3 = this ;
  const GGS_graphDeclarationForGeneration temp_4 = this ;
  const GGS_graphDeclarationForGeneration temp_5 = this ;
  const GGS_graphDeclarationForGeneration temp_6 = this ;
  const GGS_graphDeclarationForGeneration temp_7 = this ;
  const GGS_graphDeclarationForGeneration temp_8 = this ;
  const GGS_graphDeclarationForGeneration temp_9 = this ;
  outArgument_outImplementation = GGS_graphGenerationTemplate::class_func_graphTypeSpecificImplementation (temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 593)), temp_5.readProperty_mAssociatedArrayTypeEntry (), temp_6.readProperty_mAssociatedElementTypeEntry (), temp_7.readProperty_mInsertModifierList (), temp_8.readProperty_mLStringArrayType (), temp_9.readProperty_mStringArrayType (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 591)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@optionalTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_optionalTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  result = GGS_string ("optional @").add_operation (temp_0.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 28)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_selfKey_2302 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 41)), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_selfKey_2302, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 42)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_3 = this ;
  const GGS_optionalTypeDeclarationAST temp_4 = this ;
  GGS_lstring var_unwrappedKey_2451 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_unwrappedTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 43)), temp_4.readProperty_unwrappedTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_selfKey_2302, var_unwrappedKey_2451 COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 44)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_getterMap var_getterMap_3336 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_3336, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 58)) ;
  }
  GGS_unifiedTypeMapEntry var_boolTypeEntry_3414 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("bool").getter_nowhere (SOURCE_FILE ("declaration-type-optional.galgas4", 60)), var_boolTypeEntry_3414, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 60)) ;
  }
  GGS_propertyMap var_propertyMap_3450 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  var_propertyMap_3450.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("isSome"), temp_0.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas4", 64)), GGS_bool (true), var_boolTypeEntry_3414, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 62)) ;
  }
  {
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  var_propertyMap_3450.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("isNil"), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas4", 70)), GGS_bool (true), var_boolTypeEntry_3414, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 68)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_3777 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_3820 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_3860 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_2 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_2.readProperty_optionalTypeName (), GGS_bool (false), var_initializerMap_3860, var_getterMap_3336, var_setterMap_3820, var_instanceMethodMap_3777, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 78)) ;
  }
  GGS_unifiedTypeMapEntry var_unwrappedType_4395 ;
  {
  const GGS_optionalTypeDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_unwrappedTypeName (), var_unwrappedType_4395, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 94)) ;
  }
  GGS_typeFeatures var_features_4435 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_unwrappedType_4395, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optional.galgas4", 97)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-optional.galgas4", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)).operator_or (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-optional.galgas4", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_features_4435.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optional.galgas4", 98)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 98)) ;
    }
  }
  {
  const GGS_optionalTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_optionalTypeName (), var_features_4435, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 100)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_6 = this ;
  const GGS_optionalTypeDeclarationAST temp_7 = this ;
  const GGS_optionalTypeDeclarationAST temp_8 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_4828 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_optionalTypeName (), temp_7.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas4", 113)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-optional.galgas4", 114)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_propertyMap_3450, GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_3860, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_3336, var_setterMap_3820, var_instanceMethodMap_3777, GGS_classMethodMap::init (inCompiler COMMA_HERE), var_unwrappedType_4395, GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_4435, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas4", 131)), GGS_string ("optional-").add_operation (temp_8.readProperty_optionalTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-optional.galgas4", 132)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 132)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-optional.galgas4", 133)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_4828.readProperty_typeName (), var_typeDefinition_4828, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 135)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_6568 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 154)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6568, var_nameForUsefulness_6568, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 155)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_unwrappedTypeNameForUsefulness_6726 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 156)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_6568, var_unwrappedTypeNameForUsefulness_6726 COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 157)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_optionalTypeDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isUsefull ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6568  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 159)) ;
    }
  }
  const GGS_optionalTypeDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_optionalType_7019 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 162)) ;
  const GGS_optionalTypeDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry var_unwrappedType_7096 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 163)) ;
  const GGS_optionalTypeDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_optionalTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("optional type ").add_operation (temp_6.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 167)), var_optionalType_7019, var_unwrappedType_7096, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas4", 170)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 166)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_string & outArgument_outHeader,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 190)) ;
  const GGS_optionalTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_8411 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 191)) ;
  const GGS_optionalTypeForGeneration temp_2 = this ;
  const GGS_optionalTypeForGeneration temp_3 = this ;
  const GGS_optionalTypeForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas4", 196)).boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_6) {
    const GGS_optionalTypeForGeneration temp_7 = this ;
    temp_5 = extensionGetter_identifierRepresentation (temp_7.readProperty_weakType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 196)) ;
  }
  outArgument_outHeader = GGS_optionalTypeGenerationTemplate::class_func_optionalTypeHeader_31_ (var_selfTypeDefinition_8411.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 194)), extensionGetter_identifierRepresentation (temp_3.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 195)), temp_5, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 192)) ;
  const GGS_optionalTypeForGeneration temp_8 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_8411.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 200)), var_selfTypeDefinition_8411.readProperty_isConcrete (), var_selfTypeDefinition_8411.readProperty_initializerMap (), var_selfTypeDefinition_8411.readProperty_classFunctionMap (), var_selfTypeDefinition_8411.readProperty_getterMap (), var_selfTypeDefinition_8411.readProperty_setterMap (), var_selfTypeDefinition_8411.readProperty_instanceMethodMap (), var_selfTypeDefinition_8411.readProperty_classMethodMap (), var_selfTypeDefinition_8411.readProperty_readSubscriptMap (), var_selfTypeDefinition_8411.readProperty_writeSubscriptMap (), var_selfTypeDefinition_8411.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_8411.readProperty_features (), var_selfTypeDefinition_8411.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_8411.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 198)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 198)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_string & outArgument_outImplementation,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 222)) ;
  const GGS_optionalTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 223)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_optionalTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas4", 224)).operator_not (SOURCE_FILE ("declaration-type-optional.galgas4", 224)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_optionalTypeForGeneration temp_4 = this ;
      extensionMethod_addHeaderFileName (temp_4.readProperty_weakType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 225)) ;
    }
  }
  const GGS_optionalTypeForGeneration temp_5 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_10052 = extensionGetter_definition (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 227)) ;
  const GGS_optionalTypeForGeneration temp_6 = this ;
  const GGS_optionalTypeForGeneration temp_7 = this ;
  const GGS_optionalTypeForGeneration temp_8 = this ;
  GGS_string temp_9 ;
  const GalgasBool test_10 = temp_8.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas4", 233)).boolEnum () ;
  if (GalgasBool::boolTrue == test_10) {
    temp_9 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_10) {
    const GGS_optionalTypeForGeneration temp_11 = this ;
    temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_weakType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 233)) ;
  }
  outArgument_outImplementation = GGS_optionalTypeGenerationTemplate::class_func_optionalTypeSpecificImplementation (var_selfTypeDefinition_10052.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 230)), extensionGetter_identifierRepresentation (temp_7.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 231)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_10052.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 232)), temp_9, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 228)) ;
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
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (function_makeEmbeddedTypeName (constinArgument_inOuterTypeName.readProperty_string (), constinArgument_inInnerTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 24)), constinArgument_inOuterTypeName.readProperty_location ().getter_union (constinArgument_inInnerTypeName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 25)), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeEmbeddedTypeName (const GGS_string & constinArgument_inOuterTypeName,
                                          const GGS_string & constinArgument_inInnerTypeName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = constinArgument_inOuterTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 32)).add_operation (constinArgument_inInnerTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 32)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeOptionalTypeName (const GGS_string & constinArgument_inTypeName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = constinArgument_inTypeName.add_operation (GGS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 40)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeOptionalTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = constinArgument_inTypeName ;
  result.mProperty_string.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 47)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeEmbeddedElementTypeName (const GGS_string & constinArgument_inTypeName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = function_makeEmbeddedTypeName (constinArgument_inTypeName, GGS_string ("element"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 55)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeEmbeddedElementTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (function_makeEmbeddedElementTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 61)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@mapDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_mapDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_mapDeclarationAST temp_0 = this ;
  result = GGS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 193)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_propertyInCollectionAST_5D_ var_structAttributeList_7543 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  var_structAttributeList_7543.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-map.galgas4", 201)), GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 202)), GGS_string ("lkey").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 203)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas4", 204)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-map.galgas4", 206)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 200)) ;
  const GGS_mapDeclarationAST temp_0 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_7837 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_7837.hasCurrentObject ()) {
    var_structAttributeList_7543.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-type-map.galgas4", 210)), enumerator_7837.current (HERE).readProperty_typeName (), enumerator_7837.current (HERE).readProperty_name (), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas4", 213)), enumerator_7837.current (HERE).readProperty_hasSelector (), enumerator_7837.current (HERE).readProperty_initialization (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 209)) ;
    enumerator_7837.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeName_8134 = function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 218)) ;
  const GGS_mapDeclarationAST temp_2 = this ;
  const GGS_mapDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas4", 224)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-map.galgas4", 224)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_2.readProperty_isPredefined (), var_elementTypeName_8134, var_structAttributeList_7543, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 219)) ;
  {
  GGS_lstring joker_8568 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_8568, var_elementTypeName_8134, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 228)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                             GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                             GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                             GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                             GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                             GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapDeclarationAST temp_0 = this ;
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_key_9317 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 241)), temp_1.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_9317, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 242)) ;
  }
  const GGS_mapDeclarationAST temp_3 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_9467 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_9467.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_9467.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 244)), enumerator_9467.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 244)) ;
    }
    enumerator_9467.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                       const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_10322 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeIndex_10322, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 259)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeIndex_10419 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeIndex_10419, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 261)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ temp_0 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 263)) ;
  temp_0.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_lstringTypeIndex_10419, GGS_string ("lkey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 263)) ;
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_10502 = temp_0 ;
  GGS_classFunctionMap var_classFunctionMap_10590 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_getterMap var_getterMap_10674 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_10674, inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 266)) ;
  }
  GGS_setterMap var_setterMap_10704 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_10747 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_1 = this ;
  const GGS_mapDeclarationAST temp_2 = this ;
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_10590, ioArgument_ioTypeMap, GGS_string ("mapWithMapToOverride"), temp_1.readProperty_mMapTypeName ().readProperty_string (), GGS_string ("inMap"), temp_2.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 270)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("levels"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 280)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("hasKeyAtLevel"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("u32"), GGS_string ("inLevel"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 287)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("keySet"), GGS_string ("stringset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 298)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string ("[lstring]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 305)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("contains"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 312)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 321)) ;
  }
  {
  const GGS_mapDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("overriddenMap"), temp_3.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 330)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 337)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_insertMethodFormalArgumentList_12746 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_typedPropertyList_12825 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_optionalMethodSignatureElement_5D_ var_optionalMethodSignature_12907 = GGS__5B_optionalMethodSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_12907.plusPlusAssignOperation (GGS_optionalMethodSignatureElement::init_21__21__21__21_ (GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 350)), var_stringTypeIndex_10322, GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 348)) ;
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeListForAddAssignWithFieldExpressionList_13076 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_13076.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 355)), var_lstringTypeIndex_10419, GGS_string ("lkey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 354)) ;
  var_insertMethodFormalArgumentList_12746.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 360)), var_lstringTypeIndex_10419, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 362)), GGS_string ("inLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 359)) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_removeMethodFormalArgumentList_13464 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_13464.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 366)), var_lstringTypeIndex_10419, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 368)), GGS_string ("inLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 365)) ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_typesToIncludeInHeaderCompilation_13688 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_4 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_13753 (temp_4.readProperty_mPropertyList ()) ;
  while (enumerator_13753.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = enumerator_13753.current (HERE).readProperty_initialization ().getter_isSome (SOURCE_FILE ("declaration-type-map.galgas4", 372)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_13753.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("property initialization is not handled for a map"), fixItArray6  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 373)) ;
      }
    }
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_13959 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13753.current (HERE).readProperty_typeName (), var_attributeTypeIndex_13959, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 375)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_13076.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 376)), var_attributeTypeIndex_13959, enumerator_13753.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 376)) ;
    var_typedPropertyList_12825.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_13959, enumerator_13753.current (HERE).readProperty_name (), enumerator_13753.current (HERE).readProperty_initialization (), GGS_bool (true), enumerator_13753.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 377)) ;
    var_typesToIncludeInHeaderCompilation_13688.plusPlusAssignOperation (var_attributeTypeIndex_13959  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 378)) ;
    var_enumerationDescriptor_10502.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_attributeTypeIndex_13959, enumerator_13753.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 379)) ;
    GGS_lstring temp_7 ;
    const GalgasBool test_8 = enumerator_13753.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      temp_7 = enumerator_13753.current (HERE).readProperty_name () ;
    }else if (GalgasBool::boolFalse == test_8) {
      temp_7 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 381)) ;
    }
    var_insertMethodFormalArgumentList_12746.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (temp_7, var_attributeTypeIndex_13959, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 383)), enumerator_13753.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 380)) ;
    GGS_lstring temp_9 ;
    const GalgasBool test_10 = enumerator_13753.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      temp_9 = enumerator_13753.current (HERE).readProperty_name () ;
    }else if (GalgasBool::boolFalse == test_10) {
      temp_9 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 387)) ;
    }
    var_removeMethodFormalArgumentList_13464.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (temp_9, var_attributeTypeIndex_13959, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-map.galgas4", 389)), enumerator_13753.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 386)) ;
    GGS_lstring temp_11 ;
    const GalgasBool test_12 = enumerator_13753.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      temp_11 = enumerator_13753.current (HERE).readProperty_name () ;
    }else if (GalgasBool::boolFalse == test_12) {
      temp_11 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 394)) ;
    }
    var_optionalMethodSignature_12907.plusPlusAssignOperation (GGS_optionalMethodSignatureElement::init_21__21__21__21_ (GGS_bool (false), temp_11, var_attributeTypeIndex_13959, enumerator_13753.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 392)) ;
    enumerator_13753.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_13 = this ;
  UpEnumerator__5B_insertSetterAST_5D_ enumerator_15055 (temp_13.readProperty_mInsertSetterList ()) ;
  while (enumerator_15055.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_setterMap_10704.getter_contains (enumerator_15055.current (HERE).readProperty_mInsertMethodName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 401)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_15055.current (HERE).readProperty_mInsertMethodName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_15055.current (HERE).readProperty_mInsertMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 402)).add_operation (GGS_string ("' insert proc is already declared"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 402)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 402)) ;
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      {
      var_setterMap_10704.setter_insertOrReplace (enumerator_15055.current (HERE).readProperty_mInsertMethodName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 406)), var_insertMethodFormalArgumentList_12746, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 409)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 404)) ;
      }
    }
    enumerator_15055.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_16 = this ;
  GGS_lstring var_elementTypeName_15546 = function_makeEmbeddedElementTypeLName (temp_16.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 415)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_15695 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_elementTypeName_15546, var_elementTypeEntry_15695, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 416)) ;
  }
  const GGS_mapDeclarationAST temp_17 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_15771 (temp_17.readProperty_mReplaceSetterList ()) ;
  while (enumerator_15771.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ temp_18 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 423)) ;
    temp_18.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("with").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 423)), var_elementTypeEntry_15695, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 423)), GGS_string ("inEntry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 423)) ;
    GGS__5B_formalParameterSignatureElement_5D_ var_replaceSetterFormalArgumentList_15838 = temp_18 ;
    {
    var_setterMap_10704.setter_insertOrReplace (enumerator_15771.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 427)), var_replaceSetterFormalArgumentList_15838, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 430)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 425)) ;
    }
    enumerator_15771.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_19 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_16192 (temp_19.readProperty_mRemoveSetterList ()) ;
  while (enumerator_16192.hasCurrentObject ()) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = var_setterMap_10704.getter_contains (enumerator_16192.current (HERE).readProperty_mName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 436)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_16192.current (HERE).readProperty_mName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_16192.current (HERE).readProperty_mName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 438)).add_operation (GGS_string ("' proc is already declared as an insert mutating proc or a remove mutating proc"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 438)), fixItArray21  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 437)) ;
      }
    }
    if (GalgasBool::boolFalse == test_20) {
      {
      var_setterMap_10704.setter_insertOrReplace (enumerator_16192.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 443)), var_removeMethodFormalArgumentList_13464, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 446)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 441)) ;
      }
    }
    enumerator_16192.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_22 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_16745 (temp_22.readProperty_mSearchMethodList ()) ;
  while (enumerator_16745.hasCurrentObject ()) {
    {
    var_instanceMethodMap_10747.setter_insertKey (enumerator_16745.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 455)), var_removeMethodFormalArgumentList_13464, enumerator_16745.current (HERE).readProperty_mName ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 459)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 453)) ;
    }
    enumerator_16745.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_23 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_17079 (temp_23.readProperty_mPropertyList ()) ;
  while (enumerator_17079.hasCurrentObject ()) {
    GGS_lstring var_accessorName_17106 = GGS_lstring::init_21__21_ (enumerator_17079.current (HERE).readProperty_name ().readProperty_string ().add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 465)), enumerator_17079.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_17241 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17079.current (HERE).readProperty_typeName (), var_attributeTypeIndex_17241, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 466)) ;
    }
    {
    GGS__5B_functionSignatureElement_5D_ temp_24 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 470)) ;
    temp_24.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 470)), var_stringTypeIndex_10322, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 470)) ;
    var_getterMap_10674.setter_insertOrReplace (var_accessorName_17106, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 469)), temp_24, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 471)), GGS_bool (true), var_attributeTypeIndex_17241, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 474)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 467)) ;
    }
    enumerator_17079.gotoNextObject () ;
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_mapDeclarationAST temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterOrEqual, temp_26.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 479)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_mapDeclarationAST temp_27 = this ;
      GGS_location var_insertOrReplaceLocation_17707 = temp_27.readProperty_mInsertOrReplaceDeclarationListAST ().getter_first (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 480)) ;
      {
      var_setterMap_10704.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insertOrReplace"), var_insertOrReplaceLocation_17707, inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 483)), var_insertMethodFormalArgumentList_12746, GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 486)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 481)) ;
      }
    }
  }
  const GGS_mapDeclarationAST temp_28 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_18124 (temp_28.readProperty_mPropertyList ()) ;
  while (enumerator_18124.hasCurrentObject ()) {
    GGS_lstring var_accessorName_18151 = GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_18124.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-map.galgas4", 493)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 493)).add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 493)), enumerator_18124.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_18382 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18124.current (HERE).readProperty_typeName (), var_attributeTypeIndex_18382, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 496)) ;
    }
    GGS__5B_formalParameterSignatureElement_5D_ var_accessorFormalArgumentList_18454 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_18454.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 501)), var_attributeTypeIndex_18382, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 501)), enumerator_18124.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 501)) ;
    var_accessorFormalArgumentList_18454.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 502)), var_stringTypeIndex_10322, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 502)), GGS_string ("key"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 502)) ;
    {
    var_setterMap_10704.setter_insertOrReplace (var_accessorName_18151, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 505)), var_accessorFormalArgumentList_18454, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 508)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 503)) ;
    }
    enumerator_18124.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_18987 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_19044 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_29 = this ;
  var_initializerMap_18987.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_19044, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 516)), temp_29.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_19044, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 515)) ;
  }
  GGS_typeFeatures var_features_19223 = GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-map.galgas4", 520)).operator_or (GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-map.galgas4", 521)) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 520)) ;
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    const GGS_mapDeclarationAST temp_31 = this ;
    test_30 = temp_31.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      var_features_19223.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas4", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 523)) ;
    }
  }
  {
  const GGS_mapDeclarationAST temp_32 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_32.readProperty_mMapTypeName (), var_features_19223, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 525)) ;
  }
  {
  const GGS_mapDeclarationAST temp_33 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_33.readProperty_mMapTypeName (), GGS_bool (false), var_initializerMap_18987, var_getterMap_10674, var_setterMap_10704, var_instanceMethodMap_10747, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 533)) ;
  }
  GGS_lstring var_optionalElementTypeName_20080 = function_makeOptionalTypeLName (var_elementTypeName_15546, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 549)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_20251 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_20080, var_optionalElementTypeEntry_20251, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 550)) ;
  }
  GGS_readSubscriptMap var_readSubcriptMap_20331 = GGS_readSubscriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_34 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 556)) ;
  temp_34.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 556)), var_stringTypeIndex_10322, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 556)) ;
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_20389 = temp_34 ;
  {
  var_readSubcriptMap_20331.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_20389, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 558)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 558)), inCompiler COMMA_HERE), var_argumentTypeList_20389, var_optionalElementTypeEntry_20251, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 557)) ;
  }
  const GGS_mapDeclarationAST temp_35 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_20636 (temp_35.readProperty_mSearchSubcriptList ()) ;
  while (enumerator_20636.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ temp_36 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 563)) ;
    temp_36.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_20636.current (HERE).readProperty_mName (), var_lstringTypeIndex_10419, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 563)) ;
    GGS__5B_functionSignatureElement_5D_ var_subcriptArgumentTypeList_20698 = temp_36 ;
    {
    var_readSubcriptMap_20331.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_subcriptArgumentTypeList_20698, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 565)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 565)), inCompiler COMMA_HERE), var_subcriptArgumentTypeList_20698, var_elementTypeEntry_15695, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 564)) ;
    }
    enumerator_20636.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_37 = this ;
  const GGS_mapDeclarationAST temp_38 = this ;
  const GGS_mapDeclarationAST temp_39 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_20994 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_37.readProperty_mMapTypeName (), temp_38.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas4", 576)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-map.galgas4", 577)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_12825, var_initializerMap_18987, var_classFunctionMap_10590, var_getterMap_10674, var_setterMap_10704, var_instanceMethodMap_10747, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas4", 588)), var_readSubcriptMap_20331, GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_10502, var_features_19223, GGS_bool (false), var_elementTypeEntry_15695, GGS_string ("map-").add_operation (temp_39.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-map.galgas4", 595)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 595)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-map.galgas4", 596)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_20994.readProperty_typeName (), var_typeDefinition_20994, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 598)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                      const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                      GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_22588 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 613)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_22588, var_nameForUsefulness_22588, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 614)) ;
  }
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_22742 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 616)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 615)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_22588, var_elementTypeNameForUsefulness_22742 COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 618)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_mapDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_22588  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 620)) ;
    }
  }
  const GGS_mapDeclarationAST temp_4 = this ;
  GGS_lstring var_initializerNameForUsefulness_23131 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mMapTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 625)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 623)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_23131, var_initializerNameForUsefulness_23131, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 627)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_23131, var_nameForUsefulness_22588 COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 628)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_mapDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_23131  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 630)) ;
    }
  }
  GGS__5B_typedProperty_5D_ var_typedAttributeList_23637 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_23688 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_7 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_23732 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_23732.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_23759 = function_typeNameForUsefulEntitiesGraph (enumerator_23732.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 636)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_22588, var_propertyTypeNameForUsefulness_23759 COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 637)) ;
    }
    GGS_unifiedTypeMapEntry var_t_23974 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_23732.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 638)) ;
    GGS_bool var_hasSelector_24038 = GGS_bool (false) ;
    var_typedAttributeList_23637.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_23974, enumerator_23732.current (HERE).readProperty_name (), enumerator_23732.current (HERE).readProperty_initialization (), GGS_bool (true), var_hasSelector_24038, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 640)) ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = function_kForbiddenKeysForMap (inCompiler COMMA_HERE).getter_contains (enumerator_23732.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 646)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GGS_string var_m_24305 = GGS_string ("a property cannot be named:") ;
        UpEnumerator_stringset enumerator_24356 (function_kForbiddenKeysForMap (inCompiler COMMA_HERE)) ;
        while (enumerator_24356.hasCurrentObject ()) {
          var_m_24305.plusAssignOperation(GGS_string (" ").add_operation (enumerator_24356.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 649)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 649)) ;
          enumerator_24356.gotoNextObject () ;
        }
        var_m_24305.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 651)) ;
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_23732.current (HERE).readProperty_name ().readProperty_location (), var_m_24305, fixItArray9  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 652)) ;
      }
    }
    {
    var_attributeMap_23688.setter_insertKey (enumerator_23732.current (HERE).readProperty_name (), var_t_23974, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 654)) ;
    }
    enumerator_23732.gotoNextObject () ;
  }
  GGS_insertMethodMap var_insertMethodMap_24611 = GGS_insertMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_10 = this ;
  UpEnumerator__5B_insertSetterAST_5D_ enumerator_24662 (temp_10.readProperty_mInsertSetterList ()) ;
  while (enumerator_24662.hasCurrentObject ()) {
    {
    var_insertMethodMap_24611.setter_insertKey (enumerator_24662.current (HERE).readProperty_mInsertMethodName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 659)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_24662.current (HERE).readProperty_mErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 660)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_24662.current (HERE).readProperty_mShadowErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 661)) ;
    }
    enumerator_24662.gotoNextObject () ;
  }
  GGS_searchMethodMap var_searchMethodMap_24944 = GGS_searchMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_11 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_24995 (temp_11.readProperty_mSearchMethodList ()) ;
  while (enumerator_24995.hasCurrentObject ()) {
    {
    var_searchMethodMap_24944.setter_insertKey (enumerator_24995.current (HERE).readProperty_mName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 666)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_24995.current (HERE).readProperty_mErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 667)) ;
    }
    enumerator_24995.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_12 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_25198 (temp_12.readProperty_mRemoveSetterList ()) ;
  while (enumerator_25198.hasCurrentObject ()) {
    {
    var_insertMethodMap_24611.setter_insertKey (enumerator_25198.current (HERE).readProperty_mName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 671)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_25198.current (HERE).readProperty_mErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 672)) ;
    }
    enumerator_25198.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_13 = this ;
  UpEnumerator__5B_location_5D_ enumerator_25470 (temp_13.readProperty_mInsertOrReplaceDeclarationListAST ()) ;
  GGS_u_33__32_ index_25423 (uint32_t (0)) ;
  while (enumerator_25470.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::greaterThan, index_25423.objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_25470.current (HERE), GGS_string ("the 'insertOrReplace' mutating proc is already declared"), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 677)) ;
      }
    }
    enumerator_25470.gotoNextObject () ;
    index_25423.plusAssignOperation (GGS_u_33__32_ (1), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 675)) ;
  }
  const GGS_mapDeclarationAST temp_16 = this ;
  GGS_bool var_hasInsertOrReplaceModifier_25677 = GGS_bool (ComparisonKind::greaterThan, temp_16.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 680)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_hasInsertOrReplaceModifier_25677.operator_and (var_insertMethodMap_24611.getter_contains (GGS_string ("insertOrReplace") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 681)) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 681)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_mapDeclarationAST temp_18 = this ;
      GGS_location var_insertOrReplaceDeclarationLocation_25852 = temp_18.readProperty_mInsertOrReplaceDeclarationListAST ().getter_first (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 682)) ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_25852, GGS_string ("the insertOrReplace' mutating proc cannot be declared : an insert mutating proc or a remove mutating proc has been declared with this name"), fixItArray19  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 683)) ;
    }
  }
  const GGS_mapDeclarationAST temp_20 = this ;
  GGS_lstring var_elementTypeName_26183 = function_makeEmbeddedElementTypeLName (temp_20.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 687)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_26258 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_elementTypeName_26183, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 688)) ;
  GGS_lstring var_optionalElementTypeName_26333 = function_makeOptionalTypeLName (var_elementTypeName_26183, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 689)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_26422 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_26333, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 690)) ;
  const GGS_mapDeclarationAST temp_21 = this ;
  const GGS_mapDeclarationAST temp_22 = this ;
  const GGS_mapDeclarationAST temp_23 = this ;
  const GGS_mapDeclarationAST temp_24 = this ;
  const GGS_mapDeclarationAST temp_25 = this ;
  const GGS_mapDeclarationAST temp_26 = this ;
  const GGS_mapDeclarationAST temp_27 = this ;
  const GGS_mapDeclarationAST temp_28 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_mapTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21_ (GGS_string ("map ").add_operation (temp_21.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 693)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_22.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 694)), var_elementTypeEntry_26258, temp_23.readProperty_mMapTypeName (), var_typedAttributeList_23637, temp_24.readProperty_mInsertSetterList (), temp_25.readProperty_mSearchMethodList (), temp_26.readProperty_mSearchSubcriptList (), temp_27.readProperty_mRemoveSetterList (), temp_28.readProperty_mReplaceSetterList (), var_hasInsertOrReplaceModifier_25677, var_optionalElementTypeEntry_26422, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 692)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const GGS_lstring constinArgument_inString,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_string_5D_ enumerator_27394 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 715))) ;
  while (enumerator_27394.hasCurrentObject ()) {
    GGS__5B_string_5D_ var_explodedArray_27417 = enumerator_27394.current (HERE).getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 716)) ;
    {
    GGS_string joker_27511 ; // Joker input parameter
    var_explodedArray_27417.setter_removeFirst (joker_27511, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 717)) ;
    }
    UpEnumerator__5B_string_5D_ enumerator_27532 (var_explodedArray_27417) ;
    while (enumerator_27532.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_27532.current (HERE).getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 719)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_27597 = enumerator_27532.current (HERE).getter_characterAtIndex (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 720)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_27597.objectCompare (GGS_char (utf32 (75)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 722)) ;
            }
          }
        }
      }
      enumerator_27532.gotoNextObject () ;
    }
    enumerator_27394.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (const GGS_lstring constinArgument_inString,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_string_5D_ enumerator_28071 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 732))) ;
  while (enumerator_28071.hasCurrentObject ()) {
    GGS__5B_string_5D_ var_explodedArray_28094 = enumerator_28071.current (HERE).getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 733)) ;
    {
    GGS_string joker_28188 ; // Joker input parameter
    var_explodedArray_28094.setter_removeFirst (joker_28188, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 734)) ;
    }
    UpEnumerator__5B_string_5D_ enumerator_28209 (var_explodedArray_28094) ;
    while (enumerator_28209.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_28209.current (HERE).getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 736)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_28274 = enumerator_28209.current (HERE).getter_characterAtIndex (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 737)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_28274.objectCompare (GGS_char (utf32 (75)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_c_28274.objectCompare (GGS_char (utf32 (76)))) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 738)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 739)) ;
            }
          }
        }
      }
      enumerator_28209.gotoNextObject () ;
    }
    enumerator_28071.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'kForbiddenKeysForMap'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_kForbiddenKeysForMap (Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 748)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("lkey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 748)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 748)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 748)) ;
  result = temp_0 ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_kForbiddenKeysForMap = false ;
static GGS_stringset gOnceFunctionResult_kForbiddenKeysForMap ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_kForbiddenKeysForMap (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_kForbiddenKeysForMap) {
    gOnceFunctionResult_kForbiddenKeysForMap = onceFunction_kForbiddenKeysForMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_kForbiddenKeysForMap = true ;
  }
  return gOnceFunctionResult_kForbiddenKeysForMap ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_kForbiddenKeysForMap (void) {
  gOnceFunctionResult_kForbiddenKeysForMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_kForbiddenKeysForMap (nullptr,
                                                                releaseOnceFunctionResult_kForbiddenKeysForMap) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                              GGS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_29700 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 770)) ;
  const GGS_mapTypeForGeneration temp_1 = this ;
  const GGS_mapTypeForGeneration temp_2 = this ;
  const GGS_mapTypeForGeneration temp_3 = this ;
  const GGS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GGS_mapGenerationTemplate::class_func_mapTypeHeader_31_ (var_selfTypeDefinition_29700.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 773)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList (), var_selfTypeDefinition_29700.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_29700.readProperty_typeForEnumeratedElement (), extensionGetter_identifierRepresentation (temp_4.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 778)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_29700.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 779)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 771)) ;
  const GGS_mapTypeForGeneration temp_5 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_29700.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 783)), var_selfTypeDefinition_29700.readProperty_isConcrete (), var_selfTypeDefinition_29700.readProperty_initializerMap (), var_selfTypeDefinition_29700.readProperty_classFunctionMap (), var_selfTypeDefinition_29700.readProperty_getterMap (), var_selfTypeDefinition_29700.readProperty_setterMap (), var_selfTypeDefinition_29700.readProperty_instanceMethodMap (), var_selfTypeDefinition_29700.readProperty_classMethodMap (), var_selfTypeDefinition_29700.readProperty_readSubscriptMap (), var_selfTypeDefinition_29700.readProperty_writeSubscriptMap (), var_selfTypeDefinition_29700.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_29700.readProperty_features (), var_selfTypeDefinition_29700.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_29700.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 781)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 781)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outImplementation,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 805)) ;
  const GGS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mOptionalElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 806)) ;
  const GGS_mapTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 807)) ;
  const GGS_mapTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_31449 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 808)) ;
  const GGS_mapTypeForGeneration temp_4 = this ;
  const GGS_mapTypeForGeneration temp_5 = this ;
  const GGS_mapTypeForGeneration temp_6 = this ;
  const GGS_mapTypeForGeneration temp_7 = this ;
  const GGS_mapTypeForGeneration temp_8 = this ;
  const GGS_mapTypeForGeneration temp_9 = this ;
  const GGS_mapTypeForGeneration temp_10 = this ;
  const GGS_mapTypeForGeneration temp_11 = this ;
  const GGS_mapTypeForGeneration temp_12 = this ;
  outArgument_outImplementation = GGS_mapGenerationTemplate::class_func_mapTypeSpecificImplementation (var_selfTypeDefinition_31449.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-map.galgas4", 810)), temp_4.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 812)), temp_6.readProperty_mInsertSetterList (), extensionGetter_identifierRepresentation (temp_7.readProperty_mOptionalElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 814)), temp_8.readProperty_mSearchMethodList (), temp_9.readProperty_mSearchSubcriptList (), temp_10.readProperty_mRemoveSetterList (), temp_11.readProperty_mReplaceSetterList (), temp_12.readProperty_mHasInsertOrReplaceModifier (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_31449.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 809)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@filewrapperDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_filewrapperDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  result = GGS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 206)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                     GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                     GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                     GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                     GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                     GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                     GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  GGS_lstring var_key_8784 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 219)), temp_1.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8784, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 220)) ;
  }
  const GGS_filewrapperDeclarationAST temp_3 = this ;
  UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_8939 (temp_3.readProperty_mFilewrapperTemplateListEX ()) ;
  while (enumerator_8939.hasCurrentObject ()) {
    UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_8995 (enumerator_8939.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_8995.hasCurrentObject ()) {
      GGS_lstring var_argKey_9052 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_8995.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 223)), enumerator_8995.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (var_argKey_9052 COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 224)) ;
      }
      enumerator_8995.gotoNextObject () ;
    }
    enumerator_8939.gotoNextObject () ;
  }
  const GGS_filewrapperDeclarationAST temp_4 = this ;
  UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_9248 (temp_4.readProperty_mFilewrapperTemplateList ()) ;
  while (enumerator_9248.hasCurrentObject ()) {
    UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_9302 (enumerator_9248.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_9302.hasCurrentObject ()) {
      GGS_lstring var_argKey_9359 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_9302.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 229)), enumerator_9302.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (var_argKey_9359 COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 230)) ;
      }
      enumerator_9302.gotoNextObject () ;
    }
    enumerator_9248.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                               const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                               const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                               const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                               const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_wrapperExtensionMap var_textExtensionMap_10417 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_10462 (temp_0.readProperty_mFilewrapperTextFileExtensionList ()) ;
  while (enumerator_10462.hasCurrentObject ()) {
    {
    var_textExtensionMap_10417.setter_insertKey (enumerator_10462.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 247)) ;
    }
    enumerator_10462.gotoNextObject () ;
  }
  GGS_wrapperExtensionMap var_binaryFileExtensionMap_10619 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_10670 (temp_1.readProperty_mFilewrapperBinaryFileExtensionList ()) ;
  while (enumerator_10670.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_textExtensionMap_10417.getter_contains (enumerator_10670.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 252)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10670.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_10670.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 253)).add_operation (GGS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 253)), fixItArray3  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 253)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      {
      var_binaryFileExtensionMap_10619.setter_insertKey (enumerator_10670.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 255)) ;
      }
    }
    enumerator_10670.gotoNextObject () ;
  }
  GGS_wrapperFileMap var_regularRootFileMap_10986 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_11034 ;
  const GGS_filewrapperDeclarationAST temp_4 = this ;
  const GGS_filewrapperDeclarationAST temp_5 = this ;
  GGS_string var_absoluteSourcePath_11062 = temp_4.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 261)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 261)).add_operation (temp_5.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 261)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_absoluteSourcePath_11062.getter_directoryExists (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 262)).operator_not (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 262)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_filewrapperDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_11062, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 263)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 263)), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 263)) ;
      var_regularRootFileMap_10986.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_11034.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    GGS_u_33__32_ var_wrapperFileIndex_11423 = GGS_u_33__32_ (uint32_t (0U)) ;
    GGS_u_33__32_ var_wrapperDirectoryIndex_11459 = GGS_u_33__32_ (uint32_t (0U)) ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_11062, GGS_string ("/"), var_textExtensionMap_10417, var_binaryFileExtensionMap_10619, var_regularRootFileMap_10986, var_wrapperDirectoryMap_11034, var_wrapperFileIndex_11423, var_wrapperDirectoryIndex_11459, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 269)) ;
    }
  }
  {
  const GGS_filewrapperDeclarationAST temp_9 = this ;
  const GGS_filewrapperDeclarationAST temp_10 = this ;
  const GGS_filewrapperDeclarationAST temp_11 = this ;
  const GGS_filewrapperDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_9.readProperty_mFilewrapperName (), temp_10.readProperty_mFilewrapperPath (), temp_11.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_10986, var_wrapperDirectoryMap_11034, temp_12.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 281)) ;
  }
  GGS_getterMap var_getterMap_12092 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_12092, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 290)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_12196 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_filewrapperType_12276 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("filewrapper"), var_filewrapperType_12276, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 293)) ;
  }
  {
  const GGS_filewrapperDeclarationAST temp_13 = this ;
  GGS__5B_functionSignatureElement_5D_ temp_14 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 296)) ;
  var_classFunctionMap_12196.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("contents"), temp_13.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE), temp_14, GGS_bool (false), var_filewrapperType_12276, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 294)) ;
  }
  GGS_unifiedTypeMapEntry var_stringType_12582 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringType_12582, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 301)) ;
  }
  const GGS_filewrapperDeclarationAST temp_15 = this ;
  UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_12620 (temp_15.readProperty_mFilewrapperTemplateListEX ()) ;
  while (enumerator_12620.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ var_formalArgumentList_12660 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_12755 (enumerator_12620.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_12755.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_typeIndex_12881 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12755.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_12881, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 305)) ;
      }
      var_formalArgumentList_12660.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_12755.current (HERE).readProperty_mFormalTemplateSelector (), var_typeIndex_12881, enumerator_12755.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 306)) ;
      enumerator_12755.gotoNextObject () ;
    }
    {
    var_classFunctionMap_12196.setter_insertKey (enumerator_12620.current (HERE).readProperty_mFilewrapperTemplateName (), var_formalArgumentList_12660, GGS_bool (true), var_stringType_12582, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 313)) ;
    }
    enumerator_12620.gotoNextObject () ;
  }
  const GGS_filewrapperDeclarationAST temp_16 = this ;
  UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_13339 (temp_16.readProperty_mFilewrapperTemplateList ()) ;
  while (enumerator_13339.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ var_formalArgumentList_13377 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_13472 (enumerator_13339.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_13472.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_typeIndex_13598 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13472.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_13598, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 323)) ;
      }
      var_formalArgumentList_13377.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_13472.current (HERE).readProperty_mFormalTemplateSelector (), var_typeIndex_13598, enumerator_13472.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 324)) ;
      enumerator_13472.gotoNextObject () ;
    }
    {
    var_classFunctionMap_12196.setter_insertKey (enumerator_13339.current (HERE).readProperty_mFilewrapperTemplateName (), var_formalArgumentList_13377, GGS_bool (true), var_stringType_12582, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 331)) ;
    }
    enumerator_13339.gotoNextObject () ;
  }
  GGS_setterMap var_setterMap_14072 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_14115 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_14163 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationAST temp_17 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_17.readProperty_mFilewrapperName (), GGS_bool (false), var_initializerMap_14163, var_getterMap_12092, var_setterMap_14072, var_instanceMethodMap_14115, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 342)) ;
  }
  GGS_typeFeatures var_features_14621 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 357)) ;
  const GGS_filewrapperDeclarationAST temp_18 = this ;
  GGS__5B_typedProperty_5D_ temp_19 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 367)) ;
  GGS__5B_typedProperty_5D_ temp_20 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 369)) ;
  const GGS_filewrapperDeclarationAST temp_21 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_14719 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_18.readProperty_mFilewrapperName (), GGS_bool (false), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 364)), GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 365)), GGS_bool (false), temp_19, GGS_propertyMap::init (inCompiler COMMA_HERE), temp_20, GGS_initializerMap::init (inCompiler COMMA_HERE), var_classFunctionMap_12196, var_getterMap_12092, var_setterMap_14072, var_instanceMethodMap_14115, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 376)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_14621, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 382)), GGS_string ("filewrapper-").add_operation (temp_21.readProperty_mFilewrapperName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 383)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 383)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 384)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14719.readProperty_typeName (), var_typeDefinition_14719, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 386)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                              GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  GGS_lstring var_filewrapperNameForUsefulness_16393 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 399)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_16393, var_filewrapperNameForUsefulness_16393, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 400)) ;
  }
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  const GGS_filewrapperDeclarationAST temp_2 = this ;
  GGS_string var_absoluteSourcePath_16612 = temp_1.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 402)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 402)).add_operation (temp_2.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 402)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_absoluteSourcePath_16612.getter_directoryExists (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 403)).operator_not (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 403)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_filewrapperDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_16612, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 404)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 404)), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 404)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GGS_wrapperExtensionMap var_textExtensionMap_16951 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    UpEnumerator__5B_lstring_5D_ enumerator_16998 (temp_6.readProperty_mFilewrapperTextFileExtensionList ()) ;
    while (enumerator_16998.hasCurrentObject ()) {
      {
      var_textExtensionMap_16951.setter_insertKey (enumerator_16998.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 409)) ;
      }
      enumerator_16998.gotoNextObject () ;
    }
    GGS_wrapperExtensionMap var_binaryFileExtensionMap_17163 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperDeclarationAST temp_7 = this ;
    UpEnumerator__5B_lstring_5D_ enumerator_17216 (temp_7.readProperty_mFilewrapperBinaryFileExtensionList ()) ;
    while (enumerator_17216.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_textExtensionMap_16951.getter_contains (enumerator_17216.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 414)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_17216.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_17216.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 415)).add_operation (GGS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 415)), fixItArray9  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 415)) ;
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        {
        var_binaryFileExtensionMap_17163.setter_insertKey (enumerator_17216.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 417)) ;
        }
      }
      enumerator_17216.gotoNextObject () ;
    }
    GGS_wrapperFileMap var_regularRootFileMap_17548 ;
    GGS_wrapperDirectoryMap var_wrapperDirectoryMap_17598 ;
    const GGS_filewrapperDeclarationAST temp_10 = this ;
    const GGS_filewrapperDeclarationAST temp_11 = this ;
    GGS_string var_absoluteSourcePath_17628 = temp_10.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 423)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 423)).add_operation (temp_11.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 423)) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_absoluteSourcePath_17628.getter_directoryExists (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 424)).operator_not (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 424)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_filewrapperDeclarationAST temp_13 = this ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_17628, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 425)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 425)), fixItArray14  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 425)) ;
        var_regularRootFileMap_17548.drop () ; // Release error dropped variable
        var_wrapperDirectoryMap_17598.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GGS_u_33__32_ var_wrapperFileIndex_18001 = GGS_u_33__32_ (uint32_t (0U)) ;
      GGS_u_33__32_ var_wrapperDirectoryIndex_18039 = GGS_u_33__32_ (uint32_t (0U)) ;
      {
      routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_17628, GGS_string ("/"), var_textExtensionMap_16951, var_binaryFileExtensionMap_17163, var_regularRootFileMap_17548, var_wrapperDirectoryMap_17598, var_wrapperFileIndex_18001, var_wrapperDirectoryIndex_18039, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 431)) ;
      }
    }
    GGS__5B_filewrapperTemplateForGeneration_5D_ temp_15 = GGS__5B_filewrapperTemplateForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 443)) ;
    GGS__5B_filewrapperTemplateForGeneration_5D_ var_filewrapperTemplateListForGeneration_18472 = temp_15 ;
    const GGS_filewrapperDeclarationAST temp_16 = this ;
    UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_18552 (temp_16.readProperty_mFilewrapperTemplateListEX ()) ;
    while (enumerator_18552.hasCurrentObject ()) {
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = GGS_bool (ComparisonKind::equal, enumerator_18552.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 445)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_18552.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), GGS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_17628, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 447)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 447)), fixItArray18  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 446)) ;
        }
      }
      GGS_string var_absoluteTemplatePath_18879 = var_absoluteSourcePath_17628.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 449)).add_operation (enumerator_18552.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 449)) ;
      GGS__5B_templateInstructionAST_5F_EX_5D_ var_resultingInstructionList_19068 ;
      var_resultingInstructionList_19068.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteTemplatePath_18879, enumerator_18552.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), inCompiler COMMA_HERE), var_resultingInstructionList_19068  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 451)) ;
      GGS_templateVariableMap var_templateVariableMap_19268 = GGS_templateVariableMap::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalInputParameterForGeneration_5D_ var_filewrapperTemplateFormalInputParameters_19343 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_19432 (enumerator_18552.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
      while (enumerator_19432.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_19491 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_19432.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 457)) ;
        GGS_string var_cppVarName_19583 = GGS_string ("in_").add_operation (enumerator_19432.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 458)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 458)) ;
        {
        var_templateVariableMap_19268.setter_insertKey (enumerator_19432.current (HERE).readProperty_mFormalArgumentName (), var_type_19491, var_cppVarName_19583, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 459)) ;
        }
        var_filewrapperTemplateFormalInputParameters_19343.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_19432.current (HERE).readProperty_mFormalTemplateSelector (), var_type_19491, var_cppVarName_19583, enumerator_19432.current (HERE).readProperty_mFormalArgumentName (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 460)) ;
        enumerator_19432.gotoNextObject () ;
      }
      GGS__5B_templateInstructionForGeneration_5D_ var_templateInstructionListForGeneration_19946 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS_templateAnalysisContext var_templateAnalysisContext_20036 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_19268, inCompiler COMMA_HERE) ;
      {
      routine_templateInstructionListAnalysis_5F_EX_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_16393, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_20036, ioArgument_ioTypeMap, var_resultingInstructionList_19068, var_templateInstructionListForGeneration_19946, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 469)) ;
      }
      var_filewrapperTemplateListForGeneration_18472.plusPlusAssignOperation (GGS_filewrapperTemplateForGeneration::init_21__21__21_ (enumerator_18552.current (HERE).readProperty_mFilewrapperTemplateName ().readProperty_string (), var_filewrapperTemplateFormalInputParameters_19343, var_templateInstructionListForGeneration_19946, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 478)) ;
      enumerator_18552.gotoNextObject () ;
    }
    const GGS_filewrapperDeclarationAST temp_19 = this ;
    UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_20838 (temp_19.readProperty_mFilewrapperTemplateList ()) ;
    while (enumerator_20838.hasCurrentObject ()) {
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::equal, enumerator_20838.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 486)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (enumerator_20838.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), GGS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_17628, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 488)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 488)), fixItArray21  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 487)) ;
        }
      }
      GGS_string var_absoluteTemplatePath_21163 = var_absoluteSourcePath_17628.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 490)).add_operation (enumerator_20838.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 490)) ;
      GGS_galgasDeclarationAST joker_21321 = GGS_galgasDeclarationAST::init (inCompiler COMMA_HERE) ;
      GGS__5B_templateAbstractInstructionAST_5D_ var_resultingInstructionList_21340 ;
      var_resultingInstructionList_21340.drop () ;
      cGrammar_newTemplateGrammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteTemplatePath_21163, enumerator_20838.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), inCompiler COMMA_HERE), joker_21321, var_resultingInstructionList_21340  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 492)) ;
      GGS_templateVariableMap var_templateVariableMap_21540 = GGS_templateVariableMap::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalInputParameterForGeneration_5D_ var_filewrapperTemplateFormalInputParameters_21615 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_21704 (enumerator_20838.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
      while (enumerator_21704.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_21763 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_21704.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 498)) ;
        GGS_string var_cppVarName_21855 = GGS_string ("in_").add_operation (enumerator_21704.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 499)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 499)) ;
        {
        var_templateVariableMap_21540.setter_insertKey (enumerator_21704.current (HERE).readProperty_mFormalArgumentName (), var_type_21763, var_cppVarName_21855, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 500)) ;
        }
        var_filewrapperTemplateFormalInputParameters_21615.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_21704.current (HERE).readProperty_mFormalTemplateSelector (), var_type_21763, var_cppVarName_21855, enumerator_21704.current (HERE).readProperty_mFormalArgumentName (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 501)) ;
        enumerator_21704.gotoNextObject () ;
      }
      GGS__5B_templateInstructionForGeneration_5D_ var_templateInstructionListForGeneration_22218 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS_analysisContext var_analysisContext_22325 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 509)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
      GGS_localVarManager var_variableMap_22568 = GGS_localVarManager::init_21_ (constinArgument_inSemanticContext.readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__26__3F__26_ (var_filewrapperNameForUsefulness_16393, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_22325, ioArgument_ioTypeMap, var_variableMap_22568, var_resultingInstructionList_21340, var_templateInstructionListForGeneration_22218, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 513)) ;
      }
      var_filewrapperTemplateListForGeneration_18472.plusPlusAssignOperation (GGS_filewrapperTemplateForGeneration::init_21__21__21_ (enumerator_20838.current (HERE).readProperty_mFilewrapperTemplateName ().readProperty_string (), var_filewrapperTemplateFormalInputParameters_21615, var_templateInstructionListForGeneration_22218, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 523)) ;
      enumerator_20838.gotoNextObject () ;
    }
    const GGS_filewrapperDeclarationAST temp_22 = this ;
    const GGS_filewrapperDeclarationAST temp_23 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_filewrapperTypeForGeneration::init_21_infoMessage_21__21__21__21_ (GGS_string ("filewrapper ").add_operation (temp_22.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 531)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_23.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 532)), var_filewrapperTemplateListForGeneration_18472, var_regularRootFileMap_17548, var_wrapperDirectoryMap_17598, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 530)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_24347 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 557)) ;
  GGS__5B_string_5D_ var_regularFileIndexStringList_24407 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_regularBinaryContentIndexStringList_24457 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_regularTextContentIndexStringList_24516 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_directoryIndexStringList_24573 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperTypeForGeneration temp_1 = this ;
  const GGS_filewrapperTypeForGeneration temp_2 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_1.readProperty_regularRootFileMap (), temp_2.readProperty_wrapperDirectoryMap (), var_regularFileIndexStringList_24407, var_directoryIndexStringList_24573, var_regularTextContentIndexStringList_24516, var_regularBinaryContentIndexStringList_24457, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 562)) ;
  }
  outArgument_outHeader = GGS_filewrapperGenerationTemplate::class_func_filewrapperDeclaration (var_regularFileIndexStringList_24407, var_directoryIndexStringList_24573, var_regularTextContentIndexStringList_24516, var_regularBinaryContentIndexStringList_24457, var_selfTypeDefinition_24347.readProperty_typeName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 570)) ;
  outArgument_outHeader.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperTypeHeader_31_ (var_selfTypeDefinition_24347.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_24347.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 579)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 577)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 577)) ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForPackage (var_selfTypeDefinition_24347.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_24347.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 583)), var_selfTypeDefinition_24347.readProperty_classFunctionMap (), var_selfTypeDefinition_24347.readProperty_classMethodMap (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 581)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 581)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 594)) ;
  outArgument_outImplementation = GGS_string::makeEmptyString () ;
  GGS_string var_filewrapperImplementation_26063 = GGS_string::makeEmptyString () ;
  {
  const GGS_filewrapperTypeForGeneration temp_1 = this ;
  const GGS_filewrapperTypeForGeneration temp_2 = this ;
  const GGS_filewrapperTypeForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 599)).readProperty_typeName ().readProperty_string (), GGS_string::makeEmptyString (), GGS_u_33__32_ (uint32_t (0U)), temp_2.readProperty_regularRootFileMap (), temp_3.readProperty_wrapperDirectoryMap (), var_filewrapperImplementation_26063, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 598)) ;
  }
  const GGS_filewrapperTypeForGeneration temp_4 = this ;
  outArgument_outImplementation.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperImplementation (extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 607)).readProperty_typeName ().readProperty_string (), var_filewrapperImplementation_26063, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 606)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 606)) ;
  const GGS_filewrapperTypeForGeneration temp_5 = this ;
  const GGS_filewrapperTypeForGeneration temp_6 = this ;
  outArgument_outImplementation.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperTypeSpecificImplementation (extensionGetter_definition (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 612)).readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 613)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 611)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 611)) ;
  const GGS_filewrapperTypeForGeneration temp_7 = this ;
  UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ enumerator_26760 (temp_7.readProperty_filewrapperTemplateListForGeneration ()) ;
  while (enumerator_26760.hasCurrentObject ()) {
    GGS_string var_generatedCodeForInstructionList_26870 = GGS_string::makeEmptyString () ;
    GGS_u_33__32_ var_temporaryVariableIndex_26922 = GGS_u_33__32_ (uint32_t (0U)) ;
    GGS_stringset var_unusedVariableCppNameSet_26970 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    var_unusedVariableCppNameSet_26970.plusPlusAssignOperation (function_gCompilerCppName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 621)) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_27092 (enumerator_26760.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_27092.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_26970.plusPlusAssignOperation (enumerator_27092.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 623)) ;
      enumerator_27092.gotoNextObject () ;
    }
    GGS_bool var_useColumnMarker_27229 = GGS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_26760.current (HERE).readProperty_mTemplateInstructionListForGeneration (), var_generatedCodeForInstructionList_26870, ioArgument_ioInclusionSet, var_temporaryVariableIndex_26922, var_unusedVariableCppNameSet_26970, var_useColumnMarker_27229, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 626)) ;
    }
    const GGS_filewrapperTypeForGeneration temp_8 = this ;
    outArgument_outImplementation.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperTemplateImplementation (extensionGetter_definition (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 636)).readProperty_typeName ().readProperty_string (), enumerator_26760.current (HERE).readProperty_mFilewrapperTemplateName (), enumerator_26760.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters (), var_unusedVariableCppNameSet_26970, var_useColumnMarker_27229, var_generatedCodeForInstructionList_26870, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 635)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 635)) ;
    enumerator_26760.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const GGS_string constinArgument_inFilewrapperName,
                                                              const GGS_string constinArgument_inFilewrapperDirectory,
                                                              const GGS_u_33__32_ constinArgument_inFilewrapperDirectoryIndex,
                                                              const GGS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                                              const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                              GGS_string & ioArgument_ioImplementation,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_wrapperFileMap enumerator_30963 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_30963.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_30963.current (HERE).readProperty_mIsTextFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_contents_31051 = GGS_string::class_func_stringWithContentsOfFile (enumerator_30963.current (HERE).readProperty_mAbsoluteFilePath (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 724)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 725)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 725)).add_operation (enumerator_30963.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 725)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 725)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 725)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 726)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_30963.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 727)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 727)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 728)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 729)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 729)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 730)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_contents_31051.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 731)).objectCompare (GGS_u_33__32_ (uint32_t (100U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS__5B_string_5D_ var_components_31565 = var_contents_31051.getter_componentsSeparatedByString (GGS_string ("\n") COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 732)) ;
            GGS_string var_lastLine_31660 ;
            {
            var_components_31565.setter_removeLast (var_lastLine_31660, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 733)) ;
            }
            UpEnumerator__5B_string_5D_ enumerator_31691 (var_components_31565) ;
            const bool bool_2 = true ;
            if (enumerator_31691.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 736)) ;
              while (enumerator_31691.hasCurrentObject () && bool_2) {
                GGS_string var_s_31779 = enumerator_31691.current (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 738)) ;
                ioArgument_ioImplementation.plusAssignOperation(var_s_31779.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 739)).add_operation (GGS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 739)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 739)) ;
                enumerator_31691.gotoNextObject () ;
              }
            }
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::greaterThan, var_lastLine_31660.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 741)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                ioArgument_ioImplementation.plusAssignOperation(var_lastLine_31660.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 742)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 742)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          ioArgument_ioImplementation.plusAssignOperation(var_contents_31051.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 745)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 745)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" ;\n\nconst RegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 747)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_30963.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 748)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 748)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 749)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 750)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 750)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 751)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_30963.current (HERE).readProperty_lkey ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 752)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 752)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 753)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_30963.current (HERE).readProperty_lkey ().readProperty_string ().getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 754)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 754)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 754)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 755)) ;
        ioArgument_ioImplementation.plusAssignOperation(var_contents_31051.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 756)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 756)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 756)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 757)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_30963.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 758)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 758)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 759)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 760)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 760)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 761)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_data var_contents_33040 = GGS_data::class_func_dataWithContentsOfFile (enumerator_30963.current (HERE).readProperty_mAbsoluteFilePath (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 763)) ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 764)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 764)).add_operation (enumerator_30963.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 764)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 764)).add_operation (GGS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 764)).add_operation (enumerator_30963.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 766)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 765)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 766)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 767)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 766)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 767)).add_operation (var_contents_33040.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 767)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 767)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 767)).add_operation (GGS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 767)).add_operation (var_contents_33040.getter_cStringRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 768)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 767)).add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 768)).add_operation (GGS_string ("const RegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 768)).add_operation (enumerator_30963.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 769)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 769)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 769)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 770)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 769)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 770)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 770)).add_operation (enumerator_30963.current (HERE).readProperty_lkey ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 771)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 771)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 771)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 771)).add_operation (enumerator_30963.current (HERE).readProperty_lkey ().readProperty_string ().getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 772)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 772)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 772)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 772)).add_operation (GGS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 772)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 773)).add_operation (var_contents_33040.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 774)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 774)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 774)).add_operation (GGS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 774)).add_operation (GGS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 774)).add_operation (enumerator_30963.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 775)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 775)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 775)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 775)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 775)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 775)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 775)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 764)) ;
    }
    enumerator_30963.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_34183 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_34183.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_34183.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_34183.current (HERE).readProperty_mWrapperDirectoryIndex (), enumerator_34183.current (HERE).readProperty_mRegularFileMap (), enumerator_34183.current (HERE).readProperty_mDirectoryMap (), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 781)) ;
    }
    enumerator_34183.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 791)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 791)).add_operation (GGS_string ("static const RegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 791)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 793)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 792)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 793)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 793)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 793)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 793)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 794)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 794)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 794)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 794)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 794)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 791)) ;
  UpEnumerator_wrapperFileMap enumerator_34857 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_34857.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperFile_").add_operation (enumerator_34857.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 796)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 796)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 796)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 796)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 796)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 796)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 796)) ;
    enumerator_34857.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 798)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 798)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 801)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 801)).add_operation (GGS_string ("static const DirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 801)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 803)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 802)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 803)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 803)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 803)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 803)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 804)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 804)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 804)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 804)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 804)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 801)) ;
  UpEnumerator_wrapperDirectoryMap enumerator_35473 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_35473.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperDirectory_").add_operation (enumerator_35473.current (HERE).readProperty_mWrapperDirectoryIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)) ;
    enumerator_35473.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 808)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 808)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 811)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 811)).add_operation (GGS_string ("const DirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 811)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 812)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 812)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 812)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 813)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 812)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 813)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 813)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 814)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 814)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 814)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 814)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 815)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 815)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 815)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 815)).add_operation (GGS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 815)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 816)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 816)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 816)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 816)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 816)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 816)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 816)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 817)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 817)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 817)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 817)).add_operation (GGS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 817)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 818)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 818)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 818)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 818)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 818)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 818)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 818)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 811)) ;
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
                                                                              GGS_u_33__32_ & ioArgument_ioWrapperFileIndex,
                                                                              GGS_u_33__32_ & ioArgument_ioWrapperDirectoryIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outWrapperFileMap.drop () ; // Release 'out' argument
  outArgument_outWrapperDirectoryMap.drop () ; // Release 'out' argument
  GGS_u_33__32_ var_currentDirectoryIndex_37213 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 833)) ;
  GGS__5B_string_5D_ var_files_37339 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GGS_bool (false) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 835)) ;
  outArgument_outWrapperFileMap = GGS_wrapperFileMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_37430 (var_files_37339) ;
  while (enumerator_37430.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_contains (enumerator_37430.current (HERE).getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 838)) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 838)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_absoluteFilePath_37523 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 839)).add_operation (enumerator_37430.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 839)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_37430.current (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 841)), inCompiler COMMA_HERE), var_absoluteFilePath_37523, GGS_bool (true), var_currentDirectoryIndex_37213, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 840)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 847)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_contains (enumerator_37430.current (HERE).getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 848)) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 848)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_absoluteFilePath_37894 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 849)).add_operation (enumerator_37430.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 849)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_37430.current (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 851)), inCompiler COMMA_HERE), var_absoluteFilePath_37894, GGS_bool (false), var_currentDirectoryIndex_37213, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 850)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 857)) ;
        }
      }
    }
    enumerator_37430.gotoNextObject () ;
  }
  GGS__5B_string_5D_ var_directories_38246 = constinArgument_inAbsoluteSourcePath.getter_directories (GGS_bool (false) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 861)) ;
  outArgument_outWrapperDirectoryMap = GGS_wrapperDirectoryMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_38347 (var_directories_38246) ;
  while (enumerator_38347.hasCurrentObject ()) {
    GGS_u_33__32_ var_theDirectoryIndex_38375 = ioArgument_ioWrapperDirectoryIndex ;
    GGS_wrapperFileMap var_internalWrapperFileMap_38609 ;
    GGS_wrapperDirectoryMap var_internalWrapperDirectoryMap_38644 ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 866)).add_operation (enumerator_38347.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 866)), constinArgument_inPathInWrapper.add_operation (enumerator_38347.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 867)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 867)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_38609, var_internalWrapperDirectoryMap_38644, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 865)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (enumerator_38347.current (HERE).getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 876)), var_internalWrapperFileMap_38609, var_internalWrapperDirectoryMap_38644, var_theDirectoryIndex_38375, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 875)) ;
    }
    enumerator_38347.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const GGS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                                                     const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                                     GGS__5B_string_5D_ & ioArgument_ioRegularFileIndexStringList,
                                                                     GGS__5B_string_5D_ & ioArgument_ioDirectoryIndexStringList,
                                                                     GGS__5B_string_5D_ & ioArgument_ioRegularTextContentIndexStringList,
                                                                     GGS__5B_string_5D_ & ioArgument_ioRegularBinaryContentIndexStringList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.plusPlusAssignOperation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 892)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 892))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 892)) ;
  UpEnumerator_wrapperFileMap enumerator_39650 (constinArgument_inFilewrapperFileMap) ;
  while (enumerator_39650.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.plusPlusAssignOperation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 894)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 894))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 894)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_39650.current (HERE).readProperty_mIsTextFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.plusPlusAssignOperation (enumerator_39650.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 896))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 896)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.plusPlusAssignOperation (enumerator_39650.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 898))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 898)) ;
    }
    enumerator_39650.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_40022 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_40022.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_40022.current (HERE).readProperty_mRegularFileMap (), enumerator_40022.current (HERE).readProperty_mDirectoryMap (), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 902)) ;
    }
    enumerator_40022.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__26__3F__26_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          const GGS__5B_templateAbstractInstructionAST_5D_ constinArgument_inInstructionList,
                                                                          GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_templateAbstractInstructionAST_5D_ enumerator_41051 (constinArgument_inInstructionList) ;
  while (enumerator_41051.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateAbstractInstructionAST *) enumerator_41051.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 923)) ;
    enumerator_41051.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis_EX?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_5F_EX_3F__26__3F__26__3F__26_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            const GGS__5B_templateInstructionAST_5F_EX_5D_ constinArgument_inInstructionList,
                                                                            GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_templateInstructionAST_5F_EX_5D_ enumerator_41939 (constinArgument_inInstructionList) ;
  while (enumerator_41939.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateInstructionAST_5F_EX *) enumerator_41939.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 943)) ;
    enumerator_41939.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@sortedArrayTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_sortedArrayTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_sortedArrayTypeDeclarationAST temp_0 = this ;
  result = GGS_string ("sorted array [@").add_operation (temp_0.readProperty_sortedArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 70)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 70)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedArrayTypeDeclarationAST temp_0 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_3355 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_sortedArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 83)), temp_1.readProperty_sortedArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_sortedArrayTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3355, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 84)) ;
  }
  const GGS_sortedArrayTypeDeclarationAST temp_3 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_4 = this ;
  GGS_lstring var_elementKey_3502 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_elementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 85)), temp_4.readProperty_elementTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_sortedArrayTypeDeclarationAST temp_5 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_elementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 86)), temp_6.readProperty_elementTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 86)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3355, var_elementKey_3502 COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 87)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                   const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                   const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                   const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                   const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_uintType_4479 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("u32"), var_uintType_4479, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 101)) ;
  }
  GGS_unifiedTypeMapEntry var_elementType_4564 ;
  {
  const GGS_sortedArrayTypeDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_elementTypeName (), var_elementType_4564, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 103)) ;
  }
  GGS_getterMap var_getterMap_4654 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_4654, inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 105)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4654, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 106)) ;
  }
  {
  const GGS_sortedArrayTypeDeclarationAST temp_1 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4654, ioArgument_ioTypeMap, GGS_string ("first"), temp_1.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 113)) ;
  }
  {
  const GGS_sortedArrayTypeDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4654, ioArgument_ioTypeMap, GGS_string ("last"), temp_2.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 120)) ;
  }
  {
  const GGS_sortedArrayTypeDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4654, ioArgument_ioTypeMap, GGS_string ("removingFirst"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inIndex"), temp_3.readProperty_sortedArrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 127)) ;
  }
  {
  const GGS_sortedArrayTypeDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4654, ioArgument_ioTypeMap, GGS_string ("sublist"), GGS_string ("from"), GGS_string ("u32"), GGS_string ("inStartIndex"), GGS_string ("count"), GGS_string ("u32"), GGS_string ("inCount"), temp_4.readProperty_sortedArrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 135)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_5910 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_6006 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_5 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 151)) ;
  var_setterMap_6006.setter_insertKey (GGS_string ("removeAll").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 149)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 150)), temp_5, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 153)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 148)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_6 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 159)) ;
  temp_6.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 159)), var_elementType_4564, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 159)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 159)) ;
  var_setterMap_6006.setter_insertKey (GGS_string ("append").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 157)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 158)), temp_6, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 161)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 156)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_7 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 167)) ;
  temp_7.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 167)), var_elementType_4564, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 167)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 167)) ;
  var_setterMap_6006.setter_insertKey (GGS_string ("removeFirst").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 165)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 166)), temp_7, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 169)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 164)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_8 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 175)) ;
  temp_8.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 175)), var_elementType_4564, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 175)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 175)) ;
  var_setterMap_6006.setter_insertKey (GGS_string ("removeLast").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 173)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 174)), temp_8, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 177)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 172)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_9 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 184)) ;
  temp_9.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 183)), var_elementType_4564, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 183)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 183)) ;
  temp_9.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("at").getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 184)), var_uintType_4479, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 184)), GGS_string ("inIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 184)) ;
  var_setterMap_6006.setter_insertKey (GGS_string ("remove").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 181)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 182)), temp_9, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 187)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 180)) ;
  }
  GGS_initializerMap var_initializerMap_7026 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_7083 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_sortedArrayTypeDeclarationAST temp_10 = this ;
  var_initializerMap_7026.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_7083, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 194)), temp_10.readProperty_sortedArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_7083, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 193)) ;
  }
  GGS_readSubscriptMap var_readSubscriptMap_7293 = GGS_readSubscriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_11 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 199)) ;
  temp_11.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 199)), var_uintType_4479, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 199)) ;
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_7352 = temp_11 ;
  {
  var_readSubscriptMap_7293.setter_insertKey (extensionGetter_subcriptSignature (var_argumentTypeList_7352, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 201)).getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 201)), var_argumentTypeList_7352, var_elementType_4564, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 200)) ;
  }
  {
  const GGS_sortedArrayTypeDeclarationAST temp_12 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_12.readProperty_sortedArrayTypeName (), GGS_bool (false), var_initializerMap_7026, var_getterMap_4654, var_setterMap_6006, var_instanceMethodMap_5910, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 206)) ;
  }
  GGS_typeFeatures var_features_8027 = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 222)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 222)) COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 222)) ;
  {
  const GGS_sortedArrayTypeDeclarationAST temp_13 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_13.readProperty_sortedArrayTypeName (), var_features_8027, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 223)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_8360 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  var_enumerationDescriptor_8360.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_elementType_4564, GGS_string ("entry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 232)) ;
  const GGS_sortedArrayTypeDeclarationAST temp_14 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_15 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_16 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8476 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_14.readProperty_sortedArrayTypeName (), temp_15.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 239)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 240)), GGS_bool (true), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_7026, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_4654, var_setterMap_6006, var_instanceMethodMap_5910, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 251)), var_readSubscriptMap_7293, GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_8360, var_features_8027, GGS_bool (false), var_elementType_4564, GGS_string ("array-").add_operation (temp_16.readProperty_sortedArrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 258)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 258)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 259)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8476.readProperty_typeName (), var_typeDefinition_8476, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 261)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                  const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                  GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedArrayTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_10385 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_sortedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 279)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10385, var_nameForUsefulness_10385, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 280)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_sortedArrayTypeDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10385  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 282)) ;
    }
  }
  const GGS_sortedArrayTypeDeclarationAST temp_3 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_10637 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 284)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10385, var_elementTypeNameForUsefulness_10637 COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 285)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_sortedArrayTypeDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_elementTypeNameForUsefulness_10637  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 287)) ;
    }
  }
  const GGS_sortedArrayTypeDeclarationAST temp_6 = this ;
  GGS_lstring var_initializerNameForUsefulness_10997 = function_initializerNameForUsefulEntitiesGraph (temp_6.readProperty_sortedArrayTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 292)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 290)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_10997, var_initializerNameForUsefulness_10997, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 294)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_sortedArrayTypeDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_10997  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 296)) ;
    }
  }
  const GGS_sortedArrayTypeDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_elementType_11395 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 299)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_elementType_11395, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 301)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 301)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_sortedArrayTypeDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_elementTypeName ().readProperty_location (), GGS_string ("this type should be a struct"), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 302)) ;
    }
  }
  GGS__5B_sortedArraySortProperty_5D_ var_typedSortPropertyList_11701 = GGS__5B_sortedArraySortProperty_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_sortedArrayTypeDeclarationAST temp_13 = this ;
  UpEnumerator__5B_sortedArraySortDescriptorAST_5D_ enumerator_11754 (temp_13.readProperty_sortDescriptorList ()) ;
  while (enumerator_11754.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyType_11893 ;
    GGS_AccessControl joker_11859 ; // Joker input parameter
    GGS_bool joker_11863 ; // Joker input parameter
    extensionGetter_definition (var_elementType_11395, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 307)).readProperty_propertyMap ().method_searchKey (enumerator_11754.current (HERE).readProperty_mSortedAttributeName (), joker_11859, joker_11863, var_propertyType_11893, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 307)) ;
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = extensionGetter_definition (var_propertyType_11893, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)) COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)).operator_not (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_11754.current (HERE).readProperty_mSortedAttributeName ().readProperty_location (), GGS_string ("this property should be comparable"), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 309)) ;
      }
    }
    var_typedSortPropertyList_11701.plusPlusAssignOperation (GGS_sortedArraySortProperty::init_21__21__21_ (enumerator_11754.current (HERE).readProperty_mAscending (), enumerator_11754.current (HERE).readProperty_mSortedAttributeName ().readProperty_string (), var_propertyType_11893, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 311)) ;
    enumerator_11754.gotoNextObject () ;
  }
  const GGS_sortedArrayTypeDeclarationAST temp_16 = this ;
  GGS_unifiedTypeMapEntry var_selfType_12201 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_16.readProperty_sortedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 314)) ;
  const GGS_sortedArrayTypeDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_sortedArrayTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("sorted array type ").add_operation (temp_17.readProperty_sortedArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 316)), var_selfType_12201, var_elementType_11395, var_typedSortPropertyList_11701, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedArrayTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13449 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 347)) ;
  const GGS_sortedArrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 348)) ;
  const GGS_sortedArrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_sortedArrayTypeGenerationTemplate::class_func_arrayTypeHeader_31_ (var_selfTypeDefinition_13449.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 351)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_13449.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 352)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 349)) ;
  const GGS_sortedArrayTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_13449.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 356)), var_selfTypeDefinition_13449.readProperty_isConcrete (), var_selfTypeDefinition_13449.readProperty_initializerMap (), var_selfTypeDefinition_13449.readProperty_classFunctionMap (), var_selfTypeDefinition_13449.readProperty_getterMap (), var_selfTypeDefinition_13449.readProperty_setterMap (), var_selfTypeDefinition_13449.readProperty_instanceMethodMap (), var_selfTypeDefinition_13449.readProperty_classMethodMap (), var_selfTypeDefinition_13449.readProperty_readSubscriptMap (), var_selfTypeDefinition_13449.readProperty_writeSubscriptMap (), var_selfTypeDefinition_13449.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_13449.readProperty_features (), var_selfTypeDefinition_13449.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_13449.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 354)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 354)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedArrayTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 378)) ;
  const GGS_sortedArrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 379)) ;
  const GGS_sortedArrayTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_14983 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 380)) ;
  const GGS_sortedArrayTypeForGeneration temp_3 = this ;
  const GGS_sortedArrayTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_sortedArrayTypeGenerationTemplate::class_func_arrayTypeSpecificImplementation (var_selfTypeDefinition_14983.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 383)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_14983.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 384)), var_selfTypeDefinition_14983.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 385)) COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 385)), temp_4.readProperty_typedSortPropertyList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 381)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@classDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_classDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_classDeclarationAST temp_0 = this ;
  result = GGS_string ("class @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 119)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                               GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                               GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                               GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                               GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                               GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classDeclarationAST temp_0 = this ;
  const GGS_classDeclarationAST temp_1 = this ;
  GGS_lstring var_key_4904 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 132)), temp_1.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4904, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 133)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_classDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_classDeclarationAST temp_5 = this ;
      const GGS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4904, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 138)), temp_6.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 136)) ;
      }
    }
  }
  const GGS_classDeclarationAST temp_7 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_5361 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_5361.hasCurrentObject ()) {
    const GGS_classDeclarationAST temp_8 = this ;
    GGS_lstring var_propertyKey_5388 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_5361.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 143)), temp_8.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = GGS_bool (ComparisonKind::equal, enumerator_5361.current (HERE).readProperty_typeName ().readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 144)).objectCompare (GGS_char (utf32 (63)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (var_propertyKey_5388 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 145)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4904, var_propertyKey_5388 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 147)) ;
      }
    }
    enumerator_5361.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                         const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                         const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_getterMap var_getterMap_6354 ;
  GGS_setterMap var_setterMap_6383 ;
  GGS_instanceMethodMap var_instanceMethodMap_6420 ;
  GGS__5B_typedProperty_5D_ var_inheritedTypedPropertyList_6463 ;
  GGS_propertyMap var_attributeMap_6511 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_superClassType_6586 ;
  GGS_bool var_generateHeaderInSeparateFile_6615 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_superClassType_6586 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 171)) ;
      {
      routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6354, inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 172)) ;
      }
      var_setterMap_6383 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
      var_instanceMethodMap_6420 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
      var_inheritedTypedPropertyList_6463 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
      var_attributeMap_6511 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
      const GGS_classDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_6615 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_classDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperClassName (), var_superClassType_6586, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 179)) ;
    }
    const GGS_classDeclarationAST temp_4 = this ;
    GGS_unifiedTypeDefinition var_superTypeDefinition_7047 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 180)) ;
    var_inheritedTypedPropertyList_6463 = var_superTypeDefinition_7047.readProperty_allTypedPropertyList () ;
    var_attributeMap_6511 = var_superTypeDefinition_7047.readProperty_propertyMap () ;
    var_generateHeaderInSeparateFile_6615 = var_superTypeDefinition_7047.readProperty_generateHeaderInSeparateFile () ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_superTypeDefinition_7047.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("declaration-type-class.galgas4", 185)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 185)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_classDeclarationAST temp_6 = this ;
        const GGS_classDeclarationAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperClassName ().readProperty_location (), GGS_string ("the @").add_operation (temp_7.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 186)).add_operation (GGS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 186)), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 186)) ;
      }
    }
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_superTypeDefinition_7047.readProperty_isFinal ().boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_classDeclarationAST temp_10 = this ;
        const GGS_classDeclarationAST temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mSuperClassName ().readProperty_location (), GGS_string ("cannot inherit from the @").add_operation (temp_11.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 189)).add_operation (GGS_string (" final class"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 189)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 189)) ;
      }
    }
    var_setterMap_6383 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_setterMap enumerator_7771 (var_superTypeDefinition_7047.readProperty_setterMap ()) ;
    while (enumerator_7771.hasCurrentObject ()) {
      {
      var_setterMap_6383.setter_insertKey (enumerator_7771.current (HERE).readProperty_lkey (), enumerator_7771.current (HERE).readProperty_mKind (), enumerator_7771.current (HERE).readProperty_mParameterList (), enumerator_7771.current (HERE).readProperty_mHasCompilerArgument (), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas4", 199)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 194)) ;
      }
      enumerator_7771.gotoNextObject () ;
    }
    var_getterMap_6354 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_getterMap enumerator_8137 (var_superTypeDefinition_7047.readProperty_getterMap ()) ;
    while (enumerator_8137.hasCurrentObject ()) {
      {
      var_getterMap_6354.setter_insertKey (enumerator_8137.current (HERE).readProperty_lkey (), enumerator_8137.current (HERE).readProperty_mKind (), enumerator_8137.current (HERE).readProperty_mArgumentTypeList (), enumerator_8137.current (HERE).readProperty_mDeclarationLocation (), enumerator_8137.current (HERE).readProperty_mHasCompilerArgument (), enumerator_8137.current (HERE).readProperty_mReturnedType (), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas4", 213)), enumerator_8137.current (HERE).readProperty_mGetterNameThatObsoletesInvokationName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 206)) ;
      }
      enumerator_8137.gotoNextObject () ;
    }
    var_instanceMethodMap_6420 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_instanceMethodMap enumerator_8613 (var_superTypeDefinition_7047.readProperty_instanceMethodMap ()) ;
    while (enumerator_8613.hasCurrentObject ()) {
      {
      var_instanceMethodMap_6420.setter_insertKey (enumerator_8613.current (HERE).readProperty_lkey (), enumerator_8613.current (HERE).readProperty_mKind (), enumerator_8613.current (HERE).readProperty_mParameterList (), enumerator_8613.current (HERE).readProperty_mDeclarationLocation (), enumerator_8613.current (HERE).readProperty_mHasCompilerArgument (), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas4", 226)), enumerator_8613.current (HERE).readProperty_mErrorMessage (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 220)) ;
      }
      enumerator_8613.gotoNextObject () ;
    }
  }
  GGS_unifiedTypeMapEntry var_classType_9064 ;
  {
  const GGS_classDeclarationAST temp_13 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_13.readProperty_mClassTypeName (), var_classType_9064, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 232)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_synthetizedInitializerArgumentList_9169 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_9230 (var_inheritedTypedPropertyList_6463) ;
  while (enumerator_9230.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::equal, enumerator_9230.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 236)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GGS_lstring temp_15 ;
        const GalgasBool test_16 = enumerator_9230.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          temp_15 = enumerator_9230.current (HERE).readProperty_name () ;
        }else if (GalgasBool::boolFalse == test_16) {
          temp_15 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas4", 238)) ;
        }
        var_synthetizedInitializerArgumentList_9169.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (temp_15, enumerator_9230.current (HERE).readProperty_typeEntry (), enumerator_9230.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 237)) ;
      }
    }
    enumerator_9230.gotoNextObject () ;
  }
  const GGS_classDeclarationAST temp_17 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_9552 (temp_17.readProperty_mPropertyList ()) ;
  while (enumerator_9552.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_9622 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9552.current (HERE).readProperty_typeName (), var_attributeTypeIndex_9622, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 245)) ;
    }
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = GGS_bool (ComparisonKind::equal, enumerator_9552.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 246)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        GGS_lstring temp_19 ;
        const GalgasBool test_20 = enumerator_9552.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          temp_19 = enumerator_9552.current (HERE).readProperty_name () ;
        }else if (GalgasBool::boolFalse == test_20) {
          temp_19 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas4", 248)) ;
        }
        var_synthetizedInitializerArgumentList_9169.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (temp_19, var_attributeTypeIndex_9622, enumerator_9552.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 247)) ;
      }
    }
    {
    var_attributeMap_6511.setter_insertKey (enumerator_9552.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_9552.current (HERE).readProperty_accessControl (), var_classType_9064, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 255)), enumerator_9552.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 256)), var_attributeTypeIndex_9622, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 253)) ;
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = var_getterMap_6354.getter_contains (enumerator_9552.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 259)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_9552.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("'").add_operation (enumerator_9552.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 261)).add_operation (GGS_string ("' is the name of a prefefined or a user defined func"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 261)), fixItArray22  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 260)) ;
      }
    }
    enumerator_9552.gotoNextObject () ;
  }
  GGS__5B_typedProperty_5D_ var_currentClassTypedPropertyList_10359 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_allTypedAttributeList_10420 = var_inheritedTypedPropertyList_6463 ;
  const GGS_classDeclarationAST temp_23 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_10496 (temp_23.readProperty_mPropertyList ()) ;
  while (enumerator_10496.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_10566 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_10496.current (HERE).readProperty_typeName (), var_attributeTypeIndex_10566, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 268)) ;
    }
    var_currentClassTypedPropertyList_10359.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_10566, enumerator_10496.current (HERE).readProperty_name (), enumerator_10496.current (HERE).readProperty_initialization (), enumerator_10496.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 273)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 273)), enumerator_10496.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 269)) ;
    var_allTypedAttributeList_10420.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_10566, enumerator_10496.current (HERE).readProperty_name (), enumerator_10496.current (HERE).readProperty_initialization (), enumerator_10496.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 279)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 279)), enumerator_10496.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 275)) ;
    enumerator_10496.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_11099 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_typeFeatures var_features_11142 = GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-class.galgas4", 284)) ;
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    const GGS_classDeclarationAST temp_25 = this ;
    test_24 = temp_25.readProperty_clonable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      var_features_11142.orAssignOperation(GGS_typeFeatures::class_func_clonable (SOURCE_FILE ("declaration-type-class.galgas4", 286)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 286)) ;
      GGS__5B_functionSignatureElement_5D_ var_cloneInitializerArgumentList_11265 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      var_cloneInitializerArgumentList_11265.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("cloned").getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas4", 289)), var_classType_9064, GGS_string ("inObject"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 288)) ;
      {
      const GGS_classDeclarationAST temp_26 = this ;
      var_initializerMap_11099.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_cloneInitializerArgumentList_11265, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 294)), temp_26.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_cloneInitializerArgumentList_11265, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 293)) ;
      }
    }
  }
  {
  const GGS_classDeclarationAST temp_27 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_27.readProperty_mClassTypeName (), GGS_bool (true), var_initializerMap_11099, var_getterMap_6354, var_setterMap_6383, var_instanceMethodMap_6420, GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 299)) ;
  }
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_classDeclarationAST temp_29 = this ;
    GGS_bigint temp_30 ;
    const GalgasBool test_31 = temp_29.readProperty_clonable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      temp_30 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 315)) ;
    }else if (GalgasBool::boolFalse == test_31) {
      temp_30 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 315)) ;
    }
    test_28 = GGS_bool (ComparisonKind::equal, var_initializerMap_11099.getter_count (SOURCE_FILE ("declaration-type-class.galgas4", 315)).objectCompare (temp_30.getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 315)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      var_features_11142.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas4", 316)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 316)) ;
      {
      const GGS_classDeclarationAST temp_32 = this ;
      var_initializerMap_11099.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_synthetizedInitializerArgumentList_9169, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 318)), temp_32.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_synthetizedInitializerArgumentList_9169, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 317)) ;
      }
    }
  }
  {
  const GGS_classDeclarationAST temp_33 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_33.readProperty_mClassTypeName (), var_features_11142, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 322)) ;
  }
  const GGS_classDeclarationAST temp_34 = this ;
  const GGS_classDeclarationAST temp_35 = this ;
  const GGS_classDeclarationAST temp_36 = this ;
  const GGS_classDeclarationAST temp_37 = this ;
  const GGS_classDeclarationAST temp_38 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12632 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_34.readProperty_mClassTypeName (), temp_35.readProperty_isPredefined (), temp_36.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 333)), temp_37.readProperty_mIsFinal (), var_superClassType_6586, GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("declaration-type-class.galgas4", 336)), GGS_bool (false), var_allTypedAttributeList_10420, var_attributeMap_6511, var_currentClassTypedPropertyList_10359, var_initializerMap_11099, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6354, var_setterMap_6383, var_instanceMethodMap_6420, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 347)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_11142, var_generateHeaderInSeparateFile_6615, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 353)), GGS_string ("class-").add_operation (temp_38.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-class.galgas4", 354)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 354)), GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("declaration-type-class.galgas4", 355)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12632.readProperty_typeName (), var_typeDefinition_12632, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 357)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                        GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classDeclarationAST temp_0 = this ;
  GGS_lstring var_classTypeNameForUsefulness_14308 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 370)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_14308, var_classTypeNameForUsefulness_14308, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 371)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_classDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_classTypeNameForUsefulness_14308  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 373)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_classDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_classDeclarationAST temp_5 = this ;
      GGS_lstring var_superClassNameForUsefulness_14640 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 376)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_14308, var_superClassNameForUsefulness_14640 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 377)) ;
      }
    }
  }
  const GGS_classDeclarationAST temp_6 = this ;
  GGS_unifiedTypeMapEntry var_selfType_15221 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_6.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 385)) ;
  const GGS_classDeclarationAST temp_7 = this ;
  GGS_unifiedTypeMapEntry temp_8 ;
  const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, temp_7.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_9) {
    temp_8 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 388)) ;
  }else if (GalgasBool::boolFalse == test_9) {
    const GGS_classDeclarationAST temp_10 = this ;
    temp_8 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 389)) ;
  }
  GGS_unifiedTypeMapEntry var_superClassEntry_15338 = temp_8 ;
  GGS__5B_typedProperty_5D_ var_allAttributeList_15703 ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_superClassEntry_15338.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 395)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      var_allAttributeList_15703 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    var_allAttributeList_15703 = extensionGetter_definition (var_superClassEntry_15338, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 398)).readProperty_allTypedPropertyList () ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_classDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_classDeclarationAST temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassTypeName ().readProperty_location (), GGS_string ("a class that has a super class does not accept any feature"), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 400)) ;
      }
    }
  }
  GGS__5B_typedProperty_5D_ var_synthetizedInheritedInitializerArgumentList_16051 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_16121 (var_allAttributeList_15703) ;
  while (enumerator_16121.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = GGS_bool (ComparisonKind::equal, enumerator_16121.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 405)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        var_synthetizedInheritedInitializerArgumentList_16051.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (enumerator_16121.current (HERE).readProperty_typeEntry (), enumerator_16121.current (HERE).readProperty_name (), enumerator_16121.current (HERE).readProperty_initialization (), enumerator_16121.current (HERE).readProperty_hasSetter (), enumerator_16121.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 406)) ;
      }
    }
    enumerator_16121.gotoNextObject () ;
  }
  GGS__5B_typedProperty_5D_ var_typedAttributeList_16495 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_16546 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_classDeclarationAST temp_17 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_16590 (temp_17.readProperty_mPropertyList ()) ;
  while (enumerator_16590.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_16617 = function_typeNameForUsefulEntitiesGraph (enumerator_16590.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 418)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_14308, var_propertyTypeNameForUsefulness_16617 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 419)) ;
    }
    GGS_unifiedTypeMapEntry var_t_16820 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16590.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 420)) ;
    var_typedAttributeList_16495.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_16820, enumerator_16590.current (HERE).readProperty_name (), enumerator_16590.current (HERE).readProperty_initialization (), enumerator_16590.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 425)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 425)), enumerator_16590.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 421)) ;
    var_allAttributeList_15703.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_16820, enumerator_16590.current (HERE).readProperty_name (), enumerator_16590.current (HERE).readProperty_initialization (), enumerator_16590.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 431)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 431)), enumerator_16590.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 427)) ;
    {
    var_attributeMap_16546.setter_insertKey (enumerator_16590.current (HERE).readProperty_name (), var_t_16820, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 433)) ;
    }
    enumerator_16590.gotoNextObject () ;
  }
  GGS__5B_typedProperty_5D_ var_synthetizedInitialzerArgumentList_17412 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_17492 (extensionGetter_definition (var_selfType_15221, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 437)).readProperty_allTypedPropertyList ()) ;
  while (enumerator_17492.hasCurrentObject ()) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = GGS_bool (ComparisonKind::equal, enumerator_17492.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 438)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        var_synthetizedInitialzerArgumentList_17412.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (enumerator_17492.current (HERE).readProperty_typeEntry (), enumerator_17492.current (HERE).readProperty_name (), enumerator_17492.current (HERE).readProperty_initialization (), enumerator_17492.current (HERE).readProperty_hasSetter (), enumerator_17492.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 439)) ;
      }
    }
    enumerator_17492.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_17992 ;
  GGS_string var_initializationCode_18029 ;
  const GGS_classDeclarationAST temp_19 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_19.readProperty_mPropertyList (), var_classTypeNameForUsefulness_14308, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_17992, var_initializationCode_18029, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 447)) ;
  GGS_bool var_constructorNeedsCompilerVar_18072 = var_unusedVariableCppNameSet_17992.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 457)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 457)) ;
  const GGS_classDeclarationAST temp_20 = this ;
  const GGS_classDeclarationAST temp_21 = this ;
  const GGS_classDeclarationAST temp_22 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_classTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21__21_ (GGS_string ("class ").add_operation (temp_20.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 459)), var_selfType_15221, temp_21.readProperty_mIsAbstract (), var_superClassEntry_15338, var_allAttributeList_15703, var_typedAttributeList_16495, extensionGetter_definition (var_selfType_15221, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 465)).readProperty_generateHeaderInSeparateFile (), var_constructorNeedsCompilerVar_18072, var_initializationCode_18029, var_synthetizedInitialzerArgumentList_17412, var_synthetizedInheritedInitializerArgumentList_16051, extensionGetter_definition (var_selfType_15221, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 470)).readProperty_initializerMap (), temp_22.readProperty_clonable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 458)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = extensionGetter_definition (var_selfType_15221, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 474)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas4", 474)) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 474)).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      const GGS_classDeclarationAST temp_24 = this ;
      GGS_lstring var_initializerForUsefulness_18806 = function_initializerNameForUsefulEntitiesGraph (temp_24.readProperty_mClassTypeName (), extensionGetter_initializerSignature (var_synthetizedInitialzerArgumentList_17412, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 475)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_18806, var_initializerForUsefulness_18806, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 479)) ;
      }
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        const GGS_classDeclarationAST temp_26 = this ;
        test_25 = temp_26.readProperty_isPredefined ().boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerForUsefulness_18806  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 481)) ;
          {
          ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_18806, var_classTypeNameForUsefulness_14308 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 482)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_25) {
        GalgasBool test_27 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_27) {
          const GGS_classDeclarationAST temp_28 = this ;
          test_27 = temp_28.readProperty_mIsAbstract ().boolEnum () ;
          if (GalgasBool::boolTrue == test_27) {
            ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerForUsefulness_18806  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 484)) ;
          }
        }
        if (GalgasBool::boolFalse == test_27) {
          {
          ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_18806, var_classTypeNameForUsefulness_14308 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 486)) ;
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 516)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 516)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 517)) ;
    }
  }
  const GGS_classTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20907 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 519)) ;
  const GGS_classTypeForGeneration temp_4 = this ;
  const GGS_classTypeForGeneration temp_5 = this ;
  GGS_string temp_6 ;
  const GalgasBool test_7 = temp_5.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 523)).boolEnum () ;
  if (GalgasBool::boolTrue == test_7) {
    temp_6 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_7) {
    const GGS_classTypeForGeneration temp_8 = this ;
    temp_6 = extensionGetter_identifierRepresentation (temp_8.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 523)) ;
  }
  const GGS_classTypeForGeneration temp_9 = this ;
  const GGS_classTypeForGeneration temp_10 = this ;
  outArgument_outHeader = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_31_ (var_selfTypeDefinition_20907.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 522)), temp_6, temp_9.readProperty_mIsAbstract (), temp_10.readProperty_mCurrentTypedAttributeList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 520)) ;
  const GGS_classTypeForGeneration temp_11 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_20907.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_11.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 529)), var_selfTypeDefinition_20907.readProperty_isConcrete (), var_selfTypeDefinition_20907.readProperty_initializerMap (), var_selfTypeDefinition_20907.readProperty_classFunctionMap (), var_selfTypeDefinition_20907.readProperty_getterMap (), var_selfTypeDefinition_20907.readProperty_setterMap (), var_selfTypeDefinition_20907.readProperty_instanceMethodMap (), var_selfTypeDefinition_20907.readProperty_classMethodMap (), var_selfTypeDefinition_20907.readProperty_readSubscriptMap (), var_selfTypeDefinition_20907.readProperty_writeSubscriptMap (), var_selfTypeDefinition_20907.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20907.readProperty_features (), var_selfTypeDefinition_20907.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20907.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 527)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 527)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classTypeForGeneration appendDeclaration2'
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_22322 (temp_0.readProperty_mCurrentTypedAttributeList ()) ;
  while (enumerator_22322.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_22322.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 552)) ;
    enumerator_22322.gotoNextObject () ;
  }
  const GGS_classTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_22430 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 554)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_classTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_generateHeaderInSeparateFile ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_classTypeForGeneration temp_4 = this ;
      const GGS_classTypeForGeneration temp_5 = this ;
      GGS_string temp_6 ;
      const GalgasBool test_7 = temp_5.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 559)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        temp_6 = GGS_string::makeEmptyString () ;
      }else if (GalgasBool::boolFalse == test_7) {
        const GGS_classTypeForGeneration temp_8 = this ;
        temp_6 = extensionGetter_identifierRepresentation (temp_8.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 559)) ;
      }
      const GGS_classTypeForGeneration temp_9 = this ;
      const GGS_classTypeForGeneration temp_10 = this ;
      const GGS_classTypeForGeneration temp_11 = this ;
      const GGS_classTypeForGeneration temp_12 = this ;
      const GGS_classTypeForGeneration temp_13 = this ;
      const GGS_classTypeForGeneration temp_14 = this ;
      GGS_string var_part_31__22550 = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_31_ (var_selfTypeDefinition_22430.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 558)), temp_6, temp_9.readProperty_mCurrentTypedAttributeList (), temp_10.readProperty_mAllTypedAttributeList (), temp_11.readProperty_mIsAbstract (), extensionGetter_definition (temp_12.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 563)).readProperty_getterMap (), extensionGetter_definition (temp_13.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 564)).readProperty_instanceMethodMap (), temp_14.readProperty_initializerMap (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 556)) ;
      const GGS_classTypeForGeneration temp_15 = this ;
      const GGS_classTypeForGeneration temp_16 = this ;
      GGS_string temp_17 ;
      const GalgasBool test_18 = temp_16.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 570)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        temp_17 = GGS_string::makeEmptyString () ;
      }else if (GalgasBool::boolFalse == test_18) {
        const GGS_classTypeForGeneration temp_19 = this ;
        temp_17 = extensionGetter_identifierRepresentation (temp_19.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 570)) ;
      }
      const GGS_classTypeForGeneration temp_20 = this ;
      const GGS_classTypeForGeneration temp_21 = this ;
      const GGS_classTypeForGeneration temp_22 = this ;
      const GGS_classTypeForGeneration temp_23 = this ;
      GGS_string var_part_32__23097 = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_32_ (var_selfTypeDefinition_22430.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 569)), temp_17, temp_20.readProperty_mCurrentTypedAttributeList (), temp_21.readProperty_mAllTypedAttributeList (), temp_22.readProperty_mIsAbstract (), temp_23.readProperty_synthetizedInitializerArgumentList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 567)) ;
      const GGS_classTypeForGeneration temp_24 = this ;
      GGS_string var_headerFileName_23552 = GGS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 576)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 576)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 576)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GGS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 578)), var_headerFileName_23552, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_part_31__22550, GGS_string ("\n\n"), var_part_32__23097, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 577)) ;
      }
      outArgument_outHeader = GGS_string ("#include \"").add_operation (var_headerFileName_23552, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 588)).add_operation (GGS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 588)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_classTypeForGeneration temp_25 = this ;
    const GGS_classTypeForGeneration temp_26 = this ;
    GGS_string temp_27 ;
    const GalgasBool test_28 = temp_26.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 593)).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      temp_27 = GGS_string::makeEmptyString () ;
    }else if (GalgasBool::boolFalse == test_28) {
      const GGS_classTypeForGeneration temp_29 = this ;
      temp_27 = extensionGetter_identifierRepresentation (temp_29.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 593)) ;
    }
    const GGS_classTypeForGeneration temp_30 = this ;
    const GGS_classTypeForGeneration temp_31 = this ;
    const GGS_classTypeForGeneration temp_32 = this ;
    const GGS_classTypeForGeneration temp_33 = this ;
    const GGS_classTypeForGeneration temp_34 = this ;
    const GGS_classTypeForGeneration temp_35 = this ;
    outArgument_outHeader = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_31_ (var_selfTypeDefinition_22430.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_25.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 592)), temp_27, temp_30.readProperty_mCurrentTypedAttributeList (), temp_31.readProperty_mAllTypedAttributeList (), temp_32.readProperty_mIsAbstract (), extensionGetter_definition (temp_33.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 597)).readProperty_getterMap (), extensionGetter_definition (temp_34.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 598)).readProperty_instanceMethodMap (), temp_35.readProperty_initializerMap (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 590)) ;
    const GGS_classTypeForGeneration temp_36 = this ;
    const GGS_classTypeForGeneration temp_37 = this ;
    GGS_string temp_38 ;
    const GalgasBool test_39 = temp_37.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 604)).boolEnum () ;
    if (GalgasBool::boolTrue == test_39) {
      temp_38 = GGS_string::makeEmptyString () ;
    }else if (GalgasBool::boolFalse == test_39) {
      const GGS_classTypeForGeneration temp_40 = this ;
      temp_38 = extensionGetter_identifierRepresentation (temp_40.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 604)) ;
    }
    const GGS_classTypeForGeneration temp_41 = this ;
    const GGS_classTypeForGeneration temp_42 = this ;
    const GGS_classTypeForGeneration temp_43 = this ;
    const GGS_classTypeForGeneration temp_44 = this ;
    outArgument_outHeader.plusAssignOperation(GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_32_ (var_selfTypeDefinition_22430.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_36.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 603)), temp_38, temp_41.readProperty_mCurrentTypedAttributeList (), temp_42.readProperty_mAllTypedAttributeList (), temp_43.readProperty_mIsAbstract (), temp_44.readProperty_synthetizedInitializerArgumentList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 601)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 601)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outImplementation,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 618)) ;
  const GGS_classTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_25491 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 619)) ;
  const GGS_classTypeForGeneration temp_2 = this ;
  const GGS_classTypeForGeneration temp_3 = this ;
  const GGS_classTypeForGeneration temp_4 = this ;
  GGS__5B_typedProperty_5D_ var_at_25709 = temp_2.readProperty_mAllTypedAttributeList ().getter_sublist (GGS_u_33__32_ (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_count (SOURCE_FILE ("declaration-type-class.galgas4", 625)).subtract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_count (SOURCE_FILE ("declaration-type-class.galgas4", 625)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 625)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 623)) ;
  const GGS_classTypeForGeneration temp_5 = this ;
  const GGS_classTypeForGeneration temp_6 = this ;
  GGS_string temp_7 ;
  const GalgasBool test_8 = temp_6.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 630)).boolEnum () ;
  if (GalgasBool::boolTrue == test_8) {
    temp_7 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_8) {
    const GGS_classTypeForGeneration temp_9 = this ;
    temp_7 = extensionGetter_identifierRepresentation (temp_9.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 630)) ;
  }
  const GGS_classTypeForGeneration temp_10 = this ;
  const GGS_classTypeForGeneration temp_11 = this ;
  const GGS_classTypeForGeneration temp_12 = this ;
  const GGS_classTypeForGeneration temp_13 = this ;
  const GGS_classTypeForGeneration temp_14 = this ;
  const GGS_classTypeForGeneration temp_15 = this ;
  const GGS_classTypeForGeneration temp_16 = this ;
  const GGS_classTypeForGeneration temp_17 = this ;
  outArgument_outImplementation = GGS_classGenerationTemplate::class_func_referenceClassTypeSpecificImplementation (var_selfTypeDefinition_25491.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 629)), temp_7, temp_10.readProperty_mCurrentTypedAttributeList (), temp_11.readProperty_mAllTypedAttributeList (), var_at_25709, temp_12.readProperty_mIsAbstract (), temp_13.readProperty_initializerNeedsCompilerVariable (), temp_14.readProperty_propertyInitializationCode (), var_selfTypeDefinition_25491.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas4", 637)) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 637)), temp_15.readProperty_synthetizedInitializerArgumentList (), temp_16.readProperty_inheritedSynthetizedInitializerArgumentList (), var_selfTypeDefinition_25491.readProperty_initializerMap (), temp_17.readProperty_clonable (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 627)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_generateClassGetterDeclaration (const GGS_lstring & constinArgument_inGetterName,
                                                    const GGS__5B_functionSignatureElement_5D_ & constinArgument_inArgumentTypeList,
                                                    const GGS_bool & constinArgument_inHasCompilerArgument,
                                                    const GGS_unifiedTypeMapEntry & constinArgument_inReturnedType,
                                                    const GGS_methodQualifier & constinArgument_inQualifier,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  GGS_bool var_generateMethodDeclaration_27250 = GGS_bool (true) ;
  GGS_string var_suffix_27289 = GGS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GGS_methodQualifier::Enumeration::invalid:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract:
    {
      var_suffix_27289 = GGS_string (" = 0") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtual:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isBasic:
  case GGS_methodQualifier::Enumeration::enum_isBasicFinal:
    {
      var_generateMethodDeclaration_27250 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isInherited:
    {
      var_generateMethodDeclaration_27250 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding:
    {
      var_suffix_27289 = GGS_string (" override") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract:
    {
      var_suffix_27289 = GGS_string (" override = 0") ;
    }
    break ;
  }
  result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_27250.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result = GGS_string ("//--- Extension func ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 675)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 675)) ;
      result.plusAssignOperation(GGS_string ("  public: virtual class GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 676)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 676)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 676)) ;
      result.plusAssignOperation(GGS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-class.galgas4", 677)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 677)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 677)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 677)) ;
      GGS_bool var_first_27937 = GGS_bool (true) ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_27976 (constinArgument_inArgumentTypeList) ;
      while (enumerator_27976.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_first_27937.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_first_27937 = GGS_bool (false) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 684)) ;
        }
        result.plusAssignOperation(GGS_string ("const class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27976.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 686)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 686)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 686)) ;
        result.plusAssignOperation(GGS_string (" ").add_operation (enumerator_27976.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 687)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 687)) ;
        enumerator_27976.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_first_27937.operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 690)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 691)) ;
            }
          }
          result.plusAssignOperation(GGS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 693)) ;
          var_first_27937 = GGS_bool (false) ;
        }
      }
      GGS_string temp_4 ;
      const GalgasBool test_5 = var_first_27937.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        temp_4 = GGS_string ("LOCATION_ARGS") ;
      }else if (GalgasBool::boolFalse == test_5) {
        temp_4 = GGS_string (" COMMA_LOCATION_ARGS") ;
      }
      result.plusAssignOperation(temp_4.add_operation (GGS_string (") const"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 696)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 696)) ;
      result.plusAssignOperation(var_suffix_27289.add_operation (GGS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 697)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 697)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_generateClassInstanceMethodDeclaration (const GGS_lstring & constinArgument_inMethodName,
                                                            const GGS__5B_formalParameterSignatureElement_5D_ & constinArgument_inArgumentTypeList,
                                                            const GGS_bool & constinArgument_inHasCompilerArgument,
                                                            const GGS_methodQualifier & constinArgument_inQualifier,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  GGS_bool var_generateMethodDeclaration_29007 = GGS_bool (true) ;
  GGS_string var_suffix_29046 = GGS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GGS_methodQualifier::Enumeration::invalid:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract:
    {
      var_suffix_29046 = GGS_string (" = 0") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtual:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isBasic:
  case GGS_methodQualifier::Enumeration::enum_isBasicFinal:
    {
      var_generateMethodDeclaration_29007 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isInherited:
    {
      var_generateMethodDeclaration_29007 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding:
    {
      var_suffix_29046 = GGS_string (" override") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract:
    {
      var_suffix_29046 = GGS_string (" override = 0") ;
    }
    break ;
  }
  result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_29007.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result.plusAssignOperation(GGS_string ("//--- Extension proc ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 726)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 726)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 726)) ;
      result.plusAssignOperation(GGS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-class.galgas4", 727)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 727)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 727)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 727)) ;
      GGS_bool var_first_29630 = GGS_bool (true) ;
      UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_29669 (constinArgument_inArgumentTypeList) ;
      while (enumerator_29669.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_first_29630.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_first_29630 = GGS_bool (false) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 734)) ;
        }
        switch (enumerator_29669.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            result.plusAssignOperation(GGS_string ("const class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29669.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 738)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 738)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 738)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
          {
            result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29669.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 740)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 740)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 740)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 740)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          {
            result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29669.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 742)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 742)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 742)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 742)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29669.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 744)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 744)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 744)) ;
          }
          break ;
        }
        result.plusAssignOperation(GGS_string (" arg_").add_operation (enumerator_29669.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 746)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 746)) ;
        enumerator_29669.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_first_29630.operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 749)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 750)) ;
            }
          }
          result.plusAssignOperation(GGS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 752)) ;
          var_first_29630 = GGS_bool (false) ;
        }
      }
      GGS_string temp_4 ;
      const GalgasBool test_5 = var_first_29630.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        temp_4 = GGS_string ("LOCATION_ARGS") ;
      }else if (GalgasBool::boolFalse == test_5) {
        temp_4 = GGS_string (" COMMA_LOCATION_ARGS") ;
      }
      result.plusAssignOperation(temp_4.add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 755)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 755)) ;
      result.plusAssignOperation(var_suffix_29046.add_operation (GGS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 756)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 756)) ;
    }
  }
//---
  return result ;
}


