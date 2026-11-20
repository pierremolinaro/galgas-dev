#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-20.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@sintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_sintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 30))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@sintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_sintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 43)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sintPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("min"), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sintPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
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
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 94)) ;
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
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 141)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 148)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 155)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 162)) ;
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
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 87)) ;
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
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 115)) ;
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
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_s_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 167))) ;
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
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Length"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf32CharConstantRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 52)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 59)) ;
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
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeCharacterWithUnsigned"), GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 199)) ;
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
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 220))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@uintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_uintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 30))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@uintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_uintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 42)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@uintPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("random"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 57)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("valueWithMask"), GGS_string ("uint"), GGS_string ("inLowerIndex"), GGS_string ("uint"), GGS_string ("inUpperIndex"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 64)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@uintPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
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
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 89)) ;
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
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lsbIndex"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 117)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantBitCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 124)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("oneBitCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 131)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 138)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 145)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 152)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 163)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeValueAssigned"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 170)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 184)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 191)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 198)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 205)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@uintPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_classMethodMap & outArgument_outClassMethodMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setRandomSeed"), GGS_string ("uint"), GGS_string ("inSeed"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 219)) ;
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
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 36))) ;
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
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 49)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 56)) ;
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
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_f_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 196))) ;
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
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_package (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 36))) ;
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
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compilationMode"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("errorCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 57)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("warningCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 64)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("system"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 71)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("projectVersionString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 78)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("galgasVersionString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 85)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("commandLineArgumentCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 92)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("commandLineArgumentAtIndex"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 99)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionNameList"), GGS_string ("[stringString]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 109)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionInvocationCharacter"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 116)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionInvocationString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 127)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionCommentString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 138)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionValue"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 149)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionNameList"), GGS_string ("[stringString]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 161)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionInvocationCharacter"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 168)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionInvocationString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 179)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionCommentString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 190)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionValue"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 201)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionNameList"), GGS_string ("[stringString]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 213)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionInvocationCharacter"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 220)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionInvocationString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 231)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionCommentString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 242)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionValue"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 253)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("keywordIdentifierSet"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 265)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("keywordListForIdentifier"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 272)) ;
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
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("exit"), GGS_string ("uint"), GGS_string ("inErrorCode"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 288)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setBoolOptionValue"), GGS_string ("string"), GGS_string ("inDomain"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("bool"), GGS_string ("inValue"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 296)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setUIntOptionValue"), GGS_string ("string"), GGS_string ("inDomain"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("uint"), GGS_string ("inValue"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 308)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setStringOptionValue"), GGS_string ("string"), GGS_string ("inDomain"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("string"), GGS_string ("inValue"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 320)) ;
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
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 37))) ;
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
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 73)) ;
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
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 113)) ;
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
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendUIntBE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 158)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendUIntLE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 166)) ;
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
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 195))) ;
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
  result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 49))) ;
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
  GGS_unifiedTypeMapEntry var_stringType_4426 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_4426, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 107)) ;
  }
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_0 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)) ;
  temp_0.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)), var_stringType_4426, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)), GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)) ;
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
  GGS_unifiedTypeMapEntry var_stringTypeIndex_5312 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringTypeIndex_5312, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 132)) ;
  }
  outArgument_outEnumerationList = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_stringTypeIndex_5312, GGS_string ("key"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 134)) ;
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
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 150)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("anyString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 157)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringArray"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 164)) ;
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
                                                                                        const GGS__5B_string_5D_ & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                        const GGS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                        const GGS__5B_programRuleAST_5D_ & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                        const GGS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#include \"project_header.h\"\n#include \"F_mainForLIBPM.h\"\n#include \"analyzeCommandLineOptions.h\"\n#include \"builtin-command-line-options.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"LexiqueIntrospection.h\"\n#include \"F_DisplayException.h\"\n") ;
  GGS_uint index_279_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_279 (in_IMPORTED_5F_COMPONENT_5F_LIST) ;
    while (enumerator_279.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_279.current_entry (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      enumerator_279.gotoNextObject () ;
      index_279_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                      print_tool_help_message                                                  \n//--------------------------------------------------------------------------------------------------\n\nstatic void print_tool_help_message (void) {\n  gCout.appendCString (\"Compiled with GALGAS revision NUMERO_REVISION_GALGAS\\n\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic const char * kSourceFileExtensions [] = {\n") ;
  GGS_uint index_938_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator__5B_programRuleAST_5D_ enumerator_938 (in_PROGRAM_5F_RULE_5F_LIST) ;
    while (enumerator_938.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_938.current_entry (HERE).readProperty_mSourceFileExtension ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_938.gotoNextObject () ;
      index_938_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;    \n\n//--------------------------------------------------------------------------------------------------\n\nstatic const char * kSourceFileHelpMessages [] = {\n") ;
  GGS_uint index_1231_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator__5B_programRuleAST_5D_ enumerator_1231 (in_PROGRAM_5F_RULE_5F_LIST) ;
    while (enumerator_1231.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1231.current_entry (HERE).readProperty_mSourceFileHelp ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 34)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_1231.gotoNextObject () ;
      index_1231_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;    \n\n//--------------------------------------------------------------------------------------------------\n\nconst char * projectVersionString (void) {\n  return ") ;
  result.appendString (in_PROJECT_5F_VERSION_5F_STRING.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString (" ;\n}\n\n") ;
  result.appendString (in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING.stringValue ()) ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                      M A I N    F O R    L I B P M                                            \n//\n//--------------------------------------------------------------------------------------------------\n\nint mainForLIBPM (int inArgc, const char * inArgv []) {\n//--- Analyze Command Line Options\n  GenericUniqueArray <String> sourceFilesArray ;\n  analyzeCommandLineOptions (inArgc, inArgv,\n                             sourceFilesArray,\n                             kSourceFileExtensions,\n                             kSourceFileHelpMessages,\n                             print_tool_help_message) ;\n//---\n  int returnCode = 0 ; // No error\n//--- Set Execution mode\n  String executionModeOptionErrorMessage ;\n  setExecutionMode (executionModeOptionErrorMessage) ;\n  if (executionModeOptionErrorMessage.length () > 0) {\n    gCout.appendString (executionModeOptionErrorMessage) ;\n    returnCode = 1 ;\n  }else{\n  //--- Common lexique object\n    Compiler * commonCompiler = nullptr ;\n    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;\n    try{\n      routine_before (commonCompiler COMMA_HERE) ;\n      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;\n      const bool verboseOptionOn = true ;\n      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {\n        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;\n        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;\n        const GGS_location location = commonCompiler->here () ;\n        const GGS_lstring sourceFilePath (sfp, location) ;\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_PROGRAM_5F_RULE_5F_LIST.getter_count (SOURCE_FILE ("program-file.cpp.galgasTemplate", 81)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("        int r = 0 ;\n        ") ;
    GGS_uint index_3401_IDX (0) ;
    if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
      UpEnumerator__5B_programRuleAST_5D_ enumerator_3401 (in_PROGRAM_5F_RULE_5F_LIST) ;
      while (enumerator_3401.hasCurrentObject ()) {
        result.appendString ("if (fileExtension == ") ;
        result.appendString (enumerator_3401.current_entry (HERE).readProperty_mSourceFileExtension ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 86)).stringValue ()) ;
        result.appendString (") {\n") ;
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_3401.current_entry (HERE).readProperty_mReferenceGrammar ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("          switch (executionMode ()) {\n          case kExecutionModeNormal :\n            routine_") ;
          result.appendString (GGS_string ("programRule_").add_operation (index_3401_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 90)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 90)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 90)).stringValue ()) ;
          result.appendString (" (sourceFilePath, commonCompiler COMMA_HERE) ;\n            break ;\n          case kExecutionModeLexicalAnalysisOnly :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=lexical-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeSyntaxAnalysisOnly :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=syntax-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeIndexing :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=indexing\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeLatex :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=latex\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          }\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("          switch (executionMode ()) {\n          case kExecutionModeNormal :\n            routine_") ;
          result.appendString (GGS_string ("programRule_").add_operation (index_3401_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 108)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 108)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 108)).stringValue ()) ;
          result.appendString (" (sourceFilePath, commonCompiler COMMA_HERE) ;\n            break ;\n          case kExecutionModeLexicalAnalysisOnly :\n            cGrammar_") ;
          result.appendString (enumerator_3401.current_entry (HERE).readProperty_mReferenceGrammar ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 111)).stringValue ()) ;
          result.appendString ("::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeSyntaxAnalysisOnly :\n            cGrammar_") ;
          result.appendString (enumerator_3401.current_entry (HERE).readProperty_mReferenceGrammar ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 114)).stringValue ()) ;
          result.appendString ("::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeIndexing :\n            cGrammar_") ;
          result.appendString (enumerator_3401.current_entry (HERE).readProperty_mReferenceGrammar ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 117)).stringValue ()) ;
          result.appendString ("::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeLatex :\n            cGrammar_") ;
          result.appendString (enumerator_3401.current_entry (HERE).readProperty_mReferenceGrammar ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 120)).stringValue ()) ;
          result.appendString ("::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          }\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_3401.gotoNextObject () ;
        if (enumerator_3401.hasCurrentObject ()) {
          result.appendString ("        }else ") ;
        }
        index_3401_IDX.increment () ;
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
                                                                    const GGS__5B_prologueEpilogueAST_5D_ constinArgument_inPrologueList,
                                                                    GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_usefulnessName_2542 = function_beforeNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 53)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 53)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_2542, var_usefulnessName_2542, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 54)) ;
  }
  ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_2542  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 55)) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_2751 = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_prologueEpilogueAST_5D_ enumerator_2847 (constinArgument_inPrologueList) ;
  while (enumerator_2847.hasCurrentObject ()) {
    GGS__5B_semanticInstructionForGeneration_5D_ var_blockSemanticInstructionListForGeneration_3172 ;
    {
    GGS__5B_formalParameterForGeneration_5D_ joker_3221 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_2542, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_HERE), enumerator_2847.current (HERE).readProperty_mInstructionList (), enumerator_2847.current (HERE).readProperty_mEndOfInstructionList (), var_blockSemanticInstructionListForGeneration_3172, joker_3221, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 59)) ;
    }
    var_semanticInstructionListForGeneration_2751.plusPlusAssignOperation (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_3172, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 70)) ;
    enumerator_2847.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-before"), GGS_string ("before"), GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_2751, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 75)) ;
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
  GGS_uint var_ruleIndex_4371 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator__5B_programRuleAST_5D_ enumerator_4406 (constinArgument_inProgramRules) ;
  while (enumerator_4406.hasCurrentObject ()) {
    GGS_lstring var_usefulnessName_4432 = function_rootRuleNameForUsefulEntitiesGraph (enumerator_4406.current (HERE).readProperty_mSourceFileExtension (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 102)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_4432, var_usefulnessName_4432, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 103)) ;
    }
    ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_4432  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 104)) ;
    GGS__5B_formalParameterAST_5D_ temp_0 = GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 106)) ;
    temp_0.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("programComponentCompilation.galgas4", 106)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("programComponentCompilation.galgas4", 106)), GGS_lstring::init_21__21_ (GGS_string ("lstring"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 106)), inCompiler COMMA_HERE), enumerator_4406.current (HERE).readProperty_mSourceFileVariableName (), enumerator_4406.current (HERE).readProperty_mSourceFileVariableNameIsUnused (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 106)) ;
    GGS__5B_formalParameterAST_5D_ var_argumentList_4666 = temp_0 ;
    GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_5071 ;
    GGS__5B_formalParameterForGeneration_5D_ var_routineSignature_5120 ;
    {
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_4432, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_argumentList_4666, enumerator_4406.current (HERE).readProperty_mInstructionList (), enumerator_4406.current (HERE).readProperty_mEndOfInstructionList (), var_semanticInstructionListForGeneration_5071, var_routineSignature_5120, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 108)) ;
    }
    ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-programrule"), GGS_string ("programRule_").add_operation (var_ruleIndex_4371.getter_string (SOURCE_FILE ("programComponentCompilation.galgas4", 123)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 123)), var_routineSignature_5120, GGS_bool (true), var_semanticInstructionListForGeneration_5071, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 119)) ;
    var_ruleIndex_4371.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 128)) ;
    enumerator_4406.gotoNextObject () ;
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
  GGS_lstring var_usefulnessName_6165 = function_afterNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 146)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 146)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_6165, var_usefulnessName_6165, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 147)) ;
  }
  ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_6165  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 148)) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_6408 = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_prologueEpilogueAST_5D_ enumerator_6469 (constinArgument_inEpilogueList) ;
  while (enumerator_6469.hasCurrentObject ()) {
    GGS__5B_semanticInstructionForGeneration_5D_ var_blockSemanticInstructionListForGeneration_6794 ;
    {
    GGS__5B_formalParameterForGeneration_5D_ joker_6843 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_6165, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_HERE), enumerator_6469.current (HERE).readProperty_mInstructionList (), enumerator_6469.current (HERE).readProperty_mEndOfInstructionList (), var_blockSemanticInstructionListForGeneration_6794, joker_6843, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 152)) ;
    }
    var_semanticInstructionListForGeneration_6408.plusPlusAssignOperation (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_6794, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 163)) ;
    enumerator_6469.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-after"), GGS_string ("after"), GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_6408, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 166)) ;
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
  GGS_analysisContext var_analysisContext_8116 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, function_buildPredefinedTypes (ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 197)), GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("programComponentCompilation.galgas4", 199)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS__5B_semanticDeclarationForGeneration_5D_ var_decoratedDeclarationListForGeneration_8403 = GGS__5B_semanticDeclarationForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8116, ioArgument_ioTypeMap, constinArgument_inPrologueList, var_decoratedDeclarationListForGeneration_8403, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 204)) ;
  }
  {
  routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8116, ioArgument_ioTypeMap, constinArgument_inEpilogueList, var_decoratedDeclarationListForGeneration_8403, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 213)) ;
  }
  {
  routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8116, ioArgument_ioTypeMap, constinArgument_inProgramRules, var_decoratedDeclarationListForGeneration_8403, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 222)) ;
  }
  GGS_stringset var_inclusionSet_9161 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_beforeAfterRulesString_9186 = GGS_string::makeEmptyString () ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_9229 (var_decoratedDeclarationListForGeneration_8403) ;
  while (enumerator_9229.hasCurrentObject ()) {
    var_beforeAfterRulesString_9186.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_9229.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 234)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 234)) ;
    GGS_string var_code_9418 ;
    callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_9229.current (HERE).ptr (), ioArgument_ioTypeMap, var_inclusionSet_9161, var_code_9418, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 235)) ;
    var_beforeAfterRulesString_9186.plusAssignOperation(var_code_9418, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 236)) ;
    enumerator_9229.gotoNextObject () ;
  }
  UpEnumerator__5B_programRuleAST_5D_ enumerator_9483 (constinArgument_inProgramRules) ;
  while (enumerator_9483.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_9483.current (HERE).readProperty_mReferenceGrammar ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_inclusionSet_9161.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (enumerator_9483.current (HERE).readProperty_mReferenceGrammar ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("programComponentCompilation.galgas4", 240)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 240))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 240)) ;
      }
    }
    enumerator_9483.gotoNextObject () ;
  }
  GGS_string var_cppContents_9666 = GGS_string (filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (inCompiler, GGS_string ("program"), GGS__5B_string_5D_::init (inCompiler COMMA_HERE), var_beforeAfterRulesString_9186, constinArgument_inProgramRules, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 243))) ;
  outArgument_outProgramComponentForGeneration = GGS_programComponentForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21_ (GGS_string ("zprogram"), GGS_bool (false), GGS_string ("program"), var_inclusionSet_9161, var_cppContents_9666, inCompiler COMMA_HERE) ;
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
  GGS_sortedTokenArray var_tokenSortedList_8828 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_8819 ; // Joker input parameter
  GGS_bool joker_8845 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_8819, var_tokenSortedList_8828, joker_8845, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 196)) ;
  result = GGS_string::makeEmptyString () ;
  DownEnumerator_sortedTokenArray enumerator_8880 (var_tokenSortedList_8828) ;
  while (enumerator_8880.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 199)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 199)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 199)) ;
    result.plusAssignOperation(enumerator_8880.current (HERE).readProperty_mName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 200)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 200)) ;
    result.plusAssignOperation(GGS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 201)) ;
    result.plusAssignOperation(GGS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_8880.current (HERE).readProperty_mTerminalName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 202)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 202)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 202)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 202)) ;
    result.plusAssignOperation(GGS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 203)) ;
    result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 204)) ;
    enumerator_8880.gotoNextObject () ;
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
  result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 221)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 221)) ;
  result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 222)) ;
  {
  result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 223)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_10034 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_10034.hasCurrentObject ()) {
    result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10034.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 225)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 225)) ;
    enumerator_10034.gotoNextObject () ;
  }
  {
  result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 227)) ;
  }
  result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 228)) ;
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
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_10431 (temp_0.readProperty_mInstructionList ()) ;
  bool bool_1 = result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas4", 235)).isValidAndTrue () ;
  if (enumerator_10431.hasCurrentObject () && bool_1) {
    while (enumerator_10431.hasCurrentObject () && bool_1) {
      result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_10431.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 236)) ;
      enumerator_10431.gotoNextObject () ;
      if (enumerator_10431.hasCurrentObject ()) {
        bool_1 = result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas4", 235)).isValidAndTrue () ;
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
        test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 89)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_bigint var_bigIntValue_3917 = var_bigIntSource_3772.readProperty_mValue () ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_3917.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 91)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_3917.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 91)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 91)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_3917.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)) ;
            }
          }
          ioArgument_ioExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_3917.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 97)), inCompiler COMMA_HERE) ;
          var_handled_3747 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 100)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_bigint var_bigIntValue_4382 = var_bigIntSource_3772.readProperty_mValue () ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_4382.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 102)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_4382.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 102)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 102)).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GenericArray <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_4382.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)) ;
              }
            }
            ioArgument_ioExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4382.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 108)), inCompiler COMMA_HERE) ;
            var_handled_3747 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("u64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 111)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GGS_bigint var_bigIntValue_4855 = var_bigIntSource_3772.readProperty_mValue () ;
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_4855.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 113)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_4855.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 113)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 113)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  GenericArray <FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_4855.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)).add_operation (GGS_string (") does not fit in an @u64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)) ;
                }
              }
              ioArgument_ioExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4855.getter_u_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 119)), inCompiler COMMA_HERE) ;
              var_handled_3747 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("u8").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 122)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                GGS_bigint var_bigIntValue_5318 = var_bigIntSource_3772.readProperty_mValue () ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5318.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 124)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5318.objectCompare (GGS_bigint ("256", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 124)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 124)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    GenericArray <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5318.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)).add_operation (GGS_string (") does not fit in an @u8"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)) ;
                  }
                }
                ioArgument_ioExpression = GGS_literalU_38_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5318.getter_u_38_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 130)), inCompiler COMMA_HERE) ;
                var_handled_3747 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_15 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_15) {
                test_15 = GGS_bool (ComparisonKind::equal, GGS_string ("s64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 133)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_15) {
                  GGS_bigint var_bigIntValue_5770 = var_bigIntSource_3772.readProperty_mValue () ;
                  GalgasBool test_16 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_16) {
                    test_16 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5770.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 135)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5770.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 135)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 135)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_16) {
                      GenericArray <FixItDescription> fixItArray17 ;
                      inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5770.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)).add_operation (GGS_string (") does not fit in an @s64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)), fixItArray17  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)) ;
                    }
                  }
                  ioArgument_ioExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5770.getter_s_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 141)), inCompiler COMMA_HERE) ;
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
          GGS_unifiedTypeMapEntry var_targetUnwrappedType_6383 = var_targetTypeDef_3522.readProperty_unwrappedType () ;
          GGS_unifiedTypeMapEntry var_sourceUnwrappedType_6441 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 151)).readProperty_unwrappedType () ;
          var_handled_3747 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetUnwrappedType_6383, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 152)).objectCompare (extensionGetter_typeName (var_sourceUnwrappedType_6441, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 152)))) ;
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
        GGS_string var_targetUnwrappedTypeName_6727 = extensionGetter_typeName (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 156)).readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 156)) ;
        var_handled_3747 = GGS_bool (ComparisonKind::equal, var_targetUnwrappedTypeName_6727.objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 157)))) ;
        GGS_unifiedTypeMapEntry var_sourceType_6871 = constinArgument_inSourceType ;
        if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).isValid ()) {
          uint32_t variant_6901 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).uintValue () ;
          bool loop_6901 = true ;
          while (loop_6901) {
            loop_6901 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_and (extensionGetter_definition (var_sourceType_6871, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).isValid () ;
            if (loop_6901) {
              loop_6901 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_and (extensionGetter_definition (var_sourceType_6871, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).boolValue () ;
            }
            if (loop_6901 && (0 == variant_6901)) {
              loop_6901 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)) ;
            }
            if (loop_6901) {
              variant_6901 -= 1 ;
              var_sourceType_6871 = extensionGetter_definition (var_sourceType_6871, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 160)).readProperty_superType () ;
              var_handled_3747 = GGS_bool (ComparisonKind::equal, var_targetUnwrappedTypeName_6727.objectCompare (extensionGetter_typeName (var_sourceType_6871, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 161)))) ;
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
      GGS_unifiedTypeMapEntry var_sourceType_7177 = constinArgument_inSourceType ;
      GGS_bool var_ok_7211 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 167)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 167)))) ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).isValid ()) {
        uint32_t variant_7267 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).uintValue () ;
        bool loop_7267 = true ;
        while (loop_7267) {
          loop_7267 = var_ok_7211.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_and (extensionGetter_definition (var_sourceType_7177, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).isValid () ;
          if (loop_7267) {
            loop_7267 = var_ok_7211.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_and (extensionGetter_definition (var_sourceType_7177, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).boolValue () ;
          }
          if (loop_7267 && (0 == variant_7267)) {
            loop_7267 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)) ;
          }
          if (loop_7267) {
            variant_7267 -= 1 ;
            var_sourceType_7177 = extensionGetter_definition (var_sourceType_7177, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 169)).readProperty_superType () ;
            var_ok_7211 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_7177)) ;
          }
        }
      }
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = var_ok_7211.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 172)).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          const GGS_typeKindEnum_2E_weakReferenceType var_targetWeakRef_7465 = var_targetTypeDef_3522.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 172)).unwrappedValue () ;
          if (!var_targetTypeDef_3522.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 172)).isValuated ()) {
            test_21 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_21) {
            var_sourceType_7177 = constinArgument_inSourceType ;
            var_ok_7211 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_7465.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 174)).objectCompare (extensionGetter_typeName (var_sourceType_7177, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 174)))) ;
            if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).isValid ()) {
              uint32_t variant_7639 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).uintValue () ;
              bool loop_7639 = true ;
              while (loop_7639) {
                loop_7639 = var_ok_7211.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).operator_and (extensionGetter_definition (var_sourceType_7177, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).isValid () ;
                if (loop_7639) {
                  loop_7639 = var_ok_7211.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).operator_and (extensionGetter_definition (var_sourceType_7177, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)).boolValue () ;
                }
                if (loop_7639 && (0 == variant_7639)) {
                  loop_7639 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 175)) ;
                }
                if (loop_7639) {
                  variant_7639 -= 1 ;
                  var_sourceType_7177 = extensionGetter_definition (var_sourceType_7177, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 176)).readProperty_superType () ;
                  var_ok_7211 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_7465.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 177)).objectCompare (extensionGetter_typeName (var_sourceType_7177, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 177)))) ;
                }
              }
            }
          }
        }
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        test_22 = var_ok_7211.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          const GGS_propertyMap_2E_element var_prop_7952 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).readProperty_propertyMap ().readSubcript__3F_ (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
          if (!extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).readProperty_propertyMap ().readSubcript__3F_ (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
            test_22 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_22) {
            extensionMethod_checkSetAccess (var_prop_7952.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)) ;
            GGS_propertyAccessExpressionForGeneration var_conversionExpression_8108 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_7952.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioExpression, var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8108 ;
            var_ok_7211 = GGS_bool (ComparisonKind::equal, var_prop_7952.readProperty_mPropertyType ().objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_22) {
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          GGS_bool test_24 = var_ok_7211.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)) ;
          if (GalgasBool::boolTrue == test_24.boolEnum ()) {
            test_24 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)).readProperty_getterMap ().getter_contains (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)) ;
          }
          test_23 = test_24.boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            GGS_methodKind var_kind_8579 ;
            GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_8626 ;
            GGS_bool var_hasCompilerArgument_8669 ;
            GGS_unifiedTypeMapEntry var_returnedType_8703 ;
            GGS_location joker_8652 ; // Joker input parameter
            GGS_methodQualifier joker_8725_2 ; // Joker input parameter
            GGS_string joker_8725_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 192)).readProperty_getterMap ().method_searchKey (var_targetTypeDef_3522.readProperty_typeName (), var_kind_8579, var_argumentTypeList_8626, joker_8652, var_hasCompilerArgument_8669, var_returnedType_8703, joker_8725_2, joker_8725_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 192)) ;
            var_ok_7211 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_8626.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 201)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_8703.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 201)) ;
            GGS_getterCallExpressionForGeneration var_conversionExpression_8856 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_8579, ioArgument_ioExpression, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_hasCompilerArgument_8669, inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8856 ;
          }
        }
      }
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        test_25 = var_ok_7211.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 215)).boolEnum () ;
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
  GGS_unifiedTypeMapEntry var_leftResultType_10020 = ioArgument_ioLeftExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightResultType_10073 = ioArgument_ioRightExpression.readProperty_mResultType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 237)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (GGS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (GGS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 240)).add_operation (extensionGetter_definition (var_rightResultType_10073, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 238)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_rightType_10456 = var_rightResultType_10073 ;
    GGS_bool var_ok_10498 = GGS_bool (ComparisonKind::equal, var_leftResultType_10020.objectCompare (var_rightType_10456)) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).isValid ()) {
      uint32_t variant_10535 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).uintValue () ;
      bool loop_10535 = true ;
      while (loop_10535) {
        loop_10535 = var_ok_10498.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_and (extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).isValid () ;
        if (loop_10535) {
          loop_10535 = var_ok_10498.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_and (extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).boolValue () ;
        }
        if (loop_10535 && (0 == variant_10535)) {
          loop_10535 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) ;
        }
        if (loop_10535) {
          variant_10535 -= 1 ;
          var_rightType_10456 = extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 246)).readProperty_superType () ;
          var_ok_10498 = GGS_bool (ComparisonKind::equal, var_leftResultType_10020.objectCompare (var_rightType_10456)) ;
        }
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_ok_10498.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 250)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_10762 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioRightExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_10762.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 251)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GGS_bigint var_bigIntValue_10912 = var_bigIntSource_10762.readProperty_mValue () ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_10912.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_10912.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_10912.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)) ;
                }
              }
              ioArgument_ioRightExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10020, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_10912.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 256)), inCompiler COMMA_HERE) ;
              var_ok_10498 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_6 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_6) {
              test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 258)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_6) {
                GGS_bigint var_bigIntValue_11350 = var_bigIntSource_10762.readProperty_mValue () ;
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11350.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11350.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11350.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)) ;
                  }
                }
                ioArgument_ioRightExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10020, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11350.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 263)), inCompiler COMMA_HERE) ;
                var_ok_10498 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_6) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("u64").objectCompare (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 265)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GGS_bigint var_bigIntValue_11796 = var_bigIntSource_10762.readProperty_mValue () ;
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11796.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11796.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GenericArray <FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11796.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)).add_operation (GGS_string (") does not fit in an @u64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)) ;
                    }
                  }
                  ioArgument_ioRightExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10020, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11796.getter_u_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 270)), inCompiler COMMA_HERE) ;
                  var_ok_10498 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("s64").objectCompare (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 272)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_bigint var_bigIntValue_12233 = var_bigIntSource_10762.readProperty_mValue () ;
                    GalgasBool test_13 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_13) {
                      test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12233.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12233.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_13) {
                        GenericArray <FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12233.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)).add_operation (GGS_string (") does not fit in an @s64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)) ;
                      }
                    }
                    ioArgument_ioRightExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10020, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12233.getter_s_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 277)), inCompiler COMMA_HERE) ;
                    var_ok_10498 = GGS_bool (true) ;
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
      test_15 = var_ok_10498.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 282)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_12673 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioLeftExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_12673.ptr ()) {
          test_15 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_15) {
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 283)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              GGS_bigint var_bigIntValue_12817 = var_bigIntSource_12673.readProperty_mValue () ;
              GalgasBool test_17 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_17) {
                test_17 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12817.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12817.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)).boolEnum () ;
                if (GalgasBool::boolTrue == test_17) {
                  GenericArray <FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12817.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)) ;
                }
              }
              ioArgument_ioLeftExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_rightType_10456, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_12817.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 288)), inCompiler COMMA_HERE) ;
              var_ok_10498 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 290)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GGS_bigint var_bigIntValue_13242 = var_bigIntSource_12673.readProperty_mValue () ;
                GalgasBool test_20 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13242.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13242.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_20) {
                    GenericArray <FixItDescription> fixItArray21 ;
                    inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13242.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)) ;
                  }
                }
                ioArgument_ioLeftExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_rightType_10456, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13242.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 295)), inCompiler COMMA_HERE) ;
                var_ok_10498 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_19) {
              GalgasBool test_22 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_22) {
                test_22 = GGS_bool (ComparisonKind::equal, GGS_string ("u64").objectCompare (extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 297)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_22) {
                  GGS_bigint var_bigIntValue_13675 = var_bigIntSource_12673.readProperty_mValue () ;
                  GalgasBool test_23 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_23) {
                    test_23 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13675.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13675.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_23) {
                      GenericArray <FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13675.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)).add_operation (GGS_string (") does not fit in an @u64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)), fixItArray24  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)) ;
                    }
                  }
                  ioArgument_ioLeftExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_10456, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13675.getter_u_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 302)), inCompiler COMMA_HERE) ;
                  var_ok_10498 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_22) {
                GalgasBool test_25 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, GGS_string ("s64").objectCompare (extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 304)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_25) {
                    GGS_bigint var_bigIntValue_14099 = var_bigIntSource_12673.readProperty_mValue () ;
                    GalgasBool test_26 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_26) {
                      test_26 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14099.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14099.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_26) {
                        GenericArray <FixItDescription> fixItArray27 ;
                        inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14099.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)).add_operation (GGS_string (") does not fit in an @s64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)), fixItArray27  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)) ;
                      }
                    }
                    ioArgument_ioLeftExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_10456, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14099.getter_s_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 309)), inCompiler COMMA_HERE) ;
                    var_ok_10498 = GGS_bool (true) ;
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
      test_28 = var_ok_10498.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_propertyMap_2E_element var_prop_14569 = extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_propertyMap ().readSubcript__3F_ (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_propertyMap ().readSubcript__3F_ (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_28 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_28) {
          extensionMethod_checkSetAccess (var_prop_14569.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 315)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 315)) ;
          GGS_propertyAccessExpressionForGeneration var_conversionExpression_14727 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_14569.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 320)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_14727 ;
          var_ok_10498 = GGS_bool (ComparisonKind::equal, var_prop_14569.readProperty_mPropertyType ().objectCompare (var_leftResultType_10020)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_28) {
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        GGS_bool test_30 = var_ok_10498.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)) ;
        if (GalgasBool::boolTrue == test_30.boolEnum ()) {
          test_30 = extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)).readProperty_getterMap ().getter_contains (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)).readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)) ;
        }
        test_29 = test_30.boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          GGS_methodKind var_kind_15240 ;
          GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_15287 ;
          GGS_bool var_hasCompilerArgument_15330 ;
          GGS_unifiedTypeMapEntry var_returnedType_15364 ;
          GGS_location joker_15313 ; // Joker input parameter
          GGS_methodQualifier joker_15386_2 ; // Joker input parameter
          GGS_string joker_15386_1 ; // Joker input parameter
          extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 325)).readProperty_getterMap ().method_searchKey (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 326)).readProperty_typeName (), var_kind_15240, var_argumentTypeList_15287, joker_15313, var_hasCompilerArgument_15330, var_returnedType_15364, joker_15386_2, joker_15386_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 325)) ;
          var_ok_10498 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_15287.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 334)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_15364.objectCompare (var_leftResultType_10020)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 334)) ;
          GGS_getterCallExpressionForGeneration var_conversionExpression_15519 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_leftResultType_10020, constinArgument_inErrorLocation, var_kind_15240, ioArgument_ioRightExpression, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 342)).readProperty_typeName ().readProperty_string (), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_hasCompilerArgument_15330, inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_15519 ;
        }
      }
    }
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = var_ok_10498.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 348)).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        GenericArray <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (GGS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (GGS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (extensionGetter_definition (var_rightType_10456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).add_operation (GGS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).add_operation (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 352)).add_operation (GGS_string ("' func without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).add_operation (extensionGetter_definition (var_leftResultType_10020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)), fixItArray32  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 349)) ;
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
  GGS_unifiedTypeMapEntry var_uintType_3924 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("uint"), var_uintType_3924, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 71)) ;
  }
  GGS_unifiedTypeMapEntry var_elementType_4009 ;
  {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_elementTypeName (), var_elementType_4009, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 73)) ;
  }
  GGS_getterMap var_getterMap_4099 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_4099, inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 75)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4099, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 76)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_1 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4099, ioArgument_ioTypeMap, GGS_string ("first"), temp_1.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 83)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4099, ioArgument_ioTypeMap, GGS_string ("last"), temp_2.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 90)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4099, ioArgument_ioTypeMap, GGS_string ("removingFirst"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), temp_3.readProperty_arrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 97)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4099, ioArgument_ioTypeMap, GGS_string ("sublist"), GGS_string ("from"), GGS_string ("uint"), GGS_string ("inStartIndex"), GGS_string ("count"), GGS_string ("uint"), GGS_string ("inCount"), temp_4.readProperty_arrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 105)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_5347 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_5443 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_5 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 121)) ;
  var_setterMap_5443.setter_insertKey (GGS_string ("removeAll").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 119)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 120)), temp_5, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 123)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 118)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_6 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 129)) ;
  temp_6.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 129)), var_elementType_4009, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 129)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 129)) ;
  var_setterMap_5443.setter_insertKey (GGS_string ("append").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 127)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 128)), temp_6, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 131)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 126)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_7 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 137)) ;
  temp_7.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 137)), var_elementType_4009, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas4", 137)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 137)) ;
  var_setterMap_5443.setter_insertKey (GGS_string ("removeFirst").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 135)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 136)), temp_7, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 139)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 134)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_8 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 145)) ;
  temp_8.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 145)), var_elementType_4009, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas4", 145)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 145)) ;
  var_setterMap_5443.setter_insertKey (GGS_string ("removeLast").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 143)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 144)), temp_8, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 147)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 142)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_9 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 154)) ;
  temp_9.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 153)), var_elementType_4009, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas4", 153)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 153)) ;
  temp_9.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("at").getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 154)), var_uintType_3924, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 154)), GGS_string ("inIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 154)) ;
  var_setterMap_5443.setter_insertKey (GGS_string ("remove").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 151)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 152)), temp_9, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 157)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 150)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_10 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 165)) ;
  temp_10.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 164)), var_elementType_4009, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 164)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 164)) ;
  temp_10.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("at").getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 165)), var_uintType_3924, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 165)), GGS_string ("inInsertionIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 165)) ;
  var_setterMap_5443.setter_insertKey (GGS_string ("insert").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 162)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 163)), temp_10, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 168)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 161)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_11 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 176)) ;
  temp_11.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 175)), var_elementType_4009, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 175)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 175)) ;
  temp_11.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("at").getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 176)), var_uintType_3924, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 176)), GGS_string ("inIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 176)) ;
  var_setterMap_5443.setter_insertKey (GGS_string ("set").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 173)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 174)), temp_11, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 179)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 172)) ;
  }
  GGS_initializerMap var_initializerMap_7090 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_7147 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_12 = this ;
  var_initializerMap_7090.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_7147, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 186)), temp_12.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_7147, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 185)) ;
  }
  GGS_readSubcriptMap var_readSubscriptMap_7350 = GGS_readSubcriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_13 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 191)) ;
  temp_13.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 191)), var_uintType_3924, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 191)) ;
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_7409 = temp_13 ;
  {
  var_readSubscriptMap_7350.setter_insertKey (extensionGetter_subcriptSignature (var_argumentTypeList_7409, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 193)).getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 193)), var_argumentTypeList_7409, var_elementType_4009, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 192)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_14 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_arrayTypeName (), GGS_bool (false), var_initializerMap_7090, var_getterMap_4099, var_setterMap_5443, var_instanceMethodMap_5347, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 198)) ;
  }
  GGS_typeFeatures var_features_8078 = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-array.galgas4", 214)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-array.galgas4", 214)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 214)) ;
  {
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_15.readProperty_arrayTypeName (), var_features_8078, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 215)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_8405 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  var_enumerationDescriptor_8405.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_elementType_4009, GGS_string ("entry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 224)) ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  const GGS_arrayTypeDeclarationAST temp_18 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8521 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_16.readProperty_arrayTypeName (), temp_17.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 231)), GGS_typeKindEnum::class_func_otherType (SOURCE_FILE ("declaration-type-array.galgas4", 232)), GGS_bool (true), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_7090, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_4099, var_setterMap_5443, var_instanceMethodMap_5347, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 243)), var_readSubscriptMap_7350, GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_8405, var_features_8078, GGS_bool (false), var_elementType_4009, GGS_string ("array-").add_operation (temp_18.readProperty_arrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-array.galgas4", 250)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 250)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-array.galgas4", 251)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8521.readProperty_typeName (), var_typeDefinition_8521, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 253)) ;
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
  GGS_lstring var_nameForUsefulness_10418 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 271)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10418, var_nameForUsefulness_10418, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 272)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10418  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 274)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_10682 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 276)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10418, var_elementTypeNameForUsefulness_10682 COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 277)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_elementTypeNameForUsefulness_10682  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 279)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_11060 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_arrayTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 284)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 282)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_11060, var_initializerNameForUsefulness_11060, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 286)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_11060  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 288)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11453 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_15.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 291)) ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_arrayTypeForGeneration::init_21_infoMessage_21__21_ (GGS_string ("array type ").add_operation (temp_16.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 293)), var_selfType_11453, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_17.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 295)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 292)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_12410 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 314)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, var_selfTypeDefinition_12410.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 317)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_12410.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 318)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 315))) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_12410.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 322)), var_selfTypeDefinition_12410.readProperty_isConcrete (), var_selfTypeDefinition_12410.readProperty_initializerMap (), var_selfTypeDefinition_12410.readProperty_classFunctionMap (), var_selfTypeDefinition_12410.readProperty_getterMap (), var_selfTypeDefinition_12410.readProperty_setterMap (), var_selfTypeDefinition_12410.readProperty_instanceMethodMap (), var_selfTypeDefinition_12410.readProperty_classMethodMap (), var_selfTypeDefinition_12410.readProperty_readSubscriptMap (), var_selfTypeDefinition_12410.readProperty_writeSubscriptMap (), var_selfTypeDefinition_12410.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_12410.readProperty_features (), var_selfTypeDefinition_12410.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_12410.readProperty_supportArrayLiteral () COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 320))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 320)) ;
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
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13897 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 346)) ;
  const GGS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_13897.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 349)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_13897.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 350)), var_selfTypeDefinition_13897.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-array.galgas4", 351)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 351)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 347))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_arrayTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_arrayTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_arrayTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayTypeGenerationTemplate arrayTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (Compiler * inCompiler,
                                                                                const GGS_string & in_TYPE_5F_NAME,
                                                                                const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: ").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 2)).add_operation (GGS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n//--- No copy\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n//---\n  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }\n\n//---\n  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }\n  public: inline int32_t index (void) { return mCurrent ; }\n\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template\n\n//---- Properties\n  private: const GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: int32_t mCurrent ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n//--- No copy\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n//---\n  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }\n\n//---\n  public: inline void gotoNextObject (void) { mCurrent += 1 ; }\n\n//---\n  public: inline void rewind (void) { mCurrent = 0 ; }\n  public: inline int32_t index (void) { return mCurrent ; }\n\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current_entry (LOCATION_ARGS) const ;\n\n//---- Properties\n  private: const GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: int32_t mCurrent ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--------------------------------- Private property\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: bool mIsValid ;\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Direct access\n  public: void removeAll (void) ;\n  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }\n\n//--- Methods that every type should implement\n  public: virtual bool isValid (void) const override { return mIsValid ; }\n\n  public: virtual void drop (void) override ;\n\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayTypeGenerationTemplate arrayTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (Compiler * inCompiler,
                                                                                            const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                            const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmSharedArray (),\nmIsValid (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmSharedArray (inSource.mSharedArray),\nmIsValid (inSource.mIsValid) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource)  {\n  mSharedArray = inSource.mSharedArray ;\n  mIsValid = inSource.mIsValid ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mIsValid = true ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  mSharedArray.removeAll () ;\n  mIsValid = false ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::removeAll (void) {\n  mSharedArray.removeAll () ;\n  mIsValid = true ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusPlusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    mSharedArray.appendObject (inValue) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (uint32_t (mSharedArray.count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.mSharedArray.appendDataFromPointer (\n      inOperand.mSharedArray.unsafeArrayPointer (),\n      inOperand.mSharedArray.count ()\n    ) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<array [@") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("], \") ;\n  ioString.appendSigned (mSharedArray.count ()) ;\n  ioString.appendCString (\" object\") ;\n  ioString.appendString ((mSharedArray.count () > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mSharedArray.appendDataFromPointer (\n      inOperand.mSharedArray.unsafeArrayPointer (),\n      inOperand.mSharedArray.count ()\n    ) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    mSharedArray.appendObject (inValue) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeAll (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * /* inCompiler */\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_set (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_uint inIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inIndex.isValid ()) {\n    const int32_t idx = int32_t (inIndex.uintValue ()) ;\n    if (idx >= mSharedArray.count ()) {\n      String errorMessage = \"'set' setter call with index \" ;\n      errorMessage.appendSigned (idx) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }else{\n      mSharedArray (idx COMMA_THERE) = inValue ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_uint inInsertionIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inInsertionIndex.isValid ()) {\n    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;\n    if (idx > mSharedArray.count ()) {\n      String errorMessage = \"'insert' setter call with index \" ;\n      errorMessage.appendSigned (idx) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }else{\n      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_remove (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_uint inRemoveIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  outValue.drop () ;\n  if (isValid () && inRemoveIndex.isValid ()) {\n    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;\n    if (idx >= mSharedArray.count ()) {\n      String errorMessage = \"'remove' setter call with index \" ;\n      errorMessage.appendSigned (idx) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }else{\n      outValue = mSharedArray (idx COMMA_THERE) ;\n      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeFirst (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (!isValid ()) {\n    outValue.drop () ;\n  }else if (count () == 0) {\n    const String errorMessage = \"'removeFirst' setter call on an empty array\" ;\n    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    outValue.drop () ;\n  }else{\n    outValue = mSharedArray (0 COMMA_THERE) ;\n    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeLast (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (!isValid ()) {\n    outValue.drop () ;\n  }else if (count () == 0) {\n    const String errorMessage = \"'removeLast' setter call on an empty array\" ;\n    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    outValue.drop () ;\n  }else{\n    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;\n    mSharedArray.removeLastObject (THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_removingFirst (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_uint & inIndex,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;\n    if (startIndex >= int32_t (count ())) {\n      String errorMessage ;\n      errorMessage.appendCString (\"'removingFirst' getter call with argument \") ;\n      errorMessage.appendSigned (startIndex) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }else{\n      const int32_t lastIndex = int32_t (count ()) - 1 ;\n      result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (inCompiler COMMA_THERE) ;\n      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_sublist (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_uint & inStartIndex,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_uint & inLength,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {\n    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;\n    const int32_t length = int32_t (inLength.uintValue ()) ;\n    if ((startIndex == 0) && (length == 0) && (count () == 0)) {\n      result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (inCompiler COMMA_THERE) ;\n    }else if (startIndex >= int32_t (count ())) {\n      String errorMessage ;\n      errorMessage.appendCString (\"'sublist' getter call with start index \") ;\n      errorMessage.appendSigned (startIndex) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }else{\n      const int32_t lastIndex = startIndex + length - 1 ;\n      if (lastIndex >= int32_t (count ())) {\n        String errorMessage ;\n        errorMessage.appendCString (\"'sublist' getter call with last index \") ;\n        errorMessage.appendSigned (lastIndex) ;\n        errorMessage.appendCString (\" too large (array size is\") ;\n        errorMessage.appendSigned (mSharedArray.count ()) ;\n        errorMessage.appendCString (\")\") ;\n        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n      }else{\n        result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (inCompiler COMMA_THERE) ;\n        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;\n      }\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_first (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (!isValid ()) {\n  }else if (mSharedArray.count () == 0) {\n    const String errorMessage = \"'first' getter call on an empty array'\" ;\n    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n  }else{\n    result = mSharedArray (0 COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_last (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (!isValid ()) {\n  }else if (mSharedArray.count () == 0) {\n    const String errorMessage = \"'last' getter call on an empty array'\" ;\n    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n  }else{\n    result = mSharedArray.lastObject (THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubcript__3F_ (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_uint & inIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const uint32_t idx = inIndex.uintValue () ;\n    if (idx < uint32_t (mSharedArray.count ())) {\n      result = mSharedArray (int32_t (idx) COMMA_HERE) ;\n    }else{\n      String errorMessage ;\n      errorMessage.appendCString (\"subcript value (\") ;\n      errorMessage.appendUnsigned (idx) ;\n      errorMessage.appendCString (\") too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n\n") ;
  const GalgasBool test_0 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (count () < inOperand.count ()) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (count () > inOperand.count ()) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {\n        const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left = mSharedArray (int32_t (i) COMMA_HERE) ;\n        const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right = inOperand.mSharedArray (int32_t (i) COMMA_HERE) ;\n        result = left.objectCompare (right) ;\n      }\n    }\n  }\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmSharedArray (inOperand.mSharedArray),\nmCurrent (inOperand.mSharedArray.count () - 1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_entry (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmSharedArray (inOperand.mSharedArray),\nmCurrent (0) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_entry (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n") ;
  return GGS_string (result) ;
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
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5293, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 110)) ;
  }
  GGS_setterMap var_setterMap_5814 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_4 = this ;
  GGS__5B_formalParameterSignatureElement_5D_ temp_5 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 122)) ;
  temp_5.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("key").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 122)), var_keyType_5003, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dictionary.galgas4", 122)), GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 122)) ;
  var_setterMap_5814.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("remove"), temp_4.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dictionary.galgas4", 121)), temp_5, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dictionary.galgas4", 124)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 119)) ;
  }
  {
  const GGS_dictionaryDeclarationAST temp_6 = this ;
  GGS__5B_formalParameterSignatureElement_5D_ temp_7 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 131)) ;
  temp_7.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("key").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 131)), var_keyType_5003, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dictionary.galgas4", 131)), GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 131)) ;
  const GGS_dictionaryDeclarationAST temp_8 = this ;
  var_instanceMethodMap_5330.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("search"), temp_6.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dictionary.galgas4", 130)), temp_7, temp_8.readProperty_dictionaryTypeName ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dictionary.galgas4", 134)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 128)) ;
  }
  GGS_initializerMap var_initializerMap_6430 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_6485 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_9 = this ;
  var_initializerMap_6430.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_6485, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 141)), temp_9.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_6485, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 140)) ;
  }
  {
  const GGS_dictionaryDeclarationAST temp_10 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_10.readProperty_dictionaryTypeName (), GGS_bool (false), var_initializerMap_6430, var_getterMap_5293, var_setterMap_5814, var_instanceMethodMap_5330, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 145)) ;
  }
  GGS_typeFeatures var_features_7081 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-dictionary.galgas4", 161)).operator_or (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-dictionary.galgas4", 161)) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 161)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_dictionaryDeclarationAST temp_12 = this ;
    test_11 = temp_12.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      var_features_7081.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-dictionary.galgas4", 163)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 163)) ;
    }
  }
  {
  const GGS_dictionaryDeclarationAST temp_13 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_13.readProperty_dictionaryTypeName (), var_features_7081, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 165)) ;
  }
  const GGS_dictionaryDeclarationAST temp_14 = this ;
  GGS_lstring var_optionalElementTypeName_7459 = function_makeOptionalTypeLName (temp_14.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 173)) ;
  GGS_unifiedTypeMapEntry var_optionalElementType_7619 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_7459, var_optionalElementType_7619, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 174)) ;
  }
  GGS_readSubcriptMap var_readSubscriptMap_7684 = GGS_readSubcriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_15 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 177)) ;
  temp_15.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 177)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 177)) ;
  GGS__5B_functionSignatureElement_5D_ var_firstArgumentTypeList_7741 = temp_15 ;
  {
  var_readSubscriptMap_7684.setter_insertKey (extensionGetter_subcriptSignature (var_firstArgumentTypeList_7741, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 179)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 179)), var_firstArgumentTypeList_7741, var_optionalElementType_7619, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 178)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_16 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 185)) ;
  temp_16.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 184)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 184)) ;
  temp_16.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("default").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 185)), var_valueType_5089, GGS_string ("inDefaultValue"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 185)) ;
  GGS__5B_functionSignatureElement_5D_ var_secondArgumentTypeList_7980 = temp_16 ;
  {
  var_readSubscriptMap_7684.setter_insertKey (extensionGetter_subcriptSignature (var_secondArgumentTypeList_7980, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 188)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 188)), var_secondArgumentTypeList_7980, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 187)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_17 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 193)) ;
  temp_17.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("unwrap").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 193)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 193)) ;
  GGS__5B_functionSignatureElement_5D_ var_thirdArgumentTypeList_8283 = temp_17 ;
  {
  var_readSubscriptMap_7684.setter_insertKey (extensionGetter_subcriptSignature (var_thirdArgumentTypeList_8283, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 196)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 196)), var_thirdArgumentTypeList_8283, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 195)) ;
  }
  GGS_writeSubcriptMap var_writeSubcriptMap_8538 = GGS_writeSubcriptMap::init (inCompiler COMMA_HERE) ;
  {
  var_writeSubcriptMap_8538.setter_insertKey (extensionGetter_subcriptSignature (var_firstArgumentTypeList_7741, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 203)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 203)), var_firstArgumentTypeList_7741, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 202)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_18 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 208)) ;
  temp_18.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("unique").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 208)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 208)) ;
  GGS__5B_functionSignatureElement_5D_ var_writeUnique_5F_ArgumentTypeList_8726 = temp_18 ;
  {
  var_writeSubcriptMap_8538.setter_insertKey (extensionGetter_subcriptSignature (var_writeUnique_5F_ArgumentTypeList_8726, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 211)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 211)), var_writeUnique_5F_ArgumentTypeList_8726, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 210)) ;
  }
  const GGS_dictionaryDeclarationAST temp_19 = this ;
  const GGS_dictionaryDeclarationAST temp_20 = this ;
  GGS__5B_typedProperty_5D_ temp_21 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 226)) ;
  const GGS_dictionaryDeclarationAST temp_22 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8987 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_19.readProperty_dictionaryTypeName (), temp_20.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 221)), GGS_typeKindEnum::class_func_mapType (SOURCE_FILE ("declaration-type-dictionary.galgas4", 222)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), temp_21, var_initializerMap_6430, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_5293, var_setterMap_5814, var_instanceMethodMap_5330, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 233)), var_readSubscriptMap_7684, var_writeSubcriptMap_8538, var_enumerationDescriptor_5136, var_features_7081, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 239)), GGS_string ("dictionary-").add_operation (temp_22.readProperty_dictionaryTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-dictionary.galgas4", 240)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 240)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-dictionary.galgas4", 241)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8987.readProperty_typeName (), var_typeDefinition_8987, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 243)) ;
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
  GGS_unifiedTypeMapEntry var_keyType_10715 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_keyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 260)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_keyType_10715, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 261)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-dictionary.galgas4", 261)) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 261)).operator_not (SOURCE_FILE ("declaration-type-dictionary.galgas4", 261)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_dictionaryDeclarationAST temp_2 = this ;
      const GGS_dictionaryDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_keyTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_3.readProperty_keyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 262)).add_operation (GGS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 262)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 262)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_5 = this ;
  GGS_lstring var_nameForUsefulness_10963 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_dictionaryTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 265)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10963, var_nameForUsefulness_10963, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 266)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_dictionaryDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10963  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 268)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_8 = this ;
  GGS_lstring var_keyTypeNameForUsefulness_11204 = function_typeNameForUsefulEntitiesGraph (temp_8.readProperty_keyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 270)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10963, var_keyTypeNameForUsefulness_11204 COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 271)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_dictionaryDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_keyTypeNameForUsefulness_11204  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 273)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_11 = this ;
  GGS_lstring var_valueTypeNameForUsefulness_11471 = function_typeNameForUsefulEntitiesGraph (temp_11.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 275)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10963, var_valueTypeNameForUsefulness_11471 COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 276)) ;
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_dictionaryDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_valueTypeNameForUsefulness_11471  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 278)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_14 = this ;
  GGS_lstring var_initializerNameForUsefulness_11811 = function_initializerNameForUsefulEntitiesGraph (temp_14.readProperty_dictionaryTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 283)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 281)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_11811, var_initializerNameForUsefulness_11811, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 285)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_dictionaryDeclarationAST temp_16 = this ;
    test_15 = temp_16.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_11811  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 287)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_17 = this ;
  GGS_lstring var_optionalElementTypeName_12195 = function_makeOptionalTypeLName (temp_17.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 290)) ;
  GGS_unifiedTypeMapEntry var_optionalElementType_12285 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_12195, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 291)) ;
  const GGS_dictionaryDeclarationAST temp_18 = this ;
  const GGS_dictionaryDeclarationAST temp_19 = this ;
  const GGS_dictionaryDeclarationAST temp_20 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_dictionaryTypeForGeneration::init_21_infoMessage_21__21_valueType_21_keyType_21_optionalValueType (GGS_string ("dictionary ").add_operation (temp_18.readProperty_dictionaryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 294)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_19.readProperty_dictionaryTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 295)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_20.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 296)), var_keyType_10715, var_optionalElementType_12285, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 293)) ;
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
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13566 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 317)) ;
  const GGS_dictionaryTypeForGeneration temp_3 = this ;
  const GGS_dictionaryTypeForGeneration temp_4 = this ;
  const GGS_dictionaryTypeForGeneration temp_5 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_dictionaryGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypeDefinition_13566.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 320)), var_selfTypeDefinition_13566.readProperty_enumerationDescriptorList (), extensionGetter_identifierRepresentation (temp_4.readProperty_keyType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 322)), extensionGetter_identifierRepresentation (temp_5.readProperty_valueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 323)) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 318))) ;
  const GGS_dictionaryTypeForGeneration temp_6 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_13566.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 327)), var_selfTypeDefinition_13566.readProperty_isConcrete (), var_selfTypeDefinition_13566.readProperty_initializerMap (), var_selfTypeDefinition_13566.readProperty_classFunctionMap (), var_selfTypeDefinition_13566.readProperty_getterMap (), var_selfTypeDefinition_13566.readProperty_setterMap (), var_selfTypeDefinition_13566.readProperty_instanceMethodMap (), var_selfTypeDefinition_13566.readProperty_classMethodMap (), var_selfTypeDefinition_13566.readProperty_readSubscriptMap (), var_selfTypeDefinition_13566.readProperty_writeSubscriptMap (), var_selfTypeDefinition_13566.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_13566.readProperty_features (), var_selfTypeDefinition_13566.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_13566.readProperty_supportArrayLiteral () COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 325))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 325)) ;
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
  GGS_unifiedTypeDefinition var_selfTypeDefinition_15069 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 350)) ;
  const GGS_dictionaryTypeForGeneration temp_2 = this ;
  const GGS_dictionaryTypeForGeneration temp_3 = this ;
  const GGS_dictionaryTypeForGeneration temp_4 = this ;
  const GGS_dictionaryTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_dictionaryGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 352)), var_selfTypeDefinition_15069.readProperty_enumerationDescriptorList (), extensionGetter_identifierRepresentation (temp_3.readProperty_keyType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 354)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_15069.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 355)), extensionGetter_identifierRepresentation (temp_4.readProperty_valueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 356)), extensionGetter_identifierRepresentation (temp_5.readProperty_optionalValueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 357)) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 351))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'dictionaryGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_dictionaryGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_dictionaryGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_dictionaryGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_dictionaryGenerationTemplate_0,
  0,
  gWrapperAllDirectories_dictionaryGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictionaryGenerationTemplate dictTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_dictionaryGenerationTemplate_dictTypeHeader_31_ (Compiler * inCompiler,
                                                                                const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                const GGS__5B_enumerationDescriptor_5D_ & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                const GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                                const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_dictionary.h1.galgasTemplate", 2)).add_operation (GGS_string (" dictionary"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dictionary.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public : GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mProperty_key ;\n  public : GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mProperty_value ;\n\n  public: Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n  mProperty_key (),\n  mProperty_value () {\n  }\n\n  public: Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey,\n                                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue) :\n  mProperty_key (inKey),\n  mProperty_value (inValue) {\n  }\n\n  public: Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\n  mProperty_key (inSource.mProperty_key),\n  mProperty_value (inSource.mProperty_value) {\n  }\n\n  public: Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n    mProperty_key = inSource.mProperty_key ;\n    mProperty_value = inSource.mProperty_value ;\n    return *this ;\n  }\n\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: inline void gotoNextObject (void) { mIndex -= 1 ; }\n\n") ;
  GGS_uint index_1560_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_1560 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_1560.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1560.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS_dictionary.h1.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_1560.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dictionary.h1.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const ;\n\n") ;
      enumerator_1560.gotoNextObject () ;
      index_1560_.increment () ;
    }
  }
  result.appendString ("\n//--- Private properties\n  private: GenericArray <SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand)  ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }\n\n  public: inline void gotoNextObject (void) { mIndex += 1 ; }\n\n") ;
  GGS_uint index_2565_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_2565 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_2565.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2565.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS_dictionary.h1.galgasTemplate", 69)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_2565.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dictionary.h1.galgasTemplate", 69)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const ;\n") ;
      enumerator_2565.gotoNextObject () ;
      index_2565_.increment () ;
    }
  }
  result.appendString ("//--- Private properties\n  private: GenericArray <SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public GenericDictionary <GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> {\n\n//--------------------------------- Virtual destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n//--------------------------------- Build\n  protected: static GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" buildEmptyDictionary (LOCATION_ARGS) ;\n\n//--------------------------------- Implementation of reader 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictionaryGenerationTemplate dictTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_dictionaryGenerationTemplate_dictTypeSpecificImplementation (Compiler * inCompiler,
                                                                                            const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GGS__5B_enumerationDescriptor_5D_ & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                            const GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GGS_bool & /* in_GENERATE_5F_COMPARISON */,
                                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GGS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::buildEmptyDictionary (LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.build (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  return GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::buildEmptyDictionary (THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                          const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<dict @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (": \") ;\n  if (isValid ()) {\n    ioString.appendSigned (count ()) ;\n    ioString.appendCString (\" node(s)\") ;\n  }else{\n    ioString.appendCString (\"not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (uint32_t (count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubcript__3F_ (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey,\n                    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNotNil ()) {\n      result = GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (object->mProperty_value) ;\n    }else{\n      result = GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init_nil () ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubcript__3F__3F_default (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey,\n                    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inDefaultValue,\n                    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNotNil ()) {\n      result = GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (object->mProperty_value) ;\n    }else{\n      result = inDefaultValue ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubcript__3F_unwrap (const ") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNil ()) {\n    //--- Build error message\n     String message = \"dictionary does not contains the '\" ;\n     message.appendString (inKey.stringValue ()) ;\n     message.appendString (\"' key\") ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      result = object->mProperty_value ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::writeSubcript__3F_ (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler *\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" object (inKey, inValue) ;\n    insertOrReplace (inKey, object COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::writeSubcript__3F_unique (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" object (inKey, inValue) ;\n    const bool overwrite = insertOrReplace (inKey, object COMMA_THERE) ;\n    if (overwrite) {\n    //--- Build error message\n     String message = \"dictionary '\" ;\n     message.appendString (inKey.stringValue ()) ;\n     message.appendString (\"' key overwrite\") ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    } \n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_contains (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    result = GGS_bool (hasKey (inKey)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_remove (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> removedObject\n                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;\n    if (removedObject.isNil ()) { // Not found\n    //--- Build error message\n      const String message = \"cannot remove in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmArray (inOperand.sortedInfoArray ()),\nmIndex (0) {\n}\n\n") ;
  GGS_uint index_6522_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_6522 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_6522.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6522.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS_dictionary.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_6522.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dictionary.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_6522.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dictionary.cpp.galgasTemplate", 170)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_6522.gotoNextObject () ;
      index_6522_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmArray (inOperand.sortedInfoArray ()),\nmIndex () {\n  mIndex = mArray.count () - 1 ;\n}\n\n") ;
  GGS_uint index_7416_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_7416 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_7416.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7416.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS_dictionary.cpp.galgasTemplate", 188)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_7416.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dictionary.cpp.galgasTemplate", 188)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_7416.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dictionary.cpp.galgasTemplate", 189)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_7416.gotoNextObject () ;
      index_7416_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
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
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_5389 (temp_1.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_5389.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyTypeEntry_5471 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5389.current (HERE).readProperty_typeName (), var_propertyTypeEntry_5471, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 124)) ;
    }
    GGS_string temp_2 ;
    const GalgasBool test_3 = enumerator_5389.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = enumerator_5389.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = GGS_string::makeEmptyString () ;
    }
    GGS_lstring var_selector_5500 = temp_2.getter_nowhere (SOURCE_FILE ("declaration-type-struct.galgas4", 125)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = enumerator_5389.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("declaration-type-struct.galgas4", 126)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_constructorPropertyTypeList_5206.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (var_selector_5500, var_propertyTypeEntry_5471, enumerator_5389.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 127)) ;
      }
    }
    var_typedPropertyList_5265.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_propertyTypeEntry_5471, enumerator_5389.current (HERE).readProperty_name (), enumerator_5389.current (HERE).readProperty_initialization (), enumerator_5389.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 134)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 134)), enumerator_5389.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 130)) ;
    {
    var_propertyMap_5152.setter_insertKey (enumerator_5389.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_5389.current (HERE).readProperty_accessControl (), var_structTypeIndex_5073, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 139)), enumerator_5389.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 140)), var_propertyTypeEntry_5471, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 137)) ;
    }
    enumerator_5389.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_6338 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6338, inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 145)) ;
  }
  GGS_setterMap var_setterMap_6391 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_6431 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_6479 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_structTypeName (), GGS_bool (false), var_initializerMap_6431, var_getterMap_6338, var_setterMap_6391, var_instanceMethodMap_6479, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 150)) ;
  }
  GGS_typeFeatures var_features_6938 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-struct.galgas4", 165)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_initializerMap_6431.getter_count (SOURCE_FILE ("declaration-type-struct.galgas4", 167)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_features_6938.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 168)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 168)) ;
      {
      const GGS_structDeclarationAST temp_7 = this ;
      var_initializerMap_6431.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_5206, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 170)), temp_7.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_5206, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 169)) ;
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
      var_features_6938.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 178)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 178)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_6938.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 180)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 180)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 180)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 180)) ;
    }
    break ;
  }
  {
  const GGS_structDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_structTypeName (), var_features_6938, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 182)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedType_7764 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_structDeclarationAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_enumeratedElementTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      var_enumeratedType_7764 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 192)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    {
    const GGS_structDeclarationAST temp_12 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_12.readProperty_enumeratedElementTypeName (), var_enumeratedType_7764, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 194)) ;
    }
  }
  const GGS_structDeclarationAST temp_13 = this ;
  const GGS_structDeclarationAST temp_14 = this ;
  const GGS_structDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_7995 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_structTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 202)), GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-struct.galgas4", 203)), GGS_bool (false), var_typedPropertyList_5265, var_propertyMap_5152, var_typedPropertyList_5265, var_initializerMap_6431, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6338, var_setterMap_6391, var_instanceMethodMap_6479, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 214)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_6938, GGS_bool (false), var_enumeratedType_7764, GGS_string ("struct-").add_operation (temp_15.readProperty_structTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-struct.galgas4", 221)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 221)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-struct.galgas4", 222)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7995.readProperty_typeName (), var_typeDefinition_7995, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 224)) ;
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
  GGS_unifiedTypeMapEntry var_structType_9580 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 237)) ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_structNameForUsefulness_9653 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 238)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_structDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mStructurePropertyListAST ().getter_count (SOURCE_FILE ("declaration-type-struct.galgas4", 240)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_structDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_structTypeName ().readProperty_location (), GGS_string ("a structure cannot be empty: it must have at least one property"), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 241)) ;
    }
  }
  GGS__5B_typedProperty_5D_ var_typedPropertyList_9926 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_constructorArgumentList_9975 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_propertyMap_10031 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_6 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_10074 (temp_6.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_10074.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_10113 = function_typeNameForUsefulEntitiesGraph (enumerator_10074.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 247)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9653, var_propertyTypeNameForUsefulness_10113 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 248)) ;
    }
    GGS_unifiedTypeMapEntry var_t_10313 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_10074.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 249)) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = function_kForbiddenKeysForStruct (inCompiler COMMA_HERE).getter_contains (enumerator_10074.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 250)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_string var_m_10457 = GGS_string ("an property cannot be named:") ;
        UpEnumerator_stringset enumerator_10509 (function_kForbiddenKeysForStruct (inCompiler COMMA_HERE)) ;
        while (enumerator_10509.hasCurrentObject ()) {
          var_m_10457.plusAssignOperation(GGS_string (" ").add_operation (enumerator_10509.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 253)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 253)) ;
          enumerator_10509.gotoNextObject () ;
        }
        var_m_10457.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 255)) ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_10074.current (HERE).readProperty_name ().readProperty_location (), var_m_10457, fixItArray8  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 256)) ;
      }
    }
    {
    var_propertyMap_10031.setter_insertKey (enumerator_10074.current (HERE).readProperty_name (), var_t_10313, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 269)) ;
    }
    switch (enumerator_10074.current (HERE).readProperty_initialization ().enumValue ()) {
    case GGS_propertyInCollectionInitializationAST::Enumeration::invalid:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_none:
      {
        var_constructorArgumentList_9975.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10313, enumerator_10074.current (HERE).readProperty_name (), enumerator_10074.current (HERE).readProperty_initialization (), enumerator_10074.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 276)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 276)), enumerator_10074.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 272)) ;
      }
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_some:
      break ;
    }
    var_typedPropertyList_9926.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10313, enumerator_10074.current (HERE).readProperty_name (), enumerator_10074.current (HERE).readProperty_initialization (), enumerator_10074.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 284)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 284)), enumerator_10074.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 280)) ;
    const GGS_structDeclarationAST temp_9 = this ;
    switch (temp_9.readProperty_comparison ().enumValue ()) {
    case GGS_structComparison::Enumeration::invalid:
      break ;
    case GGS_structComparison::Enumeration::enum_none:
      break ;
    case GGS_structComparison::Enumeration::enum_equatable:
      {
        GGS_typeFeatures var_propertyFeatures_11810 = extensionGetter_definition (var_t_10313, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 291)).readProperty_features () ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = var_propertyFeatures_11810.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 292)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 292)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 292)).operator_and (var_propertyFeatures_11810.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 293)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 293)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 293)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 292)).operator_and (var_propertyFeatures_11810.getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-struct.galgas4", 294)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 294)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 294)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 293)).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_10074.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not equatable, because '").add_operation (enumerator_10074.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 296)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 296)), fixItArray11  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 295)) ;
          }
        }
      }
      break ;
    case GGS_structComparison::Enumeration::enum_comparable:
      {
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = extensionGetter_definition (var_t_10313, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 299)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 299)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 299)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 299)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_10074.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not comparable, because '").add_operation (enumerator_10074.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 301)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 301)), fixItArray13  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 300)) ;
          }
        }
      }
      break ;
    }
    enumerator_10074.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_12650 ;
  GGS_string var_initializationCode_12687 ;
  const GGS_structDeclarationAST temp_14 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_14.readProperty_mStructurePropertyListAST (), var_structNameForUsefulness_9653, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_12650, var_initializationCode_12687, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 306)) ;
  GGS_bool var_constructorNeedsCompilerVar_12728 = var_unusedVariableCppNameSet_12650.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 316)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 316)) ;
  const GGS_structDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_structTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("struct ").add_operation (temp_15.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 318)), var_structType_9580, var_typedPropertyList_9926, var_constructorArgumentList_9975, var_initializationCode_12687, var_constructorNeedsCompilerVar_12728, extensionGetter_definition (var_structType_9580, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 324)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 324)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 324)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 317)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9653, var_structNameForUsefulness_9653, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 327)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_structNameForUsefulness_9653  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 329)) ;
    }
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = extensionGetter_definition (var_structType_9580, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 332)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 332)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 332)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_structDeclarationAST temp_21 = this ;
      GGS_lstring var_initializerForUsefulness_13535 = function_initializerNameForUsefulEntitiesGraph (temp_21.readProperty_structTypeName (), extensionGetter_initializerSignature (var_constructorArgumentList_9975, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 335)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 333)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_13535, var_initializerForUsefulness_13535, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 337)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_13535, var_structNameForUsefulness_9653 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 338)) ;
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
          ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerForUsefulness_13535  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 340)) ;
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
  UpEnumerator__5B_typedProperty_5D_ enumerator_14890 (temp_0.readProperty_mTypedPropertyList ()) ;
  while (enumerator_14890.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_14890.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 364)) ;
    enumerator_14890.gotoNextObject () ;
  }
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_14991 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 366)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypeDefinition_14991.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 369)), temp_3.readProperty_mTypedPropertyList () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 367))) ;
  const GGS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_14991.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 374)), var_selfTypeDefinition_14991.readProperty_isConcrete (), var_selfTypeDefinition_14991.readProperty_initializerMap (), var_selfTypeDefinition_14991.readProperty_classFunctionMap (), var_selfTypeDefinition_14991.readProperty_getterMap (), var_selfTypeDefinition_14991.readProperty_setterMap (), var_selfTypeDefinition_14991.readProperty_instanceMethodMap (), var_selfTypeDefinition_14991.readProperty_classMethodMap (), var_selfTypeDefinition_14991.readProperty_readSubscriptMap (), var_selfTypeDefinition_14991.readProperty_writeSubscriptMap (), var_selfTypeDefinition_14991.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_14991.readProperty_features (), var_selfTypeDefinition_14991.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_14991.readProperty_supportArrayLiteral () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 372))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 372)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 398)) ;
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_16305 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 399)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  const GGS_structTypeForGeneration temp_4 = this ;
  const GGS_structTypeForGeneration temp_5 = this ;
  const GGS_structTypeForGeneration temp_6 = this ;
  const GGS_structTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_16305.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 402)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar (), temp_7.readProperty_synthetizeAnInitializer (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_16305.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 408)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 400))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'structureGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structureGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structureGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structureGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structureGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structureGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structureGenerationTemplate structTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (Compiler * inCompiler,
                                                                                 const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                 const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const GGS__5B_typedProperty_5D_ & in_PROPERTY_5F_LIST
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 2)).add_operation (GGS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--------------------------------- Properties\n") ;
  GGS_uint index_394_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_394 (in_PROPERTY_5F_LIST) ;
    while (enumerator_394.hasCurrentObject ()) {
      result.appendString ("  public: GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_394.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_394.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" ;\n  public: inline GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_394.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_394.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" (void) const {\n    return mProperty_") ;
      result.appendString (enumerator_394.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" ;\n  }\n\n") ;
      enumerator_394.gotoNextObject () ;
      index_394_.increment () ;
    }
  }
  result.appendString ("//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Property setters\n") ;
  GGS_uint index_1112_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_1112 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1112.hasCurrentObject ()) {
      result.appendString ("  public: inline void setter_set") ;
      result.appendString (enumerator_1112.current_entry (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 24)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (" (const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1112.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (" & inValue COMMA_UNUSED_LOCATION_ARGS) {\n    mProperty_") ;
      result.appendString (enumerator_1112.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (" = inValue ;\n  }\n\n") ;
      enumerator_1112.gotoNextObject () ;
      index_1112_.increment () ;
    }
  }
  result.appendString ("//--------------------------------- Set initialized properties\n  private: void setInitializedProperties (Compiler * inCompiler) ;\n\n//--------------------------------- Native constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_1677_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_1677 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1677.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1677.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 33)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1677.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 33)).stringValue ()) ;
      enumerator_1677.gotoNextObject () ;
      if (enumerator_1677.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1677_.increment () ;
    }
  }
  result.appendString (") ;\n\n//--------------------------------- Copy constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Assignment operator\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structureGenerationTemplate structTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (Compiler * inCompiler,
                                                                                             const GGS_string & in_TYPE_5F_NAME,
                                                                                             const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const GGS__5B_typedProperty_5D_ & in_PROPERTY_5F_LIST,
                                                                                             const GGS__5B_typedProperty_5D_ & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                             const GGS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                             const GGS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                             const GGS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                             const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  GGS_uint index_194_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_194 (in_PROPERTY_5F_LIST) ;
    while (enumerator_194.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_194.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 6)).stringValue ()) ;
      result.appendString (" ()") ;
      enumerator_194.gotoNextObject () ;
      if (enumerator_194.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_194_.increment () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\n") ;
  GGS_uint index_511_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_511 (in_PROPERTY_5F_LIST) ;
    while (enumerator_511.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_511.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" (inSource.mProperty_") ;
      result.appendString (enumerator_511.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_511.gotoNextObject () ;
      if (enumerator_511.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_511_.increment () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n") ;
  GGS_uint index_904_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_904 (in_PROPERTY_5F_LIST) ;
    while (enumerator_904.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_904.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" = inSource.mProperty_") ;
      result.appendString (enumerator_904.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_904.gotoNextObject () ;
      index_904_.increment () ;
    }
  }
  result.appendString ("  return *this ;\n}\n\n") ;
  const GalgasBool test_0 = in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//---Synthetized initializer -----------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_1382_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_1382 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_1382.hasCurrentObject ()) {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1382.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 38)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_1382.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 38)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        enumerator_1382.gotoNextObject () ;
        index_1382_.increment () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n          ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  result.setInitializedProperties (inCompiler) ;\n") ;
    GGS_uint index_1718_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_1718 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_1718.hasCurrentObject ()) {
        result.appendString ("  result.mProperty_") ;
        result.appendString (enumerator_1718.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 46)).stringValue ()) ;
        result.appendString (" = in_") ;
        result.appendString (enumerator_1718.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 46)).stringValue ()) ;
        result.appendString (" ;\n") ;
        enumerator_1718.gotoNextObject () ;
        index_1718_.increment () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setInitializedProperties (") ;
  const GalgasBool test_1 = in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("Compiler * inCompiler") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("Compiler * /* inCompiler */") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_2375_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_2375 (in_PROPERTY_5F_LIST) ;
    while (enumerator_2375.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2375.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_2375_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 67)).stringValue ()) ;
      enumerator_2375.gotoNextObject () ;
      if (enumerator_2375.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_2375_IDX.increment () ;
    }
  }
  result.appendString (") :\n") ;
  GGS_uint index_2531_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_2531 (in_PROPERTY_5F_LIST) ;
    while (enumerator_2531.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_2531.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 71)).stringValue ()) ;
      result.appendString (" (inOperand") ;
      result.appendString (index_2531_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 71)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_2531.gotoNextObject () ;
      if (enumerator_2531.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_2531_IDX.increment () ;
    }
  }
  result.appendString (" {\n}\n\n") ;
  const GalgasBool test_2 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::operandEqual ;\n") ;
    GGS_uint index_2980_ (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_2980 (in_PROPERTY_5F_LIST) ;
      while (enumerator_2980.hasCurrentObject ()) {
        result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = mProperty_") ;
        result.appendString (enumerator_2980.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 83)).stringValue ()) ;
        result.appendString (".objectCompare (inOperand.mProperty_") ;
        result.appendString (enumerator_2980.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 83)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        enumerator_2980.gotoNextObject () ;
        index_2980_.increment () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return ") ;
  GGS_uint index_3442_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_3442 (in_PROPERTY_5F_LIST) ;
    while (enumerator_3442.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_3442.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 94)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      enumerator_3442.gotoNextObject () ;
      if (enumerator_3442.hasCurrentObject ()) {
        result.appendString (" && ") ;
      }
      index_3442_.increment () ;
    }
  }
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n") ;
  GGS_uint index_3732_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_3732 (in_PROPERTY_5F_LIST) ;
    while (enumerator_3732.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_3732.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 104)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_3732.gotoNextObject () ;
      index_3732_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"<struct @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GGS_uint index_4222_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_4222 (in_PROPERTY_5F_LIST) ;
    while (enumerator_4222.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_4222.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 118)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation+1) ;\n") ;
      enumerator_4222.gotoNextObject () ;
      if (enumerator_4222.hasCurrentObject ()) {
        result.appendString ("    ioString.appendCString (\", \") ;\n") ;
      }
      index_4222_IDX.increment () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GGS_string (result) ;
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
  GGS_getterMap var_getterMap_4765 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_4798 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_4839 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_4885 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_mWeakReferenceTypeName (), GGS_bool (false), var_initializerMap_4885, var_getterMap_4765, var_setterMap_4798, var_instanceMethodMap_4839, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 99)) ;
  }
  UpEnumerator_getterMap enumerator_5328 (var_getterMap_4765) ;
  while (enumerator_5328.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (enumerator_5328.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 115)) ;
    enumerator_5328.gotoNextObject () ;
  }
  UpEnumerator_setterMap enumerator_5435 (var_setterMap_4798) ;
  while (enumerator_5435.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (enumerator_5435.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray9  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 118)) ;
    enumerator_5435.gotoNextObject () ;
  }
  UpEnumerator_instanceMethodMap enumerator_5542 (var_instanceMethodMap_4839) ;
  while (enumerator_5542.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (enumerator_5542.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 121)) ;
    enumerator_5542.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_5646 = GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 123)) ;
  {
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mWeakReferenceTypeName (), var_features_5646, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 124)) ;
  }
  GGS_unifiedTypeMapEntry var_classIndex_5946 ;
  {
  const GGS_weakReferenceDeclarationAST temp_12 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_12.readProperty_mClassTypeName (), var_classIndex_5946, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 132)) ;
  }
  const GGS_weakReferenceDeclarationAST temp_13 = this ;
  const GGS_weakReferenceDeclarationAST temp_14 = this ;
  const GGS_weakReferenceDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_5964 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_mWeakReferenceTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), var_superClassIndex_3889, GGS_typeKindEnum::class_func_weakReferenceType (var_classIndex_5946  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 139)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_4885, var_classFunctionMap_4565, GGS_getterMap::init (inCompiler COMMA_HERE), GGS_setterMap::init (inCompiler COMMA_HERE), GGS_instanceMethodMap::init (inCompiler COMMA_HERE), GGS_classMethodMap::init (inCompiler COMMA_HERE), var_classIndex_5946, GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_5646, var_generateHeaderInSeparateFile_3917, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 156)), GGS_string ("weak-reference-").add_operation (temp_15.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 157)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 157)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 158)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_5964.readProperty_typeName (), var_typeDefinition_5964, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 160)) ;
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
  GGS_lstring var_weakRefTypeNameForUsefulness_7659 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 177)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_7659, var_weakRefTypeNameForUsefulness_7659, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 178)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_weakReferenceDeclarationAST temp_3 = this ;
      GGS_lstring var_superWeakRefNameForUsefulness_7910 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 180)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_7659, var_superWeakRefNameForUsefulness_7910 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 181)) ;
      }
    }
  }
  const GGS_weakReferenceDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8169 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 184)) ;
  const GGS_weakReferenceDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry temp_6 ;
  const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_7) {
    temp_6 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 187)) ;
  }else if (GalgasBool::boolFalse == test_7) {
    const GGS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 188)) ;
  }
  GGS_unifiedTypeMapEntry var_superClassEntry_8290 = temp_6 ;
  const GGS_weakReferenceDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_referenceClassType_8516 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 191)) ;
  const GGS_weakReferenceDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_optionalClassTypeOrNull_8650 = extensionGetter_typeMapEntryOrNullForLKey (ioArgument_ioTypeMap, function_makeOptionalTypeLName (temp_10.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 195)) ;
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_weakReferenceTypeForGeneration::init_21_infoMessage_21__21__21__21__21_ (GGS_string ("weak reference ").add_operation (temp_11.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 199)), var_selfType_8169, var_referenceClassType_8516, var_superClassEntry_8290, extensionGetter_definition (var_selfType_8169, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 203)).readProperty_generateHeaderInSeparateFile (), var_optionalClassTypeOrNull_8650, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 198)) ;
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
  GGS_unifiedTypeDefinition var_typeDefinition_10104 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 227)) ;
  GGS_string var_optionalClassTypeNameRepresentation_10166 ;
  const GGS_weakReferenceTypeForGeneration temp_5 = this ;
  switch (temp_5.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_10166 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_10315__0 ;
      temp_5.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_10315__0) ;
      const GGS_weakReferenceTypeForGeneration temp_6 = this ;
      var_optionalClassTypeNameRepresentation_10166 = extensionGetter_identifierRepresentation (temp_6.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 233)) ;
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
  outArgument_outHeader = GGS_string (filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_7.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 236)), extensionGetter_identifierRepresentation (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 237)), temp_10, var_optionalClassTypeNameRepresentation_10166 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 235))) ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typeDefinition_10104.readProperty_typeName ().readProperty_string (), var_typeDefinition_10104.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 243)), var_typeDefinition_10104.readProperty_isConcrete (), var_typeDefinition_10104.readProperty_initializerMap (), var_typeDefinition_10104.readProperty_classFunctionMap (), var_typeDefinition_10104.readProperty_getterMap (), var_typeDefinition_10104.readProperty_setterMap (), var_typeDefinition_10104.readProperty_instanceMethodMap (), var_typeDefinition_10104.readProperty_classMethodMap (), var_typeDefinition_10104.readProperty_readSubscriptMap (), var_typeDefinition_10104.readProperty_writeSubscriptMap (), var_typeDefinition_10104.readProperty_enumerationDescriptorList (), var_typeDefinition_10104.readProperty_features (), var_typeDefinition_10104.readProperty_typeForEnumeratedElement (), var_typeDefinition_10104.readProperty_supportArrayLiteral () COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 241))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 241)) ;
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
  GGS_unifiedTypeDefinition var_typeDefinition_11742 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 268)) ;
  GGS_string var_optionalClassTypeNameRepresentation_11804 ;
  const GGS_weakReferenceTypeForGeneration temp_2 = this ;
  switch (temp_2.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_11804 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_11953__0 ;
      temp_2.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_11953__0) ;
      const GGS_weakReferenceTypeForGeneration temp_3 = this ;
      var_optionalClassTypeNameRepresentation_11804 = extensionGetter_identifierRepresentation (temp_3.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 274)) ;
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
  outArgument_outImplementation = GGS_string (filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 278)), var_typeDefinition_11742.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 279)), temp_7, var_optionalClassTypeNameRepresentation_11804 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 277))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'weakClassGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_weakClassGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_weakClassGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_weakClassGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_weakClassGenerationTemplate_0,
  0,
  gWrapperAllDirectories_weakClassGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'weakClassGenerationTemplate weakReferenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                             const GGS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 2)).add_operation (GGS_string (" weak reference class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Constructor and assignment from strong reference\n  public: GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n  public: GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const class GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Constructor and assignment from optional reference\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::notEqual, in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("  public: GGS_") ;
    result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const class GGS_") ;
    result.appendString (in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------- nil initializer\n  public: inline static GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" init_nil (void) {\n    GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;\n    return result ;\n  }\n\n//--------------------------------- Bang operator\n  public: GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" bang_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;\n\n//--------------------------------- isValuated\n  public: inline bool isValuated (void) const {\n    return isValid () && (ptr () != nullptr) ;\n  }\n\n//--------------------------------- Unwrapped value\n  public: GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" unwrappedValue (void) const ;\n\n//--------------------------------- GALGAS read only properties\n  public: inline GGS_bool readProperty_isNil (void) const {\n    return GGS_bool (isValid (), ptr () == nullptr) ;\n  }\n\n  public: inline GGS_bool readProperty_isSome (void) const {\n    return GGS_bool (isValid (), ptr () != nullptr) ;\n  }\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'weakClassGenerationTemplate weakReferenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                                         const GGS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const GGS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const GGS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const GGS_string & in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    PtrWeakReferenceProxy * myPtr = mProxyPtr ;\n    const size_t myObjectPtr = size_t (myPtr) ;\n    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;\n    const size_t operandObjectPtr = size_t (operandPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  PtrWeakReferenceProxy * proxyPtr = nullptr ;\n  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;\n  if (p != nullptr) {\n    proxyPtr = p->getProxy () ;\n  }\n  macroAssignSharedObject (mProxyPtr, proxyPtr) ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" (inSource) {\n}\n\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::GGS_") ;
    result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const class GGS_") ;
    result.appendString (in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) :\n") ;
    const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    switch (test_3) {
    case GalgasBool::boolTrue : {
      result.appendString ("AC_GALGAS_weak_reference") ;
      } break ;
    case GalgasBool::boolFalse : {
      result.appendString ("GGS_") ;
      result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString (" () {\n  if (inSource.isValid ()) {\n    if (inSource.isNil ()) {\n      macroMyNew (mProxyPtr, PtrWeakReferenceProxy (HERE)) ;\n    }else if (inSource.isValuated ()) {\n      const GGS_") ;
    result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" v = inSource.unwrappedValue () ;\n      AbstractStrongPtrClass * ptr = (AbstractStrongPtrClass *) v.ptr () ;\n      if (ptr != nullptr) {\n        PtrWeakReferenceProxy * proxy = ptr->getProxy () ;\n        macroAssignSharedObject (mProxyPtr, proxy) ;\n      }\n    }\n  }\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_nil (LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::unwrappedValue (void) const {\n  GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    const cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) ptr () ;\n    if (nullptr != p) {\n      result = GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (p) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::bang_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mProxyPtr != nullptr) {\n    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;\n    if (strongPtr == nullptr) {\n      inCompiler->onTheFlySemanticError (\"weak reference is nil\" COMMA_THERE) ;\n    }else{\n      macroValidSharedObject (strongPtr, cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n      result = GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ((cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) strongPtr) ;\n    }\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
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
      test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_4492.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 124)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
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
  GGS_instanceMethodMap var_instanceMethodMap_9402 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_2 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_9451 (temp_2.readProperty_mConstantList ()) ;
  while (enumerator_9451.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_9451.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 235)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS__5B_unifiedTypeMapEntry_5D_ var_associatedTypeList_9560 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
        GGS__5B_formalParameterSignatureElement_5D_ var_argumentTypeList_9632 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_associatedValue_5D_ enumerator_9695 (enumerator_9451.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_9695.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_associatedTypeEntry_9786 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9695.current (HERE).readProperty_typeName (), var_associatedTypeEntry_9786, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 239)) ;
          }
          var_argumentTypeList_9632.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_9695.current (HERE).readProperty_valueName (), var_associatedTypeEntry_9786, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-enum.galgas4", 240)), enumerator_9695.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 240)) ;
          var_associatedTypeList_9560.plusPlusAssignOperation (var_associatedTypeEntry_9786  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 241)) ;
          var_hasAssociatedValues_8542 = GGS_bool (true) ;
          enumerator_9695.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_9402.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("extract").add_operation (enumerator_9451.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 245)), enumerator_9451.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-enum.galgas4", 246)), var_argumentTypeList_9632, enumerator_9451.current (HERE).readProperty_name ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-enum.galgas4", 250)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 244)) ;
        }
      }
    }
    enumerator_9451.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_10414 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_10414, inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 256)) ;
  }
  const GGS_enumDeclarationAST temp_4 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_10450 (temp_4.readProperty_mConstantList ()) ;
  while (enumerator_10450.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_10450.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 258)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_enumDeclarationAST temp_6 = this ;
        GGS_string var_associatedTypeName_10536 = function_makeEmbeddedTypeName (temp_6.readProperty_enumTypeName ().readProperty_string (), enumerator_10450.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 259)) ;
        GGS_string var_optionalTypeName_10641 = function_makeOptionalTypeName (var_associatedTypeName_10536, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 260)) ;
        {
        routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10414, ioArgument_ioTypeMap, GGS_string ("get").add_operation (enumerator_10450.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 264)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 264)), var_optionalTypeName_10641, GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 261)) ;
        }
      }
    }
    enumerator_10450.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_7 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_11047 (temp_7.readProperty_mConstantList ()) ;
  while (enumerator_11047.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10414, ioArgument_ioTypeMap, GGS_string ("is").add_operation (enumerator_11047.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 275)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 275)), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 272)) ;
    }
    enumerator_11047.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_11355 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_enumDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_enumTypeName (), GGS_bool (false), var_initializerMap_11355, var_getterMap_10414, var_setterMap_8347, var_instanceMethodMap_9402, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 282)) ;
  }
  GGS_typeFeatures var_features_11826 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-enum.galgas4", 298)) ;
  const GGS_enumDeclarationAST temp_9 = this ;
  switch (temp_9.readProperty_comparison ().enumValue ()) {
  case GGS_structComparison::Enumeration::invalid:
    break ;
  case GGS_structComparison::Enumeration::enum_none:
    break ;
  case GGS_structComparison::Enumeration::enum_equatable:
    {
      var_features_11826.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 303)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 303)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_11826.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 305)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 305)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 305)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 305)) ;
    }
    break ;
  }
  {
  const GGS_enumDeclarationAST temp_10 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_10.readProperty_enumTypeName (), var_features_11826, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 307)) ;
  }
  const GGS_enumDeclarationAST temp_11 = this ;
  const GGS_enumDeclarationAST temp_12 = this ;
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12297 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_11.readProperty_enumTypeName (), temp_12.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 320)), GGS_typeKindEnum::class_func_enumType (var_constantMap_8510  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 321)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_11355, var_classFunctionMap_8305, var_getterMap_10414, var_setterMap_8347, var_instanceMethodMap_9402, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 332)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_11826, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 338)), GGS_string ("enum-").add_operation (temp_13.readProperty_enumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 339)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 339)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-enum.galgas4", 340)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12297.readProperty_typeName (), var_typeDefinition_12297, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 342)) ;
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
  GGS_lstring var_nameForUsefulness_13944 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 356)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13944, var_nameForUsefulness_13944, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 357)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_enumDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_13944  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 359)) ;
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_associatedValuesTypes_14235 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_constantList_14271 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_enumConstantForGeneration_5D_ var_enumConstantListForGeneration_14336 = GGS__5B_enumConstantForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  GGS_constantIndexMap var_constantMap_14380 = GGS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_3 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_14440 (temp_3.readProperty_mConstantList ()) ;
  while (enumerator_14440.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_14440.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 367)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_enumDeclarationAST temp_5 = this ;
        GGS_string var_associatedTypeName_14526 = function_makeEmbeddedTypeName (temp_5.readProperty_enumTypeName ().readProperty_string (), enumerator_14440.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 368)) ;
        GGS_string var_optionalTypeName_14631 = function_makeOptionalTypeName (var_associatedTypeName_14526, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 369)) ;
        GGS_unifiedTypeMapEntry var_associatedType_14719 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (var_optionalTypeName_14631, enumerator_14440.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 370)) ;
        {
        var_associatedValuesTypes_14235.setter_append (var_associatedType_14719, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 371)) ;
        }
      }
    }
    var_constantList_14271.plusPlusAssignOperation (enumerator_14440.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 373)) ;
    GGS__5B_associatedValueDescriptor_5D_ var_associatedTypeList_14952 = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_HERE) ;
    GGS_stringset var_associatedValueNameSet_14998 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_associatedValue_5D_ enumerator_15065 (enumerator_14440.current (HERE).readProperty_associatedValueTypeList ()) ;
    while (enumerator_15065.hasCurrentObject ()) {
      GGS_lstring var_propertyTypeNameForUsefulness_15104 = function_typeNameForUsefulEntitiesGraph (enumerator_15065.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 377)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13944, var_propertyTypeNameForUsefulness_15104 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 378)) ;
      }
      GGS_unifiedTypeMapEntry var_associatedTypeEntry_15309 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_15065.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 379)) ;
      var_associatedTypeList_14952.plusPlusAssignOperation (GGS_associatedValueDescriptor::init_21__21_ (var_associatedTypeEntry_15309, enumerator_15065.current (HERE).readProperty_valueName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 380)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_associatedValueNameSet_14998.getter_contains (enumerator_15065.current (HERE).readProperty_valueName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 381)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_15065.current (HERE).readProperty_valueName ().readProperty_location (), GGS_string ("duplicated name"), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 382)) ;
        }
      }
      var_associatedValueNameSet_14998.plusPlusAssignOperation (enumerator_15065.current (HERE).readProperty_valueName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 384)) ;
      const GGS_enumDeclarationAST temp_8 = this ;
      switch (temp_8.readProperty_comparison ().enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GGS_unifiedTypeDefinition var_associatedType_15807 = extensionGetter_definition (var_associatedTypeEntry_15309, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 389)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_associatedType_15807.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 390)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 390)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 390)).operator_and (var_associatedType_15807.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 391)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 391)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 391)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 390)).operator_and (var_associatedType_15807.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-enum.galgas4", 392)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 392)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 392)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 391)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_15065.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_15065.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 393)).add_operation (GGS_string (" should be equatable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 393)), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 393)) ;
            }
          }
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GGS_unifiedTypeDefinition var_associatedType_16222 = extensionGetter_definition (var_associatedTypeEntry_15309, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 396)) ;
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = var_associatedType_16222.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 397)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 397)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 397)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_15065.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_15065.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 398)).add_operation (GGS_string (" should be comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 398)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 398)) ;
            }
          }
        }
        break ;
      }
      enumerator_15065.gotoNextObject () ;
    }
    {
    var_constantMap_14380.setter_insertKey (enumerator_14440.current (HERE).readProperty_name (), var_constantMap_14380.getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 402)), var_associatedTypeList_14952, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 402)) ;
    }
    var_enumConstantListForGeneration_14336.plusPlusAssignOperation (GGS_enumConstantForGeneration::init_21__21_ (enumerator_14440.current (HERE).readProperty_name ().readProperty_string (), var_associatedTypeList_14952, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 403)) ;
    enumerator_14440.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeMapEntry var_selfType_16674 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_13.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 406)) ;
  const GGS_enumDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_enumTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("enum ").add_operation (temp_14.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 408)), var_selfType_16674, var_enumConstantListForGeneration_14336, var_associatedValuesTypes_14235, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 407)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_hasAssociatedValues_17934 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_17987 (temp_0.readProperty_constantList ()) ;
  bool bool_1 = var_hasAssociatedValues_17934.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 439)).isValidAndTrue () ;
  if (enumerator_17987.hasCurrentObject () && bool_1) {
    while (enumerator_17987.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_17934 = GGS_bool (ComparisonKind::greaterThan, enumerator_17987.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 440)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_17987.gotoNextObject () ;
      if (enumerator_17987.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_17934.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 439)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_18120 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 442)) ;
  const GGS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypeDefinition_18120.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_18120.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 445)), temp_3.readProperty_constantList (), var_hasAssociatedValues_17934 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 443))) ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_18120.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_18120.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 451)), var_selfTypeDefinition_18120.readProperty_isConcrete (), var_selfTypeDefinition_18120.readProperty_initializerMap (), var_selfTypeDefinition_18120.readProperty_classFunctionMap (), var_selfTypeDefinition_18120.readProperty_getterMap (), var_selfTypeDefinition_18120.readProperty_setterMap (), var_selfTypeDefinition_18120.readProperty_instanceMethodMap (), var_selfTypeDefinition_18120.readProperty_classMethodMap (), var_selfTypeDefinition_18120.readProperty_readSubscriptMap (), var_selfTypeDefinition_18120.readProperty_writeSubscriptMap (), var_selfTypeDefinition_18120.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_18120.readProperty_features (), var_selfTypeDefinition_18120.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_18120.readProperty_supportArrayLiteral () COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 449))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 449)) ;
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
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_19512 (temp_0.readProperty_associatedValuesTypes ()) ;
  while (enumerator_19512.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19512.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 474)) ;
    enumerator_19512.gotoNextObject () ;
  }
  GGS_bool var_hasAssociatedValues_19607 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_1 = this ;
  UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_19660 (temp_1.readProperty_constantList ()) ;
  bool bool_2 = var_hasAssociatedValues_19607.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 477)).isValidAndTrue () ;
  if (enumerator_19660.hasCurrentObject () && bool_2) {
    while (enumerator_19660.hasCurrentObject () && bool_2) {
      var_hasAssociatedValues_19607 = GGS_bool (ComparisonKind::greaterThan, enumerator_19660.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 478)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_19660.gotoNextObject () ;
      if (enumerator_19660.hasCurrentObject ()) {
        bool_2 = var_hasAssociatedValues_19607.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 477)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 480)) ;
  const GGS_enumTypeForGeneration temp_4 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_19854 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 481)) ;
  const GGS_enumTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_19854.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_19854.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 484)), temp_5.readProperty_constantList (), var_hasAssociatedValues_19607, extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_19854.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 487)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 482))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (Compiler * inCompiler,
                                                                          const GGS_string & /* in_TYPE_5F_NAME */,
                                                                          const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                          const GGS__5B_enumConstantForGeneration_5D_ & in_CONSTANT_5F_LIST,
                                                                          const GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   enum ") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Enumeration\n  public: enum class Enumeration {\n    invalid") ;
  GGS_uint index_519_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_519 (in_CONSTANT_5F_LIST) ;
    while (enumerator_519.hasCurrentObject ()) {
      result.appendString (",\n    enum_") ;
      result.appendString (enumerator_519.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 13)).stringValue ()) ;
      enumerator_519.gotoNextObject () ;
      index_519_.increment () ;
    }
  }
  result.appendString ("\n  } ;\n  \n//--------------------------------- Private properties\n") ;
  const GalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  private: Enumeration mEnum ;\n\n//--------------------------------- Associated value extraction\n") ;
  GGS_uint index_890_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_890 (in_CONSTANT_5F_LIST) ;
    while (enumerator_890.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_890.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 28)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("  public: void getAssociatedValuesFor_") ;
        result.appendString (enumerator_890.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_1095_idx (0) ;
        if (enumerator_890.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_1095 (enumerator_890.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_1095.hasCurrentObject ()) {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1095.current_entry (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 31)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_1095.current_entry (HERE).readProperty_name ().stringValue ()) ;
            enumerator_1095.gotoNextObject () ;
            if (enumerator_1095.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_1095_idx.increment () ;
          }
        }
        result.appendString (") const ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_890.gotoNextObject () ;
      index_890_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override {\n    return Enumeration::invalid != mEnum ;\n  }\n\n  public: inline void drop (void) override {\n    mEnum = Enumeration::invalid ;\n") ;
  const GalgasBool test_2 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("    mAssociatedValues.drop () ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  public: inline Enumeration enumValue (void) const {\n    return mEnum ;\n  }\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (Compiler * inCompiler,
                                                                                      const GGS_string & in_TYPE_5F_NAME,
                                                                                      const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GGS__5B_enumConstantForGeneration_5D_ & in_CONSTANT_5F_LIST,
                                                                                      const GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES,
                                                                                      const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  Enum ") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const GalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("mAssociatedValues (),\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("mEnum (Enumeration::invalid) {\n}\n\n\n") ;
  GGS_uint index_410_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_410 (in_CONSTANT_5F_LIST) ;
    while (enumerator_410.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_410.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 18)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("UNUSED_LOCATION_ARGS") ;
        } break ;
      case GalgasBool::boolFalse : {
        GGS_uint index_777_idx (0) ;
        if (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_777 (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_777.hasCurrentObject ()) {
            result.appendString ("const GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_777.current_entry (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            result.appendString (" & inAssociatedValue") ;
            result.appendString (index_777_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            enumerator_777.gotoNextObject () ;
            if (enumerator_777.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_777_idx.increment () ;
          }
        }
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_UNUSED_LOCATION_ARGS") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (") {\n  GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" result ;\n  result.mEnum = Enumeration::enum_") ;
      result.appendString (enumerator_410.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" ;\n") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 30)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("  AC_GALGAS_root * p = nullptr ;\n  macroMyNew (p, GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_410.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 32)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 32)).stringValue ()) ;
        result.appendString (" (") ;
        GGS_uint index_1341_idx (0) ;
        if (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_1341 (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_1341.hasCurrentObject ()) {
            result.appendString ("inAssociatedValue") ;
            result.appendString (index_1341_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 34)).stringValue ()) ;
            enumerator_1341.gotoNextObject () ;
            if (enumerator_1341.hasCurrentObject ()) {
              result.appendString (", ") ;
            }
            index_1341_idx.increment () ;
          }
        }
        result.appendString (")) ;\n  EnumerationAssociatedValues * eav = nullptr ;\n  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;\n  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues\n  macroDetachSharedObject (eav) ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("  return result ;\n}\n\n") ;
      enumerator_410.gotoNextObject () ;
      index_410_.increment () ;
    }
  }
  GGS_uint index_1765_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_1765 (in_CONSTANT_5F_LIST) ;
    while (enumerator_1765.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 48)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::method_extract") ;
        result.appendString (enumerator_1765.current_entry (HERE).readProperty_name ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 50)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 50)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_2107_ (0) ;
        if (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_2107 (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_2107.hasCurrentObject ()) {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2107.current_entry (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 52)).stringValue ()) ;
            result.appendString (" & outAssociatedValue_") ;
            result.appendString (enumerator_2107.current_entry (HERE).readProperty_name ().stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            enumerator_2107.gotoNextObject () ;
            index_2107_.increment () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (mEnum != Enumeration::enum_") ;
        result.appendString (enumerator_1765.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 56)).stringValue ()) ;
        result.appendString (") {\n") ;
        GGS_uint index_2446_idx (0) ;
        if (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_2446 (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_2446.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue_") ;
            result.appendString (enumerator_2446.current_entry (HERE).readProperty_name ().stringValue ()) ;
            result.appendString (".drop () ;\n") ;
            enumerator_2446.gotoNextObject () ;
            index_2446_idx.increment () ;
          }
        }
        result.appendString ("    String s ;\n    s.appendCString (\"proc @") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (".") ;
        result.appendString (enumerator_1765.current_entry (HERE).readProperty_name ().stringValue ()) ;
        result.appendString (" invoked with an invalid enum value\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const auto ptr = (GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_1765.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 64)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 64)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GGS_uint index_2967_idx (0) ;
        if (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_2967 (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_2967.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue_") ;
            result.appendString (enumerator_2967.current_entry (HERE).readProperty_name ().stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_2967.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).stringValue ()) ;
            result.appendString (" ;\n") ;
            enumerator_2967.gotoNextObject () ;
            index_2967_idx.increment () ;
          }
        }
        result.appendString ("  }\n}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1765.gotoNextObject () ;
      index_1765_.increment () ;
    }
  }
  GGS_uint index_3169_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_3169 (in_CONSTANT_5F_LIST) ;
    while (enumerator_3169.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_3169.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3169.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString ("_3F_ GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getter_get") ;
        result.appendString (enumerator_3169.current_entry (HERE).readProperty_name ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3169.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 77)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 77)).stringValue ()) ;
        result.appendString ("_3F_ result ;\n  if (mEnum == Enumeration::enum_") ;
        result.appendString (enumerator_3169.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (") {\n    const auto ptr = (const GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3169.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n    result = GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3169.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 80)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 80)).stringValue ()) ;
        result.appendString (" (*ptr) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getAssociatedValuesFor_") ;
        result.appendString (enumerator_3169.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 85)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_4385_idx (0) ;
        if (enumerator_3169.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_4385 (enumerator_3169.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_4385.hasCurrentObject ()) {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_4385.current_entry (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 87)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_4385.current_entry (HERE).readProperty_name ().stringValue ()) ;
            enumerator_4385.gotoNextObject () ;
            if (enumerator_4385.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_4385_idx.increment () ;
          }
        }
        result.appendString (") const {\n  const auto ptr = (const GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3169.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 91)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 91)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GGS_uint index_4753_ (0) ;
        if (enumerator_3169.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_4753 (enumerator_3169.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_4753.hasCurrentObject ()) {
            result.appendString ("  out_") ;
            result.appendString (enumerator_4753.current_entry (HERE).readProperty_name ().stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_4753.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 93)).stringValue ()) ;
            result.appendString (" ;\n") ;
            enumerator_4753.gotoNextObject () ;
            index_4753_.increment () ;
          }
        }
        result.appendString ("}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3169.gotoNextObject () ;
      index_3169_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_CONSTANT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).stringValue ()) ;
  result.appendString ("] = {\n  \"(not built)\"") ;
  GGS_uint index_5149_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_5149 (in_CONSTANT_5F_LIST) ;
    while (enumerator_5149.hasCurrentObject ()) {
      result.appendString (",\n  ") ;
      result.appendString (enumerator_5149.current_entry (HERE).readProperty_name ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 104)).stringValue ()) ;
      enumerator_5149.gotoNextObject () ;
      index_5149_.increment () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  GGS_uint index_5250_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_5250 (in_CONSTANT_5F_LIST) ;
    while (enumerator_5250.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_is") ;
      result.appendString (enumerator_5250.current_entry (HERE).readProperty_name ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 113)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_") ;
      result.appendString (enumerator_5250.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" == mEnum) ;\n}\n\n") ;
      enumerator_5250.gotoNextObject () ;
      index_5250_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t ") ;
  const GalgasBool test_5 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("inIndentation") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("/* inIndentation */") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") const {\n  ioString.appendCString (\"<enum @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (": \") ;\n  ioString.appendCString (gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [size_t (mEnum)]) ;\n") ;
  const GalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("  mAssociatedValues.description (ioString, inIndentation) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  ioString.appendCString (\">\") ;\n}\n\n") ;
  const GalgasBool test_7 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mEnum < inOperand.mEnum) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mEnum > inOperand.mEnum) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n") ;
    const GalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
    switch (test_8) {
    case GalgasBool::boolTrue : {
      result.appendString ("      switch (mEnum) {\n") ;
      GGS_uint index_6861_ (0) ;
      if (in_CONSTANT_5F_LIST.isValid ()) {
        UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_6861 (in_CONSTANT_5F_LIST) ;
        while (enumerator_6861.hasCurrentObject ()) {
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, enumerator_6861.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 152)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_9) {
          case GalgasBool::boolTrue : {
            result.appendString ("      case Enumeration::enum_") ;
            result.appendString (enumerator_6861.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 153)).stringValue ()) ;
            result.appendString (": {\n        const auto left = (GGS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_6861.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).stringValue ()) ;
            result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n        const auto right = (GGS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_6861.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue ()) ;
            result.appendString (" *) inOperand.mAssociatedValues.associatedValuesPointer () ;\n        result = left->objectCompare (*right) ;\n        }break ;\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_6861.gotoNextObject () ;
          index_6861_.increment () ;
        }
      }
      result.appendString ("      default:\n        result = ComparisonResult::operandEqual ;\n        break ;\n      }\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      result.appendString ("      result = ComparisonResult::operandEqual ;\n") ;
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("    }\n  }\n  return result ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
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
  GGS_initializerMap var_initializerMap_5479 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_5536 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionSetDeclarationAST temp_7 = this ;
  var_initializerMap_5479.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_5536, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 135)), temp_7.readProperty_mOptionSetTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_5536, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 134)) ;
  }
  GGS_setterMap var_setterMap_5738 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_5781 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionSetDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mOptionSetTypeName (), GGS_bool (false), var_initializerMap_5479, var_getterMap_4874, var_setterMap_5738, var_instanceMethodMap_5781, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 141)) ;
  }
  GGS_typeFeatures var_features_6262 = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 157)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 157)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 157)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 157)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 157)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 158)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 157)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-optionset.galgas4", 159)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 158)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 159)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 159)).operator_or (GGS_typeFeatures::class_func_andAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 160)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 159)).operator_or (GGS_typeFeatures::class_func_orAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 161)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 160)).operator_or (GGS_typeFeatures::class_func_xorAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 162)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 161)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 163)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 162)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_optionSetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isEquatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      var_features_6262.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optionset.galgas4", 165)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 165)) ;
    }
  }
  {
  const GGS_optionSetDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mOptionSetTypeName (), var_features_6262, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 167)) ;
  }
  const GGS_optionSetDeclarationAST temp_12 = this ;
  const GGS_optionSetDeclarationAST temp_13 = this ;
  const GGS_optionSetDeclarationAST temp_14 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_6950 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_12.readProperty_mOptionSetTypeName (), temp_13.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 180)), GGS_typeKindEnum::class_func_optionsetType (SOURCE_FILE ("declaration-type-optionset.galgas4", 181)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_5479, var_classFunctionMap_5205, var_getterMap_4874, var_setterMap_5738, var_instanceMethodMap_5781, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 192)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_6262, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 198)), GGS_string ("optionset-").add_operation (temp_14.readProperty_mOptionSetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 199)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 199)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-optionset.galgas4", 200)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_6950.readProperty_typeName (), var_typeDefinition_6950, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 202)) ;
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
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 215)).objectCompare (GGS_uint (uint32_t (64U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionSetDeclarationAST temp_2 = this ;
      GGS_location var_s_8700 = temp_2.readProperty_mFlagList ().readSubcript__3F_ (GGS_uint (uint32_t (64U)), inCompiler COMMA_HERE).readProperty_location () ;
      const GGS_optionSetDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_8700, GGS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 217)).getter_string (SOURCE_FILE ("declaration-type-optionset.galgas4", 217)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 217)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 217)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 217)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_5 = this ;
  GGS_lstring var_optionSetNameForUsefulness_8847 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mOptionSetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 220)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_optionSetNameForUsefulness_8847, var_optionSetNameForUsefulness_8847, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 221)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_optionSetDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_optionSetNameForUsefulness_8847  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 223)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_8 = this ;
  GGS_lstring var_initializerNameForUsefulness_9202 = function_initializerNameForUsefulEntitiesGraph (temp_8.readProperty_mOptionSetTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 226)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_9202, var_initializerNameForUsefulness_9202, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 230)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_optionSetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_9202  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 232)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_11 = this ;
  const GGS_optionSetDeclarationAST temp_12 = this ;
  const GGS_optionSetDeclarationAST temp_13 = this ;
  const GGS_optionSetDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_optionSetTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("optionset ").add_operation (temp_11.readProperty_mOptionSetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 236)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mOptionSetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 237)), temp_13.readProperty_mFlagList (), temp_14.readProperty_isEquatable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 235)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                    GGS_string & outArgument_outHeader,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionSetTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_10531 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 259)) ;
  const GGS_optionSetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_structGenerationTemplate_optionSetTypeHeader_31_ (inCompiler, var_selfTypeDefinition_10531.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_10531.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 262)), temp_1.readProperty_mFlagList () COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 260))) ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_10531.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_10531.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 267)), var_selfTypeDefinition_10531.readProperty_isConcrete (), var_selfTypeDefinition_10531.readProperty_initializerMap (), var_selfTypeDefinition_10531.readProperty_classFunctionMap (), var_selfTypeDefinition_10531.readProperty_getterMap (), var_selfTypeDefinition_10531.readProperty_setterMap (), var_selfTypeDefinition_10531.readProperty_instanceMethodMap (), var_selfTypeDefinition_10531.readProperty_classMethodMap (), var_selfTypeDefinition_10531.readProperty_readSubscriptMap (), var_selfTypeDefinition_10531.readProperty_writeSubscriptMap (), var_selfTypeDefinition_10531.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_10531.readProperty_features (), var_selfTypeDefinition_10531.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_10531.readProperty_supportArrayLiteral () COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 265))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 265)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 289)) ;
  const GGS_optionSetTypeForGeneration temp_1 = this ;
  const GGS_optionSetTypeForGeneration temp_2 = this ;
  const GGS_optionSetTypeForGeneration temp_3 = this ;
  const GGS_optionSetTypeForGeneration temp_4 = this ;
  const GGS_optionSetTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_structGenerationTemplate_optionSetTypeSpecificImplementation (inCompiler, extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 291)).readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 292)), temp_3.readProperty_mFlagList (), GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 294)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 294)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 294)).subtract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 294)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 294)), temp_5.readProperty_equatable () COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 290))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'structGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate optionSetTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structGenerationTemplate_optionSetTypeHeader_31_ (Compiler * inCompiler,
                                                                                 const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                 const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const GGS__5B_lstring_5D_ & /* in_SLOT_5F_LIST */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: optionset @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_option_set.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--------------------------------- Properties\n  private: uint64_t mFlags ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Private constructor\n  private: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate optionSetTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structGenerationTemplate_optionSetTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                             const GGS_string & in_TYPE_5F_NAME,
                                                                                             const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const GGS__5B_lstring_5D_ & in_SLOT_5F_LIST,
                                                                                             const GGS_bigint & in_FULL_5F_SET,
                                                                                             const GGS_bool & in_EQUATABLE
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmFlags (0),\nmIsValid (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) :\nAC_GALGAS_root (),\nmFlags (inFlags),\nmIsValid (true) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  return GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (0) ;\n}\n\n") ;
  GGS_uint index_713_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_713 (in_SLOT_5F_LIST) ;
    while (enumerator_713.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_713.current_entry (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_option_set.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" (uint64_t (1) << ") ;
      result.appendString (index_713_idx.getter_string (SOURCE_FILE ("GALGAS_option_set.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      enumerator_713.gotoNextObject () ;
      index_713_idx.increment () ;
    }
  }
  const GalgasBool test_0 = in_EQUATABLE.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::invalid ;\n   if (mIsValid && inOperand.mIsValid) {\n     result = ComparisonResult::operandEqual ;\n     if (mFlags < inOperand.mFlags) {\n       result = ComparisonResult::firstOperandLowerThanSecond ;\n     }else if (mFlags > inOperand.mFlags) {\n       result = ComparisonResult::firstOperandGreaterThanSecond ;\n     }\n   }\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mIsValid ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_contains (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = GGS_bool ((mFlags & inOperand.mFlags) != 0) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::andAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags &= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::orAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags |= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::xorAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags ^= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::minusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags &= ~ inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_or (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags | inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_and (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_xor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags ^ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::subtract_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & ~ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_tilde (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (uint64_t (") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_option_set.cpp.galgasTemplate", 155)).stringValue ()) ;
  result.appendString (") ^ mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<optionset @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GGS_uint index_6275_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_6275 (in_SLOT_5F_LIST) ;
    while (enumerator_6275.hasCurrentObject ()) {
      result.appendString ("    if ((mFlags & (uint64_t (1) << ") ;
      result.appendString (index_6275_idx.getter_string (SOURCE_FILE ("GALGAS_option_set.cpp.galgasTemplate", 170)).stringValue ()) ;
      result.appendString (")) != 0) {\n      ioString.appendCString (\" ") ;
      result.appendString (enumerator_6275.current_entry (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n    }\n") ;
      enumerator_6275.gotoNextObject () ;
      index_6275_idx.increment () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GGS_string (result) ;
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
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6888, ioArgument_ioTypeMap, GGS_string ("undefinedNodeCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 246)) ;
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
  UpEnumerator__5B_graphInsertModifier_5D_ enumerator_13226 (temp_6.readProperty_mInsertModifierList ()) ;
  while (enumerator_13226.hasCurrentObject ()) {
    {
    var_setterMap_6919.setter_insertOrReplace (enumerator_13226.current (HERE).readProperty_mInsertModifierName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 362)), var_formalParameterList_7057, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 365)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 360)) ;
    }
    enumerator_13226.gotoNextObject () ;
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
  GGS_initializerMap var_initializerMap_15095 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_constructorPropertyTypeList_15152 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_7 = this ;
  var_initializerMap_15095.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_15152, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 420)), temp_7.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_15152, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 419)) ;
  }
  {
  const GGS_graphDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mGraphTypeName (), GGS_bool (false), var_initializerMap_15095, var_getterMap_6888, var_setterMap_6919, var_instanceMethodMap_6962, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 424)) ;
  }
  GGS_typeFeatures var_features_15796 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-graph.galgas4", 439)) ;
  {
  const GGS_graphDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_mGraphTypeName (), var_features_15796, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 440)) ;
  }
  const GGS_graphDeclarationAST temp_10 = this ;
  const GGS_graphDeclarationAST temp_11 = this ;
  const GGS_graphDeclarationAST temp_12 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_16076 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_10.readProperty_mGraphTypeName (), temp_11.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 453)), GGS_typeKindEnum::class_func_graphType (SOURCE_FILE ("declaration-type-graph.galgas4", 454)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_15095, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6888, var_setterMap_6919, var_instanceMethodMap_6962, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 465)), GGS_readSubcriptMap::init (inCompiler COMMA_HERE), GGS_writeSubcriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_15796, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 471)), GGS_string ("graph-").add_operation (temp_12.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-graph.galgas4", 472)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 472)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-graph.galgas4", 473)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_16076.readProperty_typeName (), var_typeDefinition_16076, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 475)) ;
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
  GGS_lstring var_nameForUsefulness_17751 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 488)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17751, var_nameForUsefulness_17751, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 489)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_graphDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_17751  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 491)) ;
    }
  }
  const GGS_graphDeclarationAST temp_3 = this ;
  GGS_lstring var_associatedTypeNameForUsefulness_17999 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mAssociatedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 493)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17751, var_associatedTypeNameForUsefulness_17999 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 494)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_graphDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_associatedTypeNameForUsefulness_17999  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 496)) ;
    }
  }
  const GGS_graphDeclarationAST temp_6 = this ;
  GGS_lstring var_initializerNameForUsefulness_18378 = function_initializerNameForUsefulEntitiesGraph (temp_6.readProperty_mGraphTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 501)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 499)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_18378, var_initializerNameForUsefulness_18378, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 503)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_graphDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_18378  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 505)) ;
    }
  }
  const GGS_graphDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_graphTypeEntry_18755 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 508)) ;
  const GGS_graphDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_associatedArrayType_18832 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 509)) ;
  const GGS_graphDeclarationAST temp_11 = this ;
  GGS_unifiedTypeMapEntry var_associatedListElementTypeEntry_18924 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mAssociatedElementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 510)) ;
  GGS_unifiedTypeMapEntry var_lstringArrayTypeEntry_19029 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 511)) ;
  GGS_unifiedTypeMapEntry var_stringArrayTypeEntry_19132 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 512)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 512)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 512)) ;
  GGS_stringset temp_12 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 514)) ;
  temp_12.plusPlusAssignOperation (GGS_string ("noteNode")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 514)) ;
  temp_12.plusPlusAssignOperation (GGS_string ("addArc")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 514)) ;
  GGS_stringset var_reservedModifierNames_19275 = temp_12 ;
  const GGS_graphDeclarationAST temp_13 = this ;
  UpEnumerator__5B_graphInsertModifier_5D_ enumerator_19351 (temp_13.readProperty_mInsertModifierList ()) ;
  while (enumerator_19351.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_reservedModifierNames_19275.getter_contains (enumerator_19351.current (HERE).readProperty_mInsertModifierName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 516)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_19351.current (HERE).readProperty_mInsertModifierName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_19351.current (HERE).readProperty_mInsertModifierName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 518)).add_operation (GGS_string ("' mutating proc name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 518)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 517)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_19351.current (HERE).readProperty_mInsertErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 520)) ;
    }
    enumerator_19351.gotoNextObject () ;
  }
  const GGS_graphDeclarationAST temp_16 = this ;
  const GGS_graphDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_graphDeclarationForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("graph ").add_operation (temp_16.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 524)), var_graphTypeEntry_18755, var_associatedArrayType_18832, var_associatedListElementTypeEntry_18924, var_lstringArrayTypeEntry_19029, var_stringArrayTypeEntry_19132, temp_17.readProperty_mInsertModifierList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 523)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outHeader,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20951 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 553)) ;
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
  outArgument_outHeader = GGS_string (filewrapperTemplate_graphGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypeDefinition_20951.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 559)), temp_5.readProperty_mAssociatedArrayTypeEntry (), temp_6.readProperty_mAssociatedElementTypeEntry (), temp_7.readProperty_mLStringArrayType (), temp_8.readProperty_mStringArrayType () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 557))) ;
  const GGS_graphDeclarationForGeneration temp_9 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_20951.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_9.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 567)), var_selfTypeDefinition_20951.readProperty_isConcrete (), var_selfTypeDefinition_20951.readProperty_initializerMap (), var_selfTypeDefinition_20951.readProperty_classFunctionMap (), var_selfTypeDefinition_20951.readProperty_getterMap (), var_selfTypeDefinition_20951.readProperty_setterMap (), var_selfTypeDefinition_20951.readProperty_instanceMethodMap (), var_selfTypeDefinition_20951.readProperty_classMethodMap (), var_selfTypeDefinition_20951.readProperty_readSubscriptMap (), var_selfTypeDefinition_20951.readProperty_writeSubscriptMap (), var_selfTypeDefinition_20951.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20951.readProperty_features (), var_selfTypeDefinition_20951.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20951.readProperty_supportArrayLiteral () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 565))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 565)) ;
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
  outArgument_outImplementation = GGS_string (filewrapperTemplate_graphGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 594)), temp_5.readProperty_mAssociatedArrayTypeEntry (), temp_6.readProperty_mAssociatedElementTypeEntry (), temp_7.readProperty_mInsertModifierList (), temp_8.readProperty_mLStringArrayType (), temp_9.readProperty_mStringArrayType () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 592))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'graphGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_graphGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_graphGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_graphGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_graphGenerationTemplate_0,
  0,
  gWrapperAllDirectories_graphGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'graphGenerationTemplate graphTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_graphGenerationTemplate_graphTypeHeader_31_ (Compiler * inCompiler,
                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                            const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ARRAY_5F_TYPE,
                                                                            const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ELEMENT_5F_TYPE,
                                                                            const GGS_unifiedTypeMapEntry & in_LSTRING_5F_ARRAY_5F_TYPE,
                                                                            const GGS_unifiedTypeMapEntry & in_STRING_5F_ARRAY_5F_TYPE
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 2)).add_operation (GGS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--- Private Data member\n  private: class SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mSharedGraph ;\n\n//--- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Virtual destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- count\n  public: uint32_t count (void) const ;\n\n//--- isValid\n  public: inline bool isValid (void) const override {\n    return mSharedGraph != nullptr ;\n  }\n\n//--- drop\n  public: void drop (void) override ;\n\n//--- Handle copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--- Create a new list\n  protected: void makeNewEmptyGraph (LOCATION_ARGS) ;\n\n//--------------------------------- Getters\n  public: class GGS_uint getter_count (LOCATION_ARGS) const ;\n\n  public: class GGS_bool getter_isNodeDefined (const GGS_string & inKey COMMA_LOCATION_ARGS) const ;\n\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 38)).stringValue ()) ;
  result.appendString (" getter_keyList (LOCATION_ARGS) const ;\n\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 40)).stringValue ()) ;
  result.appendString (" getter_lkeyList (LOCATION_ARGS) const ;\n\n  public: class GGS_uint getter_undefinedNodeCount (LOCATION_ARGS) const ;\n\n  public: class GGS__5B_string_5D_ getter_undefinedNodeKeyList (LOCATION_ARGS) const ;\n\n  public: class GGS_location getter_locationForKey (const GGS_string & inKey,\n                                                    Compiler * inCompiler\n                                                    COMMA_LOCATION_ARGS) const ;\n\n  public: GGS_string getter_graphviz (UNUSED_LOCATION_ARGS) const ;\n\n  public: GGS__5B_stringString_5D_ getter_edges (UNUSED_LOCATION_ARGS) const ;\n\n//--------------------------------- Setters\n  public: void setter_addEdge (const class GGS_lstring & inSourceNodeKey,\n                               const class GGS_lstring & inTargetNodeKey\n                               COMMA_LOCATION_ARGS) ;\n\n  public: void setter_removeEdgesToNode (const GGS_string & inNodeName,\n                                         Compiler * inCompiler\n                                         COMMA_LOCATION_ARGS) ;\n\n  public: void setter_removeEdgesToDominators (LOCATION_ARGS) ;\n\n//--------------------------------- Comparison\n  public: ComparisonResult objectCompare (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const ;\n\n//--- Description\n  public: void description (String & ioString,\n                            const int32_t inIndentation) const override ;\n\n//--- Internal methods for handling graph\n  protected: void reversedGraphFromGraph (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inGraph\n                                          COMMA_LOCATION_ARGS) ;\n\n  protected: void subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                            const class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 77)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                            const class GGS_stringset & inNodesToExclude,\n                            Compiler * inCompiler\n                            COMMA_LOCATION_ARGS) const ;\n\n\n  protected: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 83)).stringValue ()) ;
  result.appendString (" graph (void) const ;\n\n  private: void insulateGraph (LOCATION_ARGS) ;\n\n  protected: void internalAddNode (const GGS_lstring & inKey,\n                                   const char * inErrorMessage,\n                                   const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 89)).stringValue ()) ;
  result.appendString (" & inElement,\n                                   Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) ;\n\n  public: void setter_noteNode (const GGS_lstring & inKey\n                                COMMA_LOCATION_ARGS) ;\n\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 96)).stringValue ()) ;
  result.appendString (" getter_undefinedNodeReferenceList (LOCATION_ARGS) const ;\n\n  protected: void internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 98)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 99)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 100)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 101)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                           Compiler * inCompiler\n                                           COMMA_LOCATION_ARGS) const ;\n\n  protected: void internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 105)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 106)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                             COMMA_UNUSED_LOCATION_ARGS) const ;\n\n  protected: void internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 109)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 110)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList\n                                                  COMMA_LOCATION_ARGS) const ;\n\n  protected: void internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 113)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 114)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList\n                                                COMMA_LOCATION_ARGS) const ;\n\n\n  protected: void internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 118)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 119)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 120)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 121)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                                     Compiler * inCompiler\n                                                     COMMA_LOCATION_ARGS) const ;\n\n  friend class SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'graphGenerationTemplate graphTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_graphGenerationTemplate_graphTypeSpecificImplementation (Compiler * inCompiler,
                                                                                        const GGS_unifiedTypeMapEntry & /* in_TYPE */,
                                                                                        const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ARRAY_5F_TYPE,
                                                                                        const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ELEMENT_5F_TYPE,
                                                                                        const GGS__5B_graphInsertModifier_5D_ & in_INSERT_5F_MODIFIER_5F_LIST,
                                                                                        const GGS_unifiedTypeMapEntry & in_LSTRING_5F_ARRAY_5F_TYPE,
                                                                                        const GGS_unifiedTypeMapEntry & in_STRING_5F_ARRAY_5F_TYPE
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mInfPtr ;\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mSupPtr ;\n  public: int32_t mBalance ;\n  public: const String mKey ;\n  public: const uint32_t mNodeID ;\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" mElement ;\n  public: GGS_location mDefinitionLocation ;\n  public: GenericUniqueArray <GGS_location> mReferenceLocationArray ;\n  public: bool mIsDefined ;\n\n//--- Constructors\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const String & inKey,\n                                        const uint32_t inNodeID) ;\n\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) ;\n\n  public: void accumulateNodes (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" & outNodeList) const ;\n\n//--- Destructor\n  public: ~ GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- No copy\n  private: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n  macroMyDelete (mInfPtr) ;\n  macroMyDelete (mSupPtr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nclass SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public SharedObject {\n//--------------------------------- Attributes\n  private: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mRoot ;\n  public: inline const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * root (void) const { return mRoot ; }\n  private: DirectedGraph mDirectedGraph ;\n  private: GenericUniqueArray <GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> mNodeArray ;\n\n//--- Constructor\n  public: SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (LOCATION_ARGS) ;\n\n//--- Destructor\n  public: virtual ~ SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Count\n  public: inline uint32_t allNodeCount (void) const { return (uint32_t) mNodeArray.count () ; }\n\n//--- isNodeDefined\n  public: bool isNodeDefined (const String & inKey) const ;\n\n//--- locationForKey\n  public: GGS_location locationForKey (const String & inKey,\n                                          Compiler * inCompiler\n                                          COMMA_LOCATION_ARGS) const ;\n\n//--- Internal methods\n  public: void description (String & ioString,\n                            const int32_t inIndentation) const ;\n\n  public: void copyFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) ;\n\n  public: void copyReversedGraphFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) ;\n\n  public: int32_t graphCompare (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inOperand) const ;\n\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * findOrAddNodeForKey (const String & inKey) ;\n\n  protected: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * internalInsert (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr,\n                                          const String & inKey,\n                                          bool & ioExtension) ;\n\n  public: void internalAddNode (const GGS_lstring & inKey,\n                                const char * inErrorMessage,\n                                const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.appendString (" & inElement,\n                                Compiler * inCompiler\n                                COMMA_LOCATION_ARGS) ;\n\n  public: void addEdge (const String & inSourceNodeKey,\n                        const GGS_location & inSourceNodeLocation,\n                        const String & inTargetNodeKey,\n                        const GGS_location & inTargetNodeLocation) ;\n\n  public: void removeEdgesToDominators (LOCATION_ARGS) ;\n\n  public: void removeEdgesToNode (const String & inNodeName,\n                                  Compiler * inCompiler\n                                  COMMA_LOCATION_ARGS) ;\n\n  public: void internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 98)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                        GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 99)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                        GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 100)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                        GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 101)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const ;\n\n\n  public: void internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 104)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                          GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 105)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const ;\n\n  public: void internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 107)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 108)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const ;\n\n  public: void internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 110)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 111)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const ;\n\n  public: void internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 113)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 114)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 115)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 116)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const ;\n\n  public: void subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                         const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 119)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                         const GGS_stringset & inNodesToExclude,\n                         Compiler * inCompiler\n                         COMMA_LOCATION_ARGS) const ;\n\n  public: void graph (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 124)).stringValue ()) ;
  result.appendString (" & outNodeList) const ;\n\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 126)).stringValue ()) ;
  result.appendString (" keyList (void) const ;\n\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 128)).stringValue ()) ;
  result.appendString (" lkeyList (void) const ;\n\n  public: String getter_graphviz (void) const ;\n\n  public: void edges (GGS__5B_stringString_5D_ & ioList) const ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: void checkGraph (LOCATION_ARGS) const ;\n  #endif\n\n//--- No copy\n  private: SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nSharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (LOCATION_ARGS) :\nSharedObject (THERE),\nmRoot (nullptr),\nmDirectedGraph (),\nmNodeArray () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nSharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n  macroMyDelete (mRoot) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Copy\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) :\nmInfPtr (nullptr),\nmSupPtr (nullptr),\nmBalance (inNode->mBalance),\nmKey (inNode->mKey),\nmNodeID (inNode->mNodeID),\nmElement (inNode->mElement),\nmDefinitionLocation (inNode->mDefinitionLocation),\nmReferenceLocationArray (),\nmIsDefined (inNode->mIsDefined) {\n  mReferenceLocationArray.setCapacity (inNode->mReferenceLocationArray.count ()) ;\n  for (int32_t i=0 ; i<inNode->mReferenceLocationArray.count () ; i++) {\n    mReferenceLocationArray.appendObject (inNode->mReferenceLocationArray (i COMMA_HERE)) ;\n  }\n  if (nullptr != inNode->mInfPtr) {\n    macroMyNew (mInfPtr, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mInfPtr)) ;\n  }\n  if (nullptr != inNode->mSupPtr) {\n    macroMyNew (mSupPtr, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mSupPtr)) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void buildNodeArray (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                            GenericUniqueArray <GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> & ioNodeArray) {\n  if (nullptr != inNode) {\n    macroAssert (ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) == nullptr, \"ioNodeArray (%lld COMMA_HERE) != nullptr\", inNode->mNodeID, 0) ;\n    ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) = inNode ;\n    buildNodeArray (inNode->mInfPtr, ioNodeArray) ;\n    buildNodeArray (inNode->mSupPtr, ioNodeArray) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copyFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) {\n  macroUniqueSharedObject (this) ;\n  if (nullptr != inSource->mRoot) {\n    macroMyNew (mRoot, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inSource->mRoot)) ;\n    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;\n    buildNodeArray (mRoot, mNodeArray) ;\n    mDirectedGraph = inSource->mDirectedGraph ;\n  }\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkGraph (HERE) ;\n  #endif\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                const int32_t /* inIndentation */) const {\n  ioString.appendCString (\" (\") ;\n  ioString.appendUnsigned (mDirectedGraph.nodeCount ()) ;\n  ioString.appendCString (\" node\") ;\n  ioString.appendCString ((mDirectedGraph.nodeCount () > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\", \") ;\n  ioString.appendUnsigned (mDirectedGraph.edgeCount ()) ;\n  ioString.appendCString (\" edge\") ;\n  ioString.appendCString ((mDirectedGraph.edgeCount () > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\")\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifndef DO_NOT_GENERATE_CHECKINGS\n  void SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::checkGraph (LOCATION_ARGS) const {\n    GenericUniqueArray <GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> nodeArray (mNodeArray.count () COMMA_HERE) ;\n    nodeArray.appendObjects (mNodeArray.count (), nullptr) ;\n    buildNodeArray (mRoot, nodeArray) ;\n    macroAssertThere (nodeArray.count() == mNodeArray.count (), \"nodeArray.count() == %lld != mNodeArray.count () %lld\", nodeArray.count(), mNodeArray.count ()) ;\n    for (int32_t i=0 ; i<nodeArray.count() ; i++) {\n      macroAssertThere (nodeArray (i COMMA_HERE) == mNodeArray (i COMMA_HERE), \"nodeArray.(%lld) != mNodeArray.(%lld)\", i, i) ;\n      macroAssertThere (mDirectedGraph.isNodeDefined ((uint32_t) i), \"! mDirectedGraph.isNodeDefined (i) : %lld != 0\", i, 0) ;\n    }\n  }\n#endif\n\n//--------------------------------------------------------------------------------------------------\n//    GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmSharedGraph (nullptr) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n  macroDetachSharedObject (mSharedGraph) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmSharedGraph (nullptr) {\n  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeNewEmptyGraph (LOCATION_ARGS) {\n  macroMyNew (mSharedGraph, SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                          const int32_t inIndentation) const {\n  ioString.appendCString (\"<graph @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\") ;\n  if (isValid ()) {\n    mSharedGraph->description (ioString, inIndentation) ;\n  }else{\n    ioString.appendCString (\" not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nuint32_t GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::count () const {\n  uint32_t result = 0 ;\n  if (isValid ()) {\n    result = mSharedGraph->allNodeCount () ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  return GGS_uint (count ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  macroDetachSharedObject (mSharedGraph) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::insulateGraph (LOCATION_ARGS) {\n  if ((mSharedGraph != nullptr) && !mSharedGraph->isUniquelyReferenced ()) {\n    SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n    macroMyNew (p, SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n    p->copyFrom (mSharedGraph) ;\n    macroAssignSharedObject (mSharedGraph, p) ;\n    macroDetachSharedObject (p) ;\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_hasKey\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_isNodeDefined (const GGS_string & inKey\n                                                   COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    result = mSharedGraph->isNodeDefined (inKey.stringValue ()) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isNodeDefined (const String & inKey) const {\n  bool result = false ;\n  for (int32_t i=0 ; (i<mNodeArray.count ()) && !result ; i++) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mNodeArray (i COMMA_HERE) ;\n    result = p->mIsDefined && (p->mKey == inKey) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_locationForKey\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_location GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_locationForKey (const GGS_string & inKey,\n                                                     Compiler * inCompiler\n                                                     COMMA_LOCATION_ARGS) const {\n  GGS_location result ;\n  if (isValid () && inKey.isValid ()) {\n    result = mSharedGraph->locationForKey (inKey.stringValue (), inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_location SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::locationForKey (const String & inKey,\n                                          Compiler * inCompiler\n                                          COMMA_LOCATION_ARGS) const {\n  GGS_location result ;\n  bool found = false ;\n  bool ok = false ;\n  for (int32_t i=0 ; (i<mNodeArray.count ()) && !found ; i++) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mNodeArray (i COMMA_HERE) ;\n    found = p->mKey == inKey ;\n    if (found && p->mIsDefined) {\n      ok = true ;\n      result = p->mDefinitionLocation ;\n    }\n  }\n  if (!ok) {\n    inCompiler->emitSemanticError (\n      GGS_location (),\n      String (\"graph locationForKey: node '\") + inKey + String (\"' is undefined\"),\n      GenericArray <FixItDescription> ()\n      COMMA_THERE\n    ) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_keyList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 412)).stringValue ()) ;
  result.appendString (" SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::keyList (void) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 413)).stringValue ()) ;
  result.appendString (" result = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 413)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {\n    result.plusPlusAssignOperation (mNodeArray (i COMMA_HERE)->mKey COMMA_HERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 422)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_keyList (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 423)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    result = mSharedGraph->keyList () ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_lkeyList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 438)).stringValue ()) ;
  result.appendString (" SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::lkeyList (void) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 439)).stringValue ()) ;
  result.appendString (" result = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 439)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mNodeArray (i COMMA_HERE) ;\n    GGS_location loc = p->mDefinitionLocation ;\n    if (! loc.isValid ()) {\n      loc = GGS_location::class_func_nowhere (HERE) ;\n    }\n    result.plusPlusAssignOperation (GGS_lstring (p->mKey, loc) COMMA_HERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 453)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_lkeyList (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 454)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    result = mSharedGraph->lkeyList () ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark internalFindNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * findNode (const String & inKey,\n                                   const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) {\n  const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * result = nullptr ;\n  while ((nullptr != inNode) && (result == nullptr)) {\n    const int32_t r = inKey.compare (inNode->mKey) ;\n    if (r < 0) {\n      inNode = inNode->mInfPtr ;\n    }else if (r > 0) {\n      inNode = inNode->mSupPtr ;\n    }else{\n      result = inNode ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark graph\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::accumulateNodes (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 493)).stringValue ()) ;
  result.appendString (" & outNodeList) const {\n  outNodeList.plusPlusAssignOperation (mElement COMMA_HERE) ;\n  if (mInfPtr != nullptr) {\n    mInfPtr->accumulateNodes (outNodeList) ;\n  }\n  if (mSupPtr != nullptr) {\n    mSupPtr->accumulateNodes (outNodeList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::graph (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 505)).stringValue ()) ;
  result.appendString (" & outNodeList) const {\n  if (mRoot != nullptr) {\n    mRoot->accumulateNodes (outNodeList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 513)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::graph (void) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 514)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    mSharedGraph->graph (result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark subGraph\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                            const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 530)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                            const GGS_stringset & inNodesToExclude,\n                            Compiler * inCompiler\n                            COMMA_LOCATION_ARGS) const {\n//--- Build start node set\n  UInt32Set startNodeSet ;\n  UpEnumerator_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 536)).stringValue ()) ;
  result.appendString (" enumerator1 (inStartNodes) ;\n  while (enumerator1.hasCurrentObject ()) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = findNode (enumerator1.current (THERE).mProperty_string.stringValue(), root()) ;\n    if (nullptr == nodePtr) {\n      String message (\"subgraphFromNodes: '\") ;\n      message.appendString (enumerator1.current (THERE).mProperty_string.stringValue()) ;\n      message.appendCString (\"' is not a declared node, cannot start from it\") ;\n      inCompiler->emitSemanticError (\n        enumerator1.current (THERE).mProperty_location,\n        message,\n        GenericArray <FixItDescription> ()\n        COMMA_THERE\n      ) ;\n    }else{\n      startNodeSet.add (nodePtr->mNodeID) ;\n    }\n    enumerator1.gotoNextObject () ;\n  }\n//--- Build node to exclude set\n  UInt32Set nodesToExcludeSet ;\n  UpEnumerator_stringset enumerator2 (inNodesToExclude) ;\n  while (enumerator2.hasCurrentObject ()) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = findNode (enumerator2.current_key (THERE).stringValue(), root()) ;\n    if (nullptr == nodePtr) {\n      String message (\"subgraphFromNodes: '\") ;\n      message.appendString (enumerator2.current_key (THERE).stringValue()) ;\n      message.appendCString (\"' is not a declared node, cannot be excluded\") ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      nodesToExcludeSet.add (nodePtr->mNodeID) ;\n    }\n    enumerator2.gotoNextObject () ;\n  }\n//--- Build sub graph\n  const DirectedGraph theSubGraph = mDirectedGraph.subGraphFromNodes (\n    startNodeSet,\n    nodesToExcludeSet\n  ) ;\n//--- Enter nodes\n  GenericUniqueArray <uint32_t> nodeArray ; theSubGraph.getNodeValueArray (nodeArray) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_THERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_string = nodePtr->mKey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    outResultingGraph.internalAddNode (\n      lkey,\n      \"subgraphFromNodes Internal error\",\n      nodePtr->mElement,\n      inCompiler\n      COMMA_THERE\n    ) ;\n  }\n//--- Enter edges\n  GenericUniqueArray <GraphEdge> edgeArray ; theSubGraph.getEdges (edgeArray) ;\n  for (int32_t i=0 ; i<edgeArray.count () ; i++) {\n    const uint32_t sourceNodeIndex = edgeArray (i COMMA_HERE).mSource ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * sourceNodePtr = mNodeArray ((int32_t) sourceNodeIndex COMMA_THERE) ;\n    GGS_lstring source ;\n    source.mProperty_string = sourceNodePtr->mKey ;\n    source.mProperty_location = sourceNodePtr->mDefinitionLocation ;\n    const uint32_t targetNodeIndex = edgeArray (i COMMA_HERE).mTarget ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * targetNodePtr = mNodeArray ((int32_t) targetNodeIndex COMMA_THERE) ;\n    GGS_lstring target ;\n    target.mProperty_string = targetNodePtr->mKey ;\n    target.mProperty_location = targetNodePtr->mDefinitionLocation ;\n    outResultingGraph.setter_addEdge (source, target COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                                const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 610)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                                const GGS_stringset & inNodesToExclude,\n                                Compiler * inCompiler\n                                COMMA_LOCATION_ARGS) const {\n  if (isValid () && inStartNodes.isValid () && inNodesToExclude.isValid ()) {\n    outResultingGraph.makeNewEmptyGraph (THERE) ;\n    mSharedGraph->subGraph (\n      outResultingGraph,\n      inStartNodes,\n      inNodesToExclude,\n      inCompiler\n      COMMA_THERE\n    ) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Reversed Graph\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copyReversedGraphFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) {\n  macroUniqueSharedObject (this) ;\n  if (nullptr != inSource->mRoot) {\n    macroMyNew (mRoot, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inSource->mRoot)) ;\n    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;\n    buildNodeArray (mRoot, mNodeArray) ;\n    mDirectedGraph = inSource->mDirectedGraph.reversedGraph () ;\n  }\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkGraph (HERE) ;\n  #endif\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::reversedGraphFromGraph (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inGraph\n                                              COMMA_LOCATION_ARGS) {\n  macroDetachSharedObject (mSharedGraph) ;\n  if (inGraph.isValid ()) {\n    macroMyNew (mSharedGraph, SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n    mSharedGraph->copyReversedGraphFrom (inGraph.mSharedGraph) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Object Compare\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nint32_t SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::graphCompare (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inOperand) const {\n  const int32_t r = int32_t (allNodeCount ()) - int32_t (inOperand->allNodeCount ()) ;\n  return r ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    const int32_t r = mSharedGraph->graphCompare (inOperand.mSharedGraph) ;\n    if (r < 0) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (r > 0) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Node Insertion\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void rotateLeft (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * b = ioRootPtr->mSupPtr ;\n  ioRootPtr->mSupPtr = b->mInfPtr ;\n  b->mInfPtr = ioRootPtr;\n\n  if (b->mBalance >= 0) {\n    ioRootPtr->mBalance += 1 ;\n  }else{\n    ioRootPtr->mBalance += 1 - b->mBalance ;\n  }\n\n  if (ioRootPtr->mBalance > 0) {\n    b->mBalance += ioRootPtr->mBalance + 1 ;\n  }else{\n    b->mBalance += 1 ;\n  }\n  ioRootPtr = b ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void rotateRight (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * b = ioRootPtr->mInfPtr ;\n  ioRootPtr->mInfPtr = b->mSupPtr ;\n  b->mSupPtr = ioRootPtr ;\n\n  if (b->mBalance > 0) {\n    ioRootPtr->mBalance += -b->mBalance - 1 ;\n  }else{\n    ioRootPtr->mBalance -= 1 ;\n  }\n  if (ioRootPtr->mBalance >= 0) {\n    b->mBalance -= 1 ;\n  }else{\n    b->mBalance += ioRootPtr->mBalance - 1 ;\n  }\n  ioRootPtr = b ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const String & inKey,\n                                                            const uint32_t inNodeID) :\nmInfPtr (nullptr),\nmSupPtr (nullptr),\nmBalance (0),\nmKey (inKey),\nmNodeID (inNodeID),\nmElement (),\nmDefinitionLocation (),\nmReferenceLocationArray (),\nmIsDefined (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalInsert (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr,\n                                         const String & inKey,\n                                         bool & ioExtension) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * matchingEntry = nullptr ;\n  if (ioRootPtr == nullptr) {\n    macroMyNew (ioRootPtr, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inKey, (uint32_t) mNodeArray.count ())) ;\n    mDirectedGraph.addNode ((uint32_t) mNodeArray.count ()) ;\n    mNodeArray.appendObject (ioRootPtr) ;\n    ioExtension = true ;\n    matchingEntry = ioRootPtr ;\n  }else{\n    macroValidPointer (ioRootPtr) ;\n    const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;\n    if (comparaison > 0) {\n      matchingEntry = internalInsert (ioRootPtr->mInfPtr, inKey, ioExtension) ;\n      if (ioExtension) {\n        ioRootPtr->mBalance += 1 ;\n        if (ioRootPtr->mBalance == 0) {\n          ioExtension = false;\n        }else if (ioRootPtr->mBalance == 2) {\n          if (ioRootPtr->mInfPtr->mBalance == -1) {\n            rotateLeft (ioRootPtr->mInfPtr) ;\n          }\n          rotateRight (ioRootPtr) ;\n          ioExtension = false;\n        }\n      }\n    }else if (comparaison < 0) {\n      matchingEntry = internalInsert (ioRootPtr->mSupPtr, inKey, ioExtension) ;\n      if (ioExtension) {\n        ioRootPtr->mBalance-- ;\n        if (ioRootPtr->mBalance == 0) {\n          ioExtension = false ;\n        }else if (ioRootPtr->mBalance == -2) {\n          if (ioRootPtr->mSupPtr->mBalance == 1) {\n            rotateRight (ioRootPtr->mSupPtr) ;\n          }\n          rotateLeft (ioRootPtr) ;\n          ioExtension = false;\n        }\n      }\n    }else{ // Entry already exists\n      matchingEntry = ioRootPtr ;\n      ioExtension = false ;\n    }\n  }\n  return matchingEntry ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark internalAddNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::findOrAddNodeForKey (const String & inKey) {\n  bool extension = false ; // Unused here\n  return internalInsert (mRoot, inKey, extension) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalAddNode (const GGS_lstring & inKey,\n                                   const char * inErrorMessage,\n                                   const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 818)).stringValue ()) ;
  result.appendString (" & inElement,\n                                   Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * node = findOrAddNodeForKey (inKey.mProperty_string.stringValue ()) ;\n  if (!node->mIsDefined) { // Node exists, but is undefined\n    node->mElement = inElement ;\n    node->mDefinitionLocation = inKey.mProperty_location ;\n    node->mIsDefined = true ;\n  }else{ // Error : node redefinition\n    GGS_lstring existingKey ;\n    existingKey.mProperty_location = node->mDefinitionLocation ;\n    existingKey.mProperty_string = GGS_string (node->mKey) ;\n    inCompiler->semanticErrorWith_K_L_message (existingKey, inErrorMessage, inKey.mProperty_location COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalAddNode (const GGS_lstring & inKey,\n                                       const char * inErrorMessage,\n                                       const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 838)).stringValue ()) ;
  result.appendString (" & inElement,\n                                       Compiler * inCompiler\n                                       COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid () && inElement.isValid ()) {\n    insulateGraph (THERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->internalAddNode (inKey, inErrorMessage, inElement, inCompiler COMMA_THERE) ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark modifier noteNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_noteNode (const GGS_lstring & inKey\n                                       COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    insulateGraph (THERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * node = (nullptr == mSharedGraph)\n      \? nullptr\n      : mSharedGraph->findOrAddNodeForKey (inKey.mProperty_string.stringValue ())\n    ;\n    if (nullptr != node) {\n      node->mReferenceLocationArray.appendObject (inKey.mProperty_location) ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Modifier addEdge\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addEdge (const String & inSourceNodeKey,\n                           const GGS_location & inSourceNodeLocation,\n                           const String & inTargetNodeKey,\n                           const GGS_location & inTargetNodeLocation) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * sourceNode = findOrAddNodeForKey (inSourceNodeKey) ;\n  macroValidPointer (sourceNode) ;\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * targetNode = findOrAddNodeForKey (inTargetNodeKey) ;\n  macroValidPointer (targetNode) ;\n  sourceNode->mReferenceLocationArray.appendObject (inSourceNodeLocation) ;\n  targetNode->mReferenceLocationArray.appendObject (inTargetNodeLocation) ;\n  mDirectedGraph.addEdge (sourceNode->mNodeID, targetNode->mNodeID) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_addEdge (const GGS_lstring & inSourceNodeKey,\n                                      const GGS_lstring & inTargetNodeKey\n                                      COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inSourceNodeKey.isValid () && inTargetNodeKey.isValid ()) {\n    insulateGraph (HERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->addEdge (inSourceNodeKey.mProperty_string.stringValue (),\n                             inSourceNodeKey.mProperty_location,\n                             inTargetNodeKey.mProperty_string.stringValue (),\n                             inTargetNodeKey.mProperty_location) ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Output graphviz text\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nString SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_graphviz (void) const {\n  GenericUniqueArray <String> nodeNameArray ;\n  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {\n    nodeNameArray.appendObject (mNodeArray (i COMMA_HERE)->mKey) ;\n  }\n  return mDirectedGraph.graphvizString (nodeNameArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_string GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_graphviz (UNUSED_LOCATION_ARGS) const {\n  GGS_string result ;\n  if (isValid ()) {\n    result = GGS_string (mSharedGraph->getter_graphviz ()) ;\n  }\n  return result ;\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Output arc list\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::edges (GGS__5B_stringString_5D_ & ioList) const {\n  GenericUniqueArray <GraphEdge> edgeArray ; mDirectedGraph.getEdges (edgeArray) ;\n  for (int32_t i=0 ; i<edgeArray.count () ; i++) {\n    const GraphEdge edge = edgeArray (i COMMA_HERE) ;\n    const GGS_stringString v = GGS_stringString (\n      mNodeArray ((int32_t) edge.mSource COMMA_HERE)->mKey,\n      mNodeArray ((int32_t) edge.mTarget COMMA_HERE)->mKey\n    ) ;\n    ioList.plusPlusAssignOperation (v COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS__5B_stringString_5D_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_edges (LOCATION_ARGS) const {\n  GGS__5B_stringString_5D_ result ;\n  if (isValid ()) {\n    result = GGS__5B_stringString_5D_::init (nullptr COMMA_THERE) ;\n    mSharedGraph->edges (result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_undefinedNodeCount\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void countUndefinedNodeCount (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode, uint32_t & ioCount) {\n  if (nullptr != inNode) {\n    countUndefinedNodeCount (inNode->mInfPtr, ioCount) ;\n    if (! inNode->mIsDefined) {\n      ioCount += 1 ;\n    }\n    countUndefinedNodeCount (inNode->mSupPtr, ioCount) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_undefinedNodeCount (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    uint32_t undefinedNodeCount = 0 ;\n    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;\n    result = GGS_uint (undefinedNodeCount) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_undefinedNodeKeyList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void buildUndefinedNodeKeyList (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode, GGS__5B_string_5D_ & ioResult) {\n  if (nullptr != inNode) {\n    buildUndefinedNodeKeyList (inNode->mInfPtr, ioResult) ;\n    if (!inNode->mIsDefined) {\n      ioResult.plusPlusAssignOperation (GGS_string (inNode->mKey) COMMA_HERE) ;\n    }\n    buildUndefinedNodeKeyList (inNode->mSupPtr, ioResult) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS__5B_string_5D_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_undefinedNodeKeyList (LOCATION_ARGS) const {\n  GGS__5B_string_5D_ result ;\n  if (isValid ()) {\n    result = GGS__5B_string_5D_::init (nullptr COMMA_THERE) ;\n    buildUndefinedNodeKeyList (mSharedGraph->root (), result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Find circularities\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1046)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1047)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const {\n  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesInvolvedInCircularities (nodeArray) ;\n//--- Add nodes\n  outInfoList.removeAll () ;\n  outNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1051)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1065)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                 GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1066)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                                 COMMA_UNUSED_LOCATION_ARGS) const {\n  outNodeKeyList.drop () ;\n  if (isValid ()) {\n    mSharedGraph->internalFindCircularities (outInfoList, outNodeKeyList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Nodes with no predecessor\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1082)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1083)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const {\n  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoPredecessor (nodeArray) ;\n//--- Add nodes\n  outInfoList.removeAll () ;\n  outNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1087)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1101)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                      GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1102)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                                      COMMA_UNUSED_LOCATION_ARGS) const {\n  outNodeKeyList.drop () ;\n  if (isValid ()) {\n    mSharedGraph->internalNodesWithNoPredecessor (outInfoList, outNodeKeyList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Nodes with no successor\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1118)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1119)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const {\n  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoSuccessor (nodeArray) ;\n//--- Add nodes\n  outInfoList.removeAll () ;\n  outNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1123)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1137)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                    GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1138)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                                    COMMA_UNUSED_LOCATION_ARGS) const {\n  outNodeKeyList.drop () ;\n  if (isValid ()) {\n    mSharedGraph->internalNodesWithNoSuccessor (outInfoList, outNodeKeyList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Breath First Topological sort\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1154)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1155)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1156)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1157)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const {\n  GenericUniqueArray <uint32_t> sortedNodes ;\n  GenericUniqueArray <uint32_t> unsortedNodes ;\n  mDirectedGraph.topologicalSort (sortedNodes, unsortedNodes) ;\n//--- Add sorted nodes\n  outSortedList.removeAll () ;\n  outSortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1163)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outSortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outSortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n//--- Add unsorted nodes\n  outUnsortedList.removeAll () ;\n  outUnsortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1175)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outUnsortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outUnsortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1189)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1190)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1191)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1192)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                               Compiler * inCompiler\n                                               COMMA_LOCATION_ARGS) const {\n  outSortedNodeKeyList.drop () ;\n  outUnsortedNodeKeyList.drop () ;\n  if (isValid ()) {\n    uint32_t undefinedNodeCount = 0 ;\n    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;\n    if (0 != undefinedNodeCount) {\n      String s (\"Cannot apply graph topologicalSort: there \") ;\n      if (undefinedNodeCount > 1) {\n        s.appendCString (\"are \") ;\n        s.appendUnsigned (undefinedNodeCount) ;\n        s.appendCString (\" undefined nodes\") ;\n      }else{\n        s.appendCString (\"is 1 undefined node\") ;\n      }\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n    }else{\n      mSharedGraph->internalTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Depth First Topological sort\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1224)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1225)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1226)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1227)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const {\n  GenericUniqueArray <uint32_t> sortedNodes ;\n  GenericUniqueArray <uint32_t> unsortedNodes ;\n  mDirectedGraph.depthFirstTopologicalSort (sortedNodes, unsortedNodes) ;\n//--- Add sorted nodes\n  outSortedList.removeAll () ;\n  outSortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1233)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outSortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outSortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n//--- Add unsorted nodes\n  outUnsortedList.removeAll () ;\n  outUnsortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1245)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outUnsortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outUnsortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1259)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                         GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1260)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                         GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1261)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                         GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1262)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                                         Compiler * inCompiler\n                                                         COMMA_LOCATION_ARGS) const {\n  outSortedNodeKeyList.drop () ;\n  outUnsortedNodeKeyList.drop () ;\n  if (isValid ()) {\n    uint32_t undefinedNodeCount = 0 ;\n    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;\n    if (0 != undefinedNodeCount) {\n      String s (\"Cannot apply graph topologicalSort: there \") ;\n      if (undefinedNodeCount > 1) {\n        s.appendCString (\"are \") ;\n        s.appendUnsigned (undefinedNodeCount) ;\n        s.appendCString (\" undefined nodes\") ;\n      }else{\n        s.appendCString (\"is 1 undefined node\") ;\n      }\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n    }else{\n      mSharedGraph->internalDepthFirstTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_undefinedNodeReferenceList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void buildUndefinedNodeReferenceList (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1295)).stringValue ()) ;
  result.appendString (" & ioResult) {\n  if (nullptr != inNode) {\n    buildUndefinedNodeReferenceList (inNode->mInfPtr, ioResult) ;\n    if (!inNode->mIsDefined) {\n      GGS_lstring lkey ;\n      lkey.mProperty_string = GGS_string (inNode->mKey) ;\n      for (int32_t i=0 ; i < inNode->mReferenceLocationArray.count () ; i++) {\n        lkey.mProperty_location = inNode->mReferenceLocationArray (i COMMA_HERE) ;\n        ioResult.plusPlusAssignOperation (lkey COMMA_HERE) ;\n      }\n    }\n    buildUndefinedNodeReferenceList (inNode->mSupPtr, ioResult) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1312)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_undefinedNodeReferenceList (LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1313)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    result = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1315)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_THERE) ;\n    buildUndefinedNodeReferenceList (mSharedGraph->root (), result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Modifier removeEdgesToNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeEdgesToNode (const GGS_string & inNodeName,\n                                                Compiler * inCompiler\n                                                COMMA_LOCATION_ARGS) {\n  if (isValid () && inNodeName.isValid ()) {\n    insulateGraph (HERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->removeEdgesToNode (inNodeName.stringValue (), inCompiler COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::removeEdgesToNode (const String & inNodeName,\n                                     Compiler * inCompiler\n                                     COMMA_LOCATION_ARGS) {\n//--- Find node\n  const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * node = findNode (inNodeName, mRoot) ;\n  if (nullptr == node) {\n    String s (\"graph removeEdgesToNode: node '\") ;\n    s.appendString (inNodeName) ;\n    s.appendCString (\"' does not exist\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const uint32_t nodeIndex = node->mNodeID ;\n    mDirectedGraph.removeEdgesToNode (nodeIndex COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Modifier removeEdgesToDominators\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeEdgesToDominators (LOCATION_ARGS) {\n  if (isValid ()) {\n    insulateGraph (HERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->removeEdgesToDominators (THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::removeEdgesToDominators (LOCATION_ARGS) {\n//--- Find start nodes\n  GenericUniqueArray <uint32_t> startNodes ; mDirectedGraph.getNodesWithNoPredecessor (startNodes) ;\n//--- Add a dummy start node for handling case where there several start nodes\n  const uint32_t dummyNodeIndex = mDirectedGraph.unusedNodeIndex () ;\n//--- Add edges from dummy node to start nodes\n  for (int32_t i=0 ; i<startNodes.count () ; i++) {\n    mDirectedGraph.addEdge (dummyNodeIndex, startNodes (i COMMA_HERE)) ;\n  }\n//--- Remove edge to dominator\n  mDirectedGraph.removeEdgesToDominator (THERE) ;\n//--- Remove dummy node\n  mDirectedGraph.removeNode (dummyNodeIndex) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyGraph (THERE) ;\n  return result ;\n}\n\n") ;
  GGS_uint index_59211_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    UpEnumerator__5B_graphInsertModifier_5D_ enumerator_59211 (in_INSERT_5F_MODIFIER_5F_LIST) ;
    while (enumerator_59211.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_59211.current_entry (HERE).readProperty_mInsertModifierName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1405)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inKey,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1406)).stringValue ()) ;
      result.appendString (" inElement,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  const char * kErrorMessage = ") ;
      result.appendString (enumerator_59211.current_entry (HERE).readProperty_mInsertErrorMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1409)).stringValue ()) ;
      result.appendString (" ;\n  internalAddNode (inKey, kErrorMessage, inElement, inCompiler COMMA_THERE) ;\n}\n") ;
      enumerator_59211.gotoNextObject () ;
      index_59211_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_topologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1417)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1418)).stringValue ()) ;
  result.appendString (" & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1419)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1420)).stringValue ()) ;
  result.appendString (" & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1423)).stringValue ()) ;
  result.appendString (" sortedList ;\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1424)).stringValue ()) ;
  result.appendString (" unsortedList ;\n  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1426)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1427)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_depthFirstTopologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1432)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1433)).stringValue ()) ;
  result.appendString (" & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1434)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1435)).stringValue ()) ;
  result.appendString (" & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1438)).stringValue ()) ;
  result.appendString (" sortedList ;\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1439)).stringValue ()) ;
  result.appendString (" unsortedList ;\n  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1441)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1442)).stringValue ()) ;
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
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1456)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1457)).stringValue ()) ;
  result.appendString (" & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1459)).stringValue ()) ;
  result.appendString (" infoList ;\n  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1461)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoSuccessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1466)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1467)).stringValue ()) ;
  result.appendString (" & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1469)).stringValue ()) ;
  result.appendString (" infoList ;\n  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1471)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoPredecessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1476)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1477)).stringValue ()) ;
  result.appendString (" & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1479)).stringValue ()) ;
  result.appendString (" infoList ;\n  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1481)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subgraphFromNodes (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1486)).stringValue ()) ;
  result.appendString (" & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_stringset & inKeysToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1497)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_nodeList (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1498)).stringValue ()) ;
  result.appendString (" resultingList ;\n  if (isValid ()) {\n    resultingList = graph () ;\n  }\n  return resultingList ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1507)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_accessibleNodesFrom (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1507)).stringValue ()) ;
  result.appendString (" & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_stringset & inNodesToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1511)).stringValue ()) ;
  result.appendString (" result ;\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" resultingGraph ;\n  subGraph (resultingGraph,\n            inStartKeyList,\n            inNodesToExclude,\n            inCompiler\n            COMMA_THERE) ;\n  if (resultingGraph.isValid ()) {\n    result = resultingGraph.getter_lkeyList (THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
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

