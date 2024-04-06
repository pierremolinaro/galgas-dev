#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sintPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 78)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 79)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 95)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 111)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 119)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 127)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 135)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 146)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 155)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 162)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 169)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 176)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sint_36__34_PredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_sint_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 36)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 36)).operator_or (GALGAS_operators::class_func_infixMulOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 36)).operator_or (GALGAS_operators::class_func_infixDivOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 36)).operator_or (GALGAS_operators::class_func_infixModOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 36)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 37)).operator_or (GALGAS_operators::class_func_prefixPlusOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 37)).operator_or (GALGAS_operators::class_func_prefixMinusOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 38)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 37)).operator_or (GALGAS_operators::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 38)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 38)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 39)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 38)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 39)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 39)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 39)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 39)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 39)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 39)).operator_or (GALGAS_operators::class_func_incDecOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 39)).operator_or (GALGAS_operators::class_func_incDecOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 40)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-sint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 40)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-sint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 41)).operator_or (GALGAS_operators::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 41)).operator_or (GALGAS_operators::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 41)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 41)).operator_or (GALGAS_operators::class_func_minusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 42)).operator_or (GALGAS_operators::class_func_mulEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 42)).operator_or (GALGAS_operators::class_func_divEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 43)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sint64PredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sint_36__34_PredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_classFunctionMap & outArgument_outMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-sint64.galgas", 50)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 51)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 58)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sint64PredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sint_36__34_PredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_getterMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 71)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 72)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 96)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 139)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 148)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 155)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 162)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 169)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sint_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 181))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-string.galgas", 37)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("homeDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("newWithStdIn"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("retrieveAndResetTemplateString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("separatorString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 59)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSymbolicLinkContents"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 66)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSourceFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 75)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 82)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 89)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDateTime"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 98)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariable"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 105)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariableOrEmpty"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 114)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppLineComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 123)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppSpaceComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 130)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppTitleComment"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 137)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 146)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppChar"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 155)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsJoinedByString"), GALGAS_string ("stringlist"), GALGAS_string ("inComponents"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 164)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRepeatingString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 175)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSequenceOfCharacters"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 186)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-string.galgas", 203)) ;
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFile"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 204)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFileIfExists"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 211)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeEmptyDirectory"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 218)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeDirectoryRecursively"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 225)) ;
  }
  GALGAS_unifiedTypeMapEntry var_stringType_7108 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_7108, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 232)) ;
  }
  GALGAS_unifiedTypeMapEntry var_boolType_7198 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_boolType_7198, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 233)) ;
  }
  GALGAS_formalParameterSignature var_argList_7263 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("predefinedType-string.galgas", 235)) ;
  var_argList_7263.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 236)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 236)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 236)) ;
  var_argList_7263.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 237)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 237)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 237)) ;
  var_argList_7263.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 238)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 238)), GALGAS_string ("inContents")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 238)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("generateFile"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 240)), var_argList_7263, GALGAS_bool (true) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 239)) ;
  }
  var_argList_7263 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("predefinedType-string.galgas", 245)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("startPath").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 246)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 246)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 246)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("fileName").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 247)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 247)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 247)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("lineComment").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 248)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 248)), GALGAS_string ("inLineCommentPrefix")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 248)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("header").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 249)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 249)), GALGAS_string ("inHeader")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 249)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 250)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 250)), GALGAS_string ("inDefaultUserZone1")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 250)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 251)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 251)), GALGAS_string ("inGeneratedZone2")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 251)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 252)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 252)), GALGAS_string ("inDefaultUserZone2")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 252)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 253)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 253)), GALGAS_string ("inGeneratedZone3")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 253)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 254)), var_boolType_7198, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 254)), GALGAS_string ("inMakeExecutable")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 254)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("generateFileWithPattern"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 256)), var_argList_7263, GALGAS_bool (true) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 255)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getInstanceMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getInstanceMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-string.galgas", 266)) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 267)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 275)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 283)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 291)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeSymbolicLinkWithPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 299)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (outArgument_outInstanceMethodMap, GALGAS_string ("makeDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 307)) ;
  }
  GALGAS_formalParameterSignature var_argList_10389 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("predefinedType-string.galgas", 313)) ;
  GALGAS_unifiedTypeMapEntry var_t_10478 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_10478, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 314)) ;
  }
  var_argList_10389.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 315)), var_t_10478, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 315)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 315)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_10478, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 316)) ;
  }
  var_argList_10389.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 317)), var_t_10478, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("predefinedType-string.galgas", 317)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 317)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 319)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-string.galgas", 320)), var_argList_10389, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 322)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-string.galgas", 324)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 318)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("writeToExecutableFileWhenDifferentContents"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 328)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-string.galgas", 329)), var_argList_10389, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 331)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-string.galgas", 333)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 327)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-string.galgas", 342)) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inCapacity"), GALGAS_string ("setCapacity"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 343)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("incIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 351)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("decIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 359)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inColumnIndex"), GALGAS_string ("appendSpacesUntilColumn"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 367)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 375)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("insertCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 385)) ;
  }
  {
  routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("outChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("removeCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 395)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 411)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 412)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstring"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 420)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 428)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doesEnvironmentVariableExist"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 436)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 444)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("range"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 452)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithUnicodeEscaping"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 460)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("assemblerRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 468)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileNameRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 476)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nameRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 484)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 492)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 500)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decodedStringFromRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 508)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("HTMLRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 516)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationEscapingQuestionMark"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 524)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Representation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 532)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithoutDelimiters"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 540)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Length"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 548)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32Representation"), GALGAS_string ("withZeroTerminator"), GALGAS_string ("bool"), GALGAS_string ("inAppendZeroTerminator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 556)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByTrimmingWhiteSpaces"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 566)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("md5"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 574)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sha256"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 582)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 590)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 598)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 606)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 614)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 622)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 630)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 638)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 646)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSignedBigInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 654)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSignedBigInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 662)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDoubleNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 670)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 678)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("capacity"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 686)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isSymbolicLink"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 694)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExists"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 702)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExists"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 710)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pathExtension"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 718)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nativePathWithUnixPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 726)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unixPathWithNativePath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 734)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastPathComponent"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 742)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingPathExtension"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 750)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByCapitalizingFirstCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 758)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("firstCharacterOrNul"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 766)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingLastPathComponent"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 774)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByStandardizingPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 782)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowercaseString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 790)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uppercaseString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 798)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("reversedString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 806)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentColumn"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 814)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 822)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("popen"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 830)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationEnclosedWithin"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 838)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandWithArguments"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inArguments"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 847)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenCommandWithArguments"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inArguments"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 856)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("characterAtIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 865)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 874)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacterInRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inFirstCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inLastCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 883)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRemovingCharacterAtIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 896)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subStringFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 905)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("rightSubString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 914)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("leftSubString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 923)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inStart"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 932)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathFromPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 941)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("relativePathFromPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 950)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsSeparatedByString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 958)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 966)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRightPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 975)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftAndRightPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 984)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByReplacingStringByString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inSearchedString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inReplacementString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 993)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFiles"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1002)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenFiles"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1012)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directories"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1021)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesWithExtensions"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1030)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFilesWithExtensions"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1039)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_stringPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-string.galgas", 1053)).operator_or (GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-string.galgas", 1053)) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1053)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-string.galgas", 1054)) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1053)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-string.galgas", 1054)) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1054)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getOptionalMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getOptionalMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_optionalMethodMap & outArgument_outMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-string.galgas", 1061)) ;
  {
  routine_enterBaseOptionalMethodWithArgument_26__26__3F_optionalMethodName_3F__3F_ (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extractBigInt"), GALGAS_string ("bigint"), GALGAS_string ("outBigInt"), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1062)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1074))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_timerPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("start") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_timerPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-timer.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                       GALGAS_setterMap & outArgument_outSetterMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-timer.galgas", 43)) ;
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GALGAS_string ("stop"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 44)) ;
  }
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GALGAS_string ("resume"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 49)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       GALGAS_getterMap & outArgument_outMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("msFromStart"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 61)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 69)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isRunning"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 77)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_classFunctionMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-timer.galgas", 91)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("start"), GALGAS_string ("timer"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 92)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_timerPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 104))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typePredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typePredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-type.galgas", 37)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("typeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-type.galgas", 38)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typePredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-type.galgas", 51)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-type.galgas", 52)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasSuperclass"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-type.galgas", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("superclass"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-type.galgas", 68)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_typePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-type.galgas", 81)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-type.galgas", 81)) COMMA_SOURCE_FILE ("predefinedType-type.galgas", 81)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-type.galgas", 87))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uintPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_uintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-uint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-uint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixMulOperator (SOURCE_FILE ("predefinedType-uint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixDivOperator (SOURCE_FILE ("predefinedType-uint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixModOperator (SOURCE_FILE ("predefinedType-uint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-uint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 43)).operator_or (GALGAS_operators::class_func_prefixPlusOperator (SOURCE_FILE ("predefinedType-uint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 43)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-uint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 43)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-uint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 44)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-uint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 44)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-uint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 44)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-uint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 44)).operator_or (GALGAS_operators::class_func_incDecOperator (SOURCE_FILE ("predefinedType-uint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 45)).operator_or (GALGAS_operators::class_func_incDecOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 45)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-uint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 45)).operator_or (GALGAS_operators::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 45)).operator_or (GALGAS_operators::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 46)).operator_or (GALGAS_operators::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 46)).operator_or (GALGAS_operators::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 46)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 46)).operator_or (GALGAS_operators::class_func_minusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 47)).operator_or (GALGAS_operators::class_func_mulEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 48)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 47)).operator_or (GALGAS_operators::class_func_divEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 48)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 48)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-uint.galgas", 55)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compilationMode"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 56)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("random"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 63)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 70)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("errorCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 77)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("warningCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 84)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueWithMask"), GALGAS_string ("uint"), GALGAS_string ("inLowerIndex"), GALGAS_string ("uint"), GALGAS_string ("inUpperIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 91)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 108)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 109)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 117)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 125)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 141)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lsbIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 149)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantBitCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 157)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("oneBitCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 165)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 173)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("alphaString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 181)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 189)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 197)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 208)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeValueAssigned"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 216)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isInRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 224)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 232)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 239)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 246)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 253)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-uint.galgas", 266)) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setRandomSeed"), GALGAS_string ("uint"), GALGAS_string ("inSeed"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 267)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uint_36__34_PredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uint_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 34))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_uint_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixMulOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixDivOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixModOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 41)).operator_or (GALGAS_operators::class_func_prefixPlusOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 41)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 41)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 42)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 42)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 42)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-uint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 42)).operator_or (GALGAS_operators::class_func_incDecOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 43)).operator_or (GALGAS_operators::class_func_incDecOperatorNoOVF (SOURCE_FILE ("predefinedType-uint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 43)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-uint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 43)).operator_or (GALGAS_operators::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("predefinedType-uint64.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 43)).operator_or (GALGAS_operators::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("predefinedType-uint64.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 44)).operator_or (GALGAS_operators::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("predefinedType-uint64.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 44)).operator_or (GALGAS_operators::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("predefinedType-uint64.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 44)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint64.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 44)).operator_or (GALGAS_operators::class_func_minusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint64.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 45)).operator_or (GALGAS_operators::class_func_mulEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint64.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 45)).operator_or (GALGAS_operators::class_func_divEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint64.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 46)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uint64PredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uint_36__34_PredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_classFunctionMap & outArgument_outMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-uint64.galgas", 53)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 54)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64MaskWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 61)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64BaseValueWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 70)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64WithBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 79)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uint64PredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uint_36__34_PredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_getterMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 95)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 111)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 118)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintSlice"), GALGAS_string ("uint"), GALGAS_string ("inStartBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 134)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("alphaString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 151)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 159)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 167)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 178)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 186)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 193)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 200)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 207)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputActualParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 115)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputActualParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GALGAS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  GALGAS_bool test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas", 122)))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("actual-parameters.galgas", 122)))) ;
  }
  result_result = test_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = result_result.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_outputActualParameterAST temp_2 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & ioArgument_ioActualOutputArgumentList,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputActualParameterAST temp_0 = this ;
  const GALGAS_outputActualParameterAST temp_1 = this ;
  const GALGAS_outputActualParameterAST temp_2 = this ;
  ioArgument_ioActualOutputArgumentList.addAssign_operation (temp_0.readProperty_mActualSelector (), temp_1.readProperty_mOutputActualParameterExpression (), temp_2.readProperty_mEndOfExpressionLocation ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 131)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GALGAS_lstring constinArgument_inFormalSelector,
                                                                       const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                       const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                       GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                       GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("actual-parameters.galgas", 151)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas", 152)))) COMMA_SOURCE_FILE ("actual-parameters.galgas", 151)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 155)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 156)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 153)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputActualParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 159)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_7978 = GALGAS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 159)) ;
        const GALGAS_outputActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_7978) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_7978, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)) ;
      }
    }
    GALGAS_semanticExpressionForGeneration var_expression_8500 ;
    const GALGAS_outputActualParameterAST temp_9 = this ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mOutputActualParameterExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8500, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 162)) ;
    {
    const GALGAS_outputActualParameterAST temp_10 = this ;
    routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expression_8500.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_expression_8500, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas", 172)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_expression_8500  COMMA_SOURCE_FILE ("actual-parameters.galgas", 179))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 179)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputInputActualParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                         const GALGAS_string constinArgument_inSelector,
                                                                         Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 206)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputActualParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 215)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            const GALGAS_lstring constinArgument_inFormalSelector,
                                                                            const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                            const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                            GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                            GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 232)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 235)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 236)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 233)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputActualParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 238)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_11698 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 238)) ;
        const GALGAS_outputInputActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_11698) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11698, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_parameterType_12048 ;
  GALGAS_string var_variableCppName_12073 ;
  {
  const GALGAS_outputInputActualParameterAST temp_9 = this ;
  GALGAS_string joker_12095 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mOutputInputActualParameterName (), var_parameterType_12048, var_variableCppName_12073, joker_12095, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 242)) ;
  }
  GALGAS_unifiedTypeMapEntryList var_typeList_12112 = GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (var_parameterType_12048  COMMA_SOURCE_FILE ("actual-parameters.galgas", 248)) ;
  const GALGAS_outputInputActualParameterAST temp_10 = this ;
  cEnumerator_lstringlist enumerator_12188 (temp_10.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_12188.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_12237 = extensionGetter_definition (var_parameterType_12048, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 250)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_12347 ;
    GALGAS_bool var_isConstant_12374 ;
    var_propertyMap_12237.method_searchKey (enumerator_12188.current_mValue (HERE), var_accessControl_12347, var_isConstant_12374, var_parameterType_12048, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 251)) ;
    extensionMethod_checkSetAccess (var_accessControl_12347, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_12188.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 257)) ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_isConstant_12374.boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_12188.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 262)) ;
      }
    }
    var_typeList_12112.addAssign_operation (var_parameterType_12048  COMMA_SOURCE_FILE ("actual-parameters.galgas", 264)) ;
    enumerator_12188.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_12048)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_outputInputActualParameterAST temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_12048, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 269)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 269)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 269)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 271)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 270)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 271)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 268)) ;
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_outputInputActualParameterAST temp_17 = this ;
    test_16 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_17.readProperty_mOutputInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 274)).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_outputInputActualParameterAST temp_18 = this ;
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray19  COMMA_SOURCE_FILE ("actual-parameters.galgas", 275)) ;
    }
  }
  const GALGAS_outputInputActualParameterAST temp_20 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_20.readProperty_mOutputInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 278)) ;
  const GALGAS_outputInputActualParameterAST temp_21 = this ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::class_func_new (var_parameterType_12048, var_variableCppName_12073, temp_21.readProperty_mStructAttributeList (), var_typeList_12112  COMMA_SOURCE_FILE ("actual-parameters.galgas", 280))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 280)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSingleJokerParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputSingleJokerParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputInputSingleJokerParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                              const GALGAS_string constinArgument_inSelector,
                                                                              Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 306)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSingleJokerParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSingleJokerParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputSingleJokerParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 315)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSingleJokerParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 332)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSingleJokerParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 334)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 334)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 335)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 336)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 333)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputSingleJokerParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_16372 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)) ;
        const GALGAS_outputInputSingleJokerParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_16372) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_16372, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 339)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 339)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 339)) ;
      }
    }
  }
  GALGAS_classFunctionMap var_classFunctionMap_16618 = extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 342)).readProperty_classFunctionMap () ;
  GALGAS_bool var_hasCompilerArgument_16702 = GALGAS_bool (false) ;
  GALGAS_string var_constructorName_16746 = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_16775 = GALGAS_bool (false) ;
  cEnumerator_classFunctionMap enumerator_16802 (var_classFunctionMap_16618, EnumerationOrder::up) ;
  bool bool_9 = var_found_16775.operator_not (SOURCE_FILE ("actual-parameters.galgas", 346)).isValidAndTrue () ;
  if (enumerator_16802.hasCurrentObject () && bool_9) {
    while (enumerator_16802.hasCurrentObject () && bool_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        GALGAS_bool test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_16802.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("actual-parameters.galgas", 347)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_16802.current (HERE).readProperty_mReturnedType ().objectCompare (constinArgument_inFormalArgumentType)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (kBoolTrue == test_10) {
          var_hasCompilerArgument_16702 = enumerator_16802.current (HERE).readProperty_mHasCompilerArgument () ;
          var_constructorName_16746 = enumerator_16802.current (HERE).readProperty_lkey ().readProperty_string () ;
          var_found_16775 = GALGAS_bool (true) ;
        }
      }
      enumerator_16802.gotoNextObject () ;
      if (enumerator_16802.hasCurrentObject ()) {
        bool_9 = var_found_16775.operator_not (SOURCE_FILE ("actual-parameters.galgas", 346)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = var_found_16775.operator_not (SOURCE_FILE ("actual-parameters.galgas", 353)).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_outputInputSingleJokerParameterAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 355)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 355)).add_operation (GALGAS_string ("' has no initializer without argument"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 355)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 354)) ;
    }
  }
  const GALGAS_outputInputSingleJokerParameterAST temp_15 = this ;
  GALGAS_string var_cppVarName_17273 = GALGAS_string ("joker_").add_operation (temp_15.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 358)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 358)) ;
  const GALGAS_outputInputSingleJokerParameterAST temp_16 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_17273, GALGAS_defaultConstructorExpressionForGeneration::class_func_new (constinArgument_inFormalArgumentType, temp_16.readProperty_mActualSelector ().readProperty_location (), var_constructorName_16746, var_hasCompilerArgument_16702  COMMA_SOURCE_FILE ("actual-parameters.galgas", 363))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 359))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 359)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_cppVarName_17273, GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 368)), GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 369))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 365))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 365)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSelfParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputInputSelfParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                       const GALGAS_string constinArgument_inSelector,
                                                                       Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 391)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSelfParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSelfParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputSelfParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 400)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSelfParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          const GALGAS_lstring constinArgument_inFormalSelector,
                                                                          const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                          GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                          GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                          GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 417)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSelfParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 419)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 419)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 420)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 421)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 418)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputSelfParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 423)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_20550 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 423)) ;
        const GALGAS_outputInputSelfParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_20550) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_20550, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 424)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 424)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 424)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMapEntry var_selfType_21149 ;
    GALGAS_selfMutability var_selfMutability_21179 ;
    const bool optionalResult21128 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_21149, var_selfMutability_21179) ;
    if (!optionalResult21128) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfMutability_21179, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 434)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 434)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_outputInputSelfParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 435)) ;
        }
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfType_21149)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_outputInputSelfParameterAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfType_21149, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 440)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 440)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 440)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 442)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 441)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 442)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 439)) ;
        }
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, GALGAS_string ("ioObject"), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 447)), GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 448))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 444))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 444)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_outputInputSelfParameterAST temp_16 = this ;
    TC_Array <FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (temp_16.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas", 451)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputJokerParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputInputJokerParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                        const GALGAS_string /* constinArgument_inSelector */,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 474)))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputJokerParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mQualifierLocation (), GALGAS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 483)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                           const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 500)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputJokerParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 502)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 502)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 503)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 503)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 501)) ;
    }
  }
  GALGAS_classFunctionMap var_classFunctionMap_24907 = extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 506)).readProperty_classFunctionMap () ;
  GALGAS_bool var_hasCompilerArgument_24993 = GALGAS_bool (false) ;
  GALGAS_string var_constructorName_25039 = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_25070 = GALGAS_bool (false) ;
  cEnumerator_classFunctionMap enumerator_25099 (var_classFunctionMap_24907, EnumerationOrder::up) ;
  bool bool_3 = var_found_25070.operator_not (SOURCE_FILE ("actual-parameters.galgas", 510)).isValidAndTrue () ;
  if (enumerator_25099.hasCurrentObject () && bool_3) {
    while (enumerator_25099.hasCurrentObject () && bool_3) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        GALGAS_bool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_25099.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("actual-parameters.galgas", 511)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        if (kBoolTrue == test_5.boolEnum ()) {
          test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_25099.current (HERE).readProperty_mReturnedType ().objectCompare (constinArgument_inFormalArgumentType)) ;
        }
        test_4 = test_5.boolEnum () ;
        if (kBoolTrue == test_4) {
          var_hasCompilerArgument_24993 = enumerator_25099.current (HERE).readProperty_mHasCompilerArgument () ;
          var_constructorName_25039 = enumerator_25099.current (HERE).readProperty_lkey ().readProperty_string () ;
          var_found_25070 = GALGAS_bool (true) ;
        }
      }
      enumerator_25099.gotoNextObject () ;
      if (enumerator_25099.hasCurrentObject ()) {
        bool_3 = var_found_25070.operator_not (SOURCE_FILE ("actual-parameters.galgas", 510)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_found_25070.operator_not (SOURCE_FILE ("actual-parameters.galgas", 517)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_outputInputJokerParameterAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mQualifierLocation (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 519)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 519)).add_operation (GALGAS_string ("' has no initializer without argument"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 519)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 518)) ;
    }
  }
  const GALGAS_outputInputJokerParameterAST temp_9 = this ;
  const GALGAS_outputInputJokerParameterAST temp_10 = this ;
  GALGAS_string var_cppVarName_25597 = GALGAS_string ("joker_").add_operation (temp_9.readProperty_mQualifierLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 522)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 522)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 522)).add_operation (temp_10.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("actual-parameters.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 522)) ;
  const GALGAS_outputInputJokerParameterAST temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_25597, GALGAS_defaultConstructorExpressionForGeneration::class_func_new (constinArgument_inFormalArgumentType, temp_11.readProperty_mQualifierLocation (), var_constructorName_25039, var_hasCompilerArgument_24993  COMMA_SOURCE_FILE ("actual-parameters.galgas", 527))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 523))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 523)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_cppVarName_25597, GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 532)), GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 533))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 529))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 529)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualExistingVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputActualExistingVariableParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                                   const GALGAS_string constinArgument_inSelector,
                                                                                   Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 556)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualExistingVariableParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualExistingVariableParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 565)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                      const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                      const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                      GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 582)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualExistingVariableParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 584)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 584)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 585)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 585)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 583)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualExistingVariableParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 587)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_28780 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 587)) ;
        const GALGAS_inputActualExistingVariableParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_28780) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_28780, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 588)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 588)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 588)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_parameterType_29207 ;
  GALGAS_string var_targetVariableCppName_29232 ;
  {
  const GALGAS_inputActualExistingVariableParameterAST temp_9 = this ;
  GALGAS_string joker_29260 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mInputActualParameterName (), var_parameterType_29207, var_targetVariableCppName_29232, joker_29260, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 591)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_29207)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_inputActualExistingVariableParameterAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_29207, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 600)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 600)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 600)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 601)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 601)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 601)), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 599)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_inputActualExistingVariableParameterAST temp_14 = this ;
    test_13 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_14.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 604)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_inputActualExistingVariableParameterAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray16  COMMA_SOURCE_FILE ("actual-parameters.galgas", 605)) ;
    }
  }
  const GALGAS_inputActualExistingVariableParameterAST temp_17 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_17.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 608)) ;
  GALGAS__32_stringlist var_poisonedVarCppNameList_29984 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 610)) ;
  const GALGAS_inputActualExistingVariableParameterAST temp_18 = this ;
  cEnumerator_lstringlist enumerator_30021 (temp_18.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_30021.hasCurrentObject ()) {
    GALGAS_string var_targetVariableCppName_30147 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_30182 ;
    {
    GALGAS_unifiedTypeMapEntry joker_30131 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_30021.current_mValue (HERE), joker_30131, var_targetVariableCppName_30147, var_nameForCheckingFormalParameterUsing_30182, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 612)) ;
    }
    var_poisonedVarCppNameList_29984.addAssign_operation (var_targetVariableCppName_30147, var_nameForCheckingFormalParameterUsing_30182  COMMA_SOURCE_FILE ("actual-parameters.galgas", 618)) ;
    enumerator_30021.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::class_func_new (var_parameterType_29207, var_targetVariableCppName_29232, var_poisonedVarCppNameList_29984  COMMA_SOURCE_FILE ("actual-parameters.galgas", 620))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 620)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualSelfPropertyParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputActualSelfPropertyParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                               const GALGAS_string constinArgument_inSelector,
                                                                               Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 647)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualSelfPropertyParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 656)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                  const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                  GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                  GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 674)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 676)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 676)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 677)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 677)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 675)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 679)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_32976 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 679)) ;
        const GALGAS_inputActualSelfPropertyParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_32976) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_32976, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 680)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 680)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 680)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMapEntry var_selfType_33235 ;
    GALGAS_selfMutability var_selfMutability_33265 ;
    const bool optionalResult33214 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_33235, var_selfMutability_33265) ;
    if (!optionalResult33214) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_propertiesAreMutable (var_selfMutability_33265, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 684)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 684)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_inputActualSelfPropertyParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 685)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_33449 = extensionGetter_definition (var_selfType_33235, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 687)).readProperty_propertyMap () ;
      GALGAS_unifiedTypeMapEntry var_parameterType_33570 ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_13 = this ;
      GALGAS_AccessControl joker_33561_2 ; // Joker input parameter
      GALGAS_bool joker_33561_1 ; // Joker input parameter
      var_propertyMap_33449.method_searchKey (temp_13.readProperty_mInputActualSelfPropertyName (), joker_33561_2, joker_33561_1, var_parameterType_33570, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 688)) ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_14 = this ;
      GALGAS_string var_targetVariableCppName_33595 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 689)).add_operation (temp_14.readProperty_mInputActualSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 690)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_33570)).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_inputActualSelfPropertyParameterAST temp_16 = this ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_33570, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 694)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 694)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 694)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 695)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 695)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 695)), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas", 693)) ;
        }
      }
      GALGAS__32_stringlist var_poisonedVarCppNameList_34180 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 698)) ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_18 = this ;
      cEnumerator_lstringlist enumerator_34219 (temp_18.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_34219.hasCurrentObject ()) {
        GALGAS_string var_targetVariableCppName_34353 ;
        GALGAS_string var_nameForCheckingFormalParameterUsing_34390 ;
        {
        GALGAS_unifiedTypeMapEntry joker_34335 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_34219.current_mValue (HERE), joker_34335, var_targetVariableCppName_34353, var_nameForCheckingFormalParameterUsing_34390, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 700)) ;
        }
        var_poisonedVarCppNameList_34180.addAssign_operation (var_targetVariableCppName_34353, var_nameForCheckingFormalParameterUsing_34390  COMMA_SOURCE_FILE ("actual-parameters.galgas", 706)) ;
        enumerator_34219.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::class_func_new (var_parameterType_33570, var_targetVariableCppName_33595, var_poisonedVarCppNameList_34180  COMMA_SOURCE_FILE ("actual-parameters.galgas", 708))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 708)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_inputActualSelfPropertyParameterAST temp_19 = this ;
    TC_Array <FixItDescription> fixItArray20 ;
    inCompiler->emitSemanticError (temp_19.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray20  COMMA_SOURCE_FILE ("actual-parameters.galgas", 715)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputActualSelfParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                       const GALGAS_string constinArgument_inSelector,
                                                                       Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 739)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualSelfParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 748)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          const GALGAS_lstring constinArgument_inFormalSelector,
                                                                          const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                          GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                          GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 766)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 768)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 768)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 769)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 769)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 767)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualSelfParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 771)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_37283 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 771)) ;
        const GALGAS_inputActualSelfParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_37283) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_37283, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 772)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 772)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 772)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMapEntry var_selfType_37542 ;
    GALGAS_selfMutability var_selfMutability_37572 ;
    const bool optionalResult37521 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_37542, var_selfMutability_37572) ;
    if (!optionalResult37521) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfMutability_37572, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 776)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 776)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_inputActualSelfParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mSelfLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 777)) ;
        }
      }
      GALGAS_string var_targetVariableCppName_37882 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfType_37542)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_inputActualSelfParameterAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mSelfLocation (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfType_37542, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 786)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 786)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 786)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 788)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 787)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 788)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 785)) ;
        }
      }
      GALGAS__32_stringlist var_poisonedVarCppNameList_38429 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 791)) ;
      const GALGAS_inputActualSelfParameterAST temp_16 = this ;
      cEnumerator_lstringlist enumerator_38468 (temp_16.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_38468.hasCurrentObject ()) {
        GALGAS_string var_targetVariableCppName_38602 ;
        GALGAS_string var_nameForCheckingFormalParameterUsing_38639 ;
        {
        GALGAS_unifiedTypeMapEntry joker_38584 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_38468.current_mValue (HERE), joker_38584, var_targetVariableCppName_38602, var_nameForCheckingFormalParameterUsing_38639, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 793)) ;
        }
        var_poisonedVarCppNameList_38429.addAssign_operation (var_targetVariableCppName_38602, var_nameForCheckingFormalParameterUsing_38639  COMMA_SOURCE_FILE ("actual-parameters.galgas", 799)) ;
        enumerator_38468.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::class_func_new (var_selfType_37542, var_targetVariableCppName_37882, var_poisonedVarCppNameList_38429  COMMA_SOURCE_FILE ("actual-parameters.galgas", 801))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 801)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_inputActualSelfParameterAST temp_17 = this ;
    TC_Array <FixItDescription> fixItArray18 ;
    inCompiler->emitSemanticError (temp_17.readProperty_mSelfLocation (), GALGAS_string ("'self' not available in this context"), fixItArray18  COMMA_SOURCE_FILE ("actual-parameters.galgas", 808)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualNewVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputActualNewVariableParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                              const GALGAS_string constinArgument_inSelector,
                                                                              Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 833)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewVariableParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualNewVariableParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 842)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 861)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewVariableParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 863)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 863)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 863)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 864)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 865)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 862)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualNewVariableParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 867)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_41598 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 867)) ;
        const GALGAS_inputActualNewVariableParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_41598) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_41598, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 868)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 868)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 868)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewVariableParameterAST temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewVariableParameterAST temp_11 = this ;
      GALGAS_unifiedTypeMapEntry var_parameterType_41886 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 872)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_41886)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewVariableParameterAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_41886, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 875)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 875)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 875)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 877)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 876)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 877)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 874)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_15 = this ;
  const GALGAS_inputActualNewVariableParameterAST temp_16 = this ;
  GALGAS_string var_targetVariableCppName_42354 = GALGAS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)) ;
  {
  const GALGAS_inputActualNewVariableParameterAST temp_17 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_17.readProperty_mInputActualParameterName (), GALGAS_bool (true), constinArgument_inFormalArgumentType, var_targetVariableCppName_42354, var_targetVariableCppName_42354, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 882)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_42354  COMMA_SOURCE_FILE ("actual-parameters.galgas", 890))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 890)) ;
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_inputActualNewVariableParameterAST temp_19 = this ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_19.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 894)).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_inputActualNewVariableParameterAST temp_20 = this ;
      TC_Array <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("actual-parameters.galgas", 895)) ;
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_22 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_22.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 898)) ;
  GALGAS__32_stringlist var_poisonedVarCppNameList_43288 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 900)) ;
  const GALGAS_inputActualNewVariableParameterAST temp_23 = this ;
  cEnumerator_lstringlist enumerator_43325 (temp_23.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_43325.hasCurrentObject ()) {
    GALGAS_string var_targetVariableCppName_43451 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_43486 ;
    {
    GALGAS_unifiedTypeMapEntry joker_43435 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_43325.current_mValue (HERE), joker_43435, var_targetVariableCppName_43451, var_nameForCheckingFormalParameterUsing_43486, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 902)) ;
    }
    var_poisonedVarCppNameList_43288.addAssign_operation (var_targetVariableCppName_43451, var_nameForCheckingFormalParameterUsing_43486  COMMA_SOURCE_FILE ("actual-parameters.galgas", 908)) ;
    enumerator_43325.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_42354, var_poisonedVarCppNameList_43288  COMMA_SOURCE_FILE ("actual-parameters.galgas", 910))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 910)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualNewConstantParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputActualNewConstantParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                              const GALGAS_string constinArgument_inSelector,
                                                                              Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 939)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewConstantParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualNewConstantParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 948)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 967)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewConstantParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 969)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 969)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 969)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 971)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 970)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 971)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 968)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualNewConstantParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 973)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_46417 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 973)) ;
        const GALGAS_inputActualNewConstantParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_46417) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_46417, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 974)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 974)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 974)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewConstantParameterAST temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewConstantParameterAST temp_11 = this ;
      GALGAS_unifiedTypeMapEntry var_parameterType_46705 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 978)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_46705)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewConstantParameterAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_46705, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 981)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 981)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 981)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 982)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 982)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 982)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 980)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_15 = this ;
  const GALGAS_inputActualNewConstantParameterAST temp_16 = this ;
  GALGAS_string var_targetVariableCppName_47165 = GALGAS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 986)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 986)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 986)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 986)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 986)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 986)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_inputActualNewConstantParameterAST temp_18 = this ;
    test_17 = temp_18.readProperty_mMarkedAsUnused ().boolEnum () ;
    if (kBoolTrue == test_17) {
      {
      const GALGAS_inputActualNewConstantParameterAST temp_19 = this ;
      extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, temp_19.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_47165, var_targetVariableCppName_47165, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 988)) ;
      }
    }
  }
  if (kBoolFalse == test_17) {
    {
    const GALGAS_inputActualNewConstantParameterAST temp_20 = this ;
    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_20.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_47165, var_targetVariableCppName_47165, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 995)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_47165  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1003))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1003)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_inputActualNewConstantParameterAST temp_22 = this ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_22.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 1008)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GALGAS_inputActualNewConstantParameterAST temp_23 = this ;
      TC_Array <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1009)) ;
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_25 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_25.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1012)) ;
  GALGAS__32_stringlist var_poisonedVarCppNameList_48322 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 1014)) ;
  const GALGAS_inputActualNewConstantParameterAST temp_26 = this ;
  cEnumerator_lstringlist enumerator_48359 (temp_26.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_48359.hasCurrentObject ()) {
    GALGAS_string var_targetVariableCppName_48485 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_48520 ;
    {
    GALGAS_unifiedTypeMapEntry joker_48469 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_48359.current_mValue (HERE), joker_48469, var_targetVariableCppName_48485, var_nameForCheckingFormalParameterUsing_48520, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1016)) ;
    }
    var_poisonedVarCppNameList_48322.addAssign_operation (var_targetVariableCppName_48485, var_nameForCheckingFormalParameterUsing_48520  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1022)) ;
    enumerator_48359.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_47165, var_poisonedVarCppNameList_48322  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1024))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1024)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputSingleJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputSingleJokerActualParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                              const GALGAS_string constinArgument_inSelector,
                                                                              Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1050)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputSingleJokerActualParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputSingleJokerActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1059)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1076)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputSingleJokerActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1078)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1078)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1078)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1080)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1079)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1080)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1077)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1082)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_51310 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1082)) ;
        const GALGAS_inputSingleJokerActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_51310) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_51310, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1083)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1083)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1083)) ;
      }
    }
    if (kBoolFalse == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_9 = this ;
      GALGAS_string var_cppVarName_51511 = GALGAS_string ("joker_").add_operation (temp_9.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1085)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1085)) ;
      GALGAS__32_stringlist var_poisonedVarCppNameList_51644 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 1087)) ;
      const GALGAS_inputSingleJokerActualParameterAST temp_10 = this ;
      cEnumerator_lstringlist enumerator_51683 (temp_10.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_51683.hasCurrentObject ()) {
        GALGAS_string var_targetVariableCppName_51817 ;
        GALGAS_string var_nameForCheckingFormalParameterUsing_51854 ;
        {
        GALGAS_unifiedTypeMapEntry joker_51799 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_51683.current_mValue (HERE), joker_51799, var_targetVariableCppName_51817, var_nameForCheckingFormalParameterUsing_51854, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1089)) ;
        }
        var_poisonedVarCppNameList_51644.addAssign_operation (var_targetVariableCppName_51817, var_nameForCheckingFormalParameterUsing_51854  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1095)) ;
        enumerator_51683.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_cppVarName_51511, var_poisonedVarCppNameList_51644  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1097))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1097)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputJokerActualParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                        const GALGAS_string /* constinArgument_inSelector */,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1124)))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputJokerActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mQualifierLocation (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1133)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                           const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1150)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputJokerActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1152)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1152)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1152)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1153)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1153)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1153)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1151)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_inputJokerActualParameterAST temp_3 = this ;
    const GALGAS_inputJokerActualParameterAST temp_4 = this ;
    GALGAS_string var_cppVarName_54592 = GALGAS_string ("joker_").add_operation (temp_3.readProperty_mQualifierLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1155)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 1155)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1155)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1155)).add_operation (temp_4.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("actual-parameters.galgas", 1155)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1155)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_cppVarName_54592, GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 1160))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1157))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1157)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 109)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externProcedureDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_externProcedureDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  const GALGAS_externProcedureDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("routine ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 115)).add_operation (extensionGetter_keyRepresentation (temp_1.readProperty_mFormalArgumentListAST (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 115)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_routineSignature_6001 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("extern-procedure-declaration.galgas", 143)) ;
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_6074 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_6074.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_6168 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6074.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_6168, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 145)) ;
    }
    var_routineSignature_6001.addAssign_operation (enumerator_6074.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_6168, enumerator_6074.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_6074.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 146)) ;
    enumerator_6074.gotoNextObject () ;
  }
  {
  const GALGAS_externProcedureDeclarationAST temp_1 = this ;
  const GALGAS_externProcedureDeclarationAST temp_2 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_1.readProperty_mRoutineName (), var_routineSignature_6001, temp_2.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 153)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration var_formalArgumentList_7237 = GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("extern-procedure-declaration.galgas", 170)) ;
  GALGAS_formalParameterSignature var_routineSignature_7303 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("extern-procedure-declaration.galgas", 171)) ;
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_7376 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_7376.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_7412 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7376.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 173)) ;
    var_formalArgumentList_7237.addAssign_operation (enumerator_7376.current (HERE).readProperty_mFormalSelector (), enumerator_7376.current (HERE).readProperty_mFormalArgumentPassingMode (), var_parameterType_7412, enumerator_7376.current (HERE).readProperty_mFormalArgumentName (), enumerator_7376.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 174)) ;
    var_routineSignature_7303.addAssign_operation (enumerator_7376.current (HERE).readProperty_mFormalSelector (), var_parameterType_7412, enumerator_7376.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_7376.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 180)) ;
    enumerator_7376.gotoNextObject () ;
  }
  const GALGAS_externProcedureDeclarationAST temp_1 = this ;
  GALGAS_lstring var_mangledName_7896 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_7303, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 186)) ;
  GALGAS_lstring var_nameForUsefulness_8005 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_7896, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 188)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8005, var_nameForUsefulness_8005, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 189)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_externProcedureDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_8005  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 191)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (var_mangledName_7896.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 195)), GALGAS_routinePrototypeDeclarationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (var_mangledName_7896.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extern-procedure-declaration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 198)), var_mangledName_7896.readProperty_string (), var_formalArgumentList_7237  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 196))  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 194)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@routinePrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_routinePrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extern-procedure-declaration.galgas", 221)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, temp_0.readProperty_routineMangledName (), temp_1.readProperty_mFormalArgumentList () COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 228))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_routineSignature_6926 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 180)) ;
  const GALGAS_procDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_6999 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_6999.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_7093 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6999.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_7093, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 182)) ;
    }
    var_routineSignature_6926.addAssign_operation (enumerator_6999.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_7093, enumerator_6999.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_6999.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 183)) ;
    enumerator_6999.gotoNextObject () ;
  }
  const GALGAS_procDeclarationAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 190)) ;
  {
  const GALGAS_procDeclarationAST temp_2 = this ;
  const GALGAS_procDeclarationAST temp_3 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_2.readProperty_mRoutineName (), var_routineSignature_6926, temp_3.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 192)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_routineSignature_8273 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 209)) ;
  const GALGAS_procDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_8346 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_8346.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_8382 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8346.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 211)) ;
    var_routineSignature_8273.addAssign_operation (enumerator_8346.current (HERE).readProperty_mFormalSelector (), var_parameterType_8382, enumerator_8346.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_8346.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 212)) ;
    enumerator_8346.gotoNextObject () ;
  }
  const GALGAS_procDeclarationAST temp_1 = this ;
  GALGAS_lstring var_mangledName_8653 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_8273, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 218)) ;
  GALGAS_lstring var_nameForUsefulness_8762 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_8653, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 220)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8762, var_nameForUsefulness_8762, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 221)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_procDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_8762  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 223)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_9036 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("procedure-declaration.galgas", 230)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 226)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_9637 ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList_9664 ;
  {
  const GALGAS_procDeclarationAST temp_4 = this ;
  const GALGAS_procDeclarationAST temp_5 = this ;
  const GALGAS_procDeclarationAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_8762, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9036, ioArgument_ioTypeMap, temp_4.readProperty_mFormalArgumentListAST (), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 240)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 241)), temp_5.readProperty_mRoutineInstructionList (), temp_6.readProperty_mEndOfRoutineInstructionList (), var_instructionList_9637, var_formalArgumentList_9664, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 234)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (var_mangledName_8653.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 248)), GALGAS_routineImplementationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (var_mangledName_8653.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 251)), var_mangledName_8653.readProperty_string (), var_formalArgumentList_9664, GALGAS_bool (false), var_instructionList_9637  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 249))  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 247)) ;
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
    test_0 = temp_1.readProperty_generateHeader ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_2.readProperty_routineMangledName ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 281))  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 281)) ;
    }
  }
  GALGAS_string var_code_11532 ;
  {
  const GALGAS_routineImplementationForGeneration temp_3 = this ;
  const GALGAS_routineImplementationForGeneration temp_4 = this ;
  const GALGAS_routineImplementationForGeneration temp_5 = this ;
  const GALGAS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (temp_3.readProperty_mGenerateStatic (), GALGAS_string ("routine_").add_operation (temp_4.readProperty_routineMangledName ().getter_identifierRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 285)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_11532, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 283)) ;
  }
  const GALGAS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.readProperty_routineMangledName (), var_code_11532 COMMA_SOURCE_FILE ("procedure-declaration.galgas", 296))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'generateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bool onceFunction_generateFewHeaderFiles (Compiler *
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_generateFewHeaderFiles = false ;
static GALGAS_bool gOnceFunctionResult_generateFewHeaderFiles ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool function_generateFewHeaderFiles (class Compiler * inCompiler
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

static const C_galgas_type_descriptor * functionArgs_generateFewHeaderFiles [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateFewHeaderFiles (Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
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
//
//Routine 'enterClassFunctionWithoutArgument&&?name?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (GALGAS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                   const GALGAS_string constinArgument_inClassFunctionName,
                                                                                                   const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                   const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_1691 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1691, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 32)) ;
  }
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 37)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 38)), constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1691 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 36)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithArgument&&?name?argTypeName?argName?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (GALGAS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                          const GALGAS_string constinArgument_inClassFunctionName,
                                                                                                                          const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                          const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                          const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                          const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_2399 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2399, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 55)) ;
  }
  GALGAS_unifiedTypeMapEntry var_t_2486 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2486, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 56)) ;
  }
  {
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 59)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 59)), var_t_2486, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 59)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 58)), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2399 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 57)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith2Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (GALGAS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                         const GALGAS_string constinArgument_inClassFunctionName,
                                                                                                                                                                         const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                         const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                         const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                         const GALGAS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                         const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                         const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_3306 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3306, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78)) ;
  }
  GALGAS_functionSignature var_argumentTypeList_3331 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 79)) ;
  GALGAS_unifiedTypeMapEntry var_t_3399 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3399, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 81)) ;
  }
  var_argumentTypeList_3331.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 82)), var_t_3399, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 82)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3399, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 83)) ;
  }
  var_argumentTypeList_3331.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 84)), var_t_3399, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 84)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 86)), var_argumentTypeList_3331, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3306 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 85)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith3Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?argTypeName3?argName3?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (GALGAS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inClassFunctionName,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_33_TypeName,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_33_Name,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                           const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_4520 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4520, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 108)) ;
  }
  GALGAS_unifiedTypeMapEntry var_t_4607 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4607, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109)) ;
  }
  GALGAS_functionSignature var_argumentTypeList_4635 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 110)) ;
  var_argumentTypeList_4635.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 111)), var_t_4607, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 111)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4607, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 112)) ;
  }
  var_argumentTypeList_4635.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 113)), var_t_4607, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 113)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4607, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 114)) ;
  }
  var_argumentTypeList_4635.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 115)), var_t_4607, constinArgument_inArgument_33_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 115)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 117)), var_argumentTypeList_4635, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4520 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 116)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GALGAS_string constinArgument_inGetterName,
                                                                                                                                   const GALGAS_string constinArgument_inObsoleteGetterName,
                                                                                                                                   const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_1932 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1932, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 31)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 33)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 34)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 35)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 36)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1932, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 39)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 32)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inObsoleteGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 44)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 45)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 46)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 47)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1932, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 50)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 43)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GALGAS_string constinArgument_inGetterName,
                                                                                                                                   const GALGAS_string constinArgument_inObsoleteGetterName,
                                                                                                                                   const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_3303 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3303, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 64)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 66)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 67)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 68)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 69)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3303, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 72)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 65)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inObsoleteGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 77)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 78)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 79)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 80)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3303, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 83)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 76)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                    const GALGAS_string constinArgument_inGetterName,
                                                                                                                                                    const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                    const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                                    const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                                    const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_4475 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4475, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 100)) ;
  }
  GALGAS_functionSignature var_argList_4519 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 101)) ;
  GALGAS_unifiedTypeMapEntry var_t_4600 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4600, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 102)) ;
  }
  var_argList_4519.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 103)), var_t_4600, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 103)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 105)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 106)), var_argList_4519, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 108)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_4475, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 111)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 104)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWith2Arguments&&??????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_5498 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5498, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 129)) ;
  }
  GALGAS_functionSignature var_argList_5542 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 130)) ;
  GALGAS_unifiedTypeMapEntry var_t_5640 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_5640, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 131)) ;
  }
  var_argList_5542.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 132)), var_t_5640, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 132)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_5640, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 133)) ;
  }
  var_argList_5542.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 134)), var_t_5640, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 134)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 136)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 137)), var_argList_5542, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 139)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_5498, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 142)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 135)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                              const GALGAS_string constinArgument_inGetterName,
                                                                                                                              const GALGAS_string constinArgument_inObsoleteGetterName,
                                                                                                                              const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                              const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_6752 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_6752, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 155)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 157)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 158)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 159)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 160)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_6752, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 163)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 156)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inObsoleteGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 168)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 169)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 170)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 171)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_6752, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 174)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 167)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argSelector?argType?argName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                const GALGAS_string constinArgument_inGetterName,
                                                                                                                                                const GALGAS_string constinArgument_inArgument_31_Selector,
                                                                                                                                                const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                                const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                                const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_8005 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_8005, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 192)) ;
  }
  GALGAS_functionSignature var_argList_8049 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 193)) ;
  GALGAS_unifiedTypeMapEntry var_t_8130 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_8130, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 194)) ;
  }
  var_argList_8049.addAssign_operation (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 195)), var_t_8130, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 195)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 197)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 198)), var_argList_8049, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 200)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_8005, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 203)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 196)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument&&?getterName???returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                        const GALGAS_string constinArgument_inGetterName,
                                                                                                                        const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                        const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                        const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                        const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_8985 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_8985, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 219)) ;
  }
  GALGAS_functionSignature var_argList_9029 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 220)) ;
  GALGAS_unifiedTypeMapEntry var_t_9110 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_9110, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 221)) ;
  }
  var_argList_9029.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 222)), var_t_9110, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 222)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 224)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 225)), var_argList_9029, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 227)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_8985, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 230)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 223)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&?getterName?arg1Selector?arg1TypeName?arg1Name?arg2Selector?arg2TypeName?arg2Name?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inGetterName,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_31_Selector,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_32_Selector,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                                          const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_10162 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_10162, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 250)) ;
  }
  GALGAS_functionSignature var_argList_10206 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 251)) ;
  GALGAS_unifiedTypeMapEntry var_t_10304 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_10304, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 252)) ;
  }
  var_argList_10206.addAssign_operation (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 253)), var_t_10304, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 253)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_10304, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 254)) ;
  }
  var_argList_10206.addAssign_operation (constinArgument_inArgument_32_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 255)), var_t_10304, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 255)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 257)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 258)), var_argList_10206, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 260)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_10162, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 263)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 256)) ;
  }
}


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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_11363 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_11363, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 281)) ;
  }
  GALGAS_functionSignature var_argList_11407 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 282)) ;
  GALGAS_unifiedTypeMapEntry var_t_11505 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_11505, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 283)) ;
  }
  var_argList_11407.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 284)), var_t_11505, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 284)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_11505, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 285)) ;
  }
  var_argList_11407.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 286)), var_t_11505, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 286)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 288)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 289)), var_argList_11407, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 291)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_11363, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 294)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 287)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_12590 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_12590, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 314)) ;
  }
  GALGAS_functionSignature var_argList_12634 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 315)) ;
  GALGAS_unifiedTypeMapEntry var_t_12732 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_12732, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 316)) ;
  }
  var_argList_12634.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 317)), var_t_12732, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 317)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_12732, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 318)) ;
  }
  var_argList_12634.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 319)), var_t_12732, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 319)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_12732, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 320)) ;
  }
  var_argList_12634.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 321)), var_t_12732, constinArgument_inArgument_33_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 321)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 323)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 324)), var_argList_12634, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 326)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_12590, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 329)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 322)) ;
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
  result_result = GALGAS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 329)) ;
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
  result_result = GALGAS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 336)) ;
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
  result_result = GALGAS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 343)) ;
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
  result_result = GALGAS_string ("enum @").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 350)) ;
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
  result_result = GALGAS_string ("sorted list @").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 357)) ;
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
  result_result = GALGAS_string ("list @").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 364)) ;
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
  result_result = GALGAS_string ("listmap @").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 371)) ;
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
  result_result = GALGAS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 378)) ;
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
  result_result = GALGAS_string ("option ").add_operation (temp_0.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 385)) ;
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
  result_result = GALGAS_string ("graph @").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 392)) ;
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
  result_result = GALGAS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 399)) ;
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
  result_result = GALGAS_string ("once function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 406)) ;
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
  result_result = GALGAS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 412)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'addExtensions????&&??isClass&&&&?acceptSetters'
