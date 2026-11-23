#include "all-declarations-20.h"
//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@s32PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_s_33__32_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_sint_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@s32PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_s_33__32_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 43)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@s32PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_s_33__32_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("s32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("min"), GGS_string ("s32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@s32PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_s_33__32_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 72)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 101)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 108)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("u32"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("s32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 141)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("s32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 148)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("s32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 155)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("s32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 162)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@s64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_s_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 32)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 32)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 37)) ;
//---
  return result ;
}


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
        test_21 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 172)).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          const GGS_typeKindEnum_2E_weakReferenceType var_targetWeakRef_7457 = var_targetTypeDef_3522.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 172)).unwrappedValue () ;
          if (!var_targetTypeDef_3522.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 172)).isValuated ()) {
            test_21 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_21) {
            var_sourceType_7170 = constinArgument_inSourceType ;
            var_ok_7204 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_7457.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 174)).objectCompare (extensionGetter_typeName (var_sourceType_7170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 174)))) ;
            if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).isValid ()) {
              uint32_t variant_7631 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).uintValue () ;
              bool loop_7631 = true ;
              while (loop_7631) {
                loop_7631 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).operator_and (extensionGetter_definition (var_sourceType_7170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).isValid () ;
                if (loop_7631) {
                  loop_7631 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).operator_and (extensionGetter_definition (var_sourceType_7170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).boolValue () ;
                }
                if (loop_7631 && (0 == variant_7631)) {
                  loop_7631 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)) ;
                }
                if (loop_7631) {
                  variant_7631 -= 1 ;
                  var_sourceType_7170 = extensionGetter_definition (var_sourceType_7170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 176)).readProperty_superType () ;
                  var_ok_7204 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_7457.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 177)).objectCompare (extensionGetter_typeName (var_sourceType_7170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 177)))) ;
                }
              }
            }
          }
        }
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        test_22 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          const GGS_propertyMap_2E_element var_prop_7943 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).readProperty_propertyMap ().readSubcript__3F_ (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
          if (!extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).readProperty_propertyMap ().readSubcript__3F_ (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
            test_22 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_22) {
            extensionMethod_checkSetAccess (var_prop_7943.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)) ;
            GGS_propertyAccessExpressionForGeneration var_conversionExpression_8099 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_7943.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioExpression, var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8099 ;
            var_ok_7204 = GGS_bool (ComparisonKind::equal, var_prop_7943.readProperty_mPropertyType ().objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_22) {
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          GGS_bool test_24 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)) ;
          if (GalgasBool::boolTrue == test_24.boolEnum ()) {
            test_24 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)).readProperty_getterMap ().getter_contains (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)) ;
          }
          test_23 = test_24.boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            GGS_methodKind var_kind_8570 ;
            GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_8617 ;
            GGS_bool var_hasCompilerArgument_8660 ;
            GGS_unifiedTypeMapEntry var_returnedType_8694 ;
            GGS_location joker_8643 ; // Joker input parameter
            GGS_methodQualifier joker_8716_2 ; // Joker input parameter
            GGS_string joker_8716_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 192)).readProperty_getterMap ().method_searchKey (var_targetTypeDef_3522.readProperty_typeName (), var_kind_8570, var_argumentTypeList_8617, joker_8643, var_hasCompilerArgument_8660, var_returnedType_8694, joker_8716_2, joker_8716_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 192)) ;
            var_ok_7204 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_8617.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 201)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_8694.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 201)) ;
            GGS_getterCallExpressionForGeneration var_conversionExpression_8847 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_8570, ioArgument_ioExpression, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_hasCompilerArgument_8660, inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8847 ;
          }
        }
      }
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        test_25 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 215)).boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("target object type is @").add_operation (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 217)).add_operation (GGS_string (" and cannot be assigned from an @"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 217)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 218)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 218)).add_operation (GGS_string (" object; this type have no "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 218)).add_operation (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 219)).add_operation (GGS_string (" func without argument that returns a @"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 220)).add_operation (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 221)).add_operation (GGS_string (" object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 222)), fixItArray26  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 216)) ;
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
  GGS_unifiedTypeMapEntry var_leftResultType_10011 = ioArgument_ioLeftExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightResultType_10064 = ioArgument_ioRightExpression.readProperty_mResultType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 237)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (GGS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (GGS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 240)).add_operation (extensionGetter_definition (var_rightResultType_10064, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 238)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_rightType_10447 = var_rightResultType_10064 ;
    GGS_bool var_ok_10489 = GGS_bool (ComparisonKind::equal, var_leftResultType_10011.objectCompare (var_rightType_10447)) ;
    if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).isValid ()) {
      uint32_t variant_10526 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).uintValue () ;
      bool loop_10526 = true ;
      while (loop_10526) {
        loop_10526 = var_ok_10489.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_and (extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).isValid () ;
        if (loop_10526) {
          loop_10526 = var_ok_10489.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_and (extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).boolValue () ;
        }
        if (loop_10526 && (0 == variant_10526)) {
          loop_10526 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) ;
        }
        if (loop_10526) {
          variant_10526 -= 1 ;
          var_rightType_10447 = extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 246)).readProperty_superType () ;
          var_ok_10489 = GGS_bool (ComparisonKind::equal, var_leftResultType_10011.objectCompare (var_rightType_10447)) ;
        }
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_ok_10489.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 250)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_10752 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioRightExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_10752.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("u32").objectCompare (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 251)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GGS_bigint var_bigIntValue_10901 = var_bigIntSource_10752.readProperty_mValue () ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_10901.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_10901.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_10901.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)).add_operation (GGS_string (") does not fit in an @u32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)) ;
                }
              }
              ioArgument_ioRightExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10011, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_10901.getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 256)), inCompiler COMMA_HERE) ;
              var_ok_10489 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_6 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_6) {
              test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("s32").objectCompare (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 258)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_6) {
                GGS_bigint var_bigIntValue_11336 = var_bigIntSource_10752.readProperty_mValue () ;
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11336.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11336.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11336.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)).add_operation (GGS_string (") does not fit in an @s32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)) ;
                  }
                }
                ioArgument_ioRightExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10011, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11336.getter_s_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 263)), inCompiler COMMA_HERE) ;
                var_ok_10489 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_6) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("u64").objectCompare (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 265)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GGS_bigint var_bigIntValue_11780 = var_bigIntSource_10752.readProperty_mValue () ;
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11780.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11780.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GenericArray <FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11780.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)).add_operation (GGS_string (") does not fit in an @u64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)) ;
                    }
                  }
                  ioArgument_ioRightExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10011, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11780.getter_u_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 270)), inCompiler COMMA_HERE) ;
                  var_ok_10489 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("s64").objectCompare (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 272)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_bigint var_bigIntValue_12217 = var_bigIntSource_10752.readProperty_mValue () ;
                    GalgasBool test_13 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_13) {
                      test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12217.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12217.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_13) {
                        GenericArray <FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12217.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)).add_operation (GGS_string (") does not fit in an @s64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)) ;
                      }
                    }
                    ioArgument_ioRightExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10011, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12217.getter_s_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 277)), inCompiler COMMA_HERE) ;
                    var_ok_10489 = GGS_bool (true) ;
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
      test_15 = var_ok_10489.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 282)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_12657 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioLeftExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_12657.ptr ()) {
          test_15 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_15) {
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = GGS_bool (ComparisonKind::equal, GGS_string ("u32").objectCompare (extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 283)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              GGS_bigint var_bigIntValue_12800 = var_bigIntSource_12657.readProperty_mValue () ;
              GalgasBool test_17 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_17) {
                test_17 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12800.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12800.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)).boolEnum () ;
                if (GalgasBool::boolTrue == test_17) {
                  GenericArray <FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12800.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)).add_operation (GGS_string (") does not fit in an @u32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)) ;
                }
              }
              ioArgument_ioLeftExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_rightType_10447, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_12800.getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 288)), inCompiler COMMA_HERE) ;
              var_ok_10489 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = GGS_bool (ComparisonKind::equal, GGS_string ("s32").objectCompare (extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 290)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GGS_bigint var_bigIntValue_13222 = var_bigIntSource_12657.readProperty_mValue () ;
                GalgasBool test_20 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13222.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13222.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_20) {
                    GenericArray <FixItDescription> fixItArray21 ;
                    inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13222.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)).add_operation (GGS_string (") does not fit in an @s32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)) ;
                  }
                }
                ioArgument_ioLeftExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_rightType_10447, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13222.getter_s_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 295)), inCompiler COMMA_HERE) ;
                var_ok_10489 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_19) {
              GalgasBool test_22 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_22) {
                test_22 = GGS_bool (ComparisonKind::equal, GGS_string ("u64").objectCompare (extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 297)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_22) {
                  GGS_bigint var_bigIntValue_13653 = var_bigIntSource_12657.readProperty_mValue () ;
                  GalgasBool test_23 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_23) {
                    test_23 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13653.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13653.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_23) {
                      GenericArray <FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13653.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)).add_operation (GGS_string (") does not fit in an @u64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)), fixItArray24  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)) ;
                    }
                  }
                  ioArgument_ioLeftExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_10447, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13653.getter_u_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 302)), inCompiler COMMA_HERE) ;
                  var_ok_10489 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_22) {
                GalgasBool test_25 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, GGS_string ("s64").objectCompare (extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 304)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_25) {
                    GGS_bigint var_bigIntValue_14077 = var_bigIntSource_12657.readProperty_mValue () ;
                    GalgasBool test_26 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_26) {
                      test_26 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14077.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14077.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_26) {
                        GenericArray <FixItDescription> fixItArray27 ;
                        inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14077.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)).add_operation (GGS_string (") does not fit in an @s64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)), fixItArray27  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)) ;
                      }
                    }
                    ioArgument_ioLeftExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_10447, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14077.getter_s_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 309)), inCompiler COMMA_HERE) ;
                    var_ok_10489 = GGS_bool (true) ;
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
      test_28 = var_ok_10489.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_propertyMap_2E_element var_prop_14547 = extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_propertyMap ().readSubcript__3F_ (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_propertyMap ().readSubcript__3F_ (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_28 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_28) {
          extensionMethod_checkSetAccess (var_prop_14547.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 315)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 315)) ;
          GGS_propertyAccessExpressionForGeneration var_conversionExpression_14705 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_14547.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 320)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_14705 ;
          var_ok_10489 = GGS_bool (ComparisonKind::equal, var_prop_14547.readProperty_mPropertyType ().objectCompare (var_leftResultType_10011)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_28) {
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        GGS_bool test_30 = var_ok_10489.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)) ;
        if (GalgasBool::boolTrue == test_30.boolEnum ()) {
          test_30 = extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)).readProperty_getterMap ().getter_contains (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)).readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)) ;
        }
        test_29 = test_30.boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          GGS_methodKind var_kind_15218 ;
          GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_15265 ;
          GGS_bool var_hasCompilerArgument_15308 ;
          GGS_unifiedTypeMapEntry var_returnedType_15342 ;
          GGS_location joker_15291 ; // Joker input parameter
          GGS_methodQualifier joker_15364_2 ; // Joker input parameter
          GGS_string joker_15364_1 ; // Joker input parameter
          extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 325)).readProperty_getterMap ().method_searchKey (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 326)).readProperty_typeName (), var_kind_15218, var_argumentTypeList_15265, joker_15291, var_hasCompilerArgument_15308, var_returnedType_15342, joker_15364_2, joker_15364_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 325)) ;
          var_ok_10489 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_15265.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 334)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_15342.objectCompare (var_leftResultType_10011)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 334)) ;
          GGS_getterCallExpressionForGeneration var_conversionExpression_15497 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_leftResultType_10011, constinArgument_inErrorLocation, var_kind_15218, ioArgument_ioRightExpression, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 342)).readProperty_typeName ().readProperty_string (), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_hasCompilerArgument_15308, inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_15497 ;
        }
      }
    }
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = var_ok_10489.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 348)).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        GenericArray <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (GGS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (GGS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (extensionGetter_definition (var_rightType_10447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).add_operation (GGS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).add_operation (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 352)).add_operation (GGS_string ("' func without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).add_operation (extensionGetter_definition (var_leftResultType_10011, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)), fixItArray32  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 349)) ;
      }
    }
  }
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
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_11 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 176)) ;
  temp_11.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 175)), var_elementType_4008, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 175)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 175)) ;
  temp_11.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("at").getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 176)), var_uintType_3923, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 176)), GGS_string ("inIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 176)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("set").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 173)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 174)), temp_11, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 179)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 172)) ;
  }
  GGS_initializerMap var_initializerMap_7085 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_7142 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_12 = this ;
  var_initializerMap_7085.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_7142, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 186)), temp_12.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_7142, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 185)) ;
  }
  GGS_readSubcriptMap var_readSubscriptMap_7345 = GGS_readSubcriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_13 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 191)) ;
  temp_13.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 191)), var_uintType_3923, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 191)) ;
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_7404 = temp_13 ;
  {
  var_readSubscriptMap_7345.setter_insertKey (extensionGetter_subcriptSignature (var_argumentTypeList_7404, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 193)).getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 193)), var_argumentTypeList_7404, var_elementType_4008, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 192)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_14 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_arrayTypeName (), GGS_bool (false), var_initializerMap_7085, var_getterMap_4098, var_setterMap_5438, var_instanceMethodMap_5342, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 198)) ;
  }
  GGS_typeFeatures var_features_8073 = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-array.galgas4", 214)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-array.galgas4", 214)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 214)) ;
  {
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_15.readProperty_arrayTypeName (), var_features_8073, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 215)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_8400 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  var_enumerationDescriptor_8400.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_elementType_4008, GGS_string ("entry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 224)) ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  const GGS_arrayTypeDeclarationAST temp_18 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8516 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_16.readProperty_arrayTypeName (), temp_17.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 231)), GGS_typeKindEnum::class_func_otherType (SOURCE_FILE ("declaration-type-array.galgas4", 232)), GGS_bool (true), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_7085, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_4098, var_setterMap_5438, var_instanceMethodMap_5342, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 243)), var_readSubscriptMap_7345, GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_8400, var_features_8073, GGS_bool (false), var_elementType_4008, GGS_string ("array-").add_operation (temp_18.readProperty_arrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-array.galgas4", 250)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 250)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-array.galgas4", 251)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8516.readProperty_typeName (), var_typeDefinition_8516, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 253)) ;
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
  GGS_lstring var_nameForUsefulness_10413 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 271)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10413, var_nameForUsefulness_10413, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 272)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10413  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 274)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_10677 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 276)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10413, var_elementTypeNameForUsefulness_10677 COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 277)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_elementTypeNameForUsefulness_10677  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 279)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_11055 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_arrayTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 284)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 282)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_11055, var_initializerNameForUsefulness_11055, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 286)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_11055  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 288)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11448 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_15.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 291)) ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_arrayTypeForGeneration::init_21_infoMessage_21__21_ (GGS_string ("array type ").add_operation (temp_16.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 293)), var_selfType_11448, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_17.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 295)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 292)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_12405 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 314)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_arrayTypeGenerationTemplate::class_func_arrayTypeHeader_31_ (var_selfTypeDefinition_12405.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 317)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_12405.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 318)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 315)) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_12405.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 322)), var_selfTypeDefinition_12405.readProperty_isConcrete (), var_selfTypeDefinition_12405.readProperty_initializerMap (), var_selfTypeDefinition_12405.readProperty_classFunctionMap (), var_selfTypeDefinition_12405.readProperty_getterMap (), var_selfTypeDefinition_12405.readProperty_setterMap (), var_selfTypeDefinition_12405.readProperty_instanceMethodMap (), var_selfTypeDefinition_12405.readProperty_classMethodMap (), var_selfTypeDefinition_12405.readProperty_readSubscriptMap (), var_selfTypeDefinition_12405.readProperty_writeSubscriptMap (), var_selfTypeDefinition_12405.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_12405.readProperty_features (), var_selfTypeDefinition_12405.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_12405.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 320)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 320)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 344)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 345)) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13868 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 346)) ;
  const GGS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outImplementation = GGS_arrayTypeGenerationTemplate::class_func_arrayTypeSpecificImplementation (var_selfTypeDefinition_13868.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 349)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_13868.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 350)), var_selfTypeDefinition_13868.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-array.galgas4", 351)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 351)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 347)) ;
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
  GGS_instanceMethodMap var_instanceMethodMap_5330 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5293, ioArgument_ioTypeMap, GGS_string ("contains"), GGS_string::makeEmptyString (), temp_3.readProperty_keyTypeName ().readProperty_string (), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 102)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5293, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 110)) ;
  }
  GGS_setterMap var_setterMap_5813 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_4 = this ;
  GGS__5B_formalParameterSignatureElement_5D_ temp_5 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 122)) ;
  temp_5.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("key").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 122)), var_keyType_5003, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dictionary.galgas4", 122)), GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 122)) ;
  var_setterMap_5813.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("remove"), temp_4.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dictionary.galgas4", 121)), temp_5, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dictionary.galgas4", 124)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 119)) ;
  }
  {
  const GGS_dictionaryDeclarationAST temp_6 = this ;
  GGS__5B_formalParameterSignatureElement_5D_ temp_7 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 131)) ;
  temp_7.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("key").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 131)), var_keyType_5003, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dictionary.galgas4", 131)), GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 131)) ;
  const GGS_dictionaryDeclarationAST temp_8 = this ;
  var_instanceMethodMap_5330.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("search"), temp_6.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dictionary.galgas4", 130)), temp_7, temp_8.readProperty_dictionaryTypeName ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dictionary.galgas4", 134)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 128)) ;
  }
  GGS_initializerMap var_initializerMap_6429 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_6484 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_9 = this ;
  var_initializerMap_6429.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_6484, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 141)), temp_9.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_6484, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 140)) ;
  }
  {
  const GGS_dictionaryDeclarationAST temp_10 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_10.readProperty_dictionaryTypeName (), GGS_bool (false), var_initializerMap_6429, var_getterMap_5293, var_setterMap_5813, var_instanceMethodMap_5330, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 145)) ;
  }
  GGS_typeFeatures var_features_7080 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-dictionary.galgas4", 161)).operator_or (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-dictionary.galgas4", 161)) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 161)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_dictionaryDeclarationAST temp_12 = this ;
    test_11 = temp_12.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      var_features_7080.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-dictionary.galgas4", 163)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 163)) ;
    }
  }
  {
  const GGS_dictionaryDeclarationAST temp_13 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_13.readProperty_dictionaryTypeName (), var_features_7080, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 165)) ;
  }
  const GGS_dictionaryDeclarationAST temp_14 = this ;
  GGS_lstring var_optionalElementTypeName_7458 = function_makeOptionalTypeLName (temp_14.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 173)) ;
  GGS_unifiedTypeMapEntry var_optionalElementType_7618 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_7458, var_optionalElementType_7618, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 174)) ;
  }
  GGS_readSubcriptMap var_readSubscriptMap_7683 = GGS_readSubcriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_15 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 177)) ;
  temp_15.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 177)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 177)) ;
  GGS__5B_functionSignatureElement_5D_ var_firstArgumentTypeList_7740 = temp_15 ;
  {
  var_readSubscriptMap_7683.setter_insertKey (extensionGetter_subcriptSignature (var_firstArgumentTypeList_7740, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 179)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 179)), var_firstArgumentTypeList_7740, var_optionalElementType_7618, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 178)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_16 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 185)) ;
  temp_16.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 184)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 184)) ;
  temp_16.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("default").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 185)), var_valueType_5089, GGS_string ("inDefaultValue"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 185)) ;
  GGS__5B_functionSignatureElement_5D_ var_secondArgumentTypeList_7979 = temp_16 ;
  {
  var_readSubscriptMap_7683.setter_insertKey (extensionGetter_subcriptSignature (var_secondArgumentTypeList_7979, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 188)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 188)), var_secondArgumentTypeList_7979, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 187)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_17 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 193)) ;
  temp_17.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("unwrap").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 193)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 193)) ;
  GGS__5B_functionSignatureElement_5D_ var_thirdArgumentTypeList_8282 = temp_17 ;
  {
  var_readSubscriptMap_7683.setter_insertKey (extensionGetter_subcriptSignature (var_thirdArgumentTypeList_8282, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 196)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 196)), var_thirdArgumentTypeList_8282, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 195)) ;
  }
  GGS_writeSubcriptMap var_writeSubcriptMap_8537 = GGS_writeSubcriptMap::init (inCompiler COMMA_HERE) ;
  {
  var_writeSubcriptMap_8537.setter_insertKey (extensionGetter_subcriptSignature (var_firstArgumentTypeList_7740, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 203)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 203)), var_firstArgumentTypeList_7740, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 202)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_18 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 208)) ;
  temp_18.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("unique").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 208)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 208)) ;
  GGS__5B_functionSignatureElement_5D_ var_writeUnique_5F_ArgumentTypeList_8725 = temp_18 ;
  {
  var_writeSubcriptMap_8537.setter_insertKey (extensionGetter_subcriptSignature (var_writeUnique_5F_ArgumentTypeList_8725, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 211)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 211)), var_writeUnique_5F_ArgumentTypeList_8725, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 210)) ;
  }
  const GGS_dictionaryDeclarationAST temp_19 = this ;
  const GGS_dictionaryDeclarationAST temp_20 = this ;
  GGS__5B_typedProperty_5D_ temp_21 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 226)) ;
  const GGS_dictionaryDeclarationAST temp_22 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8986 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_19.readProperty_dictionaryTypeName (), temp_20.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 221)), GGS_typeKindEnum::class_func_mapType (SOURCE_FILE ("declaration-type-dictionary.galgas4", 222)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), temp_21, var_initializerMap_6429, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_5293, var_setterMap_5813, var_instanceMethodMap_5330, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 233)), var_readSubscriptMap_7683, var_writeSubcriptMap_8537, var_enumerationDescriptor_5136, var_features_7080, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 239)), GGS_string ("dictionary-").add_operation (temp_22.readProperty_dictionaryTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-dictionary.galgas4", 240)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 240)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-dictionary.galgas4", 241)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8986.readProperty_typeName (), var_typeDefinition_8986, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 243)) ;
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
  GGS_unifiedTypeMapEntry var_keyType_10714 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_keyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 260)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_keyType_10714, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 261)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-dictionary.galgas4", 261)) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 261)).operator_not (SOURCE_FILE ("declaration-type-dictionary.galgas4", 261)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_dictionaryDeclarationAST temp_2 = this ;
      const GGS_dictionaryDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_keyTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_3.readProperty_keyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 262)).add_operation (GGS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 262)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 262)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_5 = this ;
  GGS_lstring var_nameForUsefulness_10962 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_dictionaryTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 265)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10962, var_nameForUsefulness_10962, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 266)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_dictionaryDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10962  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 268)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_8 = this ;
  GGS_lstring var_keyTypeNameForUsefulness_11203 = function_typeNameForUsefulEntitiesGraph (temp_8.readProperty_keyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 270)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10962, var_keyTypeNameForUsefulness_11203 COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 271)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_dictionaryDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_keyTypeNameForUsefulness_11203  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 273)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_11 = this ;
  GGS_lstring var_valueTypeNameForUsefulness_11470 = function_typeNameForUsefulEntitiesGraph (temp_11.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 275)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10962, var_valueTypeNameForUsefulness_11470 COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 276)) ;
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_dictionaryDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_valueTypeNameForUsefulness_11470  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 278)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_14 = this ;
  GGS_lstring var_initializerNameForUsefulness_11810 = function_initializerNameForUsefulEntitiesGraph (temp_14.readProperty_dictionaryTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 283)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 281)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_11810, var_initializerNameForUsefulness_11810, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 285)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_dictionaryDeclarationAST temp_16 = this ;
    test_15 = temp_16.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_11810  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 287)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_17 = this ;
  GGS_lstring var_optionalElementTypeName_12194 = function_makeOptionalTypeLName (temp_17.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 290)) ;
  GGS_unifiedTypeMapEntry var_optionalElementType_12284 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_12194, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 291)) ;
  const GGS_dictionaryDeclarationAST temp_18 = this ;
  const GGS_dictionaryDeclarationAST temp_19 = this ;
  const GGS_dictionaryDeclarationAST temp_20 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_dictionaryTypeForGeneration::init_21_infoMessage_21__21_valueType_21_keyType_21_optionalValueType (GGS_string ("dictionary ").add_operation (temp_18.readProperty_dictionaryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 294)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_19.readProperty_dictionaryTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 295)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_20.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 296)), var_keyType_10714, var_optionalElementType_12284, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 293)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outHeader,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictionaryTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_valueType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 315)) ;
  const GGS_dictionaryTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_optionalValueType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 316)) ;
  const GGS_dictionaryTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13565 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 317)) ;
  const GGS_dictionaryTypeForGeneration temp_3 = this ;
  const GGS_dictionaryTypeForGeneration temp_4 = this ;
  const GGS_dictionaryTypeForGeneration temp_5 = this ;
  outArgument_outHeader = GGS_dictionaryGenerationTemplate::class_func_dictTypeHeader_31_ (var_selfTypeDefinition_13565.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 320)), var_selfTypeDefinition_13565.readProperty_enumerationDescriptorList (), extensionGetter_identifierRepresentation (temp_4.readProperty_keyType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 322)), extensionGetter_identifierRepresentation (temp_5.readProperty_valueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 323)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 318)) ;
  const GGS_dictionaryTypeForGeneration temp_6 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_13565.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 327)), var_selfTypeDefinition_13565.readProperty_isConcrete (), var_selfTypeDefinition_13565.readProperty_initializerMap (), var_selfTypeDefinition_13565.readProperty_classFunctionMap (), var_selfTypeDefinition_13565.readProperty_getterMap (), var_selfTypeDefinition_13565.readProperty_setterMap (), var_selfTypeDefinition_13565.readProperty_instanceMethodMap (), var_selfTypeDefinition_13565.readProperty_classMethodMap (), var_selfTypeDefinition_13565.readProperty_readSubscriptMap (), var_selfTypeDefinition_13565.readProperty_writeSubscriptMap (), var_selfTypeDefinition_13565.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_13565.readProperty_features (), var_selfTypeDefinition_13565.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_13565.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 325)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 325)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 349)) ;
  const GGS_dictionaryTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_15044 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 350)) ;
  const GGS_dictionaryTypeForGeneration temp_2 = this ;
  const GGS_dictionaryTypeForGeneration temp_3 = this ;
  const GGS_dictionaryTypeForGeneration temp_4 = this ;
  const GGS_dictionaryTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_dictionaryGenerationTemplate::class_func_dictTypeSpecificImplementation (extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 352)), var_selfTypeDefinition_15044.readProperty_enumerationDescriptorList (), extensionGetter_identifierRepresentation (temp_3.readProperty_keyType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 354)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_15044.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 355)), extensionGetter_identifierRepresentation (temp_4.readProperty_valueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 356)), extensionGetter_identifierRepresentation (temp_5.readProperty_optionalValueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 357)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 351)) ;
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
  GGS_lstring var_key_3795 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 92)), temp_1.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3795, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 93)) ;
  }
  const GGS_structDeclarationAST temp_3 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_3949 (temp_3.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_3949.hasCurrentObject ()) {
    GGS_lstring var_propertyKey_3988 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_3949.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 95)), enumerator_3949.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3795, var_propertyKey_3988 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 96)) ;
    }
    enumerator_3949.gotoNextObject () ;
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
  result = GGS_string ("struct @").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 103)) ;
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
  GGS_unifiedTypeMapEntry var_structTypeIndex_5073 ;
  {
  const GGS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), var_structTypeIndex_5073, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 117)) ;
  }
  GGS_propertyMap var_propertyMap_5152 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_constructorPropertyTypeList_5206 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_typedPropertyList_5265 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_1 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_5314 (temp_1.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_5314.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyTypeEntry_5396 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5314.current (HERE).readProperty_typeName (), var_propertyTypeEntry_5396, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 123)) ;
    }
    GGS_string temp_2 ;
    const GalgasBool test_3 = enumerator_5314.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = enumerator_5314.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = GGS_string::makeEmptyString () ;
    }
    GGS_lstring var_selector_5425 = temp_2.getter_nowhere (SOURCE_FILE ("declaration-type-struct.galgas4", 124)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = enumerator_5314.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("declaration-type-struct.galgas4", 125)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_constructorPropertyTypeList_5206.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (var_selector_5425, var_propertyTypeEntry_5396, enumerator_5314.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 126)) ;
      }
    }
    var_typedPropertyList_5265.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_propertyTypeEntry_5396, enumerator_5314.current (HERE).readProperty_name (), enumerator_5314.current (HERE).readProperty_initialization (), enumerator_5314.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 132)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 132)), enumerator_5314.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 128)) ;
    {
    var_propertyMap_5152.setter_insertKey (enumerator_5314.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_5314.current (HERE).readProperty_accessControl (), var_structTypeIndex_5073, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 137)), enumerator_5314.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 138)), var_propertyTypeEntry_5396, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 135)) ;
    }
    enumerator_5314.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_6196 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6196, inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 143)) ;
  }
  GGS_setterMap var_setterMap_6249 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_6289 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_6337 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_structTypeName (), GGS_bool (false), var_initializerMap_6289, var_getterMap_6196, var_setterMap_6249, var_instanceMethodMap_6337, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 148)) ;
  }
  GGS_typeFeatures var_features_6796 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-struct.galgas4", 163)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_initializerMap_6289.getter_count (SOURCE_FILE ("declaration-type-struct.galgas4", 165)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_features_6796.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 166)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 166)) ;
      {
      const GGS_structDeclarationAST temp_7 = this ;
      var_initializerMap_6289.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_5206, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 168)), temp_7.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_5206, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 167)) ;
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
      var_features_6796.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 176)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 176)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_6796.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 178)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 178)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 178)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 178)) ;
    }
    break ;
  }
  {
  const GGS_structDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_structTypeName (), var_features_6796, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 180)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedType_7622 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_structDeclarationAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_enumeratedElementTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      var_enumeratedType_7622 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 190)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    {
    const GGS_structDeclarationAST temp_12 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_12.readProperty_enumeratedElementTypeName (), var_enumeratedType_7622, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 192)) ;
    }
  }
  const GGS_structDeclarationAST temp_13 = this ;
  const GGS_structDeclarationAST temp_14 = this ;
  const GGS_structDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_7853 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_structTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 200)), GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-struct.galgas4", 201)), GGS_bool (false), var_typedPropertyList_5265, var_propertyMap_5152, var_typedPropertyList_5265, var_initializerMap_6289, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6196, var_setterMap_6249, var_instanceMethodMap_6337, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 212)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_6796, GGS_bool (false), var_enumeratedType_7622, GGS_string ("struct-").add_operation (temp_15.readProperty_structTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-struct.galgas4", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 219)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-struct.galgas4", 220)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7853.readProperty_typeName (), var_typeDefinition_7853, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 222)) ;
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
  GGS_unifiedTypeMapEntry var_structType_9438 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 235)) ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_structNameForUsefulness_9511 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 236)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_structDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mStructurePropertyListAST ().getter_count (SOURCE_FILE ("declaration-type-struct.galgas4", 238)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_structDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_structTypeName ().readProperty_location (), GGS_string ("a structure cannot be empty: it must have at least one property"), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 239)) ;
    }
  }
  GGS__5B_typedProperty_5D_ var_typedPropertyList_9784 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_constructorArgumentList_9833 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_propertyMap_9889 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_6 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_9932 (temp_6.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_9932.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_9971 = function_typeNameForUsefulEntitiesGraph (enumerator_9932.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 245)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9511, var_propertyTypeNameForUsefulness_9971 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 246)) ;
    }
    GGS_unifiedTypeMapEntry var_t_10171 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9932.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 247)) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = function_kForbiddenKeysForStruct (inCompiler COMMA_HERE).getter_contains (enumerator_9932.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 248)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_string var_m_10315 = GGS_string ("an property cannot be named:") ;
        UpEnumerator_stringset enumerator_10367 (function_kForbiddenKeysForStruct (inCompiler COMMA_HERE)) ;
        while (enumerator_10367.hasCurrentObject ()) {
          var_m_10315.plusAssignOperation(GGS_string (" ").add_operation (enumerator_10367.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 251)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 251)) ;
          enumerator_10367.gotoNextObject () ;
        }
        var_m_10315.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 253)) ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_9932.current (HERE).readProperty_name ().readProperty_location (), var_m_10315, fixItArray8  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 254)) ;
      }
    }
    {
    var_propertyMap_9889.setter_insertKey (enumerator_9932.current (HERE).readProperty_name (), var_t_10171, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 267)) ;
    }
    switch (enumerator_9932.current (HERE).readProperty_initialization ().enumValue ()) {
    case GGS_propertyInCollectionInitializationAST::Enumeration::invalid:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_none:
      {
        var_constructorArgumentList_9833.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10171, enumerator_9932.current (HERE).readProperty_name (), enumerator_9932.current (HERE).readProperty_initialization (), enumerator_9932.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 274)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 274)), enumerator_9932.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 270)) ;
      }
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_some:
      break ;
    }
    var_typedPropertyList_9784.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10171, enumerator_9932.current (HERE).readProperty_name (), enumerator_9932.current (HERE).readProperty_initialization (), enumerator_9932.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 282)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 282)), enumerator_9932.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 278)) ;
    const GGS_structDeclarationAST temp_9 = this ;
    switch (temp_9.readProperty_comparison ().enumValue ()) {
    case GGS_structComparison::Enumeration::invalid:
      break ;
    case GGS_structComparison::Enumeration::enum_none:
      break ;
    case GGS_structComparison::Enumeration::enum_equatable:
      {
        GGS_typeFeatures var_propertyFeatures_11668 = extensionGetter_definition (var_t_10171, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 289)).readProperty_features () ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = var_propertyFeatures_11668.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 290)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 290)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 290)).operator_and (var_propertyFeatures_11668.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 291)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 291)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 291)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 290)).operator_and (var_propertyFeatures_11668.getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-struct.galgas4", 292)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 292)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 292)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 291)).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_9932.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not equatable, because '").add_operation (enumerator_9932.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 294)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 294)), fixItArray11  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 293)) ;
          }
        }
      }
      break ;
    case GGS_structComparison::Enumeration::enum_comparable:
      {
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = extensionGetter_definition (var_t_10171, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 297)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 297)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 297)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 297)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_9932.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not comparable, because '").add_operation (enumerator_9932.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 299)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 299)), fixItArray13  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 298)) ;
          }
        }
      }
      break ;
    }
    enumerator_9932.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_12508 ;
  GGS_string var_initializationCode_12545 ;
  const GGS_structDeclarationAST temp_14 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_14.readProperty_mStructurePropertyListAST (), var_structNameForUsefulness_9511, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_12508, var_initializationCode_12545, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 304)) ;
  GGS_bool var_constructorNeedsCompilerVar_12586 = var_unusedVariableCppNameSet_12508.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 314)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 314)) ;
  const GGS_structDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_structTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("struct ").add_operation (temp_15.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 316)), var_structType_9438, var_typedPropertyList_9784, var_constructorArgumentList_9833, var_initializationCode_12545, var_constructorNeedsCompilerVar_12586, extensionGetter_definition (var_structType_9438, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 322)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 322)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 322)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 315)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9511, var_structNameForUsefulness_9511, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 325)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_structNameForUsefulness_9511  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 327)) ;
    }
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = extensionGetter_definition (var_structType_9438, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 330)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 330)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 330)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_structDeclarationAST temp_21 = this ;
      GGS_lstring var_initializerForUsefulness_13393 = function_initializerNameForUsefulEntitiesGraph (temp_21.readProperty_structTypeName (), extensionGetter_initializerSignature (var_constructorArgumentList_9833, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 333)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 331)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_13393, var_initializerForUsefulness_13393, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 335)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_13393, var_structNameForUsefulness_9511 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 336)) ;
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
          ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerForUsefulness_13393  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 338)) ;
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
  UpEnumerator__5B_typedProperty_5D_ enumerator_14748 (temp_0.readProperty_mTypedPropertyList ()) ;
  while (enumerator_14748.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_14748.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 362)) ;
    enumerator_14748.gotoNextObject () ;
  }
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_14849 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 364)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_structureGenerationTemplate::class_func_structTypeHeader_31_ (var_selfTypeDefinition_14849.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 367)), temp_3.readProperty_mTypedPropertyList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 365)) ;
  const GGS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_14849.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 372)), var_selfTypeDefinition_14849.readProperty_isConcrete (), var_selfTypeDefinition_14849.readProperty_initializerMap (), var_selfTypeDefinition_14849.readProperty_classFunctionMap (), var_selfTypeDefinition_14849.readProperty_getterMap (), var_selfTypeDefinition_14849.readProperty_setterMap (), var_selfTypeDefinition_14849.readProperty_instanceMethodMap (), var_selfTypeDefinition_14849.readProperty_classMethodMap (), var_selfTypeDefinition_14849.readProperty_readSubscriptMap (), var_selfTypeDefinition_14849.readProperty_writeSubscriptMap (), var_selfTypeDefinition_14849.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_14849.readProperty_features (), var_selfTypeDefinition_14849.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_14849.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 370)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 370)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 396)) ;
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_16139 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 397)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  const GGS_structTypeForGeneration temp_4 = this ;
  const GGS_structTypeForGeneration temp_5 = this ;
  const GGS_structTypeForGeneration temp_6 = this ;
  const GGS_structTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_structureGenerationTemplate::class_func_structTypeSpecificImplementation (var_selfTypeDefinition_16139.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 400)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar (), temp_7.readProperty_synthetizeAnInitializer (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_16139.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 406)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 398)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@weakReferenceDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_weakReferenceDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  result = GGS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 34)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                       GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                       GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                       GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                       GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                       GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  const GGS_weakReferenceDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2636 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 48)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2636, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 49)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_weakReferenceDeclarationAST temp_5 = this ;
      const GGS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2636, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 53)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 51)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                 const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                 const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                 const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                 const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_superClassIndex_3889 ;
  GGS_bool var_generateHeaderInSeparateFile_3917 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_superClassIndex_3889 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 74)) ;
      const GGS_weakReferenceDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_3917 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_weakReferenceDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_3889, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 77)) ;
    }
    const GGS_weakReferenceDeclarationAST temp_4 = this ;
    GGS_unifiedTypeDefinition var_superTypeDefinition_4208 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 78)) ;
    var_generateHeaderInSeparateFile_3917 = var_superTypeDefinition_4208.readProperty_generateHeaderInSeparateFile () ;
  }
  GGS_unifiedTypeMapEntry var_weakReferenceIndex_4496 ;
  {
  const GGS_weakReferenceDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4496, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 82)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_4565 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_6 = this ;
  var_classFunctionMap_4565.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nil"), temp_6.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), var_weakReferenceIndex_4496, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 88)) ;
  }
  GGS_getterMap var_getterMap_4821 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_4854 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_4895 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_4941 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_mWeakReferenceTypeName (), GGS_bool (false), var_initializerMap_4941, var_getterMap_4821, var_setterMap_4854, var_instanceMethodMap_4895, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 99)) ;
  }
  UpEnumerator_getterMap enumerator_5384 (var_getterMap_4821) ;
  while (enumerator_5384.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (enumerator_5384.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 115)) ;
    enumerator_5384.gotoNextObject () ;
  }
  UpEnumerator_setterMap enumerator_5491 (var_setterMap_4854) ;
  while (enumerator_5491.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (enumerator_5491.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray9  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 118)) ;
    enumerator_5491.gotoNextObject () ;
  }
  UpEnumerator_instanceMethodMap enumerator_5598 (var_instanceMethodMap_4895) ;
  while (enumerator_5598.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (enumerator_5598.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 121)) ;
    enumerator_5598.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_5702 = GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 123)) ;
  {
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mWeakReferenceTypeName (), var_features_5702, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 124)) ;
  }
  GGS_unifiedTypeMapEntry var_classIndex_6002 ;
  {
  const GGS_weakReferenceDeclarationAST temp_12 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_12.readProperty_mClassTypeName (), var_classIndex_6002, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 132)) ;
  }
  const GGS_weakReferenceDeclarationAST temp_13 = this ;
  const GGS_weakReferenceDeclarationAST temp_14 = this ;
  const GGS_weakReferenceDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_6020 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_mWeakReferenceTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), var_superClassIndex_3889, GGS_typeKindEnum::class_func_weakReferenceType (var_classIndex_6002  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 139)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_4941, var_classFunctionMap_4565, GGS_getterMap::init (inCompiler COMMA_HERE), GGS_setterMap::init (inCompiler COMMA_HERE), GGS_instanceMethodMap::init (inCompiler COMMA_HERE), GGS_classMethodMap::init (inCompiler COMMA_HERE), var_classIndex_6002, GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_5702, var_generateHeaderInSeparateFile_3917, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 156)), GGS_string ("weak-reference-").add_operation (temp_15.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 157)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 157)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 158)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_6020.readProperty_typeName (), var_typeDefinition_6020, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 160)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  GGS_lstring var_weakRefTypeNameForUsefulness_7715 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 177)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_7715, var_weakRefTypeNameForUsefulness_7715, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 178)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_weakReferenceDeclarationAST temp_3 = this ;
      GGS_lstring var_superWeakRefNameForUsefulness_7966 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 180)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_7715, var_superWeakRefNameForUsefulness_7966 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 181)) ;
      }
    }
  }
  const GGS_weakReferenceDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8225 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 184)) ;
  const GGS_weakReferenceDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry temp_6 ;
  const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_7) {
    temp_6 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 187)) ;
  }else if (GalgasBool::boolFalse == test_7) {
    const GGS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 188)) ;
  }
  GGS_unifiedTypeMapEntry var_superClassEntry_8346 = temp_6 ;
  const GGS_weakReferenceDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_referenceClassType_8572 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 191)) ;
  const GGS_weakReferenceDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_optionalClassTypeOrNull_8706 = extensionGetter_typeMapEntryOrNullForLKey (ioArgument_ioTypeMap, function_makeOptionalTypeLName (temp_10.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 195)) ;
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_weakReferenceTypeForGeneration::init_21_infoMessage_21__21__21__21__21_ (GGS_string ("weak reference ").add_operation (temp_11.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 199)), var_selfType_8225, var_referenceClassType_8572, var_superClassEntry_8346, extensionGetter_definition (var_selfType_8225, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 203)).readProperty_generateHeaderInSeparateFile (), var_optionalClassTypeOrNull_8706, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 198)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_string & outArgument_outHeader,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_weakReferenceTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 223)).operator_not (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 223)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 224)) ;
    }
  }
  const GGS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 226)) ;
  const GGS_weakReferenceTypeForGeneration temp_4 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_10160 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 227)) ;
  GGS_string var_optionalClassTypeNameRepresentation_10222 ;
  const GGS_weakReferenceTypeForGeneration temp_5 = this ;
  switch (temp_5.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_10222 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_10371__0 ;
      temp_5.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_10371__0) ;
      const GGS_weakReferenceTypeForGeneration temp_6 = this ;
      var_optionalClassTypeNameRepresentation_10222 = extensionGetter_identifierRepresentation (temp_6.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 233)) ;
    }
    break ;
  }
  const GGS_weakReferenceTypeForGeneration temp_7 = this ;
  const GGS_weakReferenceTypeForGeneration temp_8 = this ;
  const GGS_weakReferenceTypeForGeneration temp_9 = this ;
  GGS_string temp_10 ;
  const GalgasBool test_11 = temp_9.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 238)).boolEnum () ;
  if (GalgasBool::boolTrue == test_11) {
    temp_10 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_11) {
    const GGS_weakReferenceTypeForGeneration temp_12 = this ;
    temp_10 = extensionGetter_identifierRepresentation (temp_12.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 238)) ;
  }
  outArgument_outHeader = GGS_weakClassGenerationTemplate::class_func_weakReferenceClassTypeHeader_31_ (extensionGetter_identifierRepresentation (temp_7.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 236)), extensionGetter_identifierRepresentation (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 237)), temp_10, var_optionalClassTypeNameRepresentation_10222, inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 235)) ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_typeDefinition_10160.readProperty_typeName ().readProperty_string (), var_typeDefinition_10160.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 243)), var_typeDefinition_10160.readProperty_isConcrete (), var_typeDefinition_10160.readProperty_initializerMap (), var_typeDefinition_10160.readProperty_classFunctionMap (), var_typeDefinition_10160.readProperty_getterMap (), var_typeDefinition_10160.readProperty_setterMap (), var_typeDefinition_10160.readProperty_instanceMethodMap (), var_typeDefinition_10160.readProperty_classMethodMap (), var_typeDefinition_10160.readProperty_readSubscriptMap (), var_typeDefinition_10160.readProperty_writeSubscriptMap (), var_typeDefinition_10160.readProperty_enumerationDescriptorList (), var_typeDefinition_10160.readProperty_features (), var_typeDefinition_10160.readProperty_typeForEnumeratedElement (), var_typeDefinition_10160.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 241)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 241)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 267)) ;
  const GGS_weakReferenceTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_11774 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 268)) ;
  GGS_string var_optionalClassTypeNameRepresentation_11836 ;
  const GGS_weakReferenceTypeForGeneration temp_2 = this ;
  switch (temp_2.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_11836 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_11985__0 ;
      temp_2.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_11985__0) ;
      const GGS_weakReferenceTypeForGeneration temp_3 = this ;
      var_optionalClassTypeNameRepresentation_11836 = extensionGetter_identifierRepresentation (temp_3.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 274)) ;
      const GGS_weakReferenceTypeForGeneration temp_4 = this ;
      extensionMethod_addHeaderFileName (temp_4.readProperty_optionalClassTypeOrNull (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 275)) ;
    }
    break ;
  }
  const GGS_weakReferenceTypeForGeneration temp_5 = this ;
  const GGS_weakReferenceTypeForGeneration temp_6 = this ;
  GGS_string temp_7 ;
  const GalgasBool test_8 = temp_6.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 280)).boolEnum () ;
  if (GalgasBool::boolTrue == test_8) {
    temp_7 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_8) {
    const GGS_weakReferenceTypeForGeneration temp_9 = this ;
    temp_7 = extensionGetter_identifierRepresentation (temp_9.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 280)) ;
  }
  outArgument_outImplementation = GGS_weakClassGenerationTemplate::class_func_weakReferenceClassTypeSpecificImplementation (extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 278)), var_typeDefinition_11774.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 279)), temp_7, var_optionalClassTypeNameRepresentation_11836, inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 277)) ;
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
  GGS_unifiedTypeDefinition var_typeDefinition_12353 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_11.readProperty_enumTypeName (), temp_12.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 320)), GGS_typeKindEnum::class_func_enumType (var_constantMap_8510  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 321)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_11411, var_classFunctionMap_8305, var_getterMap_10470, var_setterMap_8347, var_instanceMethodMap_9458, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 332)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_11882, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 338)), GGS_string ("enum-").add_operation (temp_13.readProperty_enumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 339)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 339)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-enum.galgas4", 340)), inCompiler COMMA_HERE) ;
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
  GGS_lstring var_key_3458 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mOptionSetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 82)), temp_1.readProperty_mOptionSetTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_optionSetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3458, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 83)) ;
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
  result = GGS_string ("optionset @").add_operation (temp_0.readProperty_mOptionSetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 89)) ;
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
  GGS_stringset var_slotNameSet_4503 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_optionSetDeclarationAST temp_0 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_4546 (temp_0.readProperty_mFlagList ()) ;
  while (enumerator_4546.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_slotNameSet_4503.getter_contains (enumerator_4546.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 105)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4546.current (HERE).readProperty_location (), GGS_string ("duplicated slot name"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 106)) ;
      }
    }
    var_slotNameSet_4503.plusPlusAssignOperation (enumerator_4546.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 108)) ;
    enumerator_4546.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_optionSetType_4782 ;
  {
  const GGS_optionSetDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mOptionSetTypeName (), var_optionSetType_4782, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 111)) ;
  }
  GGS_getterMap var_getterMap_4874 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_4874, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 113)) ;
  }
  {
  const GGS_optionSetDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4874, ioArgument_ioTypeMap, GGS_string ("contains"), GGS_string::makeEmptyString (), temp_4.readProperty_mOptionSetTypeName ().readProperty_string (), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 114)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_5205 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  const GGS_optionSetDeclarationAST temp_5 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_5253 (temp_5.readProperty_mFlagList ()) ;
  while (enumerator_5253.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_classFunctionMap_5205.getter_contains (enumerator_5253.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 127)).operator_not (SOURCE_FILE ("declaration-type-optionset.galgas4", 127)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        {
        var_classFunctionMap_5205.setter_insertKey (enumerator_5253.current (HERE), GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), var_optionSetType_4782, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 128)) ;
        }
      }
    }
    enumerator_5253.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_5585 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_5642 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionSetDeclarationAST temp_7 = this ;
  var_initializerMap_5585.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_5642, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 140)), temp_7.readProperty_mOptionSetTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_5642, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 139)) ;
  }
  GGS_setterMap var_setterMap_5844 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_5887 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionSetDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mOptionSetTypeName (), GGS_bool (false), var_initializerMap_5585, var_getterMap_4874, var_setterMap_5844, var_instanceMethodMap_5887, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 146)) ;
  }
  GGS_typeFeatures var_features_6368 = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 162)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 162)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 162)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 162)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 162)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 163)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 162)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-optionset.galgas4", 164)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 163)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 164)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 164)).operator_or (GGS_typeFeatures::class_func_andAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 165)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 164)).operator_or (GGS_typeFeatures::class_func_orAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 166)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 165)).operator_or (GGS_typeFeatures::class_func_xorAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 167)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 166)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 168)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 167)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_optionSetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isEquatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      var_features_6368.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optionset.galgas4", 170)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 170)) ;
    }
  }
  {
  const GGS_optionSetDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mOptionSetTypeName (), var_features_6368, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 172)) ;
  }
  const GGS_optionSetDeclarationAST temp_12 = this ;
  const GGS_optionSetDeclarationAST temp_13 = this ;
  const GGS_optionSetDeclarationAST temp_14 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_7056 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_12.readProperty_mOptionSetTypeName (), temp_13.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 185)), GGS_typeKindEnum::class_func_optionsetType (SOURCE_FILE ("declaration-type-optionset.galgas4", 186)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_5585, var_classFunctionMap_5205, var_getterMap_4874, var_setterMap_5844, var_instanceMethodMap_5887, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 197)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_6368, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 203)), GGS_string ("optionset-").add_operation (temp_14.readProperty_mOptionSetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 204)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 204)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-optionset.galgas4", 205)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7056.readProperty_typeName (), var_typeDefinition_7056, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 207)) ;
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
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 220)).objectCompare (GGS_u_33__32_ (uint32_t (64U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionSetDeclarationAST temp_2 = this ;
      GGS_location var_s_8806 = temp_2.readProperty_mFlagList ().readSubcript__3F_ (GGS_u_33__32_ (uint32_t (64U)), inCompiler COMMA_HERE).readProperty_location () ;
      const GGS_optionSetDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_8806, GGS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 222)).getter_string (SOURCE_FILE ("declaration-type-optionset.galgas4", 222)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 222)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 222)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 222)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_5 = this ;
  GGS_lstring var_optionSetNameForUsefulness_8953 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mOptionSetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 225)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_optionSetNameForUsefulness_8953, var_optionSetNameForUsefulness_8953, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 226)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_optionSetDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_optionSetNameForUsefulness_8953  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 228)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_8 = this ;
  GGS_lstring var_initializerNameForUsefulness_9308 = function_initializerNameForUsefulEntitiesGraph (temp_8.readProperty_mOptionSetTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 233)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 231)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_9308, var_initializerNameForUsefulness_9308, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 235)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_optionSetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_9308  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 237)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_11 = this ;
  const GGS_optionSetDeclarationAST temp_12 = this ;
  const GGS_optionSetDeclarationAST temp_13 = this ;
  const GGS_optionSetDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_optionSetTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("optionset ").add_operation (temp_11.readProperty_mOptionSetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 241)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mOptionSetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 242)), temp_13.readProperty_mFlagList (), temp_14.readProperty_isEquatable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 240)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                    GGS_string & outArgument_outHeader,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionSetTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_10637 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 264)) ;
  const GGS_optionSetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_structGenerationTemplate::class_func_optionSetTypeHeader_31_ (var_selfTypeDefinition_10637.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_10637.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 267)), temp_1.readProperty_mFlagList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 265)) ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_10637.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_10637.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 272)), var_selfTypeDefinition_10637.readProperty_isConcrete (), var_selfTypeDefinition_10637.readProperty_initializerMap (), var_selfTypeDefinition_10637.readProperty_classFunctionMap (), var_selfTypeDefinition_10637.readProperty_getterMap (), var_selfTypeDefinition_10637.readProperty_setterMap (), var_selfTypeDefinition_10637.readProperty_instanceMethodMap (), var_selfTypeDefinition_10637.readProperty_classMethodMap (), var_selfTypeDefinition_10637.readProperty_readSubscriptMap (), var_selfTypeDefinition_10637.readProperty_writeSubscriptMap (), var_selfTypeDefinition_10637.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_10637.readProperty_features (), var_selfTypeDefinition_10637.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_10637.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 270)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 270)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 294)) ;
  const GGS_optionSetTypeForGeneration temp_1 = this ;
  const GGS_optionSetTypeForGeneration temp_2 = this ;
  const GGS_optionSetTypeForGeneration temp_3 = this ;
  const GGS_optionSetTypeForGeneration temp_4 = this ;
  const GGS_optionSetTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_structGenerationTemplate::class_func_optionSetTypeSpecificImplementation (extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 296)).readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 297)), temp_3.readProperty_mFlagList (), GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 299)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 299)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 299)).subtract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 299)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 299)), temp_5.readProperty_equatable (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 295)) ;
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
  GGS_lstring var_key_4782 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 110)), temp_1.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4782, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 111)) ;
  }
  const GGS_graphDeclarationAST temp_3 = this ;
  const GGS_graphDeclarationAST temp_4 = this ;
  GGS_lstring var_arrayTypeKey_4919 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mAssociatedArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 112)), temp_4.readProperty_mAssociatedArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4782, var_arrayTypeKey_4919 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 113)) ;
  }
  GGS_lstring var_lstringArrayTypeName_5105 = function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 114)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 114)) ;
  GGS_lstring var_lstringArrayTypeKey_5175 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (var_lstringArrayTypeName_5105.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 115)), var_lstringArrayTypeName_5105.readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4782, var_lstringArrayTypeKey_5175 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 116)) ;
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
  GGS_unifiedTypeMapEntry var_stringTypeEntry_6162 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeEntry_6162, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 129)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeEntry_6280 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeEntry_6280, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 131)) ;
  }
  {
  const GGS_graphDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_6371 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), joker_6371, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 133)) ;
  }
  GGS_unifiedTypeMapEntry var_associatedArrayType_6495 ;
  {
  const GGS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedArrayTypeName (), var_associatedArrayType_6495, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 135)) ;
  }
  GGS_unifiedTypeMapEntry var_associatedElementType_6640 ;
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mAssociatedElementTypeName (), var_associatedElementType_6640, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 137)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringArrayTypeEntry_6796 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 139)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 139)).readProperty_string (), var_lstringArrayTypeEntry_6796, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 139)) ;
  }
  GGS_getterMap var_getterMap_6888 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6888, inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 141)) ;
  }
  GGS_setterMap var_setterMap_6919 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_6962 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_formalParameterList_7057 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 147)), var_associatedArrayType_6495, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 149)), GGS_string ("outSortedInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 146)) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 153)), var_lstringArrayTypeEntry_6796, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 155)), GGS_string ("outSortedLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 152)) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 159)), var_associatedArrayType_6495, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 161)), GGS_string ("outUnsortedInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 158)) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 165)), var_lstringArrayTypeEntry_6796, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 167)), GGS_string ("outUnsortedLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 164)) ;
  {
  var_instanceMethodMap_6962.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("topologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 171)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 172)), var_formalParameterList_7057, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 174)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 176)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 170)) ;
  }
  {
  var_instanceMethodMap_6962.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("depthFirstTopologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 180)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 181)), var_formalParameterList_7057, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 183)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 185)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 179)) ;
  }
  var_formalParameterList_7057 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 191)), var_associatedArrayType_6495, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 193)), GGS_string ("outInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 190)) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 197)), var_lstringArrayTypeEntry_6796, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 199)), GGS_string ("outLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 196)) ;
  {
  var_instanceMethodMap_6962.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("circularities"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 203)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 204)), var_formalParameterList_7057, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 206)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 208)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 202)) ;
  }
  {
  var_instanceMethodMap_6962.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoSuccessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 212)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 213)), var_formalParameterList_7057, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 215)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 217)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 211)) ;
  }
  {
  var_instanceMethodMap_6962.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoPredecessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 221)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 222)), var_formalParameterList_7057, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 224)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 226)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 220)) ;
  }
  {
  const GGS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("nodeList"), temp_3.readProperty_mAssociatedArrayTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 230)) ;
  }
  {
  const GGS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("reversedGraph"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 238)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("undefinedNodeCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 246)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("undefinedNodeKeyList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 254)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("undefinedNodeReferenceList"), GGS_string ("[lstring]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 262)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("graphviz"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 270)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("isNodeDefined"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 278)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 288)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 298)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("lkeyList"), GGS_string ("[lstring]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 306)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("edges"), GGS_string ("[stringString]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 314)) ;
  }
  {
  const GGS_graphDeclarationAST temp_5 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("subgraphFromNodes"), GGS_string::makeEmptyString (), GGS_string ("[lstring]"), GGS_string ("inStartNodeLStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), temp_5.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 322)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("accessibleNodesFrom"), GGS_string::makeEmptyString (), GGS_string ("[lstring]"), GGS_string ("inStartNodeStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), GGS_string ("[lstring]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 336)) ;
  }
  var_formalParameterList_7057 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 348)), var_lstringTypeEntry_6280, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 350)), GGS_string ("inLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 347)) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 354)), var_associatedElementType_6640, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 356)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 353)) ;
  const GGS_graphDeclarationAST temp_6 = this ;
  UpEnumerator__5B_graphInsertModifier_5D_ enumerator_13225 (temp_6.readProperty_mInsertModifierList ()) ;
  while (enumerator_13225.hasCurrentObject ()) {
    {
    var_setterMap_6919.setter_insertOrReplace (enumerator_13225.current (HERE).readProperty_mInsertModifierName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 362)), var_formalParameterList_7057, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 365)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 360)) ;
    }
    enumerator_13225.gotoNextObject () ;
  }
  {
  var_setterMap_6919.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToDominators"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 371)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 372)), GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 375)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 370)) ;
  }
  var_formalParameterList_7057 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 380)), var_stringTypeEntry_6162, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 380)), GGS_string ("inNodeName"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 380)) ;
  {
  var_setterMap_6919.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 382)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 383)), var_formalParameterList_7057, GGS_bool (true), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 386)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 381)) ;
  }
  var_formalParameterList_7057 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("from").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 391)), var_lstringTypeEntry_6280, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 391)), GGS_string ("inSourceNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 391)) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("to").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 392)), var_lstringTypeEntry_6280, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 392)), GGS_string ("inTargetNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 392)) ;
  {
  var_setterMap_6919.setter_insertKey (GGS_string ("addEdge").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 394)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 395)), var_formalParameterList_7057, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 398)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 393)) ;
  }
  var_formalParameterList_7057 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7057.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 404)), var_lstringTypeEntry_6280, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 406)), GGS_string ("inNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 403)) ;
  {
  var_setterMap_6919.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("noteNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 409)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 410)), var_formalParameterList_7057, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 413)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 408)) ;
  }
  GGS_initializerMap var_initializerMap_15094 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_constructorPropertyTypeList_15151 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_7 = this ;
  var_initializerMap_15094.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_15151, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 420)), temp_7.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_15151, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 419)) ;
  }
  {
  const GGS_graphDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mGraphTypeName (), GGS_bool (false), var_initializerMap_15094, var_getterMap_6888, var_setterMap_6919, var_instanceMethodMap_6962, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 424)) ;
  }
  GGS_typeFeatures var_features_15795 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-graph.galgas4", 439)) ;
  {
  const GGS_graphDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_mGraphTypeName (), var_features_15795, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 440)) ;
  }
  const GGS_graphDeclarationAST temp_10 = this ;
  const GGS_graphDeclarationAST temp_11 = this ;
  const GGS_graphDeclarationAST temp_12 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_16075 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_10.readProperty_mGraphTypeName (), temp_11.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 453)), GGS_typeKindEnum::class_func_graphType (SOURCE_FILE ("declaration-type-graph.galgas4", 454)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_15094, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6888, var_setterMap_6919, var_instanceMethodMap_6962, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 465)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_15795, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 471)), GGS_string ("graph-").add_operation (temp_12.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-graph.galgas4", 472)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 472)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-graph.galgas4", 473)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_16075.readProperty_typeName (), var_typeDefinition_16075, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 475)) ;
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
  GGS_lstring var_nameForUsefulness_17750 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 488)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17750, var_nameForUsefulness_17750, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 489)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_graphDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_17750  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 491)) ;
    }
  }
  const GGS_graphDeclarationAST temp_3 = this ;
  GGS_lstring var_associatedTypeNameForUsefulness_17998 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mAssociatedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 493)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17750, var_associatedTypeNameForUsefulness_17998 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 494)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_graphDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_associatedTypeNameForUsefulness_17998  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 496)) ;
    }
  }
  const GGS_graphDeclarationAST temp_6 = this ;
  GGS_lstring var_initializerNameForUsefulness_18377 = function_initializerNameForUsefulEntitiesGraph (temp_6.readProperty_mGraphTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 501)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 499)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_18377, var_initializerNameForUsefulness_18377, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 503)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_graphDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_18377  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 505)) ;
    }
  }
  const GGS_graphDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_graphTypeEntry_18754 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 508)) ;
  const GGS_graphDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_associatedArrayType_18831 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 509)) ;
  const GGS_graphDeclarationAST temp_11 = this ;
  GGS_unifiedTypeMapEntry var_associatedListElementTypeEntry_18923 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mAssociatedElementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 510)) ;
  GGS_unifiedTypeMapEntry var_lstringArrayTypeEntry_19028 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 511)) ;
  GGS_unifiedTypeMapEntry var_stringArrayTypeEntry_19131 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 512)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 512)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 512)) ;
  GGS_stringset temp_12 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 514)) ;
  temp_12.plusPlusAssignOperation (GGS_string ("noteNode")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 514)) ;
  temp_12.plusPlusAssignOperation (GGS_string ("addArc")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 514)) ;
  GGS_stringset var_reservedModifierNames_19274 = temp_12 ;
  const GGS_graphDeclarationAST temp_13 = this ;
  UpEnumerator__5B_graphInsertModifier_5D_ enumerator_19350 (temp_13.readProperty_mInsertModifierList ()) ;
  while (enumerator_19350.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_reservedModifierNames_19274.getter_contains (enumerator_19350.current (HERE).readProperty_mInsertModifierName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 516)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_19350.current (HERE).readProperty_mInsertModifierName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_19350.current (HERE).readProperty_mInsertModifierName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 518)).add_operation (GGS_string ("' mutating proc name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 518)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 517)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_19350.current (HERE).readProperty_mInsertErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 520)) ;
    }
    enumerator_19350.gotoNextObject () ;
  }
  const GGS_graphDeclarationAST temp_16 = this ;
  const GGS_graphDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_graphDeclarationForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("graph ").add_operation (temp_16.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 524)), var_graphTypeEntry_18754, var_associatedArrayType_18831, var_associatedListElementTypeEntry_18923, var_lstringArrayTypeEntry_19028, var_stringArrayTypeEntry_19131, temp_17.readProperty_mInsertModifierList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 523)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outHeader,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20950 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 553)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_mAssociatedArrayTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 554)) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_2.readProperty_mLStringArrayType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 555)) ;
  const GGS_graphDeclarationForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_3.readProperty_mStringArrayType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 556)) ;
  const GGS_graphDeclarationForGeneration temp_4 = this ;
  const GGS_graphDeclarationForGeneration temp_5 = this ;
  const GGS_graphDeclarationForGeneration temp_6 = this ;
  const GGS_graphDeclarationForGeneration temp_7 = this ;
  const GGS_graphDeclarationForGeneration temp_8 = this ;
  outArgument_outHeader = GGS_graphGenerationTemplate::class_func_graphTypeHeader_31_ (var_selfTypeDefinition_20950.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 559)), temp_5.readProperty_mAssociatedArrayTypeEntry (), temp_6.readProperty_mAssociatedElementTypeEntry (), temp_7.readProperty_mLStringArrayType (), temp_8.readProperty_mStringArrayType (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 557)) ;
  const GGS_graphDeclarationForGeneration temp_9 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_20950.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_9.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 567)), var_selfTypeDefinition_20950.readProperty_isConcrete (), var_selfTypeDefinition_20950.readProperty_initializerMap (), var_selfTypeDefinition_20950.readProperty_classFunctionMap (), var_selfTypeDefinition_20950.readProperty_getterMap (), var_selfTypeDefinition_20950.readProperty_setterMap (), var_selfTypeDefinition_20950.readProperty_instanceMethodMap (), var_selfTypeDefinition_20950.readProperty_classMethodMap (), var_selfTypeDefinition_20950.readProperty_readSubscriptMap (), var_selfTypeDefinition_20950.readProperty_writeSubscriptMap (), var_selfTypeDefinition_20950.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20950.readProperty_features (), var_selfTypeDefinition_20950.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20950.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 565)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 565)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 589)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedArrayTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 590)) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 591)) ;
  const GGS_graphDeclarationForGeneration temp_3 = this ;
  const GGS_graphDeclarationForGeneration temp_4 = this ;
  const GGS_graphDeclarationForGeneration temp_5 = this ;
  const GGS_graphDeclarationForGeneration temp_6 = this ;
  const GGS_graphDeclarationForGeneration temp_7 = this ;
  const GGS_graphDeclarationForGeneration temp_8 = this ;
  const GGS_graphDeclarationForGeneration temp_9 = this ;
  outArgument_outImplementation = GGS_graphGenerationTemplate::class_func_graphTypeSpecificImplementation (temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 594)), temp_5.readProperty_mAssociatedArrayTypeEntry (), temp_6.readProperty_mAssociatedElementTypeEntry (), temp_7.readProperty_mInsertModifierList (), temp_8.readProperty_mLStringArrayType (), temp_9.readProperty_mStringArrayType (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 592)) ;
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
  GGS_lstring var_selfKey_2303 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 41)), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_selfKey_2303, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 42)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_3 = this ;
  const GGS_optionalTypeDeclarationAST temp_4 = this ;
  GGS_lstring var_unwrappedKey_2452 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_unwrappedTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 43)), temp_4.readProperty_unwrappedTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_selfKey_2303, var_unwrappedKey_2452 COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 44)) ;
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
  GGS_getterMap var_getterMap_3338 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_3338, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 58)) ;
  }
  GGS_unifiedTypeMapEntry var_boolTypeEntry_3416 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("bool").getter_nowhere (SOURCE_FILE ("declaration-type-optional.galgas4", 60)), var_boolTypeEntry_3416, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 60)) ;
  }
  GGS_propertyMap var_propertyMap_3452 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  var_propertyMap_3452.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("isSome"), temp_0.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas4", 64)), GGS_bool (true), var_boolTypeEntry_3416, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 62)) ;
  }
  {
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  var_propertyMap_3452.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("isNil"), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas4", 70)), GGS_bool (true), var_boolTypeEntry_3416, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 68)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_3779 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_3822 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_3862 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_2 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_2.readProperty_optionalTypeName (), GGS_bool (false), var_initializerMap_3862, var_getterMap_3338, var_setterMap_3822, var_instanceMethodMap_3779, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 78)) ;
  }
  GGS_unifiedTypeMapEntry var_unwrappedType_4397 ;
  {
  const GGS_optionalTypeDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_unwrappedTypeName (), var_unwrappedType_4397, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 94)) ;
  }
  GGS_typeFeatures var_features_4437 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_unwrappedType_4397, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optional.galgas4", 97)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-optional.galgas4", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)).operator_or (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-optional.galgas4", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_features_4437.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optional.galgas4", 98)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 98)) ;
    }
  }
  {
  const GGS_optionalTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_optionalTypeName (), var_features_4437, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 100)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_6 = this ;
  const GGS_optionalTypeDeclarationAST temp_7 = this ;
  const GGS_optionalTypeDeclarationAST temp_8 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_4830 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_optionalTypeName (), temp_7.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas4", 113)), GGS_typeKindEnum::class_func_otherType (SOURCE_FILE ("declaration-type-optional.galgas4", 114)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_propertyMap_3452, GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_3862, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_3338, var_setterMap_3822, var_instanceMethodMap_3779, GGS_classMethodMap::init (inCompiler COMMA_HERE), var_unwrappedType_4397, GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_4437, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas4", 131)), GGS_string ("optional-").add_operation (temp_8.readProperty_optionalTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-optional.galgas4", 132)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 132)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-optional.galgas4", 133)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_4830.readProperty_typeName (), var_typeDefinition_4830, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 135)) ;
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
  GGS_lstring var_nameForUsefulness_6574 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 155)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6574, var_nameForUsefulness_6574, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 156)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_unwrappedTypeNameForUsefulness_6732 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 157)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_6574, var_unwrappedTypeNameForUsefulness_6732 COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 158)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_optionalTypeDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isUsefull ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6574  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 160)) ;
    }
  }
  const GGS_optionalTypeDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_optionalType_7025 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 163)) ;
  const GGS_optionalTypeDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry var_unwrappedType_7102 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 164)) ;
  GGS_lstring var_correspondingWeakTypeName_7181 = function_makeWeakTypeLName (extensionGetter_definition (var_unwrappedType_7102, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 165)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 165)) ;
  GGS_unifiedTypeMapEntry var_correspondingWeakTypeOrNull_7271 = extensionGetter_typeMapEntryOrNullForLKey (ioArgument_ioTypeMap, var_correspondingWeakTypeName_7181, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 166)) ;
  const GGS_optionalTypeDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_optionalTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("optional type ").add_operation (temp_6.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 168)), var_optionalType_7025, var_unwrappedType_7102, var_correspondingWeakTypeOrNull_7271, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 167)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_string & outArgument_outHeader,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 191)) ;
  const GGS_optionalTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_8405 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 192)) ;
  const GGS_optionalTypeForGeneration temp_2 = this ;
  const GGS_optionalTypeForGeneration temp_3 = this ;
  const GGS_optionalTypeForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas4", 197)).boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_6) {
    const GGS_optionalTypeForGeneration temp_7 = this ;
    temp_5 = extensionGetter_identifierRepresentation (temp_7.readProperty_weakType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 197)) ;
  }
  outArgument_outHeader = GGS_optionalTypeGenerationTemplate::class_func_optionalTypeHeader_31_ (var_selfTypeDefinition_8405.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 195)), extensionGetter_identifierRepresentation (temp_3.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 196)), temp_5, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 193)) ;
  const GGS_optionalTypeForGeneration temp_8 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_8405.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 201)), var_selfTypeDefinition_8405.readProperty_isConcrete (), var_selfTypeDefinition_8405.readProperty_initializerMap (), var_selfTypeDefinition_8405.readProperty_classFunctionMap (), var_selfTypeDefinition_8405.readProperty_getterMap (), var_selfTypeDefinition_8405.readProperty_setterMap (), var_selfTypeDefinition_8405.readProperty_instanceMethodMap (), var_selfTypeDefinition_8405.readProperty_classMethodMap (), var_selfTypeDefinition_8405.readProperty_readSubscriptMap (), var_selfTypeDefinition_8405.readProperty_writeSubscriptMap (), var_selfTypeDefinition_8405.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_8405.readProperty_features (), var_selfTypeDefinition_8405.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_8405.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 199)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 199)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 223)) ;
  const GGS_optionalTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 224)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_optionalTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas4", 225)).operator_not (SOURCE_FILE ("declaration-type-optional.galgas4", 225)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_optionalTypeForGeneration temp_4 = this ;
      extensionMethod_addHeaderFileName (temp_4.readProperty_weakType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 226)) ;
    }
  }
  const GGS_optionalTypeForGeneration temp_5 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_10047 = extensionGetter_definition (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 228)) ;
  const GGS_optionalTypeForGeneration temp_6 = this ;
  const GGS_optionalTypeForGeneration temp_7 = this ;
  const GGS_optionalTypeForGeneration temp_8 = this ;
  GGS_string temp_9 ;
  const GalgasBool test_10 = temp_8.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas4", 234)).boolEnum () ;
  if (GalgasBool::boolTrue == test_10) {
    temp_9 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_10) {
    const GGS_optionalTypeForGeneration temp_11 = this ;
    temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_weakType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 234)) ;
  }
  outArgument_outImplementation = GGS_optionalTypeGenerationTemplate::class_func_optionalTypeSpecificImplementation (var_selfTypeDefinition_10047.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 231)), extensionGetter_identifierRepresentation (temp_7.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 232)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_10047.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 233)), temp_9, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 229)) ;
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
//Function 'makeWeakTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeWeakTypeName (const GGS_string & constinArgument_inTypeName,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = function_makeEmbeddedTypeName (constinArgument_inTypeName, GGS_string ("weak"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 69)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeWeakTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeWeakTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (function_makeWeakTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 75)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  GGS__5B_propertyInCollectionAST_5D_ var_structAttributeList_7551 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  var_structAttributeList_7551.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-map.galgas4", 201)), GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 202)), GGS_string ("lkey").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 203)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas4", 204)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-map.galgas4", 206)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 200)) ;
  const GGS_mapDeclarationAST temp_0 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_7845 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_7845.hasCurrentObject ()) {
    var_structAttributeList_7551.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-type-map.galgas4", 210)), enumerator_7845.current (HERE).readProperty_typeName (), enumerator_7845.current (HERE).readProperty_name (), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas4", 213)), enumerator_7845.current (HERE).readProperty_hasSelector (), enumerator_7845.current (HERE).readProperty_initialization (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 209)) ;
    enumerator_7845.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeName_8142 = function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 218)) ;
  const GGS_mapDeclarationAST temp_2 = this ;
  const GGS_mapDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas4", 224)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-map.galgas4", 224)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_2.readProperty_isPredefined (), var_elementTypeName_8142, var_structAttributeList_7551, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 219)) ;
  {
  GGS_lstring joker_8576 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_8576, var_elementTypeName_8142, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 228)) ;
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
  GGS_lstring var_key_9326 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 241)), temp_1.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_9326, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 242)) ;
  }
  const GGS_mapDeclarationAST temp_3 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_9476 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_9476.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_9476.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 244)), enumerator_9476.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 244)) ;
    }
    enumerator_9476.gotoNextObject () ;
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
  GGS_unifiedTypeMapEntry var_stringTypeIndex_10334 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeIndex_10334, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 260)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeIndex_10431 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeIndex_10431, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 262)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ temp_0 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 264)) ;
  temp_0.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_lstringTypeIndex_10431, GGS_string ("lkey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 264)) ;
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_10514 = temp_0 ;
  GGS_classFunctionMap var_classFunctionMap_10602 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_getterMap var_getterMap_10686 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_10686, inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 267)) ;
  }
  GGS_setterMap var_setterMap_10716 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_10759 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_1 = this ;
  const GGS_mapDeclarationAST temp_2 = this ;
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_10602, ioArgument_ioTypeMap, GGS_string ("mapWithMapToOverride"), temp_1.readProperty_mMapTypeName ().readProperty_string (), GGS_string ("inMap"), temp_2.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 271)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10686, ioArgument_ioTypeMap, GGS_string ("levels"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 281)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10686, ioArgument_ioTypeMap, GGS_string ("hasKeyAtLevel"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("u32"), GGS_string ("inLevel"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 288)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10686, ioArgument_ioTypeMap, GGS_string ("keySet"), GGS_string ("stringset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 299)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10686, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string ("[lstring]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 306)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10686, ioArgument_ioTypeMap, GGS_string ("contains"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 313)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10686, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 322)) ;
  }
  {
  const GGS_mapDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10686, ioArgument_ioTypeMap, GGS_string ("overriddenMap"), temp_3.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 331)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10686, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 338)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_insertMethodFormalArgumentList_12758 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_typedPropertyList_12837 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_optionalMethodSignatureElement_5D_ var_optionalMethodSignature_12919 = GGS__5B_optionalMethodSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_12919.plusPlusAssignOperation (GGS_optionalMethodSignatureElement::init_21__21__21__21_ (GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 351)), var_stringTypeIndex_10334, GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 349)) ;
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeListForAddAssignWithFieldExpressionList_13088 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_13088.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 356)), var_lstringTypeIndex_10431, GGS_string ("lkey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 355)) ;
  var_insertMethodFormalArgumentList_12758.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 361)), var_lstringTypeIndex_10431, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 363)), GGS_string ("inLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 360)) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_removeMethodFormalArgumentList_13476 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_13476.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 367)), var_lstringTypeIndex_10431, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 369)), GGS_string ("inLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 366)) ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_typesToIncludeInHeaderCompilation_13700 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_4 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_13765 (temp_4.readProperty_mPropertyList ()) ;
  while (enumerator_13765.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = enumerator_13765.current (HERE).readProperty_initialization ().getter_isSome (SOURCE_FILE ("declaration-type-map.galgas4", 373)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_13765.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("property initialization is not handled for a map"), fixItArray6  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 374)) ;
      }
    }
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_13971 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13765.current (HERE).readProperty_typeName (), var_attributeTypeIndex_13971, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 376)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_13088.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 377)), var_attributeTypeIndex_13971, enumerator_13765.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 377)) ;
    var_typedPropertyList_12837.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_13971, enumerator_13765.current (HERE).readProperty_name (), enumerator_13765.current (HERE).readProperty_initialization (), GGS_bool (true), enumerator_13765.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 378)) ;
    var_typesToIncludeInHeaderCompilation_13700.plusPlusAssignOperation (var_attributeTypeIndex_13971  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 379)) ;
    var_enumerationDescriptor_10514.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_attributeTypeIndex_13971, enumerator_13765.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 380)) ;
    GGS_lstring temp_7 ;
    const GalgasBool test_8 = enumerator_13765.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      temp_7 = enumerator_13765.current (HERE).readProperty_name () ;
    }else if (GalgasBool::boolFalse == test_8) {
      temp_7 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 382)) ;
    }
    var_insertMethodFormalArgumentList_12758.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (temp_7, var_attributeTypeIndex_13971, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 384)), enumerator_13765.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 381)) ;
    GGS_lstring temp_9 ;
    const GalgasBool test_10 = enumerator_13765.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      temp_9 = enumerator_13765.current (HERE).readProperty_name () ;
    }else if (GalgasBool::boolFalse == test_10) {
      temp_9 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 388)) ;
    }
    var_removeMethodFormalArgumentList_13476.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (temp_9, var_attributeTypeIndex_13971, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-map.galgas4", 390)), enumerator_13765.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 387)) ;
    GGS_lstring temp_11 ;
    const GalgasBool test_12 = enumerator_13765.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      temp_11 = enumerator_13765.current (HERE).readProperty_name () ;
    }else if (GalgasBool::boolFalse == test_12) {
      temp_11 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 395)) ;
    }
    var_optionalMethodSignature_12919.plusPlusAssignOperation (GGS_optionalMethodSignatureElement::init_21__21__21__21_ (GGS_bool (false), temp_11, var_attributeTypeIndex_13971, enumerator_13765.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 393)) ;
    enumerator_13765.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_13 = this ;
  UpEnumerator__5B_insertSetterAST_5D_ enumerator_15067 (temp_13.readProperty_mInsertSetterList ()) ;
  while (enumerator_15067.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_setterMap_10716.getter_contains (enumerator_15067.current (HERE).readProperty_mInsertMethodName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 402)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_15067.current (HERE).readProperty_mInsertMethodName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_15067.current (HERE).readProperty_mInsertMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 403)).add_operation (GGS_string ("' insert proc is already declared"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 403)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 403)) ;
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      {
      var_setterMap_10716.setter_insertOrReplace (enumerator_15067.current (HERE).readProperty_mInsertMethodName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 407)), var_insertMethodFormalArgumentList_12758, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 410)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 405)) ;
      }
    }
    enumerator_15067.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_16 = this ;
  GGS_lstring var_elementTypeName_15558 = function_makeEmbeddedElementTypeLName (temp_16.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 416)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_15707 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_elementTypeName_15558, var_elementTypeEntry_15707, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 417)) ;
  }
  const GGS_mapDeclarationAST temp_17 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_15783 (temp_17.readProperty_mReplaceSetterList ()) ;
  while (enumerator_15783.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ temp_18 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 424)) ;
    temp_18.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("with").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 424)), var_elementTypeEntry_15707, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 424)), GGS_string ("inEntry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 424)) ;
    GGS__5B_formalParameterSignatureElement_5D_ var_replaceSetterFormalArgumentList_15850 = temp_18 ;
    {
    var_setterMap_10716.setter_insertOrReplace (enumerator_15783.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 428)), var_replaceSetterFormalArgumentList_15850, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 431)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 426)) ;
    }
    enumerator_15783.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_19 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_16204 (temp_19.readProperty_mRemoveSetterList ()) ;
  while (enumerator_16204.hasCurrentObject ()) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = var_setterMap_10716.getter_contains (enumerator_16204.current (HERE).readProperty_mName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 437)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_16204.current (HERE).readProperty_mName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_16204.current (HERE).readProperty_mName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 439)).add_operation (GGS_string ("' proc is already declared as an insert mutating proc or a remove mutating proc"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 439)), fixItArray21  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 438)) ;
      }
    }
    if (GalgasBool::boolFalse == test_20) {
      {
      var_setterMap_10716.setter_insertOrReplace (enumerator_16204.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 444)), var_removeMethodFormalArgumentList_13476, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 447)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 442)) ;
      }
    }
    enumerator_16204.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_22 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_16757 (temp_22.readProperty_mSearchMethodList ()) ;
  while (enumerator_16757.hasCurrentObject ()) {
    {
    var_instanceMethodMap_10759.setter_insertKey (enumerator_16757.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 456)), var_removeMethodFormalArgumentList_13476, enumerator_16757.current (HERE).readProperty_mName ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 460)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 454)) ;
    }
    enumerator_16757.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_23 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_17091 (temp_23.readProperty_mPropertyList ()) ;
  while (enumerator_17091.hasCurrentObject ()) {
    GGS_lstring var_accessorName_17118 = GGS_lstring::init_21__21_ (enumerator_17091.current (HERE).readProperty_name ().readProperty_string ().add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 466)), enumerator_17091.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_17253 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17091.current (HERE).readProperty_typeName (), var_attributeTypeIndex_17253, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 467)) ;
    }
    {
    GGS__5B_functionSignatureElement_5D_ temp_24 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 471)) ;
    temp_24.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 471)), var_stringTypeIndex_10334, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 471)) ;
    var_getterMap_10686.setter_insertOrReplace (var_accessorName_17118, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 470)), temp_24, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 472)), GGS_bool (true), var_attributeTypeIndex_17253, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 475)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 468)) ;
    }
    enumerator_17091.gotoNextObject () ;
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_mapDeclarationAST temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterOrEqual, temp_26.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 480)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_mapDeclarationAST temp_27 = this ;
      GGS_location var_insertOrReplaceLocation_17719 = temp_27.readProperty_mInsertOrReplaceDeclarationListAST ().getter_first (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 481)) ;
      {
      var_setterMap_10716.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insertOrReplace"), var_insertOrReplaceLocation_17719, inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 484)), var_insertMethodFormalArgumentList_12758, GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 487)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 482)) ;
      }
    }
  }
  const GGS_mapDeclarationAST temp_28 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_18136 (temp_28.readProperty_mPropertyList ()) ;
  while (enumerator_18136.hasCurrentObject ()) {
    GGS_lstring var_accessorName_18163 = GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_18136.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-map.galgas4", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 494)).add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 494)), enumerator_18136.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_18394 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18136.current (HERE).readProperty_typeName (), var_attributeTypeIndex_18394, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 497)) ;
    }
    GGS__5B_formalParameterSignatureElement_5D_ var_accessorFormalArgumentList_18466 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_18466.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 502)), var_attributeTypeIndex_18394, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 502)), enumerator_18136.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 502)) ;
    var_accessorFormalArgumentList_18466.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 503)), var_stringTypeIndex_10334, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 503)), GGS_string ("key"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 503)) ;
    {
    var_setterMap_10716.setter_insertOrReplace (var_accessorName_18163, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 506)), var_accessorFormalArgumentList_18466, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 509)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 504)) ;
    }
    enumerator_18136.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_18999 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_19056 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_29 = this ;
  var_initializerMap_18999.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_19056, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 517)), temp_29.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_19056, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 516)) ;
  }
  GGS_typeFeatures var_features_19235 = GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-map.galgas4", 521)).operator_or (GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-map.galgas4", 522)) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 521)) ;
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    const GGS_mapDeclarationAST temp_31 = this ;
    test_30 = temp_31.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      var_features_19235.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas4", 524)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 524)) ;
    }
  }
  {
  const GGS_mapDeclarationAST temp_32 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_32.readProperty_mMapTypeName (), var_features_19235, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 526)) ;
  }
  {
  const GGS_mapDeclarationAST temp_33 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_33.readProperty_mMapTypeName (), GGS_bool (false), var_initializerMap_18999, var_getterMap_10686, var_setterMap_10716, var_instanceMethodMap_10759, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 534)) ;
  }
  GGS_lstring var_optionalElementTypeName_20092 = function_makeOptionalTypeLName (var_elementTypeName_15558, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 550)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_20263 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_20092, var_optionalElementTypeEntry_20263, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 551)) ;
  }
  GGS_readSubcriptMap var_readSubcriptMap_20342 = GGS_readSubcriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_34 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 557)) ;
  temp_34.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 557)), var_stringTypeIndex_10334, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 557)) ;
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_20400 = temp_34 ;
  {
  var_readSubcriptMap_20342.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_20400, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 559)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 559)), inCompiler COMMA_HERE), var_argumentTypeList_20400, var_optionalElementTypeEntry_20263, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 558)) ;
  }
  const GGS_mapDeclarationAST temp_35 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_20647 (temp_35.readProperty_mSearchSubcriptList ()) ;
  while (enumerator_20647.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ temp_36 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 564)) ;
    temp_36.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_20647.current (HERE).readProperty_mName (), var_lstringTypeIndex_10431, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 564)) ;
    GGS__5B_functionSignatureElement_5D_ var_subcriptArgumentTypeList_20709 = temp_36 ;
    {
    var_readSubcriptMap_20342.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_subcriptArgumentTypeList_20709, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 566)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 566)), inCompiler COMMA_HERE), var_subcriptArgumentTypeList_20709, var_elementTypeEntry_15707, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 565)) ;
    }
    enumerator_20647.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_37 = this ;
  const GGS_mapDeclarationAST temp_38 = this ;
  const GGS_mapDeclarationAST temp_39 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_21005 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_37.readProperty_mMapTypeName (), temp_38.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas4", 577)), GGS_typeKindEnum::class_func_mapType (SOURCE_FILE ("declaration-type-map.galgas4", 578)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_12837, var_initializerMap_18999, var_classFunctionMap_10602, var_getterMap_10686, var_setterMap_10716, var_instanceMethodMap_10759, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas4", 589)), var_readSubcriptMap_20342, GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_10514, var_features_19235, GGS_bool (false), var_elementTypeEntry_15707, GGS_string ("map-").add_operation (temp_39.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-map.galgas4", 596)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 596)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-map.galgas4", 597)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_21005.readProperty_typeName (), var_typeDefinition_21005, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 599)) ;
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
  GGS_lstring var_nameForUsefulness_22597 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 614)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_22597, var_nameForUsefulness_22597, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 615)) ;
  }
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_22751 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 617)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 616)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_22597, var_elementTypeNameForUsefulness_22751 COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 619)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_mapDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_22597  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 621)) ;
    }
  }
  const GGS_mapDeclarationAST temp_4 = this ;
  GGS_lstring var_initializerNameForUsefulness_23140 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mMapTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 626)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 624)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_23140, var_initializerNameForUsefulness_23140, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 628)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_23140, var_nameForUsefulness_22597 COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 629)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_mapDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_23140  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 631)) ;
    }
  }
  GGS__5B_typedProperty_5D_ var_typedAttributeList_23646 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_23697 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_7 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_23741 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_23741.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_23768 = function_typeNameForUsefulEntitiesGraph (enumerator_23741.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 637)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_22597, var_propertyTypeNameForUsefulness_23768 COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 638)) ;
    }
    GGS_unifiedTypeMapEntry var_t_23983 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_23741.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 639)) ;
    GGS_bool var_hasSelector_24047 = GGS_bool (false) ;
    var_typedAttributeList_23646.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_23983, enumerator_23741.current (HERE).readProperty_name (), enumerator_23741.current (HERE).readProperty_initialization (), GGS_bool (true), var_hasSelector_24047, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 641)) ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = function_kForbiddenKeysForMap (inCompiler COMMA_HERE).getter_contains (enumerator_23741.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 647)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GGS_string var_m_24314 = GGS_string ("a property cannot be named:") ;
        UpEnumerator_stringset enumerator_24365 (function_kForbiddenKeysForMap (inCompiler COMMA_HERE)) ;
        while (enumerator_24365.hasCurrentObject ()) {
          var_m_24314.plusAssignOperation(GGS_string (" ").add_operation (enumerator_24365.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 650)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 650)) ;
          enumerator_24365.gotoNextObject () ;
        }
        var_m_24314.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 652)) ;
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_23741.current (HERE).readProperty_name ().readProperty_location (), var_m_24314, fixItArray9  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 653)) ;
      }
    }
    {
    var_attributeMap_23697.setter_insertKey (enumerator_23741.current (HERE).readProperty_name (), var_t_23983, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 655)) ;
    }
    enumerator_23741.gotoNextObject () ;
  }
  GGS_insertMethodMap var_insertMethodMap_24620 = GGS_insertMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_10 = this ;
  UpEnumerator__5B_insertSetterAST_5D_ enumerator_24671 (temp_10.readProperty_mInsertSetterList ()) ;
  while (enumerator_24671.hasCurrentObject ()) {
    {
    var_insertMethodMap_24620.setter_insertKey (enumerator_24671.current (HERE).readProperty_mInsertMethodName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 660)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_24671.current (HERE).readProperty_mErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 661)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_24671.current (HERE).readProperty_mShadowErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 662)) ;
    }
    enumerator_24671.gotoNextObject () ;
  }
  GGS_searchMethodMap var_searchMethodMap_24953 = GGS_searchMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_11 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_25004 (temp_11.readProperty_mSearchMethodList ()) ;
  while (enumerator_25004.hasCurrentObject ()) {
    {
    var_searchMethodMap_24953.setter_insertKey (enumerator_25004.current (HERE).readProperty_mName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 667)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_25004.current (HERE).readProperty_mErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 668)) ;
    }
    enumerator_25004.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_12 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_25207 (temp_12.readProperty_mRemoveSetterList ()) ;
  while (enumerator_25207.hasCurrentObject ()) {
    {
    var_insertMethodMap_24620.setter_insertKey (enumerator_25207.current (HERE).readProperty_mName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 672)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_25207.current (HERE).readProperty_mErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 673)) ;
    }
    enumerator_25207.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_13 = this ;
  UpEnumerator__5B_location_5D_ enumerator_25479 (temp_13.readProperty_mInsertOrReplaceDeclarationListAST ()) ;
  GGS_u_33__32_ index_25432 (uint32_t (0)) ;
  while (enumerator_25479.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::greaterThan, index_25432.objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_25479.current (HERE), GGS_string ("the 'insertOrReplace' mutating proc is already declared"), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 678)) ;
      }
    }
    enumerator_25479.gotoNextObject () ;
    index_25432.plusAssignOperation (GGS_u_33__32_ (1), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 676)) ;
  }
  const GGS_mapDeclarationAST temp_16 = this ;
  GGS_bool var_hasInsertOrReplaceModifier_25686 = GGS_bool (ComparisonKind::greaterThan, temp_16.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 681)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_hasInsertOrReplaceModifier_25686.operator_and (var_insertMethodMap_24620.getter_contains (GGS_string ("insertOrReplace") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 682)) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 682)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_mapDeclarationAST temp_18 = this ;
      GGS_location var_insertOrReplaceDeclarationLocation_25861 = temp_18.readProperty_mInsertOrReplaceDeclarationListAST ().getter_first (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 683)) ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_25861, GGS_string ("the insertOrReplace' mutating proc cannot be declared : an insert mutating proc or a remove mutating proc has been declared with this name"), fixItArray19  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 684)) ;
    }
  }
  const GGS_mapDeclarationAST temp_20 = this ;
  GGS_lstring var_elementTypeName_26192 = function_makeEmbeddedElementTypeLName (temp_20.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 688)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_26267 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_elementTypeName_26192, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 689)) ;
  GGS_lstring var_optionalElementTypeName_26342 = function_makeOptionalTypeLName (var_elementTypeName_26192, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 690)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_26431 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_26342, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 691)) ;
  const GGS_mapDeclarationAST temp_21 = this ;
  const GGS_mapDeclarationAST temp_22 = this ;
  const GGS_mapDeclarationAST temp_23 = this ;
  const GGS_mapDeclarationAST temp_24 = this ;
  const GGS_mapDeclarationAST temp_25 = this ;
  const GGS_mapDeclarationAST temp_26 = this ;
  const GGS_mapDeclarationAST temp_27 = this ;
  const GGS_mapDeclarationAST temp_28 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_mapTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21_ (GGS_string ("map ").add_operation (temp_21.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 694)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_22.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 695)), var_elementTypeEntry_26267, temp_23.readProperty_mMapTypeName (), var_typedAttributeList_23646, temp_24.readProperty_mInsertSetterList (), temp_25.readProperty_mSearchMethodList (), temp_26.readProperty_mSearchSubcriptList (), temp_27.readProperty_mRemoveSetterList (), temp_28.readProperty_mReplaceSetterList (), var_hasInsertOrReplaceModifier_25686, var_optionalElementTypeEntry_26431, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 693)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const GGS_lstring constinArgument_inString,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_string_5D_ enumerator_27403 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 716))) ;
  while (enumerator_27403.hasCurrentObject ()) {
    GGS__5B_string_5D_ var_explodedArray_27426 = enumerator_27403.current (HERE).getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 717)) ;
    {
    GGS_string joker_27520 ; // Joker input parameter
    var_explodedArray_27426.setter_removeFirst (joker_27520, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 718)) ;
    }
    UpEnumerator__5B_string_5D_ enumerator_27541 (var_explodedArray_27426) ;
    while (enumerator_27541.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_27541.current (HERE).getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 720)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_27606 = enumerator_27541.current (HERE).getter_characterAtIndex (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 721)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_27606.objectCompare (GGS_char (utf32 (75)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 723)) ;
            }
          }
        }
      }
      enumerator_27541.gotoNextObject () ;
    }
    enumerator_27403.gotoNextObject () ;
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
  UpEnumerator__5B_string_5D_ enumerator_28080 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 733))) ;
  while (enumerator_28080.hasCurrentObject ()) {
    GGS__5B_string_5D_ var_explodedArray_28103 = enumerator_28080.current (HERE).getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 734)) ;
    {
    GGS_string joker_28197 ; // Joker input parameter
    var_explodedArray_28103.setter_removeFirst (joker_28197, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 735)) ;
    }
    UpEnumerator__5B_string_5D_ enumerator_28218 (var_explodedArray_28103) ;
    while (enumerator_28218.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_28218.current (HERE).getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 737)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_28283 = enumerator_28218.current (HERE).getter_characterAtIndex (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 738)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_28283.objectCompare (GGS_char (utf32 (75)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_c_28283.objectCompare (GGS_char (utf32 (76)))) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 739)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 740)) ;
            }
          }
        }
      }
      enumerator_28218.gotoNextObject () ;
    }
    enumerator_28080.gotoNextObject () ;
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
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 749)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("lkey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 749)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 749)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 749)) ;
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
  GGS_unifiedTypeDefinition var_selfTypeDefinition_29709 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 771)) ;
  const GGS_mapTypeForGeneration temp_1 = this ;
  const GGS_mapTypeForGeneration temp_2 = this ;
  const GGS_mapTypeForGeneration temp_3 = this ;
  const GGS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GGS_mapGenerationTemplate::class_func_mapTypeHeader_31_ (var_selfTypeDefinition_29709.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 774)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList (), var_selfTypeDefinition_29709.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_29709.readProperty_typeForEnumeratedElement (), extensionGetter_identifierRepresentation (temp_4.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 779)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_29709.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 780)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 772)) ;
  const GGS_mapTypeForGeneration temp_5 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_29709.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 784)), var_selfTypeDefinition_29709.readProperty_isConcrete (), var_selfTypeDefinition_29709.readProperty_initializerMap (), var_selfTypeDefinition_29709.readProperty_classFunctionMap (), var_selfTypeDefinition_29709.readProperty_getterMap (), var_selfTypeDefinition_29709.readProperty_setterMap (), var_selfTypeDefinition_29709.readProperty_instanceMethodMap (), var_selfTypeDefinition_29709.readProperty_classMethodMap (), var_selfTypeDefinition_29709.readProperty_readSubscriptMap (), var_selfTypeDefinition_29709.readProperty_writeSubscriptMap (), var_selfTypeDefinition_29709.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_29709.readProperty_features (), var_selfTypeDefinition_29709.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_29709.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 782)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 782)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 806)) ;
  const GGS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mOptionalElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 807)) ;
  const GGS_mapTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 808)) ;
  const GGS_mapTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_31458 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 809)) ;
  const GGS_mapTypeForGeneration temp_4 = this ;
  const GGS_mapTypeForGeneration temp_5 = this ;
  const GGS_mapTypeForGeneration temp_6 = this ;
  const GGS_mapTypeForGeneration temp_7 = this ;
  const GGS_mapTypeForGeneration temp_8 = this ;
  const GGS_mapTypeForGeneration temp_9 = this ;
  const GGS_mapTypeForGeneration temp_10 = this ;
  const GGS_mapTypeForGeneration temp_11 = this ;
  const GGS_mapTypeForGeneration temp_12 = this ;
  outArgument_outImplementation = GGS_mapGenerationTemplate::class_func_mapTypeSpecificImplementation (var_selfTypeDefinition_31458.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-map.galgas4", 811)), temp_4.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 813)), temp_6.readProperty_mInsertSetterList (), extensionGetter_identifierRepresentation (temp_7.readProperty_mOptionalElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 815)), temp_8.readProperty_mSearchMethodList (), temp_9.readProperty_mSearchSubcriptList (), temp_10.readProperty_mRemoveSetterList (), temp_11.readProperty_mReplaceSetterList (), temp_12.readProperty_mHasInsertOrReplaceModifier (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_31458.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 821)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 810)) ;
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
  result = GGS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 170)) ;
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
  GGS_lstring var_key_7641 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 183)), temp_1.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7641, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 184)) ;
  }
  const GGS_filewrapperDeclarationAST temp_3 = this ;
  UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_7796 (temp_3.readProperty_mFilewrapperTemplateList ()) ;
  while (enumerator_7796.hasCurrentObject ()) {
    UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_7850 (enumerator_7796.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_7850.hasCurrentObject ()) {
      GGS_lstring var_argKey_7907 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_7850.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 187)), enumerator_7850.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (var_argKey_7907 COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 188)) ;
      }
      enumerator_7850.gotoNextObject () ;
    }
    enumerator_7796.gotoNextObject () ;
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
  GGS_wrapperExtensionMap var_textExtensionMap_8965 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_9010 (temp_0.readProperty_mFilewrapperTextFileExtensionList ()) ;
  while (enumerator_9010.hasCurrentObject ()) {
    {
    var_textExtensionMap_8965.setter_insertKey (enumerator_9010.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 205)) ;
    }
    enumerator_9010.gotoNextObject () ;
  }
  GGS_wrapperExtensionMap var_binaryFileExtensionMap_9167 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_9218 (temp_1.readProperty_mFilewrapperBinaryFileExtensionList ()) ;
  while (enumerator_9218.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_textExtensionMap_8965.getter_contains (enumerator_9218.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 210)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9218.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9218.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 211)).add_operation (GGS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 211)), fixItArray3  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 211)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      {
      var_binaryFileExtensionMap_9167.setter_insertKey (enumerator_9218.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 213)) ;
      }
    }
    enumerator_9218.gotoNextObject () ;
  }
  GGS_wrapperFileMap var_regularRootFileMap_9534 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_9582 ;
  const GGS_filewrapperDeclarationAST temp_4 = this ;
  const GGS_filewrapperDeclarationAST temp_5 = this ;
  GGS_string var_absoluteSourcePath_9610 = temp_4.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 219)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 219)).add_operation (temp_5.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 219)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_absoluteSourcePath_9610.getter_directoryExists (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 220)).operator_not (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 220)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_filewrapperDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_9610, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 221)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 221)), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 221)) ;
      var_regularRootFileMap_9534.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_9582.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    GGS_u_33__32_ var_wrapperFileIndex_9971 = GGS_u_33__32_ (uint32_t (0U)) ;
    GGS_u_33__32_ var_wrapperDirectoryIndex_10007 = GGS_u_33__32_ (uint32_t (0U)) ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_9610, GGS_string ("/"), var_textExtensionMap_8965, var_binaryFileExtensionMap_9167, var_regularRootFileMap_9534, var_wrapperDirectoryMap_9582, var_wrapperFileIndex_9971, var_wrapperDirectoryIndex_10007, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 227)) ;
    }
  }
  {
  const GGS_filewrapperDeclarationAST temp_9 = this ;
  const GGS_filewrapperDeclarationAST temp_10 = this ;
  const GGS_filewrapperDeclarationAST temp_11 = this ;
  const GGS_filewrapperDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_9.readProperty_mFilewrapperName (), temp_10.readProperty_mFilewrapperPath (), temp_11.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_9534, var_wrapperDirectoryMap_9582, temp_12.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 239)) ;
  }
  GGS_getterMap var_getterMap_10640 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_10640, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 248)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_10744 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_filewrapperType_10824 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("filewrapper"), var_filewrapperType_10824, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 251)) ;
  }
  {
  const GGS_filewrapperDeclarationAST temp_13 = this ;
  GGS__5B_functionSignatureElement_5D_ temp_14 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 254)) ;
  var_classFunctionMap_10744.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("contents"), temp_13.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE), temp_14, GGS_bool (false), var_filewrapperType_10824, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 252)) ;
  }
  GGS_unifiedTypeMapEntry var_stringType_11130 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringType_11130, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 259)) ;
  }
  const GGS_filewrapperDeclarationAST temp_15 = this ;
  UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_11168 (temp_15.readProperty_mFilewrapperTemplateList ()) ;
  while (enumerator_11168.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ var_formalArgumentList_11206 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_11301 (enumerator_11168.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_11301.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_typeIndex_11427 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11301.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_11427, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 263)) ;
      }
      var_formalArgumentList_11206.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_11301.current (HERE).readProperty_mFormalTemplateSelector (), var_typeIndex_11427, enumerator_11301.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 264)) ;
      enumerator_11301.gotoNextObject () ;
    }
    {
    var_classFunctionMap_10744.setter_insertKey (enumerator_11168.current (HERE).readProperty_mFilewrapperTemplateName (), var_formalArgumentList_11206, GGS_bool (true), var_stringType_11130, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 271)) ;
    }
    enumerator_11168.gotoNextObject () ;
  }
  GGS_setterMap var_setterMap_11901 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_11944 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_11992 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationAST temp_16 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_16.readProperty_mFilewrapperName (), GGS_bool (false), var_initializerMap_11992, var_getterMap_10640, var_setterMap_11901, var_instanceMethodMap_11944, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 282)) ;
  }
  GGS_typeFeatures var_features_12450 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 297)) ;
  const GGS_filewrapperDeclarationAST temp_17 = this ;
  GGS__5B_typedProperty_5D_ temp_18 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 307)) ;
  GGS__5B_typedProperty_5D_ temp_19 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 309)) ;
  const GGS_filewrapperDeclarationAST temp_20 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12548 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_17.readProperty_mFilewrapperName (), GGS_bool (false), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 304)), GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 305)), GGS_bool (false), temp_18, GGS_propertyMap::init (inCompiler COMMA_HERE), temp_19, GGS_initializerMap::init (inCompiler COMMA_HERE), var_classFunctionMap_10744, var_getterMap_10640, var_setterMap_11901, var_instanceMethodMap_11944, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 316)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_12450, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 322)), GGS_string ("filewrapper-").add_operation (temp_20.readProperty_mFilewrapperName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 323)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 323)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 324)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12548.readProperty_typeName (), var_typeDefinition_12548, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 326)) ;
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
  GGS_lstring var_filewrapperNameForUsefulness_14222 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 339)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_14222, var_filewrapperNameForUsefulness_14222, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 340)) ;
  }
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  const GGS_filewrapperDeclarationAST temp_2 = this ;
  GGS_string var_absoluteSourcePath_14441 = temp_1.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 342)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 342)).add_operation (temp_2.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 342)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_absoluteSourcePath_14441.getter_directoryExists (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 343)).operator_not (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 343)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_filewrapperDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_14441, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 344)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 344)), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 344)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GGS_wrapperExtensionMap var_textExtensionMap_14780 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    UpEnumerator__5B_lstring_5D_ enumerator_14827 (temp_6.readProperty_mFilewrapperTextFileExtensionList ()) ;
    while (enumerator_14827.hasCurrentObject ()) {
      {
      var_textExtensionMap_14780.setter_insertKey (enumerator_14827.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 349)) ;
      }
      enumerator_14827.gotoNextObject () ;
    }
    GGS_wrapperExtensionMap var_binaryFileExtensionMap_14992 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperDeclarationAST temp_7 = this ;
    UpEnumerator__5B_lstring_5D_ enumerator_15045 (temp_7.readProperty_mFilewrapperBinaryFileExtensionList ()) ;
    while (enumerator_15045.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_textExtensionMap_14780.getter_contains (enumerator_15045.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 354)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_15045.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_15045.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 355)).add_operation (GGS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 355)), fixItArray9  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 355)) ;
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        {
        var_binaryFileExtensionMap_14992.setter_insertKey (enumerator_15045.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 357)) ;
        }
      }
      enumerator_15045.gotoNextObject () ;
    }
    GGS_wrapperFileMap var_regularRootFileMap_15377 ;
    GGS_wrapperDirectoryMap var_wrapperDirectoryMap_15427 ;
    const GGS_filewrapperDeclarationAST temp_10 = this ;
    const GGS_filewrapperDeclarationAST temp_11 = this ;
    GGS_string var_absoluteSourcePath_15457 = temp_10.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 363)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 363)).add_operation (temp_11.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 363)) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_absoluteSourcePath_15457.getter_directoryExists (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 364)).operator_not (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 364)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_filewrapperDeclarationAST temp_13 = this ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_15457, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 365)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 365)), fixItArray14  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 365)) ;
        var_regularRootFileMap_15377.drop () ; // Release error dropped variable
        var_wrapperDirectoryMap_15427.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GGS_u_33__32_ var_wrapperFileIndex_15830 = GGS_u_33__32_ (uint32_t (0U)) ;
      GGS_u_33__32_ var_wrapperDirectoryIndex_15868 = GGS_u_33__32_ (uint32_t (0U)) ;
      {
      routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_15457, GGS_string ("/"), var_textExtensionMap_14780, var_binaryFileExtensionMap_14992, var_regularRootFileMap_15377, var_wrapperDirectoryMap_15427, var_wrapperFileIndex_15830, var_wrapperDirectoryIndex_15868, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 371)) ;
      }
    }
    GGS__5B_filewrapperTemplateForGeneration_5D_ temp_15 = GGS__5B_filewrapperTemplateForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 383)) ;
    GGS__5B_filewrapperTemplateForGeneration_5D_ var_filewrapperTemplateListForGeneration_16296 = temp_15 ;
    const GGS_filewrapperDeclarationAST temp_16 = this ;
    UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_16376 (temp_16.readProperty_mFilewrapperTemplateList ()) ;
    while (enumerator_16376.hasCurrentObject ()) {
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = GGS_bool (ComparisonKind::equal, enumerator_16376.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 385)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_16376.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), GGS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_15457, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 387)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 387)), fixItArray18  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 386)) ;
        }
      }
      GGS_string var_absoluteTemplatePath_16701 = var_absoluteSourcePath_15457.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 389)).add_operation (enumerator_16376.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 389)) ;
      GGS__5B_templateInstructionAST_5D_ var_resultingInstructionList_16887 ;
      var_resultingInstructionList_16887.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteTemplatePath_16701, enumerator_16376.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), inCompiler COMMA_HERE), var_resultingInstructionList_16887  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 391)) ;
      GGS_templateVariableMap var_templateVariableMap_17087 = GGS_templateVariableMap::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalInputParameterForGeneration_5D_ var_filewrapperTemplateFormalInputParameters_17162 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_17251 (enumerator_16376.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
      while (enumerator_17251.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_17310 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_17251.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 397)) ;
        GGS_string var_cppVarName_17402 = GGS_string ("in_").add_operation (enumerator_17251.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 398)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 398)) ;
        {
        var_templateVariableMap_17087.setter_insertKey (enumerator_17251.current (HERE).readProperty_mFormalArgumentName (), var_type_17310, var_cppVarName_17402, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 399)) ;
        }
        var_filewrapperTemplateFormalInputParameters_17162.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_17251.current (HERE).readProperty_mFormalTemplateSelector (), var_type_17310, var_cppVarName_17402, enumerator_17251.current (HERE).readProperty_mFormalArgumentName (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 400)) ;
        enumerator_17251.gotoNextObject () ;
      }
      GGS__5B_templateInstructionForGeneration_5D_ var_templateInstructionListForGeneration_17765 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS_templateAnalysisContext var_templateAnalysisContext_17855 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_17087, inCompiler COMMA_HERE) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_14222, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_17855, ioArgument_ioTypeMap, var_resultingInstructionList_16887, var_templateInstructionListForGeneration_17765, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 409)) ;
      }
      var_filewrapperTemplateListForGeneration_16296.plusPlusAssignOperation (GGS_filewrapperTemplateForGeneration::init_21__21__21_ (enumerator_16376.current (HERE).readProperty_mFilewrapperTemplateName ().readProperty_string (), var_filewrapperTemplateFormalInputParameters_17162, var_templateInstructionListForGeneration_17765, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 418)) ;
      enumerator_16376.gotoNextObject () ;
    }
    const GGS_filewrapperDeclarationAST temp_19 = this ;
    const GGS_filewrapperDeclarationAST temp_20 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_filewrapperTypeForGeneration::init_21_infoMessage_21__21__21__21_ (GGS_string ("filewrapper ").add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 426)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_20.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 427)), var_filewrapperTemplateListForGeneration_16296, var_regularRootFileMap_15377, var_wrapperDirectoryMap_15427, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 425)) ;
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
  GGS_unifiedTypeDefinition var_selfTypeDefinition_19714 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 452)) ;
  GGS__5B_string_5D_ var_regularFileIndexStringList_19774 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_regularBinaryContentIndexStringList_19824 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_regularTextContentIndexStringList_19883 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_directoryIndexStringList_19940 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperTypeForGeneration temp_1 = this ;
  const GGS_filewrapperTypeForGeneration temp_2 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_1.readProperty_regularRootFileMap (), temp_2.readProperty_wrapperDirectoryMap (), var_regularFileIndexStringList_19774, var_directoryIndexStringList_19940, var_regularTextContentIndexStringList_19883, var_regularBinaryContentIndexStringList_19824, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 457)) ;
  }
  outArgument_outHeader = GGS_filewrapperGenerationTemplate::class_func_filewrapperDeclaration (var_regularFileIndexStringList_19774, var_directoryIndexStringList_19940, var_regularTextContentIndexStringList_19883, var_regularBinaryContentIndexStringList_19824, var_selfTypeDefinition_19714.readProperty_typeName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 465)) ;
  outArgument_outHeader.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperTypeHeader_31_ (var_selfTypeDefinition_19714.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_19714.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 474)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 472)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 472)) ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForPackage (var_selfTypeDefinition_19714.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_19714.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 478)), var_selfTypeDefinition_19714.readProperty_classFunctionMap (), var_selfTypeDefinition_19714.readProperty_classMethodMap (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 476)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 476)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 489)) ;
  outArgument_outImplementation = GGS_string::makeEmptyString () ;
  GGS_string var_filewrapperImplementation_21430 = GGS_string::makeEmptyString () ;
  {
  const GGS_filewrapperTypeForGeneration temp_1 = this ;
  const GGS_filewrapperTypeForGeneration temp_2 = this ;
  const GGS_filewrapperTypeForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 494)).readProperty_typeName ().readProperty_string (), GGS_string::makeEmptyString (), GGS_u_33__32_ (uint32_t (0U)), temp_2.readProperty_regularRootFileMap (), temp_3.readProperty_wrapperDirectoryMap (), var_filewrapperImplementation_21430, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 493)) ;
  }
  const GGS_filewrapperTypeForGeneration temp_4 = this ;
  outArgument_outImplementation.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperImplementation (extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 502)).readProperty_typeName ().readProperty_string (), var_filewrapperImplementation_21430, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 501)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 501)) ;
  const GGS_filewrapperTypeForGeneration temp_5 = this ;
  const GGS_filewrapperTypeForGeneration temp_6 = this ;
  outArgument_outImplementation.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperTypeSpecificImplementation (extensionGetter_definition (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 507)).readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 508)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 506)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 506)) ;
  const GGS_filewrapperTypeForGeneration temp_7 = this ;
  UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ enumerator_22127 (temp_7.readProperty_filewrapperTemplateListForGeneration ()) ;
  while (enumerator_22127.hasCurrentObject ()) {
    GGS_string var_generatedCodeForInstructionList_22237 = GGS_string::makeEmptyString () ;
    GGS_u_33__32_ var_temporaryVariableIndex_22289 = GGS_u_33__32_ (uint32_t (0U)) ;
    GGS_stringset var_unusedVariableCppNameSet_22337 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    var_unusedVariableCppNameSet_22337.plusPlusAssignOperation (function_gCompilerCppName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 516)) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_22459 (enumerator_22127.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_22459.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_22337.plusPlusAssignOperation (enumerator_22459.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 518)) ;
      enumerator_22459.gotoNextObject () ;
    }
    GGS_bool var_useColumnMarker_22596 = GGS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_22127.current (HERE).readProperty_mTemplateInstructionListForGeneration (), var_generatedCodeForInstructionList_22237, ioArgument_ioInclusionSet, var_temporaryVariableIndex_22289, var_unusedVariableCppNameSet_22337, var_useColumnMarker_22596, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 521)) ;
    }
    const GGS_filewrapperTypeForGeneration temp_8 = this ;
    outArgument_outImplementation.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperTemplateImplementation (extensionGetter_definition (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 531)).readProperty_typeName ().readProperty_string (), enumerator_22127.current (HERE).readProperty_mFilewrapperTemplateName (), enumerator_22127.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters (), var_unusedVariableCppNameSet_22337, var_useColumnMarker_22596, var_generatedCodeForInstructionList_22237, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 530)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 530)) ;
    enumerator_22127.gotoNextObject () ;
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
  UpEnumerator_wrapperFileMap enumerator_26178 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_26178.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_26178.current (HERE).readProperty_mIsTextFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_contents_26266 = GGS_string::class_func_stringWithContentsOfFile (enumerator_26178.current (HERE).readProperty_mAbsoluteFilePath (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 614)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 615)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 615)).add_operation (enumerator_26178.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 615)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 615)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 615)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 616)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_26178.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 617)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 617)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 618)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 619)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 619)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 620)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_contents_26266.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 621)).objectCompare (GGS_u_33__32_ (uint32_t (100U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS__5B_string_5D_ var_components_26780 = var_contents_26266.getter_componentsSeparatedByString (GGS_string ("\n") COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 622)) ;
            GGS_string var_lastLine_26875 ;
            {
            var_components_26780.setter_removeLast (var_lastLine_26875, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 623)) ;
            }
            UpEnumerator__5B_string_5D_ enumerator_26906 (var_components_26780) ;
            const bool bool_2 = true ;
            if (enumerator_26906.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 626)) ;
              while (enumerator_26906.hasCurrentObject () && bool_2) {
                GGS_string var_s_26994 = enumerator_26906.current (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 628)) ;
                ioArgument_ioImplementation.plusAssignOperation(var_s_26994.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 629)).add_operation (GGS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 629)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 629)) ;
                enumerator_26906.gotoNextObject () ;
              }
            }
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::greaterThan, var_lastLine_26875.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 631)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                ioArgument_ioImplementation.plusAssignOperation(var_lastLine_26875.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 632)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 632)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          ioArgument_ioImplementation.plusAssignOperation(var_contents_26266.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 635)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 635)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" ;\n\nconst RegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 637)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_26178.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 638)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 638)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 639)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 640)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 640)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 641)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_26178.current (HERE).readProperty_lkey ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 642)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 642)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 643)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_26178.current (HERE).readProperty_lkey ().readProperty_string ().getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 644)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 644)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 644)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 645)) ;
        ioArgument_ioImplementation.plusAssignOperation(var_contents_26266.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 646)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 646)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 646)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 647)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_26178.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 648)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 648)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 649)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 650)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 650)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 651)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_data var_contents_28255 = GGS_data::class_func_dataWithContentsOfFile (enumerator_26178.current (HERE).readProperty_mAbsoluteFilePath (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 653)) ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 654)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 654)).add_operation (enumerator_26178.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 654)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 654)).add_operation (GGS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 654)).add_operation (enumerator_26178.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 656)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 655)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 656)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 657)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 656)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 657)).add_operation (var_contents_28255.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 657)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 657)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 657)).add_operation (GGS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 657)).add_operation (var_contents_28255.getter_cStringRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 658)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 657)).add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 658)).add_operation (GGS_string ("const RegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 658)).add_operation (enumerator_26178.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 659)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 659)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 659)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 660)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 659)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 660)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 660)).add_operation (enumerator_26178.current (HERE).readProperty_lkey ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 661)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 661)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 661)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 661)).add_operation (enumerator_26178.current (HERE).readProperty_lkey ().readProperty_string ().getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 662)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 662)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 662)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 662)).add_operation (GGS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 662)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 663)).add_operation (var_contents_28255.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 664)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 664)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 664)).add_operation (GGS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 664)).add_operation (GGS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 664)).add_operation (enumerator_26178.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 665)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 665)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 665)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 665)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 665)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 665)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 665)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 654)) ;
    }
    enumerator_26178.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_29398 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_29398.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_29398.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_29398.current (HERE).readProperty_mWrapperDirectoryIndex (), enumerator_29398.current (HERE).readProperty_mRegularFileMap (), enumerator_29398.current (HERE).readProperty_mDirectoryMap (), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 671)) ;
    }
    enumerator_29398.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 681)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 681)).add_operation (GGS_string ("static const RegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 681)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 683)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 682)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 683)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 683)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 683)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 683)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 684)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 684)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 684)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 684)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 684)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 681)) ;
  UpEnumerator_wrapperFileMap enumerator_30072 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_30072.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperFile_").add_operation (enumerator_30072.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 686)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 686)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 686)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 686)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 686)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 686)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 686)) ;
    enumerator_30072.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 688)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 688)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 691)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 691)).add_operation (GGS_string ("static const DirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 691)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 693)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 692)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 693)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 693)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 693)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 693)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 694)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 694)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 694)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 694)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 694)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 691)) ;
  UpEnumerator_wrapperDirectoryMap enumerator_30688 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_30688.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperDirectory_").add_operation (enumerator_30688.current (HERE).readProperty_mWrapperDirectoryIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 696)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 696)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 696)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 696)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 696)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 696)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 696)) ;
    enumerator_30688.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 698)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 698)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 701)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 701)).add_operation (GGS_string ("const DirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 701)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 702)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 702)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 702)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 703)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 702)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 703)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 703)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 704)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 704)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 704)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 704)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 705)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 705)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 705)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 705)).add_operation (GGS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 705)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 706)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 706)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 706)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 706)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 706)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 706)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 706)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 707)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 707)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 707)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 707)).add_operation (GGS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 707)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 708)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 708)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 708)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 708)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 708)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 708)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 708)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 701)) ;
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
  GGS_u_33__32_ var_currentDirectoryIndex_32428 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 723)) ;
  GGS__5B_string_5D_ var_files_32554 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GGS_bool (false) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 725)) ;
  outArgument_outWrapperFileMap = GGS_wrapperFileMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_32645 (var_files_32554) ;
  while (enumerator_32645.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_contains (enumerator_32645.current (HERE).getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 728)) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 728)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_absoluteFilePath_32738 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 729)).add_operation (enumerator_32645.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 729)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_32645.current (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 731)), inCompiler COMMA_HERE), var_absoluteFilePath_32738, GGS_bool (true), var_currentDirectoryIndex_32428, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 730)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 737)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_contains (enumerator_32645.current (HERE).getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 738)) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 738)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_absoluteFilePath_33109 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 739)).add_operation (enumerator_32645.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 739)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_32645.current (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 741)), inCompiler COMMA_HERE), var_absoluteFilePath_33109, GGS_bool (false), var_currentDirectoryIndex_32428, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 740)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 747)) ;
        }
      }
    }
    enumerator_32645.gotoNextObject () ;
  }
  GGS__5B_string_5D_ var_directories_33461 = constinArgument_inAbsoluteSourcePath.getter_directories (GGS_bool (false) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 751)) ;
  outArgument_outWrapperDirectoryMap = GGS_wrapperDirectoryMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_33562 (var_directories_33461) ;
  while (enumerator_33562.hasCurrentObject ()) {
    GGS_u_33__32_ var_theDirectoryIndex_33590 = ioArgument_ioWrapperDirectoryIndex ;
    GGS_wrapperFileMap var_internalWrapperFileMap_33824 ;
    GGS_wrapperDirectoryMap var_internalWrapperDirectoryMap_33859 ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 756)).add_operation (enumerator_33562.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 756)), constinArgument_inPathInWrapper.add_operation (enumerator_33562.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 757)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 757)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_33824, var_internalWrapperDirectoryMap_33859, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 755)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (enumerator_33562.current (HERE).getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 766)), var_internalWrapperFileMap_33824, var_internalWrapperDirectoryMap_33859, var_theDirectoryIndex_33590, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 765)) ;
    }
    enumerator_33562.gotoNextObject () ;
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
  ioArgument_ioDirectoryIndexStringList.plusPlusAssignOperation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 782)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 782))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 782)) ;
  UpEnumerator_wrapperFileMap enumerator_34865 (constinArgument_inFilewrapperFileMap) ;
  while (enumerator_34865.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.plusPlusAssignOperation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 784)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 784))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 784)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_34865.current (HERE).readProperty_mIsTextFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.plusPlusAssignOperation (enumerator_34865.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 786))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 786)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.plusPlusAssignOperation (enumerator_34865.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 788))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 788)) ;
    }
    enumerator_34865.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_35237 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_35237.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_35237.current (HERE).readProperty_mRegularFileMap (), enumerator_35237.current (HERE).readProperty_mDirectoryMap (), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 792)) ;
    }
    enumerator_35237.gotoNextObject () ;
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
  GGS_readSubcriptMap var_readSubscriptMap_7292 = GGS_readSubcriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_11 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 199)) ;
  temp_11.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 199)), var_uintType_4479, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 199)) ;
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_7351 = temp_11 ;
  {
  var_readSubscriptMap_7292.setter_insertKey (extensionGetter_subcriptSignature (var_argumentTypeList_7351, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 201)).getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 201)), var_argumentTypeList_7351, var_elementType_4564, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 200)) ;
  }
  {
  const GGS_sortedArrayTypeDeclarationAST temp_12 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_12.readProperty_sortedArrayTypeName (), GGS_bool (false), var_initializerMap_7026, var_getterMap_4654, var_setterMap_6006, var_instanceMethodMap_5910, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 206)) ;
  }
  GGS_typeFeatures var_features_8026 = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 222)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 222)) COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 222)) ;
  {
  const GGS_sortedArrayTypeDeclarationAST temp_13 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_13.readProperty_sortedArrayTypeName (), var_features_8026, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 223)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_8359 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  var_enumerationDescriptor_8359.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_elementType_4564, GGS_string ("entry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 232)) ;
  const GGS_sortedArrayTypeDeclarationAST temp_14 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_15 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_16 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8475 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_14.readProperty_sortedArrayTypeName (), temp_15.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 239)), GGS_typeKindEnum::class_func_otherType (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 240)), GGS_bool (true), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_7026, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_4654, var_setterMap_6006, var_instanceMethodMap_5910, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 251)), var_readSubscriptMap_7292, GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_8359, var_features_8026, GGS_bool (false), var_elementType_4564, GGS_string ("array-").add_operation (temp_16.readProperty_sortedArrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 258)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 258)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 259)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8475.readProperty_typeName (), var_typeDefinition_8475, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 261)) ;
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
  GGS_lstring var_nameForUsefulness_10384 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_sortedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 279)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10384, var_nameForUsefulness_10384, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 280)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_sortedArrayTypeDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10384  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 282)) ;
    }
  }
  const GGS_sortedArrayTypeDeclarationAST temp_3 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_10636 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 284)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10384, var_elementTypeNameForUsefulness_10636 COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 285)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_sortedArrayTypeDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_elementTypeNameForUsefulness_10636  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 287)) ;
    }
  }
  const GGS_sortedArrayTypeDeclarationAST temp_6 = this ;
  GGS_lstring var_initializerNameForUsefulness_10996 = function_initializerNameForUsefulEntitiesGraph (temp_6.readProperty_sortedArrayTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 292)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 290)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_10996, var_initializerNameForUsefulness_10996, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 294)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_sortedArrayTypeDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_10996  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 296)) ;
    }
  }
  const GGS_sortedArrayTypeDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_elementType_11394 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 299)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_elementType_11394, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 301)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 301)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_sortedArrayTypeDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_elementTypeName ().readProperty_location (), GGS_string ("this type should be a struct"), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 302)) ;
    }
  }
  GGS__5B_sortedArraySortProperty_5D_ var_typedSortPropertyList_11700 = GGS__5B_sortedArraySortProperty_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_sortedArrayTypeDeclarationAST temp_13 = this ;
  UpEnumerator__5B_sortedArraySortDescriptorAST_5D_ enumerator_11753 (temp_13.readProperty_sortDescriptorList ()) ;
  while (enumerator_11753.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyType_11892 ;
    GGS_AccessControl joker_11858 ; // Joker input parameter
    GGS_bool joker_11862 ; // Joker input parameter
    extensionGetter_definition (var_elementType_11394, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 307)).readProperty_propertyMap ().method_searchKey (enumerator_11753.current (HERE).readProperty_mSortedAttributeName (), joker_11858, joker_11862, var_propertyType_11892, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 307)) ;
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = extensionGetter_definition (var_propertyType_11892, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)) COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)).operator_not (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_11753.current (HERE).readProperty_mSortedAttributeName ().readProperty_location (), GGS_string ("this property should be comparable"), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 309)) ;
      }
    }
    var_typedSortPropertyList_11700.plusPlusAssignOperation (GGS_sortedArraySortProperty::init_21__21__21_ (enumerator_11753.current (HERE).readProperty_mAscending (), enumerator_11753.current (HERE).readProperty_mSortedAttributeName ().readProperty_string (), var_propertyType_11892, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 311)) ;
    enumerator_11753.gotoNextObject () ;
  }
  const GGS_sortedArrayTypeDeclarationAST temp_16 = this ;
  GGS_unifiedTypeMapEntry var_selfType_12200 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_16.readProperty_sortedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 314)) ;
  const GGS_sortedArrayTypeDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_sortedArrayTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("sorted array type ").add_operation (temp_17.readProperty_sortedArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 316)), var_selfType_12200, var_elementType_11394, var_typedSortPropertyList_11700, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedArrayTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13448 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 347)) ;
  const GGS_sortedArrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 348)) ;
  const GGS_sortedArrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_sortedArrayTypeGenerationTemplate::class_func_arrayTypeHeader_31_ (var_selfTypeDefinition_13448.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 351)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_13448.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 352)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 349)) ;
  const GGS_sortedArrayTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_13448.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 356)), var_selfTypeDefinition_13448.readProperty_isConcrete (), var_selfTypeDefinition_13448.readProperty_initializerMap (), var_selfTypeDefinition_13448.readProperty_classFunctionMap (), var_selfTypeDefinition_13448.readProperty_getterMap (), var_selfTypeDefinition_13448.readProperty_setterMap (), var_selfTypeDefinition_13448.readProperty_instanceMethodMap (), var_selfTypeDefinition_13448.readProperty_classMethodMap (), var_selfTypeDefinition_13448.readProperty_readSubscriptMap (), var_selfTypeDefinition_13448.readProperty_writeSubscriptMap (), var_selfTypeDefinition_13448.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_13448.readProperty_features (), var_selfTypeDefinition_13448.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_13448.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 354)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 354)) ;
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
  GGS_lstring var_key_4886 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 132)), temp_1.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4886, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 133)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_classDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_classDeclarationAST temp_5 = this ;
      const GGS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4886, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 138)), temp_6.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 136)) ;
      }
    }
  }
  const GGS_classDeclarationAST temp_7 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_5342 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_5342.hasCurrentObject ()) {
    const GGS_classDeclarationAST temp_8 = this ;
    GGS_lstring var_propertyKey_5369 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_5342.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 143)), temp_8.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = GGS_bool (ComparisonKind::equal, enumerator_5342.current (HERE).readProperty_typeName ().readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 144)).objectCompare (GGS_char (utf32 (63)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (var_propertyKey_5369 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 145)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4886, var_propertyKey_5369 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 147)) ;
      }
    }
    enumerator_5342.gotoNextObject () ;
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
  GGS_getterMap var_getterMap_6338 ;
  GGS_setterMap var_setterMap_6367 ;
  GGS_instanceMethodMap var_instanceMethodMap_6404 ;
  GGS__5B_typedProperty_5D_ var_inheritedTypedPropertyList_6447 ;
  GGS_propertyMap var_attributeMap_6495 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_superClassType_6570 ;
  GGS_bool var_generateHeaderInSeparateFile_6599 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_superClassType_6570 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 172)) ;
      {
      routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6338, inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 173)) ;
      }
      var_setterMap_6367 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
      var_instanceMethodMap_6404 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
      var_inheritedTypedPropertyList_6447 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
      var_attributeMap_6495 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
      const GGS_classDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_6599 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_classDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperClassName (), var_superClassType_6570, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 180)) ;
    }
    const GGS_classDeclarationAST temp_4 = this ;
    GGS_unifiedTypeDefinition var_superTypeDefinition_7031 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 181)) ;
    var_inheritedTypedPropertyList_6447 = var_superTypeDefinition_7031.readProperty_allTypedPropertyList () ;
    var_attributeMap_6495 = var_superTypeDefinition_7031.readProperty_propertyMap () ;
    var_generateHeaderInSeparateFile_6599 = var_superTypeDefinition_7031.readProperty_generateHeaderInSeparateFile () ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_superTypeDefinition_7031.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("declaration-type-class.galgas4", 186)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 186)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_classDeclarationAST temp_6 = this ;
        const GGS_classDeclarationAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperClassName ().readProperty_location (), GGS_string ("the @").add_operation (temp_7.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 187)).add_operation (GGS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 187)), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 187)) ;
      }
    }
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_superTypeDefinition_7031.readProperty_isFinal ().boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_classDeclarationAST temp_10 = this ;
        const GGS_classDeclarationAST temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mSuperClassName ().readProperty_location (), GGS_string ("cannot inherit from the @").add_operation (temp_11.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 190)).add_operation (GGS_string (" final class"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 190)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 190)) ;
      }
    }
    var_setterMap_6367 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_setterMap enumerator_7755 (var_superTypeDefinition_7031.readProperty_setterMap ()) ;
    while (enumerator_7755.hasCurrentObject ()) {
      {
      var_setterMap_6367.setter_insertKey (enumerator_7755.current (HERE).readProperty_lkey (), enumerator_7755.current (HERE).readProperty_mKind (), enumerator_7755.current (HERE).readProperty_mParameterList (), enumerator_7755.current (HERE).readProperty_mHasCompilerArgument (), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas4", 200)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 195)) ;
      }
      enumerator_7755.gotoNextObject () ;
    }
    var_getterMap_6338 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_getterMap enumerator_8121 (var_superTypeDefinition_7031.readProperty_getterMap ()) ;
    while (enumerator_8121.hasCurrentObject ()) {
      {
      var_getterMap_6338.setter_insertKey (enumerator_8121.current (HERE).readProperty_lkey (), enumerator_8121.current (HERE).readProperty_mKind (), enumerator_8121.current (HERE).readProperty_mArgumentTypeList (), enumerator_8121.current (HERE).readProperty_mDeclarationLocation (), enumerator_8121.current (HERE).readProperty_mHasCompilerArgument (), enumerator_8121.current (HERE).readProperty_mReturnedType (), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas4", 214)), enumerator_8121.current (HERE).readProperty_mGetterNameThatObsoletesInvokationName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 207)) ;
      }
      enumerator_8121.gotoNextObject () ;
    }
    var_instanceMethodMap_6404 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_instanceMethodMap enumerator_8597 (var_superTypeDefinition_7031.readProperty_instanceMethodMap ()) ;
    while (enumerator_8597.hasCurrentObject ()) {
      {
      var_instanceMethodMap_6404.setter_insertKey (enumerator_8597.current (HERE).readProperty_lkey (), enumerator_8597.current (HERE).readProperty_mKind (), enumerator_8597.current (HERE).readProperty_mParameterList (), enumerator_8597.current (HERE).readProperty_mDeclarationLocation (), enumerator_8597.current (HERE).readProperty_mHasCompilerArgument (), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas4", 227)), enumerator_8597.current (HERE).readProperty_mErrorMessage (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 221)) ;
      }
      enumerator_8597.gotoNextObject () ;
    }
  }
  GGS_unifiedTypeMapEntry var_classType_9048 ;
  {
  const GGS_classDeclarationAST temp_13 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_13.readProperty_mClassTypeName (), var_classType_9048, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 233)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_synthetizedInitializerArgumentList_9153 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_9214 (var_inheritedTypedPropertyList_6447) ;
  while (enumerator_9214.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::equal, enumerator_9214.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 237)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GGS_lstring temp_15 ;
        const GalgasBool test_16 = enumerator_9214.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          temp_15 = enumerator_9214.current (HERE).readProperty_name () ;
        }else if (GalgasBool::boolFalse == test_16) {
          temp_15 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas4", 239)) ;
        }
        var_synthetizedInitializerArgumentList_9153.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (temp_15, enumerator_9214.current (HERE).readProperty_typeEntry (), enumerator_9214.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 238)) ;
      }
    }
    enumerator_9214.gotoNextObject () ;
  }
  const GGS_classDeclarationAST temp_17 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_9536 (temp_17.readProperty_mPropertyList ()) ;
  while (enumerator_9536.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_9606 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9536.current (HERE).readProperty_typeName (), var_attributeTypeIndex_9606, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 246)) ;
    }
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = GGS_bool (ComparisonKind::equal, enumerator_9536.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 247)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        GGS_lstring temp_19 ;
        const GalgasBool test_20 = enumerator_9536.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          temp_19 = enumerator_9536.current (HERE).readProperty_name () ;
        }else if (GalgasBool::boolFalse == test_20) {
          temp_19 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas4", 249)) ;
        }
        var_synthetizedInitializerArgumentList_9153.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (temp_19, var_attributeTypeIndex_9606, enumerator_9536.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 248)) ;
      }
    }
    {
    var_attributeMap_6495.setter_insertKey (enumerator_9536.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_9536.current (HERE).readProperty_accessControl (), var_classType_9048, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 256)), enumerator_9536.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 257)), var_attributeTypeIndex_9606, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 254)) ;
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = var_getterMap_6338.getter_contains (enumerator_9536.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 260)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_9536.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("'").add_operation (enumerator_9536.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 262)).add_operation (GGS_string ("' is the name of a prefefined or a user defined func"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 262)), fixItArray22  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 261)) ;
      }
    }
    enumerator_9536.gotoNextObject () ;
  }
  GGS__5B_typedProperty_5D_ var_currentClassTypedPropertyList_10343 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_allTypedAttributeList_10404 = var_inheritedTypedPropertyList_6447 ;
  const GGS_classDeclarationAST temp_23 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_10480 (temp_23.readProperty_mPropertyList ()) ;
  while (enumerator_10480.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_10550 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_10480.current (HERE).readProperty_typeName (), var_attributeTypeIndex_10550, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 269)) ;
    }
    var_currentClassTypedPropertyList_10343.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_10550, enumerator_10480.current (HERE).readProperty_name (), enumerator_10480.current (HERE).readProperty_initialization (), enumerator_10480.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 274)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 274)), enumerator_10480.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 270)) ;
    var_allTypedAttributeList_10404.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_10550, enumerator_10480.current (HERE).readProperty_name (), enumerator_10480.current (HERE).readProperty_initialization (), enumerator_10480.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 280)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 280)), enumerator_10480.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 276)) ;
    enumerator_10480.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_11083 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_typeFeatures var_features_11126 = GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-class.galgas4", 285)) ;
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    const GGS_classDeclarationAST temp_25 = this ;
    test_24 = temp_25.readProperty_clonable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      var_features_11126.orAssignOperation(GGS_typeFeatures::class_func_clonable (SOURCE_FILE ("declaration-type-class.galgas4", 287)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 287)) ;
      GGS__5B_functionSignatureElement_5D_ var_cloneInitializerArgumentList_11249 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      var_cloneInitializerArgumentList_11249.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("cloned").getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas4", 290)), var_classType_9048, GGS_string ("inObject"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 289)) ;
      {
      const GGS_classDeclarationAST temp_26 = this ;
      var_initializerMap_11083.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_cloneInitializerArgumentList_11249, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 295)), temp_26.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_cloneInitializerArgumentList_11249, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 294)) ;
      }
    }
  }
  {
  const GGS_classDeclarationAST temp_27 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_27.readProperty_mClassTypeName (), GGS_bool (true), var_initializerMap_11083, var_getterMap_6338, var_setterMap_6367, var_instanceMethodMap_6404, GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 300)) ;
  }
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_classDeclarationAST temp_29 = this ;
    GGS_bigint temp_30 ;
    const GalgasBool test_31 = temp_29.readProperty_clonable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      temp_30 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 316)) ;
    }else if (GalgasBool::boolFalse == test_31) {
      temp_30 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 316)) ;
    }
    test_28 = GGS_bool (ComparisonKind::equal, var_initializerMap_11083.getter_count (SOURCE_FILE ("declaration-type-class.galgas4", 316)).objectCompare (temp_30.getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 316)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      var_features_11126.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas4", 317)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 317)) ;
      {
      const GGS_classDeclarationAST temp_32 = this ;
      var_initializerMap_11083.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_synthetizedInitializerArgumentList_9153, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 319)), temp_32.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_synthetizedInitializerArgumentList_9153, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 318)) ;
      }
    }
  }
  {
  const GGS_classDeclarationAST temp_33 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_33.readProperty_mClassTypeName (), var_features_11126, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 323)) ;
  }
  const GGS_classDeclarationAST temp_34 = this ;
  const GGS_classDeclarationAST temp_35 = this ;
  const GGS_classDeclarationAST temp_36 = this ;
  const GGS_classDeclarationAST temp_37 = this ;
  const GGS_classDeclarationAST temp_38 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12616 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_34.readProperty_mClassTypeName (), temp_35.readProperty_isPredefined (), temp_36.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 334)), temp_37.readProperty_mIsFinal (), var_superClassType_6570, GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("declaration-type-class.galgas4", 337)), GGS_bool (false), var_allTypedAttributeList_10404, var_attributeMap_6495, var_currentClassTypedPropertyList_10343, var_initializerMap_11083, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6338, var_setterMap_6367, var_instanceMethodMap_6404, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 348)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_11126, var_generateHeaderInSeparateFile_6599, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 354)), GGS_string ("class-").add_operation (temp_38.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-class.galgas4", 355)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 355)), GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("declaration-type-class.galgas4", 356)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12616.readProperty_typeName (), var_typeDefinition_12616, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 358)) ;
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
  GGS_lstring var_classTypeNameForUsefulness_14293 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 371)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_14293, var_classTypeNameForUsefulness_14293, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 372)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_classDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_classTypeNameForUsefulness_14293  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 374)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_classDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_classDeclarationAST temp_5 = this ;
      GGS_lstring var_superClassNameForUsefulness_14625 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 377)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_14293, var_superClassNameForUsefulness_14625 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 378)) ;
      }
    }
  }
  const GGS_classDeclarationAST temp_6 = this ;
  GGS_lstring var_weakRefTypeNameForUsefulness_14833 = function_typeNameForUsefulEntitiesGraph (function_makeWeakTypeLName (temp_6.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 380)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 380)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_14293, var_weakRefTypeNameForUsefulness_14833 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 381)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_classDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_weakRefTypeNameForUsefulness_14833  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 383)) ;
    }
  }
  const GGS_classDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_selfType_15196 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 386)) ;
  const GGS_classDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry temp_11 ;
  const GalgasBool test_12 = GGS_bool (ComparisonKind::equal, temp_10.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_12) {
    temp_11 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 389)) ;
  }else if (GalgasBool::boolFalse == test_12) {
    const GGS_classDeclarationAST temp_13 = this ;
    temp_11 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_13.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 390)) ;
  }
  GGS_unifiedTypeMapEntry var_superClassEntry_15313 = temp_11 ;
  GGS__5B_typedProperty_5D_ var_allAttributeList_15678 ;
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::equal, var_superClassEntry_15313.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 396)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      var_allAttributeList_15678 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_14) {
    var_allAttributeList_15678 = extensionGetter_definition (var_superClassEntry_15313, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 399)).readProperty_allTypedPropertyList () ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_classDeclarationAST temp_16 = this ;
      test_15 = temp_16.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        const GGS_classDeclarationAST temp_17 = this ;
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (temp_17.readProperty_mClassTypeName ().readProperty_location (), GGS_string ("a class that has a super class does not accept any feature"), fixItArray18  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 401)) ;
      }
    }
  }
  GGS__5B_typedProperty_5D_ var_synthetizedInheritedInitializerArgumentList_16026 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_16096 (var_allAttributeList_15678) ;
  while (enumerator_16096.hasCurrentObject ()) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::equal, enumerator_16096.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 406)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        var_synthetizedInheritedInitializerArgumentList_16026.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (enumerator_16096.current (HERE).readProperty_typeEntry (), enumerator_16096.current (HERE).readProperty_name (), enumerator_16096.current (HERE).readProperty_initialization (), enumerator_16096.current (HERE).readProperty_hasSetter (), enumerator_16096.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 407)) ;
      }
    }
    enumerator_16096.gotoNextObject () ;
  }
  GGS__5B_typedProperty_5D_ var_typedAttributeList_16470 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_16521 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_classDeclarationAST temp_20 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_16565 (temp_20.readProperty_mPropertyList ()) ;
  while (enumerator_16565.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_16592 = function_typeNameForUsefulEntitiesGraph (enumerator_16565.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 419)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_14293, var_propertyTypeNameForUsefulness_16592 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 420)) ;
    }
    GGS_unifiedTypeMapEntry var_t_16795 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16565.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 421)) ;
    var_typedAttributeList_16470.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_16795, enumerator_16565.current (HERE).readProperty_name (), enumerator_16565.current (HERE).readProperty_initialization (), enumerator_16565.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 426)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 426)), enumerator_16565.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 422)) ;
    var_allAttributeList_15678.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_16795, enumerator_16565.current (HERE).readProperty_name (), enumerator_16565.current (HERE).readProperty_initialization (), enumerator_16565.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 432)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 432)), enumerator_16565.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 428)) ;
    {
    var_attributeMap_16521.setter_insertKey (enumerator_16565.current (HERE).readProperty_name (), var_t_16795, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 434)) ;
    }
    enumerator_16565.gotoNextObject () ;
  }
  GGS__5B_typedProperty_5D_ var_synthetizedInitialzerArgumentList_17387 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_17467 (extensionGetter_definition (var_selfType_15196, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 438)).readProperty_allTypedPropertyList ()) ;
  while (enumerator_17467.hasCurrentObject ()) {
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::equal, enumerator_17467.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 439)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        var_synthetizedInitialzerArgumentList_17387.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (enumerator_17467.current (HERE).readProperty_typeEntry (), enumerator_17467.current (HERE).readProperty_name (), enumerator_17467.current (HERE).readProperty_initialization (), enumerator_17467.current (HERE).readProperty_hasSetter (), enumerator_17467.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 440)) ;
      }
    }
    enumerator_17467.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_17967 ;
  GGS_string var_initializationCode_18004 ;
  const GGS_classDeclarationAST temp_22 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_22.readProperty_mPropertyList (), var_classTypeNameForUsefulness_14293, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_17967, var_initializationCode_18004, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 448)) ;
  GGS_bool var_constructorNeedsCompilerVar_18047 = var_unusedVariableCppNameSet_17967.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 458)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 458)) ;
  const GGS_classDeclarationAST temp_23 = this ;
  const GGS_classDeclarationAST temp_24 = this ;
  const GGS_classDeclarationAST temp_25 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_classTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21__21_ (GGS_string ("class ").add_operation (temp_23.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 460)), var_selfType_15196, temp_24.readProperty_mIsAbstract (), var_superClassEntry_15313, var_allAttributeList_15678, var_typedAttributeList_16470, extensionGetter_definition (var_selfType_15196, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 466)).readProperty_generateHeaderInSeparateFile (), var_constructorNeedsCompilerVar_18047, var_initializationCode_18004, var_synthetizedInitialzerArgumentList_17387, var_synthetizedInheritedInitializerArgumentList_16026, extensionGetter_definition (var_selfType_15196, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 471)).readProperty_initializerMap (), temp_25.readProperty_clonable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 459)) ;
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = extensionGetter_definition (var_selfType_15196, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 475)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas4", 475)) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 475)).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      const GGS_classDeclarationAST temp_27 = this ;
      GGS_lstring var_initializerForUsefulness_18781 = function_initializerNameForUsefulEntitiesGraph (temp_27.readProperty_mClassTypeName (), extensionGetter_initializerSignature (var_synthetizedInitialzerArgumentList_17387, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 478)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 476)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_18781, var_initializerForUsefulness_18781, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 480)) ;
      }
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_classDeclarationAST temp_29 = this ;
        test_28 = temp_29.readProperty_isPredefined ().boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerForUsefulness_18781  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 482)) ;
          {
          ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_18781, var_classTypeNameForUsefulness_14293 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 483)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_28) {
        GalgasBool test_30 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_30) {
          const GGS_classDeclarationAST temp_31 = this ;
          test_30 = temp_31.readProperty_mIsAbstract ().boolEnum () ;
          if (GalgasBool::boolTrue == test_30) {
            ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerForUsefulness_18781  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 485)) ;
          }
        }
        if (GalgasBool::boolFalse == test_30) {
          {
          ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_18781, var_classTypeNameForUsefulness_14293 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 487)) ;
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
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 517)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 517)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 518)) ;
    }
  }
  const GGS_classTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20883 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 520)) ;
  const GGS_classTypeForGeneration temp_4 = this ;
  const GGS_classTypeForGeneration temp_5 = this ;
  GGS_string temp_6 ;
  const GalgasBool test_7 = temp_5.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 524)).boolEnum () ;
  if (GalgasBool::boolTrue == test_7) {
    temp_6 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_7) {
    const GGS_classTypeForGeneration temp_8 = this ;
    temp_6 = extensionGetter_identifierRepresentation (temp_8.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 524)) ;
  }
  const GGS_classTypeForGeneration temp_9 = this ;
  const GGS_classTypeForGeneration temp_10 = this ;
  outArgument_outHeader = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_31_ (var_selfTypeDefinition_20883.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 523)), temp_6, temp_9.readProperty_mIsAbstract (), temp_10.readProperty_mCurrentTypedAttributeList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 521)) ;
  const GGS_classTypeForGeneration temp_11 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_20883.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_11.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 530)), var_selfTypeDefinition_20883.readProperty_isConcrete (), var_selfTypeDefinition_20883.readProperty_initializerMap (), var_selfTypeDefinition_20883.readProperty_classFunctionMap (), var_selfTypeDefinition_20883.readProperty_getterMap (), var_selfTypeDefinition_20883.readProperty_setterMap (), var_selfTypeDefinition_20883.readProperty_instanceMethodMap (), var_selfTypeDefinition_20883.readProperty_classMethodMap (), var_selfTypeDefinition_20883.readProperty_readSubscriptMap (), var_selfTypeDefinition_20883.readProperty_writeSubscriptMap (), var_selfTypeDefinition_20883.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20883.readProperty_features (), var_selfTypeDefinition_20883.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20883.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 528)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 528)) ;
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
  UpEnumerator__5B_typedProperty_5D_ enumerator_22299 (temp_0.readProperty_mCurrentTypedAttributeList ()) ;
  while (enumerator_22299.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_22299.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 553)) ;
    enumerator_22299.gotoNextObject () ;
  }
  const GGS_classTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_22407 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 555)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_classTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_generateHeaderInSeparateFile ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_classTypeForGeneration temp_4 = this ;
      const GGS_classTypeForGeneration temp_5 = this ;
      GGS_string temp_6 ;
      const GalgasBool test_7 = temp_5.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 560)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        temp_6 = GGS_string::makeEmptyString () ;
      }else if (GalgasBool::boolFalse == test_7) {
        const GGS_classTypeForGeneration temp_8 = this ;
        temp_6 = extensionGetter_identifierRepresentation (temp_8.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 560)) ;
      }
      const GGS_classTypeForGeneration temp_9 = this ;
      const GGS_classTypeForGeneration temp_10 = this ;
      const GGS_classTypeForGeneration temp_11 = this ;
      const GGS_classTypeForGeneration temp_12 = this ;
      const GGS_classTypeForGeneration temp_13 = this ;
      const GGS_classTypeForGeneration temp_14 = this ;
      GGS_string var_part_31__22527 = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_31_ (var_selfTypeDefinition_22407.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 559)), temp_6, temp_9.readProperty_mCurrentTypedAttributeList (), temp_10.readProperty_mAllTypedAttributeList (), temp_11.readProperty_mIsAbstract (), extensionGetter_definition (temp_12.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 564)).readProperty_getterMap (), extensionGetter_definition (temp_13.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 565)).readProperty_instanceMethodMap (), temp_14.readProperty_initializerMap (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 557)) ;
      const GGS_classTypeForGeneration temp_15 = this ;
      const GGS_classTypeForGeneration temp_16 = this ;
      GGS_string temp_17 ;
      const GalgasBool test_18 = temp_16.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 571)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        temp_17 = GGS_string::makeEmptyString () ;
      }else if (GalgasBool::boolFalse == test_18) {
        const GGS_classTypeForGeneration temp_19 = this ;
        temp_17 = extensionGetter_identifierRepresentation (temp_19.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 571)) ;
      }
      const GGS_classTypeForGeneration temp_20 = this ;
      const GGS_classTypeForGeneration temp_21 = this ;
      const GGS_classTypeForGeneration temp_22 = this ;
      const GGS_classTypeForGeneration temp_23 = this ;
      GGS_string var_part_32__23074 = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_32_ (var_selfTypeDefinition_22407.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 570)), temp_17, temp_20.readProperty_mCurrentTypedAttributeList (), temp_21.readProperty_mAllTypedAttributeList (), temp_22.readProperty_mIsAbstract (), temp_23.readProperty_synthetizedInitializerArgumentList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 568)) ;
      const GGS_classTypeForGeneration temp_24 = this ;
      GGS_string var_headerFileName_23529 = GGS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 577)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 577)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 577)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GGS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 579)), var_headerFileName_23529, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_part_31__22527, GGS_string ("\n\n"), var_part_32__23074, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 578)) ;
      }
      outArgument_outHeader = GGS_string ("#include \"").add_operation (var_headerFileName_23529, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 589)).add_operation (GGS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 589)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_classTypeForGeneration temp_25 = this ;
    const GGS_classTypeForGeneration temp_26 = this ;
    GGS_string temp_27 ;
    const GalgasBool test_28 = temp_26.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 594)).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      temp_27 = GGS_string::makeEmptyString () ;
    }else if (GalgasBool::boolFalse == test_28) {
      const GGS_classTypeForGeneration temp_29 = this ;
      temp_27 = extensionGetter_identifierRepresentation (temp_29.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 594)) ;
    }
    const GGS_classTypeForGeneration temp_30 = this ;
    const GGS_classTypeForGeneration temp_31 = this ;
    const GGS_classTypeForGeneration temp_32 = this ;
    const GGS_classTypeForGeneration temp_33 = this ;
    const GGS_classTypeForGeneration temp_34 = this ;
    const GGS_classTypeForGeneration temp_35 = this ;
    outArgument_outHeader = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_31_ (var_selfTypeDefinition_22407.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_25.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 593)), temp_27, temp_30.readProperty_mCurrentTypedAttributeList (), temp_31.readProperty_mAllTypedAttributeList (), temp_32.readProperty_mIsAbstract (), extensionGetter_definition (temp_33.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 598)).readProperty_getterMap (), extensionGetter_definition (temp_34.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 599)).readProperty_instanceMethodMap (), temp_35.readProperty_initializerMap (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 591)) ;
    const GGS_classTypeForGeneration temp_36 = this ;
    const GGS_classTypeForGeneration temp_37 = this ;
    GGS_string temp_38 ;
    const GalgasBool test_39 = temp_37.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 605)).boolEnum () ;
    if (GalgasBool::boolTrue == test_39) {
      temp_38 = GGS_string::makeEmptyString () ;
    }else if (GalgasBool::boolFalse == test_39) {
      const GGS_classTypeForGeneration temp_40 = this ;
      temp_38 = extensionGetter_identifierRepresentation (temp_40.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 605)) ;
    }
    const GGS_classTypeForGeneration temp_41 = this ;
    const GGS_classTypeForGeneration temp_42 = this ;
    const GGS_classTypeForGeneration temp_43 = this ;
    const GGS_classTypeForGeneration temp_44 = this ;
    outArgument_outHeader.plusAssignOperation(GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_32_ (var_selfTypeDefinition_22407.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_36.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 604)), temp_38, temp_41.readProperty_mCurrentTypedAttributeList (), temp_42.readProperty_mAllTypedAttributeList (), temp_43.readProperty_mIsAbstract (), temp_44.readProperty_synthetizedInitializerArgumentList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 602)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 602)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 619)) ;
  const GGS_classTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_25469 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 620)) ;
  const GGS_classTypeForGeneration temp_2 = this ;
  const GGS_classTypeForGeneration temp_3 = this ;
  const GGS_classTypeForGeneration temp_4 = this ;
  GGS__5B_typedProperty_5D_ var_at_25687 = temp_2.readProperty_mAllTypedAttributeList ().getter_sublist (GGS_u_33__32_ (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_count (SOURCE_FILE ("declaration-type-class.galgas4", 626)).subtract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_count (SOURCE_FILE ("declaration-type-class.galgas4", 626)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 626)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 624)) ;
  const GGS_classTypeForGeneration temp_5 = this ;
  const GGS_classTypeForGeneration temp_6 = this ;
  GGS_string temp_7 ;
  const GalgasBool test_8 = temp_6.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 631)).boolEnum () ;
  if (GalgasBool::boolTrue == test_8) {
    temp_7 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_8) {
    const GGS_classTypeForGeneration temp_9 = this ;
    temp_7 = extensionGetter_identifierRepresentation (temp_9.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 631)) ;
  }
  const GGS_classTypeForGeneration temp_10 = this ;
  const GGS_classTypeForGeneration temp_11 = this ;
  const GGS_classTypeForGeneration temp_12 = this ;
  const GGS_classTypeForGeneration temp_13 = this ;
  const GGS_classTypeForGeneration temp_14 = this ;
  const GGS_classTypeForGeneration temp_15 = this ;
  const GGS_classTypeForGeneration temp_16 = this ;
  const GGS_classTypeForGeneration temp_17 = this ;
  outArgument_outImplementation = GGS_classGenerationTemplate::class_func_referenceClassTypeSpecificImplementation (var_selfTypeDefinition_25469.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 630)), temp_7, temp_10.readProperty_mCurrentTypedAttributeList (), temp_11.readProperty_mAllTypedAttributeList (), var_at_25687, temp_12.readProperty_mIsAbstract (), temp_13.readProperty_initializerNeedsCompilerVariable (), temp_14.readProperty_propertyInitializationCode (), var_selfTypeDefinition_25469.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas4", 638)) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 638)), temp_15.readProperty_synthetizedInitializerArgumentList (), temp_16.readProperty_inheritedSynthetizedInitializerArgumentList (), var_selfTypeDefinition_25469.readProperty_initializerMap (), temp_17.readProperty_clonable (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 628)) ;
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
  GGS_bool var_generateMethodDeclaration_27228 = GGS_bool (true) ;
  GGS_string var_suffix_27267 = GGS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GGS_methodQualifier::Enumeration::invalid:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract:
    {
      var_suffix_27267 = GGS_string (" = 0") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtual:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isBasic:
  case GGS_methodQualifier::Enumeration::enum_isBasicFinal:
    {
      var_generateMethodDeclaration_27228 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isInherited:
    {
      var_generateMethodDeclaration_27228 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding:
    {
      var_suffix_27267 = GGS_string (" override") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract:
    {
      var_suffix_27267 = GGS_string (" override = 0") ;
    }
    break ;
  }
  result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_27228.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result = GGS_string ("//--- Extension func ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 676)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 676)) ;
      result.plusAssignOperation(GGS_string ("  public: virtual class GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 677)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 677)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 677)) ;
      result.plusAssignOperation(GGS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-class.galgas4", 678)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 678)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 678)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 678)) ;
      GGS_bool var_first_27915 = GGS_bool (true) ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_27954 (constinArgument_inArgumentTypeList) ;
      while (enumerator_27954.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_first_27915.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_first_27915 = GGS_bool (false) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 685)) ;
        }
        result.plusAssignOperation(GGS_string ("const class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27954.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 687)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 687)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 687)) ;
        result.plusAssignOperation(GGS_string (" ").add_operation (enumerator_27954.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 688)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 688)) ;
        enumerator_27954.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_first_27915.operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 691)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 692)) ;
            }
          }
          result.plusAssignOperation(GGS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 694)) ;
          var_first_27915 = GGS_bool (false) ;
        }
      }
      GGS_string temp_4 ;
      const GalgasBool test_5 = var_first_27915.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        temp_4 = GGS_string ("LOCATION_ARGS") ;
      }else if (GalgasBool::boolFalse == test_5) {
        temp_4 = GGS_string (" COMMA_LOCATION_ARGS") ;
      }
      result.plusAssignOperation(temp_4.add_operation (GGS_string (") const"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 697)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 697)) ;
      result.plusAssignOperation(var_suffix_27267.add_operation (GGS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 698)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 698)) ;
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
  GGS_bool var_generateMethodDeclaration_28985 = GGS_bool (true) ;
  GGS_string var_suffix_29024 = GGS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GGS_methodQualifier::Enumeration::invalid:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract:
    {
      var_suffix_29024 = GGS_string (" = 0") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtual:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isBasic:
  case GGS_methodQualifier::Enumeration::enum_isBasicFinal:
    {
      var_generateMethodDeclaration_28985 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isInherited:
    {
      var_generateMethodDeclaration_28985 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding:
    {
      var_suffix_29024 = GGS_string (" override") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract:
    {
      var_suffix_29024 = GGS_string (" override = 0") ;
    }
    break ;
  }
  result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_28985.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result.plusAssignOperation(GGS_string ("//--- Extension proc ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 727)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 727)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 727)) ;
      result.plusAssignOperation(GGS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-class.galgas4", 728)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 728)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 728)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 728)) ;
      GGS_bool var_first_29608 = GGS_bool (true) ;
      UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_29647 (constinArgument_inArgumentTypeList) ;
      while (enumerator_29647.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_first_29608.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_first_29608 = GGS_bool (false) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 735)) ;
        }
        switch (enumerator_29647.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            result.plusAssignOperation(GGS_string ("const class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29647.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 739)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 739)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 739)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
          {
            result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29647.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 741)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 741)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 741)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 741)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          {
            result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29647.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 743)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 743)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 743)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 743)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29647.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 745)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 745)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 745)) ;
          }
          break ;
        }
        result.plusAssignOperation(GGS_string (" arg_").add_operation (enumerator_29647.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 747)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 747)) ;
        enumerator_29647.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_first_29608.operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 750)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 751)) ;
            }
          }
          result.plusAssignOperation(GGS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 753)) ;
          var_first_29608 = GGS_bool (false) ;
        }
      }
      GGS_string temp_4 ;
      const GalgasBool test_5 = var_first_29608.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        temp_4 = GGS_string ("LOCATION_ARGS") ;
      }else if (GalgasBool::boolFalse == test_5) {
        temp_4 = GGS_string (" COMMA_LOCATION_ARGS") ;
      }
      result.plusAssignOperation(temp_4.add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 756)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 756)) ;
      result.plusAssignOperation(var_suffix_29024.add_operation (GGS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 757)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 757)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                    GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                    GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                    GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                    GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                    GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationAST temp_0 = this ;
  const GGS_externTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_9587 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 244)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_9587, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 245)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@externTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_externTypeDeclarationAST temp_0 = this ;
  result = GGS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 251)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                              const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                              const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                              const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                              const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_getterMap var_getterMap_10636 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_10636, inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 265)) ;
  }
  GGS_setterMap var_setterMap_10718 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_10761 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_10830 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GGS_externTypeDeclarationAST temp_0 = this ;
  UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ enumerator_10879 (temp_0.readProperty_externTypeInitializerList ()) ;
  while (enumerator_10879.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ var_arguments_11039 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_typeNameFormalParameterName_5D_ enumerator_11078 (enumerator_10879.current (HERE)) ;
    while (enumerator_11078.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_11165 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11078.current (HERE).readProperty_mFormalParameterTypeName (), var_argumentTypeEntry_11165, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 276)) ;
      }
      var_arguments_11039.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_11078.current (HERE).readProperty_mFormalSelector (), var_argumentTypeEntry_11165, enumerator_11078.current (HERE).readProperty_mFormalParameterName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 277)) ;
      enumerator_11078.gotoNextObject () ;
    }
    const GGS_externTypeDeclarationAST temp_1 = this ;
    GGS_lstring var_initializerName_11329 = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_10879.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 280)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    var_initializerMap_10830.setter_insertKey (var_initializerName_11329, var_arguments_11039, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 281)) ;
    }
    enumerator_10879.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_2 = this ;
  UpEnumerator__5B_externTypeGetter_5D_ enumerator_11523 (temp_2.readProperty_mExternTypeGetterList ()) ;
  while (enumerator_11523.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_returnedTypeEntry_11607 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11523.current (HERE).readProperty_mResultTypeName (), var_returnedTypeEntry_11607, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 285)) ;
    }
    GGS__5B_functionSignatureElement_5D_ var_arguments_11674 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_typeNameFormalParameterName_5D_ enumerator_11721 (enumerator_11523.current (HERE).readProperty_mParameterList ()) ;
    while (enumerator_11721.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_11811 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11721.current (HERE).readProperty_mFormalParameterTypeName (), var_argumentTypeEntry_11811, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 289)) ;
      }
      var_arguments_11674.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_11721.current (HERE).readProperty_mFormalSelector (), var_argumentTypeEntry_11811, enumerator_11721.current (HERE).readProperty_mFormalParameterName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 290)) ;
      enumerator_11721.gotoNextObject () ;
    }
    {
    var_getterMap_10636.setter_insertKey (enumerator_11523.current (HERE).readProperty_mGetterName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 295)), var_arguments_11674, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 297)), GGS_bool (true), var_returnedTypeEntry_11607, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 300)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 293)) ;
    }
    enumerator_11523.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator__5B_externTypeSetter_5D_ enumerator_12338 (temp_3.readProperty_mExternTypeSetterList ()) ;
  while (enumerator_12338.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_12408 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalParameterAST_5D_ enumerator_12462 (enumerator_12338.current (HERE).readProperty_mFormalParameterList ()) ;
    while (enumerator_12462.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_12599 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12462.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_12599, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 308)) ;
      }
      var_routineSignature_12408.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_12462.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_12599, enumerator_12462.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_12462.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 312)) ;
      enumerator_12462.gotoNextObject () ;
    }
    {
    var_setterMap_10718.setter_insertKey (enumerator_12338.current (HERE).readProperty_mSetterName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 317)), var_routineSignature_12408, GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 320)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 315)) ;
    }
    enumerator_12338.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_4 = this ;
  UpEnumerator__5B_externTypeMethod_5D_ enumerator_13099 (temp_4.readProperty_mExternTypeMethodList ()) ;
  while (enumerator_13099.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_13134 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalParameterAST_5D_ enumerator_13222 (enumerator_13099.current (HERE).readProperty_mFormalParameterList ()) ;
    while (enumerator_13222.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_13338 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13222.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_13338, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 328)) ;
      }
      var_routineSignature_13134.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_13222.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_13338, enumerator_13222.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_13222.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 332)) ;
      enumerator_13222.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_10761.setter_insertKey (enumerator_13099.current (HERE).readProperty_mMethodName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 337)), var_routineSignature_13134, enumerator_13099.current (HERE).readProperty_mDeclarationLocation (), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 341)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 335)) ;
    }
    enumerator_13099.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_13852 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_mExternTypeName (), var_features_13852, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 346)) ;
  }
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_14107 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_mExternTypeName (), temp_7.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 359)), GGS_typeKindEnum::class_func_externType (SOURCE_FILE ("declaration-type-extern.galgas4", 360)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_10830, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_10636, var_setterMap_10718, var_instanceMethodMap_10761, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 371)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_13852, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 377)), GGS_string ("externtype-").add_operation (temp_8.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-extern.galgas4", 378)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 378)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-extern.galgas4", 379)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14107.readProperty_typeName (), var_typeDefinition_14107, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 381)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                             const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                             GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_15881 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 402)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15881, var_nameForUsefulness_15881, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 403)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externTypeDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_15881  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 405)) ;
    }
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ enumerator_16159 (temp_3.readProperty_externTypeInitializerList ()) ;
  while (enumerator_16159.hasCurrentObject ()) {
    const GGS_externTypeDeclarationAST temp_4 = this ;
    GGS_lstring var_initializerNameForUsefulness_16196 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mExternTypeName (), extensionGetter_initializerSignature (enumerator_16159.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 411)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 409)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_16196, var_initializerNameForUsefulness_16196, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 413)) ;
    }
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_16196, var_nameForUsefulness_15881 COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 414)) ;
    }
    enumerator_16159.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_5 = this ;
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  const GGS_externTypeDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_externTypeDeclarationForGeneration::init_21_infoMessage_21__21__21__21_ (GGS_string ("extern type ").add_operation (temp_5.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 418)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_6.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 419)), temp_7.readProperty_mExternTypeName ().readProperty_string (), temp_8.readProperty_mCppPreDeclarationCode (), temp_9.readProperty_mCppClassCode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 417)) ;
}