//
//--------------------------------------------------------------------------------------------------

void routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                                    const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                                    const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                                    const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                                    GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    const GALGAS_lstring constinArgument_inTypeName,
                                                                                                    const GALGAS_bool constinArgument_inIsClass,
                                                                                                    GALGAS_initializerMap & ioArgument_ioInitializerMap,
                                                                                                    GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                    GALGAS_setterMap & ioArgument_ioSetterMap,
                                                                                                    GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                                                    const GALGAS_bool constinArgument_inAcceptSetters,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 436)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_extensionGetterMapForType var_extensionGetterMapForType_17512 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_17512, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 437)) ;
      cEnumerator_extensionGetterMapForType enumerator_17595 (var_extensionGetterMapForType_17512, EnumerationOrder::up) ;
      while (enumerator_17595.hasCurrentObject ()) {
        GALGAS_functionSignature var_formalArgumentList_17667 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 439)) ;
        cEnumerator_formalInputParameterListAST enumerator_17724 (enumerator_17595.current_mInputFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_17724.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_17834 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17724.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_17834, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 441)) ;
          }
          var_formalArgumentList_17667.addAssign_operation (enumerator_17724.current (HERE).readProperty_mFormalSelector (), var_typeIndex_17834, enumerator_17724.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_17724.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 442)) ;
          enumerator_17724.gotoNextObject () ;
        }
        GALGAS_unifiedTypeMapEntry var_returnedType_18105 ;
        {
        extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17595.current_mResultTypeName (HERE), var_returnedType_18105, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 448)) ;
        }
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_17595.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 449)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = ioArgument_ioGetterMap.getter_hasKey (enumerator_17595.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 450)).boolEnum () ;
              if (kBoolTrue == test_2) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 451)), enumerator_17595.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 451)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_17595.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 453)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = ioArgument_ioGetterMap.getter_hasKey (enumerator_17595.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 454)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 455)), enumerator_17595.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 455)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = constinArgument_inIsClass.operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_17595.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 457)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 457)).boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_17595.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 460)), var_formalArgumentList_17667, enumerator_17595.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), var_returnedType_18105, GALGAS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 465)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 458)) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_17595.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 471)), var_formalArgumentList_17667, enumerator_17595.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), var_returnedType_18105, enumerator_17595.current_mQualifier (HERE), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 469)) ;
              }
            }
          }
        }
        enumerator_17595.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 483)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_extensionMethodMapForType var_extensionMethodMapForType_19320 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_19320, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 484)) ;
      cEnumerator_extensionMethodMapForType enumerator_19382 (var_extensionMethodMapForType_19320, EnumerationOrder::up) ;
      while (enumerator_19382.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_formalArgumentList_19435 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 486)) ;
        cEnumerator_formalParameterListAST enumerator_19508 (enumerator_19382.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_19508.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_19644 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_19508.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_19644, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 488)) ;
          }
          var_formalArgumentList_19435.addAssign_operation (enumerator_19508.current (HERE).readProperty_mFormalSelector (), var_typeIndex_19644, enumerator_19508.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_19508.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 492)) ;
          enumerator_19508.gotoNextObject () ;
        }
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_19382.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 498)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_19382.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 499)).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 500)), enumerator_19382.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 500)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (ComparisonKind::equal, enumerator_19382.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 502)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                test_10 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_19382.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 503)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 504)), enumerator_19382.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 504)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = constinArgument_inIsClass.operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_19382.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 506)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 506)).boolEnum () ;
              if (kBoolTrue == test_11) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_19382.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 509)), var_formalArgumentList_19435, enumerator_19382.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 513)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 507)) ;
                }
              }
            }
            if (kBoolFalse == test_11) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_19382.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 519)), var_formalArgumentList_19435, enumerator_19382.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), enumerator_19382.current_mQualifier (HERE), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 517)) ;
              }
            }
          }
        }
        enumerator_19382.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 530)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_extensionSetterMapForType var_extensionSetterMapForType_21002 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_21002, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 531)) ;
      cEnumerator_extensionSetterMapForType enumerator_21043 (var_extensionSetterMapForType_21002, EnumerationOrder::up) ;
      while (enumerator_21043.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_formalArgumentList_21133 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 533)) ;
        cEnumerator_formalParameterListAST enumerator_21180 (enumerator_21043.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_21180.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_21276 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21180.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_21276, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 535)) ;
          }
          var_formalArgumentList_21133.addAssign_operation (enumerator_21180.current (HERE).readProperty_mFormalSelector (), var_typeIndex_21276, enumerator_21180.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_21180.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 536)) ;
          enumerator_21180.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_21043.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 544)), var_formalArgumentList_21133, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 547)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 542)) ;
        }
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          test_13 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas", 550)).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_21043.current_lkey (HERE).readProperty_location (), GALGAS_string ("a refclass does not accept any setter; use method instead"), fixItArray14  COMMA_SOURCE_FILE ("semanticContext.galgas", 551)) ;
          }
        }
        enumerator_21043.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = constinArgument_inExtensionInitializerMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 556)).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_extensionInitializerMapForType var_initializerMapForType_22028 ;
      constinArgument_inExtensionInitializerMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_initializerMapForType_22028, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 557)) ;
      cEnumerator_extensionInitializerMapForType enumerator_22065 (var_initializerMapForType_22028, EnumerationOrder::up) ;
      while (enumerator_22065.hasCurrentObject ()) {
        GALGAS_functionSignature var_formalArgumentList_22144 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 559)) ;
        cEnumerator_formalInputParameterListAST enumerator_22240 (enumerator_22065.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_22240.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_22340 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_22240.current_mFormalArgumentTypeName (HERE), var_typeIndex_22340, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 561)) ;
          }
          var_formalArgumentList_22144.addAssign_operation (enumerator_22240.current_mFormalSelector (HERE), var_typeIndex_22340, enumerator_22240.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_22240.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 562)) ;
          enumerator_22240.gotoNextObject () ;
        }
        {
        ioArgument_ioInitializerMap.setter_insertKey (enumerator_22065.current_lkey (HERE), var_formalArgumentList_22144, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 572)) ;
        }
        enumerator_22065.gotoNextObject () ;
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
  GALGAS_uint var_currentDirectoryIndex_24490 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 616)) ;
  GALGAS_stringlist var_files_24617 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 618)) ;
  outArgument_outWrapperFileMap = GALGAS_wrapperFileMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 619)) ;
  cEnumerator_stringlist enumerator_24700 (var_files_24617, EnumerationOrder::up) ;
  while (enumerator_24700.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_24700.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 621)) COMMA_SOURCE_FILE ("semanticContext.galgas", 621)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_absoluteFilePath_24806 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 622)).add_operation (enumerator_24700.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 622)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::class_func_new (enumerator_24700.current_mValue (HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 624)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 624)), var_absoluteFilePath_24806, GALGAS_bool (true), var_currentDirectoryIndex_24490, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 623)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 630)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_24700.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 631)) COMMA_SOURCE_FILE ("semanticContext.galgas", 631)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string var_absoluteFilePath_25186 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 632)).add_operation (enumerator_24700.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 632)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::class_func_new (enumerator_24700.current_mValue (HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 634)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 634)), var_absoluteFilePath_25186, GALGAS_bool (false), var_currentDirectoryIndex_24490, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 633)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 640)) ;
        }
      }
    }
    enumerator_24700.gotoNextObject () ;
  }
  GALGAS_stringlist var_directories_25546 = constinArgument_inAbsoluteSourcePath.getter_directories (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 644)) ;
  outArgument_outWrapperDirectoryMap = GALGAS_wrapperDirectoryMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 645)) ;
  cEnumerator_stringlist enumerator_25639 (var_directories_25546, EnumerationOrder::up) ;
  while (enumerator_25639.hasCurrentObject ()) {
    GALGAS_uint var_theDirectoryIndex_25679 = ioArgument_ioWrapperDirectoryIndex ;
    GALGAS_wrapperFileMap var_internalWrapperFileMap_25915 ;
    GALGAS_wrapperDirectoryMap var_internalWrapperDirectoryMap_25949 ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 649)).add_operation (enumerator_25639.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 649)), constinArgument_inPathInWrapper.add_operation (enumerator_25639.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 650)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 650)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_25915, var_internalWrapperDirectoryMap_25949, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 648)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GALGAS_lstring::class_func_new (enumerator_25639.current_mValue (HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 659)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 659)), var_internalWrapperFileMap_25915, var_internalWrapperDirectoryMap_25949, var_theDirectoryIndex_25679, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 658)) ;
    }
    enumerator_25639.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_26927 = GALGAS_filewrapperTemplateMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 678)) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = this ;
  cEnumerator_filewrapperTemplateListAST enumerator_27012 (temp_0.readProperty_mFilewrapperTemplateList (), EnumerationOrder::up) ;
  while (enumerator_27012.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature_27118 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 680)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_27218 (enumerator_27012.current_mFilewrapperTemplateFormalInputParameters (HERE), EnumerationOrder::up) ;
    while (enumerator_27218.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_27338 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_27218.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_27338, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 682)) ;
      }
      var_templateSignature_27118.addAssign_operation (enumerator_27218.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex_27338, enumerator_27218.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_27218.current_mIsUnused (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 683)) ;
      enumerator_27218.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_26927.setter_insertKey (enumerator_27012.current_mFilewrapperTemplateName (HERE), var_templateSignature_27118, enumerator_27012.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 685)) ;
    }
    enumerator_27012.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap_27681 = GALGAS_wrapperExtensionMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 692)) ;
  const GALGAS_filewrapperDeclarationAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_27710 (temp_1.readProperty_mFilewrapperTextFileExtensionList (), EnumerationOrder::up) ;
  while (enumerator_27710.hasCurrentObject ()) {
    {
    var_textExtensionMap_27681.setter_insertKey (enumerator_27710.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 694)) ;
    }
    enumerator_27710.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap_27876 = GALGAS_wrapperExtensionMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 697)) ;
  const GALGAS_filewrapperDeclarationAST temp_2 = this ;
  cEnumerator_lstringlist enumerator_27911 (temp_2.readProperty_mFilewrapperBinaryFileExtensionList (), EnumerationOrder::up) ;
  while (enumerator_27911.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_textExtensionMap_27681.getter_hasKey (enumerator_27911.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 699)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_27911.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_27911.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 700)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 700)), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas", 700)) ;
      }
    }
    if (kBoolFalse == test_3) {
      {
      var_binaryFileExtensionMap_27876.setter_insertKey (enumerator_27911.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 702)) ;
      }
    }
    enumerator_27911.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap_28229 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_28275 ;
  GALGAS_string var_absoluteSourcePath_28309 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_filewrapperDeclarationAST temp_6 = this ;
    test_5 = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 709)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperDeclarationAST temp_7 = this ;
      var_absoluteSourcePath_28309 = temp_7.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_filewrapperDeclarationAST temp_8 = this ;
    const GALGAS_filewrapperDeclarationAST temp_9 = this ;
    var_absoluteSourcePath_28309 = temp_8.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 712)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 712)).add_operation (temp_9.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 712)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_absoluteSourcePath_28309.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 714)).operator_not (SOURCE_FILE ("semanticContext.galgas", 714)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperDeclarationAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_28309, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 715)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 715)), fixItArray12  COMMA_SOURCE_FILE ("semanticContext.galgas", 715)) ;
      var_regularRootFileMap_28229.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_28275.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    GALGAS_uint var_wrapperFileIndex_28825 = GALGAS_uint (uint32_t (0U)) ;
    GALGAS_uint var_wrapperDirectoryIndex_28860 = GALGAS_uint (uint32_t (0U)) ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_28309, GALGAS_string ("/"), var_textExtensionMap_27681, var_binaryFileExtensionMap_27876, var_regularRootFileMap_28229, var_wrapperDirectoryMap_28275, var_wrapperFileIndex_28825, var_wrapperDirectoryIndex_28860, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 721)) ;
    }
  }
  {
  const GALGAS_filewrapperDeclarationAST temp_13 = this ;
  const GALGAS_filewrapperDeclarationAST temp_14 = this ;
  const GALGAS_filewrapperDeclarationAST temp_15 = this ;
  const GALGAS_filewrapperDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_13.readProperty_mFilewrapperName (), temp_14.readProperty_mFilewrapperPath (), temp_15.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_28229, var_wrapperDirectoryMap_28275, var_filewrapperTemplateMap_26927, temp_16.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 733)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionSignature var_functionSignature_30118 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 754)) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = this ;
  cEnumerator_formalInputParameterListAST enumerator_30211 (temp_0.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_30211.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_30312 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_30211.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_30312, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 756)) ;
    }
    var_functionSignature_30118.addAssign_operation (enumerator_30211.current_mFormalSelector (HERE), var_parameterTypeIndex_30312, enumerator_30211.current_mFormalArgumentTypeName (HERE).readProperty_string (), enumerator_30211.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 757)) ;
    enumerator_30211.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_resultTypeIndex_30514 ;
  {
  const GALGAS_externFunctionDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mResultTypeName (), var_resultTypeIndex_30514, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 760)) ;
  }
  {
  const GALGAS_externFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.readProperty_mFunctionName (), var_functionSignature_30118, var_resultTypeIndex_30514, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 762)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_resultTypeIndex_31457 ;
  {
  const GALGAS_onceFunctionDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mResultTypeName (), var_resultTypeIndex_31457, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 780)) ;
  }
  {
  const GALGAS_onceFunctionDeclarationAST temp_1 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_1.readProperty_mFunctionName (), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 782)), var_resultTypeIndex_31457, temp_2.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 782)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 795)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_grammarLabelMap var_grammarLabelMap_33202 = GALGAS_grammarLabelMap::class_func_emptyMap (SOURCE_FILE ("semanticContext.galgas", 815)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = this ;
  cEnumerator_nonTerminalLabelListAST enumerator_33261 (temp_0.readProperty_mStartSymbolLabelList (), EnumerationOrder::up) ;
  while (enumerator_33261.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_formalArgumentList_33356 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticContext.galgas", 818)) ;
    cEnumerator_formalParameterListAST enumerator_33476 (enumerator_33261.current_mFormalArgumentList (HERE), EnumerationOrder::up) ;
    while (enumerator_33476.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentType_33565 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_33476.current_mFormalArgumentTypeName (HERE), var_argumentType_33565, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 820)) ;
      }
      var_formalArgumentList_33356.addAssign_operation (enumerator_33476.current_mFormalSelector (HERE), var_argumentType_33565, enumerator_33476.current_mFormalArgumentPassingMode (HERE), enumerator_33476.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 821)) ;
      enumerator_33476.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_33202.setter_insertKey (enumerator_33261.current_mLabelName (HERE), var_formalArgumentList_33356, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 827)) ;
    }
    enumerator_33261.gotoNextObject () ;
  }
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_1 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_grammarMap.setter_insertGrammar (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_33202, temp_2.readProperty_mHasIndexing ().readProperty_bool (), temp_3.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 833)) ;
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
  GALGAS_lstring var_key_35852 = GALGAS_lstring::class_func_new (GALGAS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 874)), temp_1.readProperty_mGrammarComponentName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 874)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_35852, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 875)) ;
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = this ;
  cEnumerator_lstringlist enumerator_36013 (temp_3.readProperty_mSyntaxComponents (), EnumerationOrder::up) ;
  while (enumerator_36013.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_35852, GALGAS_lstring::class_func_new (GALGAS_string ("syntax ").add_operation (enumerator_36013.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 877)), enumerator_36013.current_mValue (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 877)) COMMA_SOURCE_FILE ("semanticContext.galgas", 877)) ;
    }
    enumerator_36013.gotoNextObject () ;
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
  GALGAS_lstring var_key_36815 = GALGAS_lstring::class_func_new (GALGAS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 890)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 890)) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_36815, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 891)) ;
  }
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_36815, GALGAS_lstring::class_func_new (GALGAS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 892)), temp_4.readProperty_mLexiqueName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 892)) COMMA_SOURCE_FILE ("semanticContext.galgas", 892)) ;
  }
  const GALGAS_galgas_33_SyntaxComponentAST temp_5 = this ;
  cEnumerator_syntaxRuleListAST enumerator_37100 (temp_5.readProperty_mRuleList (), EnumerationOrder::up) ;
  while (enumerator_37100.hasCurrentObject ()) {
    cEnumerator_syntaxRuleLabelListAST enumerator_37165 (enumerator_37100.current_mLabelList (HERE), EnumerationOrder::up) ;
    while (enumerator_37165.hasCurrentObject ()) {
      cEnumerator_formalParameterListAST enumerator_37251 (enumerator_37165.current_mFormalArguments (HERE), EnumerationOrder::up) ;
      while (enumerator_37251.hasCurrentObject ()) {
        switch (enumerator_37251.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_36815, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (enumerator_37251.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 897)), enumerator_37251.current_mFormalArgumentTypeName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 897)) COMMA_SOURCE_FILE ("semanticContext.galgas", 897)) ;
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
        enumerator_37251.gotoNextObject () ;
      }
      enumerator_37165.gotoNextObject () ;
    }
    enumerator_37100.gotoNextObject () ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 914)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 926)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 938)) ;
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
//Overriding extension getter '@semanticTypeForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticTypeForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
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
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 281)).readProperty_headerKind () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticDeclarationWithHeaderForGeneration::getter_getImplementationCppFileName (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_implementationCppFileName () ;
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
  GALGAS_unifiedTypeMapEntry var_boolType_6436 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
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
            GALGAS_AccessControl var_accessControl_6814 ;
            GALGAS_unifiedTypeMapEntry var_attributeType_6873 ;
            GALGAS_bool joker_6836 ; // Joker input parameter
            extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)).readProperty_propertyMap ().method_searchKey (GALGAS_lstring::class_func_new (GALGAS_string ("bool"), constinArgument_inErrorLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 157)), var_accessControl_6814, joker_6836, var_attributeType_6873, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)) ;
            extensionMethod_checkSetAccess (var_accessControl_6814, constinArgument_inAnalysisContext.readProperty_selfAvailability (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 162)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (ComparisonKind::equal, var_attributeType_6873.objectCompare (var_boolType_6436)).boolEnum () ;
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
      const cMapElement_getterMap * objectArray_7749 = (const cMapElement_getterMap *) extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 184)).readProperty_getterMap ().readAccessForWithInstruction (GALGAS_string ("bool")) ;
      if (nullptr != objectArray_7749) {
          macroValidSharedObject (objectArray_7749, cMapElement_getterMap) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (ComparisonKind::notEqual, objectArray_7749->mProperty_mReturnedType.objectCompare (var_boolType_6436)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter, but it does not return a '@bool' value"), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 186)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (ComparisonKind::greaterThan, objectArray_7749->mProperty_mArgumentTypeList.getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 187)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter that requires argument(s)"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 188)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_8) {
            outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::class_func_new (var_boolType_6436, constinArgument_inErrorLocation, objectArray_7749->mProperty_mKind, constinArgument_inExpression, GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)), GALGAS_string ("bool"), GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 197)), objectArray_7749->mProperty_mHasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 190)) ;
          }
        }
      }else{
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)).readProperty_getterMap ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_10) {
          TC_Array <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, kFixItReplace, extensionGetter_definition (var_expressionType_6370, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 210)).readProperty_getterMap ().getter_keyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 210))) ;
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
  GALGAS_unifiedTypeMapEntry var_type_11373 ;
  GALGAS_string var_cppName_11391 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GALGAS_string joker_11399 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_11373, var_cppName_11391, joker_11399, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 263)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_11409 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_11409.objectCompare (var_type_11373)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (extensionGetter_identifierRepresentation (var_type_11373, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_11409, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 266)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName_11391.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)) ;
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
  GALGAS_string var_cppName_12462 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_12604 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 286)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GALGAS_bool (true), var_type_12604, var_cppName_12462, var_cppName_12462, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 287)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_12807 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_12807.objectCompare (var_type_12604)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (extensionGetter_identifierRepresentation (var_type_12604, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_12807, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 290)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName_12462, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)) ;
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
  GALGAS_string var_cppName_13895 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_14037 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 310)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_14037, var_cppName_13895, var_cppName_13895, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_14215 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_14215.objectCompare (var_type_14037)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (extensionGetter_identifierRepresentation (var_type_14037, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_14215, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 314)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_13895, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)) ;
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
    cEnumerator_functionSignature enumerator_5191 (constinArgument_inReferenceSignature, EnumerationOrder::up) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_5278 (constinArgument_inTestedSignature, EnumerationOrder::up) ;
    while (enumerator_5191.hasCurrentObject () && enumerator_5278.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5278.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5191.current_mFormalSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5191.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_5191.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_5392 = GALGAS_string ("\?").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)) ;
          TC_Array <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_5392) ;
          inCompiler->emitSemanticError (enumerator_5278.current_mFormalSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_5392, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_5278.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 101)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_5191.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 101)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5278.current_mFormalArgumentName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5278.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)).add_operation (extensionGetter_definition (enumerator_5278.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)).add_operation (GALGAS_string ("' type, but overriden getter declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 103)).add_operation (extensionGetter_definition (enumerator_5191.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 104)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 103)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 104)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 102)) ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 105)) ;
        }
      }
      enumerator_5191.gotoNextObject () ;
      enumerator_5278.gotoNextObject () ;
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
  cEnumerator_formalParameterListAST enumerator_7995 (constinArgument_inRoutineSignatureAST, EnumerationOrder::up) ;
  while (enumerator_7995.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_8028 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7995.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 145)) ;
    GALGAS_string var_formalArgumentCppName_8123 ;
    switch (enumerator_7995.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        var_formalArgumentCppName_8123 = GALGAS_string ("inArgument_").add_operation (enumerator_7995.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 149)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = enumerator_7995.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            extensionSetter_insertInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7995.current (HERE).readProperty_mFormalArgumentName (), var_type_8028, var_formalArgumentCppName_8123, var_formalArgumentCppName_8123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 152)) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          {
          extensionSetter_insertInputFormalArgument (ioArgument_ioVariableMap, enumerator_7995.current (HERE).readProperty_mFormalArgumentName (), var_type_8028, var_formalArgumentCppName_8123, var_formalArgumentCppName_8123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 159)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        var_formalArgumentCppName_8123 = GALGAS_string ("outArgument_").add_operation (enumerator_7995.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 167)) ;
        {
        extensionSetter_insertOutputFormalArgument (ioArgument_ioVariableMap, enumerator_7995.current (HERE).readProperty_mFormalArgumentName (), var_type_8028, var_formalArgumentCppName_8123, var_formalArgumentCppName_8123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 169)) ;
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        var_formalArgumentCppName_8123 = GALGAS_string ("ioArgument_").add_operation (enumerator_7995.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 176)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = enumerator_7995.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7995.current (HERE).readProperty_mFormalArgumentName (), var_type_8028, var_formalArgumentCppName_8123, var_formalArgumentCppName_8123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 179)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          extensionSetter_insertInputOutputFormalArgument (ioArgument_ioVariableMap, enumerator_7995.current (HERE).readProperty_mFormalArgumentName (), var_type_8028, var_formalArgumentCppName_8123, var_formalArgumentCppName_8123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 186)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        var_formalArgumentCppName_8123 = GALGAS_string ("constinArgument_").add_operation (enumerator_7995.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 194)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_7995.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7995.current (HERE).readProperty_mFormalArgumentName (), var_type_8028, var_formalArgumentCppName_8123, var_formalArgumentCppName_8123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 197)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (ioArgument_ioVariableMap, enumerator_7995.current (HERE).readProperty_mFormalArgumentName (), var_type_8028, var_formalArgumentCppName_8123, var_formalArgumentCppName_8123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 204)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssign_operation (enumerator_7995.current (HERE).readProperty_mFormalSelector (), enumerator_7995.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_8028, enumerator_7995.current (HERE).readProperty_mFormalArgumentName (), var_formalArgumentCppName_8123  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 212)) ;
    enumerator_7995.gotoNextObject () ;
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
  GALGAS_localVarManager var_variableMap_11503 = GALGAS_localVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 229)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 231)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_11666 (constinArgument_inNonMutableTypedAttributeList, EnumerationOrder::up) ;
      while (enumerator_11666.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_11503, enumerator_11666.current (HERE).readProperty_name (), enumerator_11666.current (HERE).readProperty_typeEntry (), constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 236)).add_operation (enumerator_11666.current (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 237)), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 233)) ;
        }
        enumerator_11666.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 243)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_typedPropertyList enumerator_12131 (constinArgument_inMutableTypedAttributeList, EnumerationOrder::up) ;
      while (enumerator_12131.hasCurrentObject ()) {
        {
        extensionSetter_insertMutableProperty (var_variableMap_11503, enumerator_12131.current (HERE).readProperty_name (), enumerator_12131.current (HERE).readProperty_typeEntry (), constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 248)).add_operation (enumerator_12131.current (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 249)), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 245)) ;
        }
        enumerator_12131.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_unifiedTypeMapEntry var_type_12592 ;
    GALGAS_selfMutability var_selfMutability_12618 ;
    const bool optionalResult12571 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_type_12592, var_selfMutability_12618) ;
    if (!optionalResult12571) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      cEnumerator_typedPropertyList enumerator_12677 (extensionGetter_definition (var_type_12592, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 256)).readProperty_allTypedPropertyList (), EnumerationOrder::up) ;
      while (enumerator_12677.hasCurrentObject ()) {
        GALGAS_bool temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, var_selfMutability_12618.objectCompare (GALGAS_selfMutability::class_func_initializer (SOURCE_FILE ("semanticAnalysis.galgas", 257)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_bool (ComparisonKind::notEqual, enumerator_12677.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 258)))) ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_bool (true) ;
        }
        GALGAS_bool var_initialized_12711 = temp_3 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_11503, enumerator_12677.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_12677.current (HERE).readProperty_typeEntry (), GALGAS_string ("<< unused >>"), GALGAS_string ("self.").add_operation (enumerator_12677.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 266)), var_initialized_12711, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 261)) ;
        }
        enumerator_12677.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inRoutineSignatureAST, var_variableMap_11503, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 272)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 280)) ;
  cEnumerator_semanticInstructionListAST enumerator_13404 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_13404.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_13404.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_11503, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 282)) ;
    enumerator_13404.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_11503, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 292)) ;
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
  GALGAS_lstring var_nameForUsefulness_14312 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 307)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14312, var_nameForUsefulness_14312, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 308)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_externFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_14312  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 310)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList_14558 = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 313)) ;
  const GALGAS_externFunctionDeclarationAST temp_3 = this ;
  cEnumerator_formalInputParameterListAST enumerator_14690 (temp_3.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_14690.hasCurrentObject ()) {
    var_formalArgumentList_14558.addAssign_operation (enumerator_14690.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14690.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 317)), enumerator_14690.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_14690.current_mFormalArgumentName (HERE), enumerator_14690.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 315)) ;
    enumerator_14690.gotoNextObject () ;
  }
  const GALGAS_externFunctionDeclarationAST temp_4 = this ;
  const GALGAS_externFunctionDeclarationAST temp_5 = this ;
  const GALGAS_externFunctionDeclarationAST temp_6 = this ;
  const GALGAS_externFunctionDeclarationAST temp_7 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (temp_4.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 323)), GALGAS_functionPrototypeDeclarationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_5.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 326)), temp_6.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_14558, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mResultTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 329))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 324))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 322)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GALGAS_formalInputParameterListAST constinArgument_inFormalArgumentListAST,
                                                                         const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                                                         const GALGAS_location constinArgument_inEndOfMethodLocation,
                                                                         GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                         GALGAS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  GALGAS_localVarManager var_variableMap_16131 = GALGAS_localVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 344)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_type_16292 ;
    GALGAS_selfMutability var_selfMutability_16318 ;
    const bool optionalResult16271 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_type_16292, var_selfMutability_16318) ;
    if (!optionalResult16271) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_16377 (extensionGetter_definition (var_type_16292, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 347)).readProperty_allTypedPropertyList (), EnumerationOrder::up) ;
      while (enumerator_16377.hasCurrentObject ()) {
        GALGAS_bool temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, var_selfMutability_16318.objectCompare (GALGAS_selfMutability::class_func_initializer (SOURCE_FILE ("semanticAnalysis.galgas", 348)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = GALGAS_bool (ComparisonKind::notEqual, enumerator_16377.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 349)))) ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_bool (true) ;
        }
        GALGAS_bool var_initialized_16411 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_16131, enumerator_16377.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_16377.current (HERE).readProperty_typeEntry (), GALGAS_string ("<< unused >>"), GALGAS_string ("self.").add_operation (enumerator_16377.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 357)), var_initialized_16411, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 352)) ;
        }
        enumerator_16377.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 363)) ;
  cEnumerator_formalInputParameterListAST enumerator_16906 (constinArgument_inFormalArgumentListAST, EnumerationOrder::up) ;
  while (enumerator_16906.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_16941 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16906.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 365)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = enumerator_16906.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_cppName_17076 = GALGAS_string ("constinArgument_").add_operation (enumerator_16906.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 367)) ;
        outArgument_outSignatureForGeneration.addAssign_operation (enumerator_16906.current (HERE).readProperty_mFormalSelector (), var_parameterType_16941, var_cppName_17076, enumerator_16906.current (HERE).readProperty_mFormalArgumentName (), enumerator_16906.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 368)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = enumerator_16906.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_16131, enumerator_16906.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16941, var_cppName_17076, var_cppName_17076, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 375)) ;
            }
          }
        }
        if (kBoolFalse == test_4) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_16131, enumerator_16906.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16941, var_cppName_17076, var_cppName_17076, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 377)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_cppName_17693 = GALGAS_string ("inArgument_").add_operation (enumerator_16906.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 380)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_16906.current (HERE).readProperty_mFormalSelector (), var_parameterType_16941, var_cppName_17693, enumerator_16906.current (HERE).readProperty_mFormalArgumentName (), enumerator_16906.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 381)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = enumerator_16906.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_16131, enumerator_16906.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16941, var_cppName_17693, var_cppName_17693, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 388)) ;
          }
        }
      }
      if (kBoolFalse == test_5) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_16131, enumerator_16906.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16941, var_cppName_17693, var_cppName_17693, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 390)) ;
        }
      }
    }
    enumerator_16906.gotoNextObject () ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 395)) ;
  cEnumerator_semanticInstructionListAST enumerator_18399 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_18399.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_18399.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_16131, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 397)) ;
    enumerator_18399.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_16131, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 407)) ;
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
  GALGAS_localVarManager var_variableMap_19574 = GALGAS_localVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 429)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 431)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_19730 (constinArgument_inTypedAttributeList, EnumerationOrder::up) ;
      while (enumerator_19730.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_19574, enumerator_19730.current_name (HERE), enumerator_19730.current_typeEntry (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 436)).add_operation (enumerator_19730.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 436)), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 433)) ;
        }
        enumerator_19730.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 442)) ;
  cEnumerator_formalInputParameterListAST enumerator_20120 (constinArgument_inFunctionSignature, EnumerationOrder::up) ;
  while (enumerator_20120.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_20151 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_20120.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 444)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_20120.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_cppName_20286 = GALGAS_string ("constinArgument_").add_operation (enumerator_20120.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 446)) ;
        outArgument_outSignatureForGeneration.addAssign_operation (enumerator_20120.current (HERE).readProperty_mFormalSelector (), var_parameterType_20151, var_cppName_20286, enumerator_20120.current (HERE).readProperty_mFormalArgumentName (), enumerator_20120.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 447)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_20120.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_19574, enumerator_20120.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_20151, var_cppName_20286, var_cppName_20286, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 454)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_19574, enumerator_20120.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_20151, var_cppName_20286, var_cppName_20286, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 456)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_string var_cppName_20903 = GALGAS_string ("inArgument_").add_operation (enumerator_20120.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 459)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_20120.current (HERE).readProperty_mFormalSelector (), var_parameterType_20151, var_cppName_20903, enumerator_20120.current (HERE).readProperty_mFormalArgumentName (), enumerator_20120.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 460)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = enumerator_20120.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_19574, enumerator_20120.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_20151, var_cppName_20903, var_cppName_20903, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 467)) ;
          }
        }
      }
      if (kBoolFalse == test_3) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_19574, enumerator_20120.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_20151, var_cppName_20903, var_cppName_20903, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 469)) ;
        }
      }
    }
    enumerator_20120.gotoNextObject () ;
  }
  outArgument_outReturnedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inResultTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 474)) ;
  outArgument_outResultVariableCppName = GALGAS_string ("result_").add_operation (constinArgument_inReturnVariableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 475)) ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_19574, constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 476)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_unifiedTypeMapEntry var_type_21934 ;
    GALGAS_selfMutability var_unused_0_21956 ;
    const bool optionalResult21913 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_type_21934, var_unused_0_21956) ;
    if (!optionalResult21913) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      cEnumerator_typedPropertyList enumerator_22002 (extensionGetter_definition (var_type_21934, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 479)).readProperty_allTypedPropertyList (), EnumerationOrder::up) ;
      while (enumerator_22002.hasCurrentObject ()) {
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_19574, enumerator_22002.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfFunctionLocation, enumerator_22002.current (HERE).readProperty_typeEntry (), GALGAS_string ("<< unused >>"), GALGAS_string ("self.").add_operation (enumerator_22002.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 485)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 480)) ;
        }
        enumerator_22002.gotoNextObject () ;
      }
    }
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 491)) ;
  cEnumerator_semanticInstructionListAST enumerator_22397 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_22397.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_22397.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_19574, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 493)) ;
    enumerator_22397.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_19574, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 503)) ;
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
  GALGAS_lstring var_nameForUsefulness_23287 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 518)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_23287, var_nameForUsefulness_23287, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 519)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_functionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_23287  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 521)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_23555 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 528)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 524)) ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList_24152 ;
  GALGAS_unifiedTypeMapEntry var_returnType_24186 ;
  GALGAS_string var_resultVariableCppName_24206 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_24237 ;
  {
  const GALGAS_functionDeclarationAST temp_3 = this ;
  const GALGAS_functionDeclarationAST temp_4 = this ;
  const GALGAS_functionDeclarationAST temp_5 = this ;
  const GALGAS_functionDeclarationAST temp_6 = this ;
  const GALGAS_functionDeclarationAST temp_7 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_23287, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_23555, ioArgument_ioTypeMap, temp_3.readProperty_mFormalArgumentList (), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 538)), GALGAS_string::makeEmptyString (), temp_4.readProperty_mFunctionInstructionList (), temp_5.readProperty_mResultVariableName (), temp_6.readProperty_mResultTypeName (), temp_7.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_24152, var_returnType_24186, var_resultVariableCppName_24206, var_semanticInstructionListForGeneration_24237, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 532)) ;
  }
  const GALGAS_functionDeclarationAST temp_8 = this ;
  const GALGAS_functionDeclarationAST temp_9 = this ;
  const GALGAS_functionDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 551)), GALGAS_functionImplementationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_9.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 554)), temp_10.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_24152, var_returnType_24186, var_resultVariableCppName_24206, var_semanticInstructionListForGeneration_24237  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 552))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 550)) ;
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
  GALGAS_lstring var_nameForUsefulness_25280 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 574)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_25280, var_nameForUsefulness_25280, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_onceFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_25280  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 577)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_25547 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 584)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 580)) ;
  GALGAS_unifiedTypeMapEntry var_returnType_26158 ;
  GALGAS_string var_resultVariableCppName_26178 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_26209 ;
  {
  const GALGAS_onceFunctionDeclarationAST temp_3 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_4 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_5 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_6 = this ;
  GALGAS_formalInputParameterListForGeneration joker_26146 ; // Joker input parameter
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_25280, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_25547, ioArgument_ioTypeMap, GALGAS_formalInputParameterListAST::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 593)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 594)), GALGAS_string::makeEmptyString (), temp_3.readProperty_mFunctionInstructionList (), temp_4.readProperty_mResultVariableName (), temp_5.readProperty_mResultTypeName (), temp_6.readProperty_mEndOfFunctionInstructionList (), joker_26146, var_returnType_26158, var_resultVariableCppName_26178, var_semanticInstructionListForGeneration_26209, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 588)) ;
  }
  const GALGAS_onceFunctionDeclarationAST temp_7 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_8 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (temp_7.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 607)), GALGAS_onceFunctionDeclarationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 610)), temp_9.readProperty_mFunctionName ().readProperty_string (), var_returnType_26158, var_resultVariableCppName_26178, var_semanticInstructionListForGeneration_26209  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 608))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 606)) ;
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
  GALGAS_lstring var_filewrapperNameForUsefulness_27382 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 633)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_27382, var_filewrapperNameForUsefulness_27382, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 634)) ;
  }
  GALGAS_wrapperFileMap var_wrapperFileMap_27715 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_27760 ;
  const GALGAS_filewrapperDeclarationAST temp_1 = this ;
  GALGAS_lstring joker_27680 ; // Joker input parameter
  GALGAS_lstringlist joker_27687 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_27784_2 ; // Joker input parameter
  GALGAS_bool joker_27784_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), joker_27680, joker_27687, var_wrapperFileMap_27715, var_wrapperDirectoryMap_27760, joker_27784_2, joker_27784_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 636)) ;
  GALGAS_string var_absoluteSourcePath_27831 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::equal, temp_3.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 646)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperDeclarationAST temp_4 = this ;
      var_absoluteSourcePath_27831 = temp_4.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_5 = this ;
    const GALGAS_filewrapperDeclarationAST temp_6 = this ;
    var_absoluteSourcePath_27831 = temp_5.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 649)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 649)).add_operation (temp_6.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 649)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_absoluteSourcePath_27831.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 651)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 651)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_filewrapperDeclarationAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_27831, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 652)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 652)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 652)) ;
    }
  }
  if (kBoolFalse == test_7) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_28347 = GALGAS_filewrapperTemplateListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 655)) ;
    const GALGAS_filewrapperDeclarationAST temp_10 = this ;
    cEnumerator_filewrapperTemplateListAST enumerator_28448 (temp_10.readProperty_mFilewrapperTemplateList (), EnumerationOrder::up) ;
    while (enumerator_28448.hasCurrentObject ()) {
      const GALGAS_filewrapperDeclarationAST temp_11 = this ;
      GALGAS_lstring var_filewrapperTemplateNameForUsefulness_28537 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_11.readProperty_mFilewrapperName (), enumerator_28448.current_mFilewrapperTemplateName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 657)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_28537, var_filewrapperTemplateNameForUsefulness_28537, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 661)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_28537, var_filewrapperNameForUsefulness_27382 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 662)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::equal, enumerator_28448.current_mFilewrapperTemplatePath (HERE).readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 663)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_28448.current_mFilewrapperTemplatePath (HERE).readProperty_location (), GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_27831, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 665)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 665)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 664)) ;
        }
      }
      GALGAS_string var_absoluteTemplatePath_29170 = var_absoluteSourcePath_27831.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 667)).add_operation (enumerator_28448.current_mFilewrapperTemplatePath (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 667)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList_29333 ;
      var_resultingInstructionList_29333.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::class_func_new (var_absoluteTemplatePath_29170, enumerator_28448.current_mFilewrapperTemplatePath (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 670)), var_resultingInstructionList_29333  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 669)) ;
      GALGAS_templateVariableMap var_templateVariableMap_29511 = GALGAS_templateVariableMap::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 672)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_29585 = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 673)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_29710 (enumerator_28448.current_mFilewrapperTemplateFormalInputParameters (HERE), EnumerationOrder::up) ;
      while (enumerator_29710.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_type_29773 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_29710.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 675)) ;
        GALGAS_string var_cppVarName_29857 = GALGAS_string ("in_").add_operation (enumerator_29710.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 676)) ;
        {
        var_templateVariableMap_29511.setter_insertKey (enumerator_29710.current_mFormalArgumentName (HERE), var_type_29773, var_cppVarName_29857, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 677)) ;
        }
        var_filewrapperTemplateFormalInputParameters_29585.addAssign_operation (enumerator_29710.current_mFormalTemplateSelector (HERE), var_type_29773, var_cppVarName_29857, enumerator_29710.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 678)) ;
        enumerator_29710.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration_30181 = GALGAS_templateInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 681)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext_30271 = GALGAS_templateAnalysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_29511, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 682)) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_27382, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_30271, ioArgument_ioTypeMap, var_resultingInstructionList_29333, var_templateInstructionListForGeneration_30181, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 687)) ;
      }
      var_filewrapperTemplateListForGeneration_28347.addAssign_operation (enumerator_28448.current_mFilewrapperTemplateName (HERE).readProperty_string (), var_filewrapperTemplateFormalInputParameters_29585, var_templateInstructionListForGeneration_30181  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 696)) ;
      enumerator_28448.gotoNextObject () ;
    }
    const GALGAS_filewrapperDeclarationAST temp_14 = this ;
    const GALGAS_filewrapperDeclarationAST temp_15 = this ;
    const GALGAS_filewrapperDeclarationAST temp_16 = this ;
    const GALGAS_filewrapperDeclarationAST temp_17 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 703)), GALGAS_filewrapperDeclarationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (temp_15.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 706)), temp_16.readProperty_mFilewrapperName ().readProperty_string (), temp_17.readProperty_mFilewrapperPath ().readProperty_string (), var_wrapperFileMap_27715, var_wrapperDirectoryMap_27760, var_filewrapperTemplateListForGeneration_28347  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 704))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 702)) ;
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
  GALGAS_lstring var_nameForUsefulness_31975 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 728)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_31975, var_nameForUsefulness_31975, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 729)) ;
  }
  GALGAS_terminalMap var_terminalMap_32314 ;
  GALGAS_indexingListAST var_indexingListAST_32352 ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GALGAS_bool joker_32289 ; // Joker input parameter
  GALGAS_terminalDeclarationListAST joker_32409_4 ; // Joker input parameter
  GALGAS_lexicalAttributeListAST joker_32409_3 ; // Joker input parameter
  GALGAS_lexicalStyleListAST joker_32409_2 ; // Joker input parameter
  GALGAS_lexicalListDeclarationListAST joker_32409_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), joker_32289, var_terminalMap_32314, var_indexingListAST_32352, joker_32409_4, joker_32409_3, joker_32409_2, joker_32409_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 731)) ;
  GALGAS_stringset var_indexNameSet_32496 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 740)) ;
  cEnumerator_indexingListAST enumerator_32532 (var_indexingListAST_32352, EnumerationOrder::up) ;
  while (enumerator_32532.hasCurrentObject ()) {
    var_indexNameSet_32496.addAssign_operation (enumerator_32532.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 742)) ;
    enumerator_32532.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing_32614 = GALGAS_bool (true) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 746)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_galgas_33_SyntaxComponentAST temp_3 = this ;
      GALGAS_string var_lexiqueName_32785 = temp_3.readProperty_mLexiqueName ().readProperty_string () ;
      GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_33242 ;
      {
      const GALGAS_galgas_33_SyntaxComponentAST temp_4 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_5 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_6 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_7 = this ;
      routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (var_nameForUsefulness_31975, ioArgument_ioUsefulEntitiesGraph, temp_4.readProperty_mNonterminalDeclarationList (), temp_5.readProperty_mRuleList (), temp_6.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_32785, constinArgument_inSemanticContext, ioArgument_ioTypeMap, constinArgument_inPredefinedTypes, var_terminalMap_32314, var_indexNameSet_32496, var_hasIndexing_32614, temp_7.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_33242, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 748)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_33242  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 764)) ;
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
    test_0 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 781)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_galgas_33_GrammarComponentAST temp_1 = this ;
      routine_println_3F_ (GALGAS_string ("*** Analyzing '").add_operation (temp_1.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 782)).add_operation (GALGAS_string ("' grammar"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 782)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 782)) ;
      }
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = this ;
  GALGAS_lstring var_grammarNameForUsefulness_34263 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 785)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_34263, var_grammarNameForUsefulness_34263, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 786)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_34570 = GALGAS_terminalSymbolsMapForGrammarAnalysis::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 788)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_34651 = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 789)) ;
  GALGAS_lstring var_lexiqueComponentName_34703 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 790)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_34814 = GALGAS_syntaxComponentListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 791)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList_34885 = GALGAS_nonTerminalToAddList::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 792)) ;
  GALGAS_uint var_addedNonTerminalCount_34923 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = this ;
  cEnumerator_lstringlist enumerator_34956 (temp_3.readProperty_mSyntaxComponents (), EnumerationOrder::up) ;
  while (enumerator_34956.hasCurrentObject ()) {
    GALGAS_lstring var_syntaxNameForUsefulness_35014 = function_syntaxNameForUsefulEntitiesGraph (enumerator_34956.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 795)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_34263, var_syntaxNameForUsefulness_35014 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 796)) ;
    }
    GALGAS_uint var_addedNonTerminalCountRef_35199 = var_addedNonTerminalCount_34923 ;
    GALGAS_lstring var_lexiqueName_35367 ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_35421 ;
    GALGAS_syntaxRuleListAST var_ruleList_35478 ;
    GALGAS_bool var_hasTranslateFeature_35504 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_34956.current_mValue (HERE), var_lexiqueName_35367, var_nonterminalDeclarationList_35421, var_ruleList_35478, var_hasTranslateFeature_35504, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 798)) ;
    GALGAS_lstring var_lexiqueNameForUsefulness_35538 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_35367, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 805)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_34263, var_lexiqueNameForUsefulness_35538 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 806)) ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GALGAS_galgas_33_GrammarComponentAST temp_5 = this ;
      test_4 = temp_5.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_35504.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 808)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 808)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_galgas_33_GrammarComponentAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_34956.current_mValue (HERE).readProperty_location (), GALGAS_string ("as '").add_operation (temp_6.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 809)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 809)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 809)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_galgas_33_GrammarComponentAST temp_9 = this ;
        test_8 = var_hasTranslateFeature_35504.operator_and (temp_9.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 810)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 810)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_galgas_33_GrammarComponentAST temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mGrammarComponentName ().readProperty_location (), GALGAS_string ("as '").add_operation (enumerator_34956.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 811)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 811)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 811)) ;
        }
      }
    }
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (ComparisonKind::equal, var_lexiqueComponentName_34703.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        var_lexiqueComponentName_34703 = var_lexiqueName_35367 ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::notEqual, var_lexiqueName_35367.readProperty_string ().objectCompare (var_lexiqueComponentName_34703.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_34956.current_mValue (HERE).readProperty_location (), GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName_35367.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 817)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 818)).add_operation (var_lexiqueComponentName_34703.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 818)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 819)), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 817)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_34651, var_nonterminalDeclarationList_35421, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 822)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_34651, var_ruleList_35478, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 827)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_34651, enumerator_34956.current_mValue (HERE), var_ruleList_35478, var_actuallyUsedTerminalSymbolMap_34570, var_syntaxComponentListForGrammarAnalysis_34814, var_addedNonTerminalCount_34923, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 832)) ;
    }
    GALGAS_uint var_i_37183 = GALGAS_uint (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_34923.isValid ()) {
      uint32_t variant_37193 = var_addedNonTerminalCount_34923.uintValue () ;
      bool loop_37193 = true ;
      while (loop_37193) {
        loop_37193 = GALGAS_bool (ComparisonKind::lowerThan, var_i_37183.objectCompare (var_addedNonTerminalCount_34923.substract_operation (var_addedNonTerminalCountRef_35199, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 841)))).isValid () ;
        if (loop_37193) {
          loop_37193 = GALGAS_bool (ComparisonKind::lowerThan, var_i_37183.objectCompare (var_addedNonTerminalCount_34923.substract_operation (var_addedNonTerminalCountRef_35199, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 841)))).boolValue () ;
        }
        if (loop_37193 && (0 == variant_37193)) {
          loop_37193 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 841)) ;
        }
        if (loop_37193) {
          variant_37193 -- ;
          var_nonTerminalToAddList_34885.addAssign_operation (enumerator_34956.current_mValue (HERE).readProperty_string (), var_i_37183  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 842)) ;
          var_i_37183.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 843)) ;
        }
      }
    }
    enumerator_34956.gotoNextObject () ;
  }
  GALGAS_uint var_startSymbolIndex_38334 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_38405 ;
  const GALGAS_galgas_33_GrammarComponentAST temp_15 = this ;
  var_nonTerminalMapForGrammarAnalysis_34651.method_searchKey (temp_15.readProperty_mStartSymbolName (), var_startSymbolIndex_38334, var_startSymbolAltMap_38405, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 863)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_16 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_17 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_18 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_16.readProperty_mStartSymbolName ().readProperty_location (), temp_17.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_34651.getter_locationForKey (temp_18.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 872)), var_startSymbolAltMap_38405, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 869)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_38787 = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 876)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_19 = this ;
  cEnumerator_lstringlist enumerator_38834 (temp_19.readProperty_mUnusedNonterminalList (), EnumerationOrder::up) ;
  while (enumerator_38834.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex_38943 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_38960 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_34651.method_searchKey (enumerator_38834.current_mValue (HERE), var_nonterminalIndex_38943, joker_38960, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 878)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_38787.setter_insertKey (enumerator_38834.current_mValue (HERE), var_nonterminalIndex_38943, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 879)) ;
    }
    enumerator_38834.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_39200 = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::class_func_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 882)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_39281 (var_nonTerminalMapForGrammarAnalysis_34651, EnumerationOrder::up) ;
  while (enumerator_39281.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_39200.addAssign_operation (enumerator_39281.current_lkey (HERE), enumerator_39281.current_mNonTerminalIndex (HERE), enumerator_39281.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 884)) ;
    enumerator_39281.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_20) {
      {
      const GALGAS_galgas_33_GrammarComponentAST temp_21 = this ;
      const GALGAS_galgas_33_GrammarComponentAST temp_22 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_21.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_34651, var_syntaxComponentListForGrammarAnalysis_34814, temp_22.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 888)) ;
      }
    }
  }
  GALGAS_string var_dotDocumentFilePath_39937 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 897)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitClassGraph.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_23) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_39937, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 899)) ;
      }
    }
  }
  if (kBoolFalse == test_23) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_39937, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 904)) ;
    }
  }
  GALGAS_stringset var_implementationFileHeader_40509 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 909)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_40560 (var_nonTerminalMapForGrammarAnalysis_34651, EnumerationOrder::up) ;
  while (enumerator_40560.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_40607 (enumerator_40560.current (HERE).readProperty_mNonterminalSymbolParametersMap (), EnumerationOrder::up) ;
    while (enumerator_40607.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_40736 (enumerator_40607.current_mFormalParametersList (HERE), EnumerationOrder::up) ;
      while (enumerator_40736.hasCurrentObject ()) {
        switch (enumerator_40736.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMapEntry var_t_40919 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_40736.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 915)) ;
            extensionMethod_addHeaderFileName (var_t_40919, var_implementationFileHeader_40509, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 916)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_40736.gotoNextObject () ;
      }
      enumerator_40607.gotoNextObject () ;
    }
    enumerator_40560.gotoNextObject () ;
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_24) {
      var_implementationFileHeader_40509 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 923)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_25 = this ;
  GALGAS_string var_HTMLFilePath_41311 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 926)).add_operation (temp_25.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 926)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 926)) ;
  GALGAS_string var_grammarCppFile_41842 ;
  GALGAS_string var_grammarHTMLHelperContents_41874 ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_26 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_27 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_28 = this ;
  GALGAS_string temp_29 ;
  const enumGalgasBool test_30 = temp_28.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_30) {
    temp_29 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 937)) ;
  }else if (kBoolFalse == test_30) {
    temp_29 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21_ (temp_26.readProperty_mGrammarComponentName (), temp_27.readProperty_mGrammarClass (), var_startSymbolIndex_38334, var_lexiqueComponentName_34703.readProperty_string (), var_actuallyUsedTerminalSymbolMap_34570, var_syntaxComponentListForGrammarAnalysis_34814, var_unusedNonTerminalSymbolsForGrammar_38787, var_HTMLFilePath_41311, var_nonTerminalSymbolSortedListForGrammarAnalysis_39200, temp_29, var_grammarCppFile_41842, var_grammarHTMLHelperContents_41874, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 927)) ;
  }
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    test_31 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_31) {
      var_HTMLFilePath_41311.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 943)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 943)) ;
      GALGAS_bool joker_42211 ; // Joker input parameter
      var_grammarHTMLHelperContents_41874.method_writeToFileWhenDifferentContents (var_HTMLFilePath_41311, joker_42211, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 944)) ;
    }
  }
  if (kBoolFalse == test_31) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath_41311, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 946)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_32 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_33 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_34 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_35 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_36 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (temp_32.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 953)), temp_33.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_34703.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_34651, var_nonTerminalToAddList_34885, temp_34.readProperty_mSyntaxComponents (), temp_35.readProperty_mStartSymbolName ().readProperty_string (), temp_36.readProperty_mHasTranslateFeature (), var_grammarCppFile_41842  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 951))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 949)) ;
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
  result_outPredefinedTypes = GALGAS_predefinedTypes::class_func_new (extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("location"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 974)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 974)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 974)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("bool"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 975)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 975)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 975)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("char"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 976)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 976)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 976)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("string"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("uint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("sint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 979)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 979)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 979)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("uint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 980)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 980)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 980)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("sint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 981)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 981)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 981)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("double"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 982)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 982)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 982)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lbool"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 983)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 983)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lchar"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 984)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 984)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 984)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lstring"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 985)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 985)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 985)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("luint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 986)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 986)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 986)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lsint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 987)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 987)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("luint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 988)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 988)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 988)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lsint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 989)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 989)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 989)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("ldouble"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 990)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 990)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 990)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("stringlist"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 991)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 991)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 991)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lbigint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 992)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 992)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 992)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("bigint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 993)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 993)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 993)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("stringset"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 994)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 994)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 994)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("lstringlist"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 995)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 995)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 995)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 973)) ;
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
  const cMapElement_nonterminalMap * objectArray_47479 = (const cMapElement_nonterminalMap *) ioArgument_ioNonterminalDeclarationMap.readAccessForWithInstruction (constinArgument_inNonTerminalName.readProperty_string ()) ;
  if (nullptr != objectArray_47479) {
      macroValidSharedObject (objectArray_47479, cMapElement_nonterminalMap) ;
    GALGAS_stringset var_firstDeclarationLabelSet_47563 = objectArray_47479->mProperty_mLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1072)) ;
    GALGAS_stringset var_reDeclarationLabelSet_47628 = constinArgument_inNonterminalLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1073)) ;
    GALGAS_stringset var_missingLabelSet_47702 = var_firstDeclarationLabelSet_47563.substract_operation (var_reDeclarationLabelSet_47628, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1074)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::greaterThan, var_missingLabelSet_47702.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1075)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_47827 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_47845 (var_missingLabelSet_47702, EnumerationOrder::up) ;
        while (enumerator_47845.hasCurrentObject ()) {
          var_s_47827.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (enumerator_47845.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1078)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1078)) ;
          enumerator_47845.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1081)).add_operation (GALGAS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1081)).add_operation (var_s_47827, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1081)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1080)) ;
      }
    }
    GALGAS_stringset var_newLabelSet_48070 = var_reDeclarationLabelSet_47628.substract_operation (var_firstDeclarationLabelSet_47563, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1083)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_newLabelSet_48070.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1084)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_48179 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_48197 (var_newLabelSet_48070, EnumerationOrder::up) ;
        while (enumerator_48197.hasCurrentObject ()) {
          var_s_48179.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (enumerator_48197.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1087)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1087)) ;
          enumerator_48197.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1090)).add_operation (GALGAS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1090)).add_operation (var_s_48179, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1090)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1089)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::equal, var_missingLabelSet_47702.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1092)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::equal, var_newLabelSet_48070.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1092)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1092)).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_nonterminalLabelMap enumerator_48482 (objectArray_47479->mProperty_mLabelMap, EnumerationOrder::up) ;
        cEnumerator_nonterminalLabelMap enumerator_48513 (constinArgument_inNonterminalLabelMap, EnumerationOrder::up) ;
        while (enumerator_48482.hasCurrentObject () && enumerator_48513.hasCurrentObject ()) {
          GALGAS_formalParameterSignature var_newSignature_48607 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1094)) ;
          cEnumerator_formalParameterSignature enumerator_48701 (enumerator_48513.current_mSignature (HERE), EnumerationOrder::up) ;
          while (enumerator_48701.hasCurrentObject ()) {
            var_newSignature_48607.addAssign_operation (enumerator_48701.current_mFormalSelector (HERE), enumerator_48701.current_mFormalArgumentType (HERE), enumerator_48701.current_mFormalArgumentPassingMode (HERE), enumerator_48701.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1096)) ;
            enumerator_48701.gotoNextObject () ;
          }
          {
          routine_checkMethodSignatures_3F__3F__3F__3F_ (enumerator_48482.current (HERE).readProperty_mSignatureForGeneration (), enumerator_48482.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_48607, enumerator_48513.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1098)) ;
          }
          enumerator_48482.gotoNextObject () ;
          enumerator_48513.gotoNextObject () ;
        }
      }
    }
  }else{
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1107)) ;
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
  outArgument_outNonterminalDeclarationMap = GALGAS_nonterminalMap::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1118)) ;
  cEnumerator_nonterminalDeclarationListAST enumerator_49650 (constinArgument_inNonterminalDeclarationList, EnumerationOrder::up) ;
  while (enumerator_49650.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_49702 = GALGAS_nonterminalLabelMap::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1121)) ;
    cEnumerator_nonTerminalLabelListAST enumerator_49788 (enumerator_49650.current_mLabels (HERE), EnumerationOrder::up) ;
    while (enumerator_49788.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_49836 = GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1123)) ;
      GALGAS_formalParameterSignature var_signature_49908 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1124)) ;
      cEnumerator_formalParameterListAST enumerator_50047 (enumerator_49788.current_mFormalArgumentList (HERE), EnumerationOrder::up) ;
      while (enumerator_50047.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_t_50088 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_50047.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1126)) ;
        var_signatureForGeneration_49836.addAssign_operation (enumerator_50047.current_mFormalSelector (HERE), enumerator_50047.current_mFormalArgumentPassingMode (HERE), var_t_50088, enumerator_50047.current_mFormalArgumentName (HERE), enumerator_50047.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1127)) ;
        var_signature_49908.addAssign_operation (enumerator_50047.current_mFormalSelector (HERE), var_t_50088, enumerator_50047.current_mFormalArgumentPassingMode (HERE), enumerator_50047.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1128)) ;
        enumerator_50047.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_49702.setter_insertKey (enumerator_49788.current_mLabelName (HERE), var_signatureForGeneration_49836, var_signature_49908, enumerator_49788.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1130)) ;
      }
      enumerator_49788.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_49650.current_mNonterminalName (HERE), var_nonterminalLabelMap_49702, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1132)) ;
    }
    enumerator_49650.gotoNextObject () ;
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
  callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174)) ;
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
  GALGAS_unifiedTypeMapEntry var_type_53828 ;
  GALGAS_string var_cppName_53846 ;
  {
  const GALGAS_inputParameterVariable temp_0 = this ;
  GALGAS_string joker_53854 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_53828, var_cppName_53846, joker_53854, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1214)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_53885 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_53885 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_53885 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_53885 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_53885 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_53885 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_53885 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_53885 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_53885 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_53885.objectCompare (var_type_53828)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_inputParameterVariable temp_2 = this ;
      const GALGAS_inputParameterVariable temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1228)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1228)).add_operation (extensionGetter_identifierRepresentation (var_type_53828, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1228)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1228)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1228)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_53885, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1229)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1229)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1229)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1227)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName_53846, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1231)) ;
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
  GALGAS_unifiedTypeMapEntry var_expectedType_55502 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_55502 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_55502 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_55502 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_55502 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_55502 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_55502 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_55502 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_55502 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredVariable temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredVariable temp_2 = this ;
      GALGAS_unifiedTypeMapEntry var_type_56364 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1260)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_55502.objectCompare (var_type_56364)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredVariable temp_4 = this ;
          const GALGAS_inputParameterDeclaredVariable temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1263)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1263)).add_operation (extensionGetter_definition (var_type_56364, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1263)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1263)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1263)).add_operation (extensionGetter_definition (var_expectedType_55502, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1262)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredVariable temp_7 = this ;
  const GALGAS_inputParameterDeclaredVariable temp_8 = this ;
  GALGAS_string var_cppName_56764 = GALGAS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1268)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1268)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1268)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1268)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1268)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1268)) ;
  {
  const GALGAS_inputParameterDeclaredVariable temp_9 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GALGAS_bool (true), var_expectedType_55502, var_cppName_56764, var_cppName_56764, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1269)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (extensionGetter_definition (var_expectedType_55502, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1277)).readProperty_typeName ().readProperty_string (), var_cppName_56764, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1276)) ;
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
  GALGAS_unifiedTypeMapEntry var_expectedType_57689 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_57689 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_57689 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_57689 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_57689 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_57689 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_57689 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_57689 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_57689 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredConstant temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredConstant temp_2 = this ;
      GALGAS_unifiedTypeMapEntry var_type_58551 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1305)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_57689.objectCompare (var_type_58551)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredConstant temp_4 = this ;
          const GALGAS_inputParameterDeclaredConstant temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1308)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1308)).add_operation (extensionGetter_definition (var_type_58551, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1308)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1308)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1308)).add_operation (extensionGetter_definition (var_expectedType_57689, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1309)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1309)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1309)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1307)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredConstant temp_7 = this ;
  const GALGAS_inputParameterDeclaredConstant temp_8 = this ;
  GALGAS_string var_cppName_58951 = GALGAS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1313)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1313)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1313)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1313)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1313)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1313)) ;
  {
  const GALGAS_inputParameterDeclaredConstant temp_9 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_57689, var_cppName_58951, var_cppName_58951, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1314)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (extensionGetter_definition (var_expectedType_57689, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1317)).readProperty_typeName ().readProperty_string (), var_cppName_58951, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1316)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1346)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1347)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1358)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1359)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_type_61222 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GALGAS_string joker_61227 ; // Joker input parameter
  GALGAS_string joker_61230 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_61222, joker_61227, joker_61230, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1361)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_61240 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_61240.objectCompare (var_type_61222)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)).add_operation (extensionGetter_identifierRepresentation (var_type_61222, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_61240, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1366)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1366)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1366)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1377)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1378)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GALGAS_string var_cppName_62118 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1380)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1380)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1380)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1380)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1380)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1380)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_62260 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1381)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GALGAS_bool (true), var_type_62260, var_cppName_62118, var_cppName_62118, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1382)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_62486 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_62486.objectCompare (var_type_62260)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1392)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1392)).add_operation (extensionGetter_identifierRepresentation (var_type_62260, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1392)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1392)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1392)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_62486, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1393)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1393)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1393)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1391)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1404)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1405)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GALGAS_string var_cppName_63357 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1407)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1407)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1407)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1407)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1407)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1407)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_63499 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1408)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_63499, var_cppName_63357, var_cppName_63357, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1409)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_63677 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_63677.objectCompare (var_type_63499)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1413)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1413)).add_operation (extensionGetter_identifierRepresentation (var_type_63499, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1413)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1413)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1413)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_63677, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1414)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1414)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1414)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1412)) ;
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
      ioArgument_ioGeneratedCode.plusAssign_operation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1434)).add_operation (GALGAS_string (".appendString ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1434)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1434)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1434)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1434)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1435)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1435)) ;
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
  GALGAS_string var_cppName_65713 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1455)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1455)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_cppName_65713.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)) ;
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
  GALGAS_string var_cppName_66310 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1466)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1466)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1466)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1466)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1466)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1466)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_string ").add_operation (var_cppName_66310, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1467)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1467)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1467)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1467)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1467)) ;
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
  GALGAS_string var_cppName_66912 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1477)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1477)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1477)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1477)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_66912, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1478)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1478)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1478)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1478)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1478)) ;
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
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1499)) ;
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1501)) ;
  }
  cEnumerator_syntaxInstructionList enumerator_68065 (constinArgument_inSyntaxInstructionListAST, EnumerationOrder::up) ;
  while (enumerator_68065.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_68065.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1504)) ;
    enumerator_68065.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1521)) ;
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
  GALGAS_localVarManager var_variableMap_69610 = GALGAS_localVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1549)) ;
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inFormalArguments, var_variableMap_69610, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1550)) ;
  }
  outArgument_outSignature = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1558)) ;
  cEnumerator_formalParameterListForGeneration enumerator_69955 (outArgument_outSignatureForGeneration, EnumerationOrder::up) ;
  while (enumerator_69955.hasCurrentObject ()) {
    outArgument_outSignature.addAssign_operation (enumerator_69955.current_mFormalSelector (HERE), enumerator_69955.current_mFormalArgumentType (HERE), enumerator_69955.current_mFormalArgumentPassingMode (HERE), enumerator_69955.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1560)) ;
    enumerator_69955.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1563)) ;
  cEnumerator_syntaxInstructionList enumerator_70286 (constinArgument_inSyntaxInstructionList, EnumerationOrder::up) ;
  while (enumerator_70286.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_70286.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_69610, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1566)) ;
    enumerator_70286.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_69610, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1583)) ;
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
  GALGAS_nonterminalMap var_nonterminalMap_71867 ;
  {
  routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, ioArgument_ioTypeMap, var_nonterminalMap_71867, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1609)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_71964 (constinArgument_inRuleList, EnumerationOrder::up) ;
  while (enumerator_71964.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_72022 = GALGAS_nonterminalLabelMap::class_func_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1617)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_72109 (enumerator_71964.current_mLabelList (HERE), EnumerationOrder::up) ;
    while (enumerator_72109.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_72173 = GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1619)) ;
      GALGAS_formalParameterSignature var_signature_72237 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1620)) ;
      cEnumerator_formalParameterListAST enumerator_72350 (enumerator_72109.current_mFormalArguments (HERE), EnumerationOrder::up) ;
      while (enumerator_72350.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_type_72388 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_72350.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)) ;
        var_signatureForGeneration_72173.addAssign_operation (enumerator_72350.current_mFormalSelector (HERE), enumerator_72350.current_mFormalArgumentPassingMode (HERE), var_type_72388, enumerator_72350.current_mFormalArgumentName (HERE), GALGAS_string ("argument_").add_operation (enumerator_72350.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1628))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1623)) ;
        var_signature_72237.addAssign_operation (enumerator_72350.current_mFormalSelector (HERE), var_type_72388, enumerator_72350.current_mFormalArgumentPassingMode (HERE), enumerator_72350.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1629)) ;
        enumerator_72350.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_72022.setter_insertKey (enumerator_72109.current_mLabelName (HERE), var_signatureForGeneration_72173, var_signature_72237, enumerator_72109.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1631)) ;
      }
      enumerator_72109.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_71964.current_mNonterminalName (HERE), var_nonterminalLabelMap_72022, var_nonterminalMap_71867, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1633)) ;
    }
    enumerator_71964.gotoNextObject () ;
  }
  GALGAS_analysisContext var_analysisContext_73012 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 1640)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)) ;
  GALGAS_uint var_selectMethodCount_73280 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_ruleDeclarationList var_ruleDeclarationList_73329 = GALGAS_ruleDeclarationList::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1646)) ;
  GALGAS_uint var_newRuleIndex_73366 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_syntaxRuleListAST enumerator_73407 (constinArgument_inRuleList, EnumerationOrder::up) ;
  while (enumerator_73407.hasCurrentObject ()) {
    GALGAS_ruleLabelImplementationList var_ruleLabelImplementationList_73480 = GALGAS_ruleLabelImplementationList::class_func_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1650)) ;
    GALGAS_uint var_localSelectMethodCount_73527 = var_selectMethodCount_73280 ;
    GALGAS_nonterminalLabelMap joker_73618 ; // Joker input parameter
    var_nonterminalMap_71867.method_searchKey (enumerator_73407.current_mNonterminalName (HERE), joker_73618, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1652)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_73705 (enumerator_73407.current_mLabelList (HERE), EnumerationOrder::up) ;
    while (enumerator_73705.hasCurrentObject ()) {
      var_localSelectMethodCount_73527 = var_selectMethodCount_73280 ;
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_74266 ;
      GALGAS_formalParameterSignature var_signature_74302 ;
      GALGAS_semanticInstructionListForGeneration var_instructionListForGeneration_74325 ;
      {
      routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_73705.current_mFormalArguments (HERE), enumerator_73705.current_mSyntaxInstructionList (HERE), var_analysisContext_73012, ioArgument_ioTypeMap, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1664)), var_nonterminalMap_71867, constinArgument_inSyntaxComponentName, enumerator_73705.current_mEndOfInstructionList (HERE), constinArgument_inIndexNameSet, var_localSelectMethodCount_73527, var_signatureForGeneration_74266, var_signature_74302, var_instructionListForGeneration_74325, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1655)) ;
      }
      var_ruleLabelImplementationList_73480.addAssign_operation (enumerator_73705.current_mLabelName (HERE), var_signatureForGeneration_74266, var_signature_74302, enumerator_73705.current_mEndOfArgumentLocation (HERE), var_instructionListForGeneration_74325  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1674)) ;
      enumerator_73705.gotoNextObject () ;
    }
    var_selectMethodCount_73280 = var_localSelectMethodCount_73527 ;
    GALGAS_nonterminalLabelMap joker_74643 ; // Joker input parameter
    var_nonterminalMap_71867.method_searchKey (enumerator_73407.current_mNonterminalName (HERE), joker_74643, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1682)) ;
    var_ruleDeclarationList_73329.addAssign_operation (enumerator_73407.current_mNonterminalName (HERE).readProperty_string (), var_newRuleIndex_73366, var_ruleLabelImplementationList_73480  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1683)) ;
    var_newRuleIndex_73366.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1687)) ;
    enumerator_73407.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GALGAS_syntaxDeclarationForGeneration::class_func_new (constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_71867, var_ruleDeclarationList_73329, var_selectMethodCount_73280, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1690)) ;
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
  constinArgument_inDotDocumentFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 1704)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1704)) ;
  GALGAS_string var_document_75347 = GALGAS_string ("digraph G {\n") ;
  var_document_75347.plusAssign_operation(GALGAS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1706)) ;
  var_document_75347.plusAssign_operation(GALGAS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1707)) ;
  cEnumerator_unifiedTypeMap enumerator_75491 (constinArgument_inTypeMap, EnumerationOrder::up) ;
  while (enumerator_75491.hasCurrentObject ()) {
    switch (enumerator_75491.current_mElement (HERE).readProperty_mDefinition ().enumValue ()) {
    case GALGAS_typeDefinition::kNotBuilt:
      break ;
    case GALGAS_typeDefinition::kEnum_unsolved:
      {
      }
      break ;
    case GALGAS_typeDefinition::kEnum_solved:
      {
        const cEnumAssociatedValues_typeDefinition_solved * extractPtr_76160 = (const cEnumAssociatedValues_typeDefinition_solved *) (enumerator_75491.current_mElement (HERE).readProperty_mDefinition ().unsafePointer ()) ;
        const GALGAS_unifiedTypeDefinition extractedValue_75603_definition = extractPtr_76160->mAssociatedValue0 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = extractedValue_75603_definition.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("semanticAnalysis.galgas", 1712)).boolEnum () ;
          if (kBoolTrue == test_0) {
            switch (extractedValue_75603_definition.readProperty_superType ().enumValue ()) {
            case GALGAS_unifiedTypeMapEntry::kNotBuilt:
              break ;
            case GALGAS_unifiedTypeMapEntry::kEnum_null:
              {
                var_document_75347.plusAssign_operation(GALGAS_string ("  \"@").add_operation (extractedValue_75603_definition.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1715)).add_operation (GALGAS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1715)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1715)) ;
              }
              break ;
            case GALGAS_unifiedTypeMapEntry::kEnum_element:
              {
                const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_76138 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (extractedValue_75603_definition.readProperty_superType ().unsafePointer ()) ;
                const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_75839_superType = extractPtr_76138->mAssociatedValue0 ;
                enumGalgasBool test_1 = kBoolTrue ;
                if (kBoolTrue == test_1) {
                  GALGAS_unifiedTypeMapElementClass var_t_75869 (dynamic_cast <const cPtr_unifiedTypeMapElementClass *> (extractedValue_75839_superType.ptr ())) ;
                  if (nullptr == var_t_75869.ptr ()) {
                    test_1 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_1) {
                    GALGAS_unifiedTypeDefinition var_superTypeDefinition_75927 ;
                    const bool optionalResult75903 = var_t_75869.readProperty_mDefinition ().optional_solved (var_superTypeDefinition_75927) ;
                    if (!optionalResult75903) {
                      test_1 = kBoolFalse ;
                    }
                    if (kBoolTrue == test_1) {
                      var_document_75347.plusAssign_operation(GALGAS_string ("  \"@").add_operation (extractedValue_75603_definition.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1718)).add_operation (GALGAS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1718)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1718)) ;
                      var_document_75347.plusAssign_operation(GALGAS_string ("  \"@").add_operation (extractedValue_75603_definition.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1719)).add_operation (GALGAS_string ("\" -> \"@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1719)).add_operation (var_superTypeDefinition_75927.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1719)).add_operation (GALGAS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1719)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1719)) ;
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
    enumerator_75491.gotoNextObject () ;
  }
  var_document_75347.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1725)) ;
  GALGAS_bool joker_76266 ; // Joker input parameter
  var_document_75347.method_writeToFileWhenDifferentContents (constinArgument_inDotDocumentFilePath, joker_76266, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1726)) ;
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
  cEnumerator_lstringlist enumerator_2144 (temp_0.readProperty_mSyntaxComponents (), EnumerationOrder::up) ;
  while (enumerator_2144.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (enumerator_2144.current_mValue (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 42))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 42)) ;
    enumerator_2144.gotoNextObject () ;
  }
  const GALGAS_grammarForGeneration temp_1 = this ;
  const GALGAS_grammarForGeneration temp_2 = this ;
  const GALGAS_grammarForGeneration temp_3 = this ;
  const GALGAS_grammarForGeneration temp_4 = this ;
  const GALGAS_grammarForGeneration temp_5 = this ;
  const GALGAS_grammarForGeneration temp_6 = this ;
  const GALGAS_grammarForGeneration temp_7 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 45)), temp_2.readProperty_mNonTerminalMapForGrammarAnalysis (), temp_3.readProperty_mNonTerminalToAddList (), temp_4.readProperty_mStartSymbolName (), temp_5.readProperty_mHasTranslateFeature (), temp_6.readProperty_mGrammarName (), temp_7.readProperty_mSyntaxComponents () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 44))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 60))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 60)) ;
  const GALGAS_grammarForGeneration temp_1 = this ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3035 (temp_1.readProperty_mNonTerminalMapForGrammarAnalysis (), EnumerationOrder::up) ;
  while (enumerator_3035.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_3085 (enumerator_3035.current (HERE).readProperty_mNonterminalSymbolParametersMap (), EnumerationOrder::up) ;
    while (enumerator_3085.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_3216 (enumerator_3085.current_mFormalParametersList (HERE), EnumerationOrder::up) ;
      while (enumerator_3216.hasCurrentObject ()) {
        switch (enumerator_3216.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            GALGAS_unifiedTypeMapEntry var_t_3405 = extensionGetter_typeMapEntryForLKey (constinArgument_inUnifiedTypeMap, enumerator_3216.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 66)) ;
            extensionMethod_addHeaderFileName (var_t_3405, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 67)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_3216.gotoNextObject () ;
      }
      enumerator_3085.gotoNextObject () ;
    }
    enumerator_3035.gotoNextObject () ;
  }
  const GALGAS_grammarForGeneration temp_2 = this ;
  outArgument_outImplementation = temp_2.readProperty_mCppFileContents () ;
}
