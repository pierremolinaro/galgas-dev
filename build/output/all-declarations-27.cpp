#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_setterMap & outArgument_outSetterMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_setterMap temp_0 = GALGAS_setterMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 49)) ;
  outArgument_outSetterMap = temp_0 ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inDirectoryPath"), GALGAS_string ("setCurrentDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 50)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_getterMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 64)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allTextFilePathes"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 65)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allBinaryFilePathes"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allDirectoryPathes"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentDirectory"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allFilePathesWithExtension"), GALGAS_string ("string"), GALGAS_string ("inExtension"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 97)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 104)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 111)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 118)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 125)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathForPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 132)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 139)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 146)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 153)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_functionPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_functionPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-function.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-function.galgas", 43)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionList"), GALGAS_string ("functionlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 44)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionWithName"), GALGAS_string ("string"), GALGAS_string ("inName"), GALGAS_string ("function"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 51)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFunctionDefined"), GALGAS_string ("string"), GALGAS_string ("inFunctionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 60)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GALGAS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 75)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 76)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("resultType"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 84)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("formalParameterTypeList"), GALGAS_string::makeEmptyString (), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 92)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("invoke"), GALGAS_string ("objectlist"), GALGAS_string ("inParameters"), GALGAS_string ("location"), GALGAS_string ("inErrorLocation"), GALGAS_string ("object"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 100)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_functionPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-function.galgas", 112))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_locationPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("nowhere") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_locationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-location.galgas", 36)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-location.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-location.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@locationPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-location.galgas", 43)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string ("location"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 44)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 51)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("next"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 58)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("separator"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 65)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@locationPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GALGAS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 78)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startLocationString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 79)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endLocationString"), GALGAS_string ("locationString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 87)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startLocationIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 95)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endLocationIndex"), GALGAS_string ("locationIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 103)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("file"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 111)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startLine"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 119)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endLine"), GALGAS_string ("line"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 127)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startColumn"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 135)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endColumn"), GALGAS_string ("column"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 143)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isNowhere"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 151)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("union"), GALGAS_string::makeEmptyString (), GALGAS_string ("location"), GALGAS_string ("inOtherLocation"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 159)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_locationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-location.galgas", 172))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_objectPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_objectPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-object.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_objectPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-object.galgas", 42))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@objectPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_objectPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-object.galgas", 49)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectStaticType"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-object.galgas", 50)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectDynamicType"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-object.galgas", 58)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_stringsetPredefinedTypeAST::getter_supportsCollectionValue (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringsetPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("emptySet") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList cPtr_stringsetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result_result ; // Returned variable
  GALGAS_initializerSignatureList temp_0 = GALGAS_initializerSignatureList::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 42)) ;
  GALGAS_formalInputParameterListAST temp_1 = GALGAS_formalInputParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 42)) ;
  temp_0.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 42)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringsetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 48))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_stringsetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-stringset.galgas", 54)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-stringset.galgas", 55)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 54)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-stringset.galgas", 55)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 55)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-stringset.galgas", 56)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 55)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-stringset.galgas", 56)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 56)).operator_or (GALGAS_operators::class_func_generateEnumerationHelperMethods (SOURCE_FILE ("predefinedType-stringset.galgas", 57)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 56)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-stringset.galgas", 57)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 57)).operator_or (GALGAS_operators::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("predefinedType-stringset.galgas", 58)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 57)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 65)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 66)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 73)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithStringList"), GALGAS_string ("stringlist"), GALGAS_string ("inStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 82)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithLStringList"), GALGAS_string ("lstringlist"), GALGAS_string ("inLStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 91)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GALGAS_setterMap & outArgument_outSetterMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringType_4101 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_4101, inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 106)) ;
  }
  GALGAS_setterMap temp_0 = GALGAS_setterMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 107)) ;
  outArgument_outSetterMap = temp_0 ;
  {
  outArgument_outSetterMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeKey"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 109)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-stringset.galgas", 110)), GALGAS_formalParameterSignature::class_func_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-stringset.galgas", 111)), var_stringType_4101, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("predefinedType-stringset.galgas", 111)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 111)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-stringset.galgas", 113)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 108)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_string ("insert"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 116)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getEnumerationList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getEnumerationList (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                 GALGAS_string & outArgument_outEnumeratedType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_5014 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5014, inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 131)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 132)) ;
  outArgument_outEnumerationList = temp_0 ;
  outArgument_outEnumerationList.addAssign_operation (var_stringTypeIndex_5014, GALGAS_string ("key")  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 133)) ;
  outArgument_outEnumeratedType = GALGAS_string ("string") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getAddAssignArgumentList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getAddAssignArgumentList (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_5496 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5496, inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 141)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 142)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-stringset.galgas", 142)), var_stringTypeIndex_5496, GALGAS_string ("inString"), GALGAS_bool (true)  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 142)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GALGAS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 149)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 150)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 157)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("anyString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 165)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 173)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sintPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_sintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-sint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-sint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixMulOperator (SOURCE_FILE ("predefinedType-sint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixDivOperator (SOURCE_FILE ("predefinedType-sint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixModOperator (SOURCE_FILE ("predefinedType-sint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-sint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 43)).operator_or (GALGAS_operators::class_func_prefixPlusOperator (SOURCE_FILE ("predefinedType-sint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 43)).operator_or (GALGAS_operators::class_func_prefixMinusOperator (SOURCE_FILE ("predefinedType-sint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 43)).operator_or (GALGAS_operators::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 44)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-sint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 44)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-sint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 45)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-sint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 45)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-sint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 45)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-sint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 45)).operator_or (GALGAS_operators::class_func_incDecOperator (SOURCE_FILE ("predefinedType-sint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 46)).operator_or (GALGAS_operators::class_func_incDecOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 46)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-sint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 46)).operator_or (GALGAS_operators::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 46)).operator_or (GALGAS_operators::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 47)).operator_or (GALGAS_operators::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 47)).operator_or (GALGAS_operators::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 47)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint.galgas", 48)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 47)).operator_or (GALGAS_operators::class_func_minusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint.galgas", 48)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 48)).operator_or (GALGAS_operators::class_func_mulEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint.galgas", 49)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 48)).operator_or (GALGAS_operators::class_func_divEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint.galgas", 49)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 49)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sintPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 57)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 58)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 65)) ;
  }
}
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
//Overriding extension getter '@sint64PredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sint_36__34_PredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
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
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 50)) ;
  outArgument_outMap = temp_0 ;
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
//Overriding extension getter '@stringPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
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
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 43)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("homeDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 44)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("newWithStdIn"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 51)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("retrieveAndResetTemplateString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 58)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("separatorString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 65)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSymbolicLinkContents"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 72)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSourceFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 81)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 88)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 95)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDateTime"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 104)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariable"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 111)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariableOrEmpty"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 120)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppLineComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 129)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppSpaceComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 136)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppTitleComment"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 143)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 152)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppChar"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 161)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsJoinedByString"), GALGAS_string ("stringlist"), GALGAS_string ("inComponents"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 170)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRepeatingString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 181)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSequenceOfCharacters"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 192)) ;
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
  GALGAS_classMethodMap temp_0 = GALGAS_classMethodMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 209)) ;
  outArgument_outClassMethodMap = temp_0 ;
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFile"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 210)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFileIfExists"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 217)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeEmptyDirectory"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 224)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeDirectoryRecursively"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 231)) ;
  }
  GALGAS_unifiedTypeMapEntry var_stringType_7320 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_7320, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 238)) ;
  }
  GALGAS_unifiedTypeMapEntry var_boolType_7410 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_boolType_7410, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 239)) ;
  }
  GALGAS_formalParameterSignature temp_1 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 241)) ;
  GALGAS_formalParameterSignature var_argList_7475 = temp_1 ;
  var_argList_7475.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 242)), var_stringType_7320, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 242)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 242)) ;
  var_argList_7475.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 243)), var_stringType_7320, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 243)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 243)) ;
  var_argList_7475.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 244)), var_stringType_7320, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 244)), GALGAS_string ("inContents")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 244)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("generateFile"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 246)), inCompiler COMMA_HERE), var_argList_7475, GALGAS_bool (true) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 245)) ;
  }
  GALGAS_formalParameterSignature temp_2 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 251)) ;
  var_argList_7475 = temp_2 ;
  var_argList_7475.addAssign_operation (GALGAS_string ("startPath").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 252)), var_stringType_7320, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 252)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 252)) ;
  var_argList_7475.addAssign_operation (GALGAS_string ("fileName").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 253)), var_stringType_7320, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 253)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 253)) ;
  var_argList_7475.addAssign_operation (GALGAS_string ("lineComment").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 254)), var_stringType_7320, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 254)), GALGAS_string ("inLineCommentPrefix")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 254)) ;
  var_argList_7475.addAssign_operation (GALGAS_string ("header").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 255)), var_stringType_7320, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 255)), GALGAS_string ("inHeader")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 255)) ;
  var_argList_7475.addAssign_operation (GALGAS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 256)), var_stringType_7320, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 256)), GALGAS_string ("inDefaultUserZone1")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 256)) ;
  var_argList_7475.addAssign_operation (GALGAS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 257)), var_stringType_7320, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 257)), GALGAS_string ("inGeneratedZone2")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 257)) ;
  var_argList_7475.addAssign_operation (GALGAS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 258)), var_stringType_7320, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 258)), GALGAS_string ("inDefaultUserZone2")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 258)) ;
  var_argList_7475.addAssign_operation (GALGAS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 259)), var_stringType_7320, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 259)), GALGAS_string ("inGeneratedZone3")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 259)) ;
  var_argList_7475.addAssign_operation (GALGAS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 260)), var_boolType_7410, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 260)), GALGAS_string ("inMakeExecutable")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 260)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("generateFileWithPattern"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 262)), inCompiler COMMA_HERE), var_argList_7475, GALGAS_bool (true) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 261)) ;
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
  GALGAS_instanceMethodMap temp_0 = GALGAS_instanceMethodMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 272)) ;
  outArgument_outInstanceMethodMap = temp_0 ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 273)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 281)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 289)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 297)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeSymbolicLinkWithPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 305)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (outArgument_outInstanceMethodMap, GALGAS_string ("makeDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 313)) ;
  }
  GALGAS_formalParameterSignature temp_1 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 319)) ;
  GALGAS_formalParameterSignature var_argList_10601 = temp_1 ;
  GALGAS_unifiedTypeMapEntry var_t_10691 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_10691, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 320)) ;
  }
  var_argList_10601.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 321)), var_t_10691, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 321)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 321)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_10691, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 322)) ;
  }
  var_argList_10601.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 323)), var_t_10691, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("predefinedType-string.galgas", 323)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 323)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 325)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-string.galgas", 326)), var_argList_10601, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 328)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-string.galgas", 330)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 324)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("writeToExecutableFileWhenDifferentContents"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 334)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-string.galgas", 335)), var_argList_10601, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 337)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-string.galgas", 339)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 333)) ;
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
  GALGAS_setterMap temp_0 = GALGAS_setterMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 348)) ;
  outArgument_outSetterMap = temp_0 ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inCapacity"), GALGAS_string ("setCapacity"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 349)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("incIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 357)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("decIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 365)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inColumnIndex"), GALGAS_string ("appendSpacesUntilColumn"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 373)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 381)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("insertCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 391)) ;
  }
  {
  routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("outChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("removeCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 401)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 417)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 418)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstring"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 426)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 434)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doesEnvironmentVariableExist"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 442)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 450)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("range"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 458)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithUnicodeEscaping"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 466)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("assemblerRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 474)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileNameRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 482)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nameRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 490)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 498)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 506)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decodedStringFromRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 514)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("HTMLRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 522)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationEscapingQuestionMark"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 530)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Representation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 538)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithoutDelimiters"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 546)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Length"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 554)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32Representation"), GALGAS_string ("withZeroTerminator"), GALGAS_string ("bool"), GALGAS_string ("inAppendZeroTerminator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 562)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByTrimmingWhiteSpaces"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 572)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("md5"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 580)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sha256"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 588)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 596)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 604)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 612)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 620)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 628)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 636)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 644)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 652)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSignedBigInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 660)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSignedBigInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 668)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDoubleNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 676)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 684)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("capacity"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 692)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isSymbolicLink"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 700)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExists"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 708)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExists"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 716)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pathExtension"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 724)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nativePathWithUnixPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 732)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unixPathWithNativePath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 740)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastPathComponent"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 748)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingPathExtension"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 756)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByCapitalizingFirstCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 764)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("firstCharacterOrNul"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 772)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingLastPathComponent"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 780)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByStandardizingPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 788)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowercaseString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 796)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uppercaseString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 804)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("reversedString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 812)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentColumn"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 820)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 828)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("popen"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 836)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationEnclosedWithin"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 844)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandWithArguments"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inArguments"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 853)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenCommandWithArguments"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inArguments"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 862)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("characterAtIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 871)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 880)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacterInRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inFirstCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inLastCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 889)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRemovingCharacterAtIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 902)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subStringFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 911)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("rightSubString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 920)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("leftSubString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 929)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inStart"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 938)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathFromPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 947)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("relativePathFromPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 956)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsSeparatedByString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 964)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 972)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRightPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 981)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftAndRightPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 990)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByReplacingStringByString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inSearchedString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inReplacementString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 999)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFiles"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1008)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenFiles"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1018)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directories"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1027)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesWithExtensions"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1036)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFilesWithExtensions"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1045)) ;
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
  result_result = GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-string.galgas", 1059)).operator_or (GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-string.galgas", 1059)) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1059)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-string.galgas", 1060)) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1059)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-string.galgas", 1060)) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1060)) ;
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
  GALGAS_optionalMethodMap temp_0 = GALGAS_optionalMethodMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1067)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterBaseOptionalMethodWithArgument_26__26__3F_optionalMethodName_3F__3F_ (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extractBigInt"), GALGAS_string ("bigint"), GALGAS_string ("outBigInt"), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1068)) ;
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
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1080))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_timerPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("start") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList cPtr_timerPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result_result ; // Returned variable
  GALGAS_initializerSignatureList temp_0 = GALGAS_initializerSignatureList::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 36)) ;
  GALGAS_formalInputParameterListAST temp_1 = GALGAS_formalInputParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 36)) ;
  temp_0.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 36)) ;
  result_result = temp_0 ;
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
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-timer.galgas", 42)) ;
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
  GALGAS_setterMap temp_0 = GALGAS_setterMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 49)) ;
  outArgument_outSetterMap = temp_0 ;
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GALGAS_string ("stop"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 50)) ;
  }
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GALGAS_string ("resume"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 55)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("msFromStart"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 67)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 75)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isRunning"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 83)) ;
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
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 97)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("start"), GALGAS_string ("timer"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 98)) ;
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
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 110))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typePredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
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
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-type.galgas", 37)) ;
  outArgument_outMap = temp_0 ;
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
//Overriding extension getter '@uintPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uintPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList cPtr_uintPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result_result ; // Returned variable
  GALGAS_formalInputParameterListAST var_initializer_1758 = GALGAS_formalInputParameterListAST::init (inCompiler COMMA_HERE) ;
  var_initializer_1758.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-uint.galgas", 37)), GALGAS_string ("uint").getter_nowhere (SOURCE_FILE ("predefinedType-uint.galgas", 37)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("predefinedType-uint.galgas", 37)), GALGAS_bool (false), GALGAS_bool (true)  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 37)) ;
  GALGAS_initializerSignatureList temp_0 = GALGAS_initializerSignatureList::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 38)) ;
  temp_0.addAssign_operation (var_initializer_1758  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 38)) ;
  result_result = temp_0 ;
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
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 44))) ;
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
  result_result = GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-uint.galgas", 50)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-uint.galgas", 50)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 50)).operator_or (GALGAS_operators::class_func_infixMulOperator (SOURCE_FILE ("predefinedType-uint.galgas", 50)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 50)).operator_or (GALGAS_operators::class_func_infixDivOperator (SOURCE_FILE ("predefinedType-uint.galgas", 50)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 50)).operator_or (GALGAS_operators::class_func_infixModOperator (SOURCE_FILE ("predefinedType-uint.galgas", 51)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 50)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-uint.galgas", 51)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 51)).operator_or (GALGAS_operators::class_func_prefixPlusOperator (SOURCE_FILE ("predefinedType-uint.galgas", 51)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 51)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-uint.galgas", 52)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 51)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-uint.galgas", 52)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 52)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-uint.galgas", 52)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 52)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-uint.galgas", 52)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 52)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-uint.galgas", 53)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 52)).operator_or (GALGAS_operators::class_func_incDecOperator (SOURCE_FILE ("predefinedType-uint.galgas", 53)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 53)).operator_or (GALGAS_operators::class_func_incDecOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 53)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 53)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-uint.galgas", 53)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 53)).operator_or (GALGAS_operators::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 54)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 53)).operator_or (GALGAS_operators::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 54)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 54)).operator_or (GALGAS_operators::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 54)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 54)).operator_or (GALGAS_operators::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 54)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 54)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 55)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 54)).operator_or (GALGAS_operators::class_func_minusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 55)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 55)).operator_or (GALGAS_operators::class_func_mulEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 56)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 55)).operator_or (GALGAS_operators::class_func_divEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 56)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 56)) ;
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
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 63)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compilationMode"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 64)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("random"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 71)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 78)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("errorCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 85)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("warningCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 92)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueWithMask"), GALGAS_string ("uint"), GALGAS_string ("inLowerIndex"), GALGAS_string ("uint"), GALGAS_string ("inUpperIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 99)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 116)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 117)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 125)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 141)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 149)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lsbIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 157)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantBitCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 165)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("oneBitCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 173)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 181)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("alphaString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 189)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 197)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 205)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 216)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeValueAssigned"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 224)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isInRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 232)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 240)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 247)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 254)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 261)) ;
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
  GALGAS_classMethodMap temp_0 = GALGAS_classMethodMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 274)) ;
  outArgument_outClassMethodMap = temp_0 ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setRandomSeed"), GALGAS_string ("uint"), GALGAS_string ("inSeed"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 275)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uint_36__34_PredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
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
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 53)) ;
  outArgument_outMap = temp_0 ;
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

void cPtr_outputActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & ioArgument_ioActualOutputArgumentList,
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
        GALGAS_string var_s_7976 = GALGAS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 159)) ;
        const GALGAS_outputActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_7976) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_7976, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)) ;
      }
    }
    GALGAS_semanticExpressionForGeneration var_expression_8498 ;
    const GALGAS_outputActualParameterAST temp_9 = this ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mOutputActualParameterExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8498, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 162)) ;
    {
    const GALGAS_outputActualParameterAST temp_10 = this ;
    routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expression_8498.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_expression_8498, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas", 172)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_expression_8498, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 179)) ;
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

void cPtr_outputInputActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
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
        GALGAS_string var_s_11690 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 238)) ;
        const GALGAS_outputInputActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_11690) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11690, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_parameterType_12040 ;
  GALGAS_string var_variableCppName_12065 ;
  {
  const GALGAS_outputInputActualParameterAST temp_9 = this ;
  GALGAS_string joker_12087 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mOutputInputActualParameterName (), var_parameterType_12040, var_variableCppName_12065, joker_12087, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 242)) ;
  }
  GALGAS_unifiedTypeMapEntryList var_typeList_12104 = GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (var_parameterType_12040  COMMA_SOURCE_FILE ("actual-parameters.galgas", 248)) ;
  const GALGAS_outputInputActualParameterAST temp_10 = this ;
  cEnumerator_lstringlist enumerator_12180 (temp_10.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_12180.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_12229 = extensionGetter_definition (var_parameterType_12040, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 250)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_12339 ;
    GALGAS_bool var_isConstant_12366 ;
    var_propertyMap_12229.method_searchKey (enumerator_12180.current_mValue (HERE), var_accessControl_12339, var_isConstant_12366, var_parameterType_12040, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 251)) ;
    extensionMethod_checkSetAccess (var_accessControl_12339, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_12180.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 257)) ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_isConstant_12366.boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_12180.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 259)) ;
      }
    }
    var_typeList_12104.addAssign_operation (var_parameterType_12040  COMMA_SOURCE_FILE ("actual-parameters.galgas", 261)) ;
    enumerator_12180.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_12040)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_outputInputActualParameterAST temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_12040, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 266)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 266)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 266)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 268)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 267)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 268)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 265)) ;
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_outputInputActualParameterAST temp_17 = this ;
    test_16 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_17.readProperty_mOutputInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 271)).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_outputInputActualParameterAST temp_18 = this ;
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray19  COMMA_SOURCE_FILE ("actual-parameters.galgas", 272)) ;
    }
  }
  const GALGAS_outputInputActualParameterAST temp_20 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_20.readProperty_mOutputInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 275)) ;
  const GALGAS_outputInputActualParameterAST temp_21 = this ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::init_21__21__21__21_ (var_parameterType_12040, var_variableCppName_12065, temp_21.readProperty_mStructAttributeList (), var_typeList_12104, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 277)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputJokerParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_initializerCall ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 298)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputJokerParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputInputJokerParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                        const GALGAS_string constinArgument_inSelector,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 305)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputJokerParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputJokerParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 314)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                           const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 331)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputJokerParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 333)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 333)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 334)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 335)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 332)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputJokerParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 337)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_16314 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 337)) ;
        const GALGAS_outputInputJokerParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_16314) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_16314, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)) ;
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_initializerExpression_16820 ;
  const GALGAS_outputInputJokerParameterAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_initializerCall ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_initializerExpression_16820, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 341)) ;
  const GALGAS_outputInputJokerParameterAST temp_10 = this ;
  GALGAS_string var_cppVarName_16888 = GALGAS_string ("joker_").add_operation (temp_10.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 351)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 351)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_16888, var_initializerExpression_16820, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 352)) ;
  GALGAS_lstringlist temp_11 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 361)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_16888, temp_11, GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 362)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 358)) ;
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
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 384)))) ;
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

void cPtr_outputInputSelfParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputSelfParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 393)) ;
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
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 410)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSelfParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 412)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 412)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 413)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 414)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 411)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 416)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_20038 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 416)) ;
        const GALGAS_outputInputSelfParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_20038) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_20038, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 417)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 417)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 417)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMapEntry var_selfType_20317 ;
    GALGAS_selfMutability var_selfMutability_20347 ;
    const bool optionalResult20296 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_20317, var_selfMutability_20347) ;
    if (!optionalResult20296) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfMutability_20347, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 421)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 421)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_outputInputSelfParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 422)) ;
        }
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfType_20317)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_outputInputSelfParameterAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfType_20317, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 427)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 427)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 427)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 429)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 428)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 429)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 426)) ;
        }
      }
      GALGAS_lstringlist temp_16 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 434)) ;
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, GALGAS_string ("ioObject"), temp_16, GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 435)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 431)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_outputInputSelfParameterAST temp_17 = this ;
    TC_Array <FixItDescription> fixItArray18 ;
    inCompiler->emitSemanticError (temp_17.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray18  COMMA_SOURCE_FILE ("actual-parameters.galgas", 438)) ;
  }
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
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 462)))) ;
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

void cPtr_inputActualExistingVariableParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualExistingVariableParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 471)) ;
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
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 488)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualExistingVariableParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 490)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 490)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 491)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 491)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 489)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 493)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_23667 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 493)) ;
        const GALGAS_inputActualExistingVariableParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_23667) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_23667, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 494)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 494)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 494)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_parameterType_24094 ;
  GALGAS_string var_targetVariableCppName_24119 ;
  {
  const GALGAS_inputActualExistingVariableParameterAST temp_9 = this ;
  GALGAS_string joker_24147 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mInputActualParameterName (), var_parameterType_24094, var_targetVariableCppName_24119, joker_24147, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 497)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_24094)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_inputActualExistingVariableParameterAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_24094, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 506)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 506)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 506)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 507)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 507)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 507)), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 505)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_inputActualExistingVariableParameterAST temp_14 = this ;
    test_13 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_14.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 510)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_inputActualExistingVariableParameterAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray16  COMMA_SOURCE_FILE ("actual-parameters.galgas", 511)) ;
    }
  }
  const GALGAS_inputActualExistingVariableParameterAST temp_17 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_17.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 514)) ;
  GALGAS__32_stringlist temp_18 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 516)) ;
  GALGAS__32_stringlist var_poisonedVarCppNameList_24871 = temp_18 ;
  const GALGAS_inputActualExistingVariableParameterAST temp_19 = this ;
  cEnumerator_lstringlist enumerator_24909 (temp_19.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_24909.hasCurrentObject ()) {
    GALGAS_string var_targetVariableCppName_25035 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_25070 ;
    {
    GALGAS_unifiedTypeMapEntry joker_25019 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_24909.current_mValue (HERE), joker_25019, var_targetVariableCppName_25035, var_nameForCheckingFormalParameterUsing_25070, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 518)) ;
    }
    var_poisonedVarCppNameList_24871.addAssign_operation (var_targetVariableCppName_25035, var_nameForCheckingFormalParameterUsing_25070  COMMA_SOURCE_FILE ("actual-parameters.galgas", 524)) ;
    enumerator_24909.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::init_21__21__21_ (var_parameterType_24094, var_targetVariableCppName_24119, var_poisonedVarCppNameList_24871, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 526)) ;
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
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 553)))) ;
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

void cPtr_inputActualSelfPropertyParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualSelfPropertyParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 562)) ;
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
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 580)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 582)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 582)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 583)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 583)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 581)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 585)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_27858 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 585)) ;
        const GALGAS_inputActualSelfPropertyParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_27858) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_27858, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 586)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 586)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 586)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMapEntry var_selfType_28117 ;
    GALGAS_selfMutability var_selfMutability_28147 ;
    const bool optionalResult28096 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_28117, var_selfMutability_28147) ;
    if (!optionalResult28096) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_propertiesAreMutable (var_selfMutability_28147, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 590)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 590)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_inputActualSelfPropertyParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 591)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_28331 = extensionGetter_definition (var_selfType_28117, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 593)).readProperty_propertyMap () ;
      GALGAS_unifiedTypeMapEntry var_parameterType_28452 ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_13 = this ;
      GALGAS_AccessControl joker_28443_2 ; // Joker input parameter
      GALGAS_bool joker_28443_1 ; // Joker input parameter
      var_propertyMap_28331.method_searchKey (temp_13.readProperty_mInputActualSelfPropertyName (), joker_28443_2, joker_28443_1, var_parameterType_28452, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 594)) ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_14 = this ;
      GALGAS_string var_targetVariableCppName_28477 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 595)).add_operation (temp_14.readProperty_mInputActualSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 596)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_28452)).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_inputActualSelfPropertyParameterAST temp_16 = this ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_28452, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 600)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 600)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 600)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 601)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 601)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 601)), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas", 599)) ;
        }
      }
      GALGAS__32_stringlist temp_18 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 604)) ;
      GALGAS__32_stringlist var_poisonedVarCppNameList_29062 = temp_18 ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_19 = this ;
      cEnumerator_lstringlist enumerator_29102 (temp_19.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_29102.hasCurrentObject ()) {
        GALGAS_string var_targetVariableCppName_29236 ;
        GALGAS_string var_nameForCheckingFormalParameterUsing_29273 ;
        {
        GALGAS_unifiedTypeMapEntry joker_29218 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_29102.current_mValue (HERE), joker_29218, var_targetVariableCppName_29236, var_nameForCheckingFormalParameterUsing_29273, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 606)) ;
        }
        var_poisonedVarCppNameList_29062.addAssign_operation (var_targetVariableCppName_29236, var_nameForCheckingFormalParameterUsing_29273  COMMA_SOURCE_FILE ("actual-parameters.galgas", 612)) ;
        enumerator_29102.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::init_21__21__21_ (var_parameterType_28452, var_targetVariableCppName_28477, var_poisonedVarCppNameList_29062, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 614)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_inputActualSelfPropertyParameterAST temp_20 = this ;
    TC_Array <FixItDescription> fixItArray21 ;
    inCompiler->emitSemanticError (temp_20.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray21  COMMA_SOURCE_FILE ("actual-parameters.galgas", 621)) ;
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
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 645)))) ;
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

void cPtr_inputActualSelfParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualSelfParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 654)) ;
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
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 672)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 674)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 674)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 674)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 675)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 675)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 673)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 677)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_32160 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 677)) ;
        const GALGAS_inputActualSelfParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_32160) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_32160, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 678)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 678)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 678)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMapEntry var_selfType_32419 ;
    GALGAS_selfMutability var_selfMutability_32449 ;
    const bool optionalResult32398 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_32419, var_selfMutability_32449) ;
    if (!optionalResult32398) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfMutability_32449, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 682)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 682)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_inputActualSelfParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mSelfLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 683)) ;
        }
      }
      GALGAS_string var_targetVariableCppName_32759 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfType_32419)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_inputActualSelfParameterAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mSelfLocation (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfType_32419, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 692)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 692)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 692)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 694)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 693)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 694)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 691)) ;
        }
      }
      GALGAS__32_stringlist temp_16 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 697)) ;
      GALGAS__32_stringlist var_poisonedVarCppNameList_33306 = temp_16 ;
      const GALGAS_inputActualSelfParameterAST temp_17 = this ;
      cEnumerator_lstringlist enumerator_33346 (temp_17.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_33346.hasCurrentObject ()) {
        GALGAS_string var_targetVariableCppName_33480 ;
        GALGAS_string var_nameForCheckingFormalParameterUsing_33517 ;
        {
        GALGAS_unifiedTypeMapEntry joker_33462 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_33346.current_mValue (HERE), joker_33462, var_targetVariableCppName_33480, var_nameForCheckingFormalParameterUsing_33517, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 699)) ;
        }
        var_poisonedVarCppNameList_33306.addAssign_operation (var_targetVariableCppName_33480, var_nameForCheckingFormalParameterUsing_33517  COMMA_SOURCE_FILE ("actual-parameters.galgas", 705)) ;
        enumerator_33346.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::init_21__21__21_ (var_selfType_32419, var_targetVariableCppName_32759, var_poisonedVarCppNameList_33306, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 707)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_inputActualSelfParameterAST temp_18 = this ;
    TC_Array <FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mSelfLocation (), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("actual-parameters.galgas", 714)) ;
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
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 739)))) ;
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

void cPtr_inputActualNewVariableParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualNewVariableParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 748)) ;
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
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 767)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewVariableParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 769)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 769)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 771)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 770)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 771)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 768)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 773)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_36470 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 773)) ;
        const GALGAS_inputActualNewVariableParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_36470) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_36470, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 774)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 774)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 774)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewVariableParameterAST temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewVariableParameterAST temp_11 = this ;
      GALGAS_unifiedTypeMapEntry var_parameterType_36758 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 778)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_36758)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewVariableParameterAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_36758, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 781)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 781)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 781)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 783)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 782)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 783)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 780)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_15 = this ;
  const GALGAS_inputActualNewVariableParameterAST temp_16 = this ;
  GALGAS_string var_targetVariableCppName_37226 = GALGAS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 787)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 787)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 787)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 787)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 787)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 787)) ;
  {
  const GALGAS_inputActualNewVariableParameterAST temp_17 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_17.readProperty_mInputActualParameterName (), GALGAS_bool (true), constinArgument_inFormalArgumentType, var_targetVariableCppName_37226, var_targetVariableCppName_37226, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 788)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_37226, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 796)) ;
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_inputActualNewVariableParameterAST temp_19 = this ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_19.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 800)).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_inputActualNewVariableParameterAST temp_20 = this ;
      TC_Array <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("actual-parameters.galgas", 801)) ;
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_22 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_22.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 804)) ;
  GALGAS__32_stringlist temp_23 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 806)) ;
  GALGAS__32_stringlist var_poisonedVarCppNameList_38156 = temp_23 ;
  const GALGAS_inputActualNewVariableParameterAST temp_24 = this ;
  cEnumerator_lstringlist enumerator_38194 (temp_24.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_38194.hasCurrentObject ()) {
    GALGAS_string var_targetVariableCppName_38320 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_38355 ;
    {
    GALGAS_unifiedTypeMapEntry joker_38304 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_38194.current_mValue (HERE), joker_38304, var_targetVariableCppName_38320, var_nameForCheckingFormalParameterUsing_38355, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 808)) ;
    }
    var_poisonedVarCppNameList_38156.addAssign_operation (var_targetVariableCppName_38320, var_nameForCheckingFormalParameterUsing_38355  COMMA_SOURCE_FILE ("actual-parameters.galgas", 814)) ;
    enumerator_38194.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_37226, var_poisonedVarCppNameList_38156, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 816)) ;
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
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 845)))) ;
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

void cPtr_inputActualNewConstantParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualNewConstantParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 854)) ;
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
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 873)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewConstantParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 875)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 875)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 875)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 877)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 876)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 877)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 874)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 879)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_41280 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 879)) ;
        const GALGAS_inputActualNewConstantParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_41280) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_41280, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 880)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 880)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 880)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewConstantParameterAST temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewConstantParameterAST temp_11 = this ;
      GALGAS_unifiedTypeMapEntry var_parameterType_41568 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 884)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_41568)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewConstantParameterAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_41568, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 887)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 887)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 887)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 888)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 888)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 888)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 886)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_15 = this ;
  const GALGAS_inputActualNewConstantParameterAST temp_16 = this ;
  GALGAS_string var_targetVariableCppName_42028 = GALGAS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 892)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 892)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 892)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 892)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_inputActualNewConstantParameterAST temp_18 = this ;
    test_17 = temp_18.readProperty_mMarkedAsUnused ().boolEnum () ;
    if (kBoolTrue == test_17) {
      {
      const GALGAS_inputActualNewConstantParameterAST temp_19 = this ;
      extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, temp_19.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_42028, var_targetVariableCppName_42028, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 894)) ;
      }
    }
  }
  if (kBoolFalse == test_17) {
    {
    const GALGAS_inputActualNewConstantParameterAST temp_20 = this ;
    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_20.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_42028, var_targetVariableCppName_42028, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 901)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_42028, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 909)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_inputActualNewConstantParameterAST temp_22 = this ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_22.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 914)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GALGAS_inputActualNewConstantParameterAST temp_23 = this ;
      TC_Array <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("actual-parameters.galgas", 915)) ;
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_25 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_25.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 918)) ;
  GALGAS__32_stringlist temp_26 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 920)) ;
  GALGAS__32_stringlist var_poisonedVarCppNameList_43181 = temp_26 ;
  const GALGAS_inputActualNewConstantParameterAST temp_27 = this ;
  cEnumerator_lstringlist enumerator_43219 (temp_27.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_43219.hasCurrentObject ()) {
    GALGAS_string var_targetVariableCppName_43345 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_43380 ;
    {
    GALGAS_unifiedTypeMapEntry joker_43329 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_43219.current_mValue (HERE), joker_43329, var_targetVariableCppName_43345, var_nameForCheckingFormalParameterUsing_43380, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 922)) ;
    }
    var_poisonedVarCppNameList_43181.addAssign_operation (var_targetVariableCppName_43345, var_nameForCheckingFormalParameterUsing_43380  COMMA_SOURCE_FILE ("actual-parameters.galgas", 928)) ;
    enumerator_43219.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_42028, var_poisonedVarCppNameList_43181, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 930)) ;
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
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 956)))) ;
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

void cPtr_inputSingleJokerActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputSingleJokerActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 965)) ;
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
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 982)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputSingleJokerActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 984)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 984)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 984)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 986)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 985)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 986)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 983)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 988)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_46164 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 988)) ;
        const GALGAS_inputSingleJokerActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_46164) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_46164, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 989)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 989)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 989)) ;
      }
    }
    if (kBoolFalse == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_9 = this ;
      GALGAS_string var_cppVarName_46365 = GALGAS_string ("joker_").add_operation (temp_9.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 991)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 991)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 991)) ;
      GALGAS__32_stringlist temp_10 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 993)) ;
      GALGAS__32_stringlist var_poisonedVarCppNameList_46498 = temp_10 ;
      const GALGAS_inputSingleJokerActualParameterAST temp_11 = this ;
      cEnumerator_lstringlist enumerator_46538 (temp_11.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_46538.hasCurrentObject ()) {
        GALGAS_string var_targetVariableCppName_46672 ;
        GALGAS_string var_nameForCheckingFormalParameterUsing_46709 ;
        {
        GALGAS_unifiedTypeMapEntry joker_46654 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_46538.current_mValue (HERE), joker_46654, var_targetVariableCppName_46672, var_nameForCheckingFormalParameterUsing_46709, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 995)) ;
        }
        var_poisonedVarCppNameList_46498.addAssign_operation (var_targetVariableCppName_46672, var_nameForCheckingFormalParameterUsing_46709  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1001)) ;
        enumerator_46538.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_46365, var_poisonedVarCppNameList_46498, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1003)) ;
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
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1030)))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputJokerActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mQualifierLocation (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1039)) ;
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
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1056)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputJokerActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1058)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1058)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1058)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1059)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1059)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1059)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1057)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_inputJokerActualParameterAST temp_3 = this ;
    const GALGAS_inputJokerActualParameterAST temp_4 = this ;
    GALGAS_string var_cppVarName_49441 = GALGAS_string ("joker_").add_operation (temp_3.readProperty_mQualifierLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1061)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 1061)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1061)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1061)).add_operation (temp_4.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("actual-parameters.galgas", 1061)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1061)) ;
    GALGAS__32_stringlist temp_5 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1066)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_49441, temp_5, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1063)) ;
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
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 143)) ;
  GALGAS_formalParameterSignature var_routineSignature_6001 = temp_0 ;
  const GALGAS_externProcedureDeclarationAST temp_1 = this ;
  cEnumerator_formalParameterListAST enumerator_6075 (temp_1.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_6075.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_6169 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6075.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_6169, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 145)) ;
    }
    var_routineSignature_6001.addAssign_operation (enumerator_6075.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_6169, enumerator_6075.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_6075.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 146)) ;
    enumerator_6075.gotoNextObject () ;
  }
  {
  const GALGAS_externProcedureDeclarationAST temp_2 = this ;
  const GALGAS_externProcedureDeclarationAST temp_3 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_2.readProperty_mRoutineName (), var_routineSignature_6001, temp_3.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 153)) ;
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
  GALGAS_formalParameterListForGeneration temp_0 = GALGAS_formalParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 170)) ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList_7238 = temp_0 ;
  GALGAS_formalParameterSignature temp_1 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 171)) ;
  GALGAS_formalParameterSignature var_routineSignature_7305 = temp_1 ;
  const GALGAS_externProcedureDeclarationAST temp_2 = this ;
  cEnumerator_formalParameterListAST enumerator_7379 (temp_2.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_7379.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_7415 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7379.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 173)) ;
    var_formalArgumentList_7238.addAssign_operation (enumerator_7379.current (HERE).readProperty_mFormalSelector (), enumerator_7379.current (HERE).readProperty_mFormalArgumentPassingMode (), var_parameterType_7415, enumerator_7379.current (HERE).readProperty_mFormalArgumentName (), enumerator_7379.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 174)) ;
    var_routineSignature_7305.addAssign_operation (enumerator_7379.current (HERE).readProperty_mFormalSelector (), var_parameterType_7415, enumerator_7379.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_7379.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 180)) ;
    enumerator_7379.gotoNextObject () ;
  }
  const GALGAS_externProcedureDeclarationAST temp_3 = this ;
  GALGAS_lstring var_mangledName_7899 = function_routineMangledName (temp_3.readProperty_mRoutineName (), var_routineSignature_7305, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 186)) ;
  GALGAS_lstring var_nameForUsefulness_8008 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_7899, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 188)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8008, var_nameForUsefulness_8008, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 189)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_externProcedureDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_usefullProcedure ().boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_8008  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 191)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (var_mangledName_7899.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 195)), GALGAS_routinePrototypeDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (var_mangledName_7899.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extern-procedure-declaration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 198)), var_mangledName_7899.readProperty_string (), var_formalArgumentList_7238, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 194)) ;
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
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 180)) ;
  GALGAS_formalParameterSignature var_routineSignature_6910 = temp_0 ;
  const GALGAS_procDeclarationAST temp_1 = this ;
  cEnumerator_formalParameterListAST enumerator_6984 (temp_1.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_6984.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_7078 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6984.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_7078, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 182)) ;
    }
    var_routineSignature_6910.addAssign_operation (enumerator_6984.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_7078, enumerator_6984.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_6984.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 183)) ;
    enumerator_6984.gotoNextObject () ;
  }
  const GALGAS_procDeclarationAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mRoutineInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 190)) ;
  {
  const GALGAS_procDeclarationAST temp_3 = this ;
  const GALGAS_procDeclarationAST temp_4 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_3.readProperty_mRoutineName (), var_routineSignature_6910, temp_4.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 192)) ;
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
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 209)) ;
  GALGAS_formalParameterSignature var_routineSignature_8258 = temp_0 ;
  const GALGAS_procDeclarationAST temp_1 = this ;
  cEnumerator_formalParameterListAST enumerator_8332 (temp_1.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_8332.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_8368 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8332.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 211)) ;
    var_routineSignature_8258.addAssign_operation (enumerator_8332.current (HERE).readProperty_mFormalSelector (), var_parameterType_8368, enumerator_8332.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_8332.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 212)) ;
    enumerator_8332.gotoNextObject () ;
  }
  const GALGAS_procDeclarationAST temp_2 = this ;
  GALGAS_lstring var_mangledName_8639 = function_routineMangledName (temp_2.readProperty_mRoutineName (), var_routineSignature_8258, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 218)) ;
  GALGAS_lstring var_nameForUsefulness_8748 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_8639, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 220)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8748, var_nameForUsefulness_8748, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 221)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_procDeclarationAST temp_4 = this ;
    test_3 = temp_4.readProperty_usefullProcedure ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_8748  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 223)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_9022 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("procedure-declaration.galgas", 230)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_HERE) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_9621 ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList_9648 ;
  {
  const GALGAS_procDeclarationAST temp_5 = this ;
  GALGAS_typedPropertyList temp_6 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 240)) ;
  GALGAS_typedPropertyList temp_7 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 241)) ;
  const GALGAS_procDeclarationAST temp_8 = this ;
  const GALGAS_procDeclarationAST temp_9 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_8748, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9022, ioArgument_ioTypeMap, temp_5.readProperty_mFormalArgumentListAST (), temp_6, temp_7, temp_8.readProperty_mRoutineInstructionList (), temp_9.readProperty_mEndOfRoutineInstructionList (), var_instructionList_9621, var_formalArgumentList_9648, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 234)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (var_mangledName_8639.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 248)), GALGAS_routineImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (var_mangledName_8639.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 251)), var_mangledName_8639.readProperty_string (), var_formalArgumentList_9648, GALGAS_bool (false), var_instructionList_9621, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 247)) ;
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
  GALGAS_string var_code_11512 ;
  {
  const GALGAS_routineImplementationForGeneration temp_3 = this ;
  const GALGAS_routineImplementationForGeneration temp_4 = this ;
  const GALGAS_routineImplementationForGeneration temp_5 = this ;
  const GALGAS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (temp_3.readProperty_mGenerateStatic (), GALGAS_string ("routine_").add_operation (temp_4.readProperty_routineMangledName ().getter_identifierRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 285)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_11512, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 283)) ;
  }
  const GALGAS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.readProperty_routineMangledName (), var_code_11512 COMMA_SOURCE_FILE ("procedure-declaration.galgas", 296))) ;
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
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 38)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 37)), inCompiler COMMA_HERE), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1691 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 36)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_2396 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2396, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 55)) ;
  }
  GALGAS_unifiedTypeMapEntry var_t_2483 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2483, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 56)) ;
  }
  {
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 59)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 59)), var_t_2483, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 59)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 58)), inCompiler COMMA_HERE), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2396 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 57)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_3300 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3300, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 79)) ;
  GALGAS_functionSignature var_argumentTypeList_3325 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_t_3394 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3394, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 81)) ;
  }
  var_argumentTypeList_3325.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 82)), var_t_3394, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 82)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3394, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 83)) ;
  }
  var_argumentTypeList_3325.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 84)), var_t_3394, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 84)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 86)), inCompiler COMMA_HERE), var_argumentTypeList_3325, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3300 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 85)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_4511 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4511, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 108)) ;
  }
  GALGAS_unifiedTypeMapEntry var_t_4598 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4598, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 110)) ;
  GALGAS_functionSignature var_argumentTypeList_4626 = temp_0 ;
  var_argumentTypeList_4626.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 111)), var_t_4598, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 111)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4598, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 112)) ;
  }
  var_argumentTypeList_4626.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 113)), var_t_4598, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 113)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4598, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 114)) ;
  }
  var_argumentTypeList_4626.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 115)), var_t_4598, constinArgument_inArgument_33_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 115)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 117)), inCompiler COMMA_HERE), var_argumentTypeList_4626, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4511 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 116)) ;
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
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 35)) ;
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 33)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 34)), temp_0, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 36)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1932, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 39)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 32)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      GALGAS_functionSignature temp_2 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 46)) ;
      ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inObsoleteGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 44)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 45)), temp_2, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 47)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1932, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 50)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 43)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_3297 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3297, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 64)) ;
  }
  {
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 68)) ;
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 66)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 67)), temp_0, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 69)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3297, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 72)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 65)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      GALGAS_functionSignature temp_2 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 79)) ;
      ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inObsoleteGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 77)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 78)), temp_2, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 80)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3297, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 83)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 76)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_4468 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4468, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 100)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 101)) ;
  GALGAS_functionSignature var_argList_4512 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_t_4594 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4594, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 102)) ;
  }
  var_argList_4512.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 103)), var_t_4594, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 103)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 105)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 106)), var_argList_4512, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 108)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_4468, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 111)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 104)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_5488 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5488, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 129)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 130)) ;
  GALGAS_functionSignature var_argList_5532 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_t_5631 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_5631, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 131)) ;
  }
  var_argList_5532.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 132)), var_t_5631, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 132)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_5631, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 133)) ;
  }
  var_argList_5532.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 134)), var_t_5631, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 134)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 136)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 137)), var_argList_5532, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 139)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_5488, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 142)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 135)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_6739 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_6739, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 155)) ;
  }
  {
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 159)) ;
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 157)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 158)), temp_0, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 160)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_6739, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 163)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 156)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      GALGAS_functionSignature temp_2 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 170)) ;
      ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inObsoleteGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 168)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 169)), temp_2, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 171)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_6739, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 174)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 167)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_7986 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_7986, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 192)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 193)) ;
  GALGAS_functionSignature var_argList_8030 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_t_8112 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_8112, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 194)) ;
  }
  var_argList_8030.addAssign_operation (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 195)), var_t_8112, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 195)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 197)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 198)), var_argList_8030, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 200)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_7986, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 203)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 196)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_8963 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_8963, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 219)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 220)) ;
  GALGAS_functionSignature var_argList_9007 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_t_9089 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_9089, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 221)) ;
  }
  var_argList_9007.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 222)), var_t_9089, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 222)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 224)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 225)), var_argList_9007, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 227)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_8963, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 230)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 223)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_10137 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_10137, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 250)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 251)) ;
  GALGAS_functionSignature var_argList_10181 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_t_10280 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_10280, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 252)) ;
  }
  var_argList_10181.addAssign_operation (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 253)), var_t_10280, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 253)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_10280, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 254)) ;
  }
  var_argList_10181.addAssign_operation (constinArgument_inArgument_32_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 255)), var_t_10280, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 255)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 257)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 258)), var_argList_10181, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 260)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_10137, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 263)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 256)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_11335 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_11335, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 281)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 282)) ;
  GALGAS_functionSignature var_argList_11379 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_t_11478 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_11478, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 283)) ;
  }
  var_argList_11379.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 284)), var_t_11478, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 284)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_11478, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 285)) ;
  }
  var_argList_11379.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 286)), var_t_11478, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 286)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 288)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 289)), var_argList_11379, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 291)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_11335, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 294)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 287)) ;
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
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_12559 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_12559, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 314)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 315)) ;
  GALGAS_functionSignature var_argList_12603 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_t_12702 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_12702, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 316)) ;
  }
  var_argList_12603.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 317)), var_t_12702, constinArgument_inArgument_31_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 317)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_12702, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 318)) ;
  }
  var_argList_12603.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 319)), var_t_12702, constinArgument_inArgument_32_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 319)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_12702, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 320)) ;
  }
  var_argList_12603.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 321)), var_t_12702, constinArgument_inArgument_33_Name, GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 321)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 323)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 324)), var_argList_12603, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 326)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_12559, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 329)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 322)) ;
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
  GALGAS_getterMap temp_0 = GALGAS_getterMap::init (inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 338)) ;
  outArgument_outMap = temp_0 ;
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
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 34)) ;
  GALGAS_formalParameterSignature var_argList_1775 = temp_0 ;
  var_argList_1775.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 35)), var_argumentTypeIndex_1724, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 35)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 35)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inSetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 37)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 38)), var_argList_1775, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 41)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 36)) ;
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
  GALGAS_unifiedTypeMapEntry var_outputArgumentTypeIndex_2659 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_2659, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 58)) ;
  }
  GALGAS_unifiedTypeMapEntry var_inputArgumentTypeIndex_2756 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_2756, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 59)) ;
  }
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 60)) ;
  GALGAS_formalParameterSignature var_argList_2812 = temp_0 ;
  var_argList_2812.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 61)), var_outputArgumentTypeIndex_2659, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticsSetters.galgas", 61)), constinArgument_inOutputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 61)) ;
  var_argList_2812.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 62)), var_inputArgumentTypeIndex_2756, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 62)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 62)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inSetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 64)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 65)), var_argList_2812, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 68)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 63)) ;
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
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 85)) ;
  GALGAS_formalParameterSignature var_argList_3722 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_3826 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_3826, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 86)) ;
  }
  var_argList_3722.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 87)), var_argumentTypeIndex_3826, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 87)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 87)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_3826, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 88)) ;
  }
  var_argList_3722.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 89)), var_argumentTypeIndex_3826, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 89)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 89)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inSetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 91)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 92)), var_argList_3722, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 95)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 90)) ;
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
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 110)) ;
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inSetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 108)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 109)), temp_0, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 112)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 107)) ;
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
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 33)) ;
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 31)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 32)), temp_0, GALGAS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 34)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 36)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 30)) ;
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
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_2436 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2436, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)) ;
  }
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 50)) ;
  GALGAS_formalParameterSignature var_argList_2487 = temp_0 ;
  var_argList_2487.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)), var_argumentTypeIndex_2436, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 53)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 54)), var_argList_2487, GALGAS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 56)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 58)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 52)) ;
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
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 34)) ;
  GALGAS_formalParameterSignature var_argList_1779 = temp_0 ;
  var_argList_1779.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 35)), var_argumentTypeIndex_1728, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 35)), constinArgument_inArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 35)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inClassMethodName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 37)), inCompiler COMMA_HERE), var_argList_1779, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 36)) ;
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
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 57)) ;
  GALGAS_formalParameterSignature var_argList_2597 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_31__2695 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_31_, var_argumentTypeIndex_31__2695, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 59)) ;
  }
  var_argList_2597.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 60)), var_argumentTypeIndex_31__2695, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 60)), constinArgument_inArgumentName_31_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 60)) ;
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_32__2884 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_32_, var_argumentTypeIndex_32__2884, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 62)) ;
  }
  var_argList_2597.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 63)), var_argumentTypeIndex_32__2884, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 63)), constinArgument_inArgumentName_32_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 63)) ;
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_33__3073 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_33_, var_argumentTypeIndex_33__3073, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 65)) ;
  }
  var_argList_2597.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 66)), var_argumentTypeIndex_33__3073, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 66)), constinArgument_inArgumentName_33_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 66)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inClassMethodName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 68)), inCompiler COMMA_HERE), var_argList_2597, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 68)) ;
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
  GALGAS_unifiedTypeMapEntry var_argumentTypeIndex_3706 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_argumentTypeIndex_3706, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 80)) ;
  }
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 81)) ;
  GALGAS_formalParameterSignature var_argList_3757 = temp_0 ;
  var_argList_3757.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), var_argumentTypeIndex_3706, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), constinArgument_inStringArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 82)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (constinArgument_inClassMethodName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 84)), inCompiler COMMA_HERE), var_argList_3757, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 83)) ;
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
  GALGAS_optionalMethodSignature temp_0 = GALGAS_optionalMethodSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsOptionalMethods.galgas", 32)) ;
  GALGAS_optionalMethodSignature var_argList_1632 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_t_1714 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_1714, inCompiler COMMA_SOURCE_FILE ("semanticsOptionalMethods.galgas", 33)) ;
  }
  var_argList_1632.addAssign_operation (GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsOptionalMethods.galgas", 34)), var_t_1714, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsOptionalMethods.galgas", 34)) ;
  {
  ioArgument_ioMap.setter_insertKey (GALGAS_lstring::init_21__21_ (constinArgument_inOptionalMethodName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsOptionalMethods.galgas", 36)), inCompiler COMMA_HERE), var_argList_1632, inCompiler COMMA_SOURCE_FILE ("semanticsOptionalMethods.galgas", 35)) ;
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
  result_result = GALGAS_lstring::init_21__21_ (var_str_1447, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  cEnumerator_formalParameterSignature enumerator_2063 (constinArgument_inRoutineFormalParameters, EnumerationOrder::up) ;
  while (enumerator_2063.hasCurrentObject ()) {
    switch (enumerator_2063.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
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
    result_result.plusAssign_operation(enumerator_2063.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 54)) ;
    if (enumerator_2063.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 56)) ;
    }
    enumerator_2063.gotoNextObject () ;
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
//Overriding extension getter '@onceFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_onceFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_onceFunctionDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("once function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 399)) ;
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
  result_result = GALGAS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 405)) ;
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
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 429)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_extensionGetterMapForType var_extensionGetterMapForType_17233 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_17233, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 430)) ;
      cEnumerator_extensionGetterMapForType enumerator_17316 (var_extensionGetterMapForType_17233, EnumerationOrder::up) ;
      while (enumerator_17316.hasCurrentObject ()) {
        GALGAS_functionSignature temp_1 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 432)) ;
        GALGAS_functionSignature var_formalArgumentList_17388 = temp_1 ;
        cEnumerator_formalInputParameterListAST enumerator_17446 (enumerator_17316.current_mInputFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_17446.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_17556 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17446.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_17556, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 434)) ;
          }
          var_formalArgumentList_17388.addAssign_operation (enumerator_17446.current (HERE).readProperty_mFormalSelector (), var_typeIndex_17556, enumerator_17446.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_17446.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 435)) ;
          enumerator_17446.gotoNextObject () ;
        }
        GALGAS_unifiedTypeMapEntry var_returnedType_17827 ;
        {
        extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17316.current_mResultTypeName (HERE), var_returnedType_17827, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 441)) ;
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_17316.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 442)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = ioArgument_ioGetterMap.getter_hasKey (enumerator_17316.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 443)).boolEnum () ;
              if (kBoolTrue == test_3) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 444)), enumerator_17316.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 444)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_17316.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 446)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = ioArgument_ioGetterMap.getter_hasKey (enumerator_17316.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 447)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 448)), enumerator_17316.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 448)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_4) {
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = constinArgument_inIsClass.operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_17316.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 450)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 450)).boolEnum () ;
              if (kBoolTrue == test_6) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_17316.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 453)), var_formalArgumentList_17388, enumerator_17316.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), var_returnedType_17827, GALGAS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 458)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 451)) ;
                }
              }
            }
            if (kBoolFalse == test_6) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_17316.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 464)), var_formalArgumentList_17388, enumerator_17316.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), var_returnedType_17827, enumerator_17316.current_mQualifier (HERE), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 462)) ;
              }
            }
          }
        }
        enumerator_17316.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 476)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_extensionMethodMapForType var_extensionMethodMapForType_19042 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_19042, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 477)) ;
      cEnumerator_extensionMethodMapForType enumerator_19104 (var_extensionMethodMapForType_19042, EnumerationOrder::up) ;
      while (enumerator_19104.hasCurrentObject ()) {
        GALGAS_formalParameterSignature temp_8 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 479)) ;
        GALGAS_formalParameterSignature var_formalArgumentList_19157 = temp_8 ;
        cEnumerator_formalParameterListAST enumerator_19231 (enumerator_19104.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_19231.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_19367 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_19231.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_19367, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 481)) ;
          }
          var_formalArgumentList_19157.addAssign_operation (enumerator_19231.current (HERE).readProperty_mFormalSelector (), var_typeIndex_19367, enumerator_19231.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_19231.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 485)) ;
          enumerator_19231.gotoNextObject () ;
        }
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (ComparisonKind::equal, enumerator_19104.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 491)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_19104.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 492)).boolEnum () ;
              if (kBoolTrue == test_10) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 493)), enumerator_19104.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 493)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_9) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_19104.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 495)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_19104.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 496)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 497)), enumerator_19104.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 497)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_11) {
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = constinArgument_inIsClass.operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_19104.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 499)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 499)).boolEnum () ;
              if (kBoolTrue == test_13) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_19104.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 502)), var_formalArgumentList_19157, enumerator_19104.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 506)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 500)) ;
                }
              }
            }
            if (kBoolFalse == test_13) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_19104.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 512)), var_formalArgumentList_19157, enumerator_19104.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), enumerator_19104.current_mQualifier (HERE), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 510)) ;
              }
            }
          }
        }
        enumerator_19104.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 523)).boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_extensionSetterMapForType var_extensionSetterMapForType_20725 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_20725, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 524)) ;
      cEnumerator_extensionSetterMapForType enumerator_20766 (var_extensionSetterMapForType_20725, EnumerationOrder::up) ;
      while (enumerator_20766.hasCurrentObject ()) {
        GALGAS_formalParameterSignature temp_15 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 526)) ;
        GALGAS_formalParameterSignature var_formalArgumentList_20856 = temp_15 ;
        cEnumerator_formalParameterListAST enumerator_20904 (enumerator_20766.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_20904.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_21000 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_20904.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_21000, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 528)) ;
          }
          var_formalArgumentList_20856.addAssign_operation (enumerator_20904.current (HERE).readProperty_mFormalSelector (), var_typeIndex_21000, enumerator_20904.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_20904.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 529)) ;
          enumerator_20904.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_20766.current_lkey (HERE), GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 537)), var_formalArgumentList_20856, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 540)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 535)) ;
        }
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas", 543)).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_20766.current_lkey (HERE).readProperty_location (), GALGAS_string ("a refclass does not accept any setter; use method instead"), fixItArray17  COMMA_SOURCE_FILE ("semanticContext.galgas", 544)) ;
          }
        }
        enumerator_20766.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = constinArgument_inExtensionInitializerMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 549)).boolEnum () ;
    if (kBoolTrue == test_18) {
      GALGAS_extensionInitializerMapForType var_initializerMapForType_21752 ;
      constinArgument_inExtensionInitializerMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_initializerMapForType_21752, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 550)) ;
      cEnumerator_extensionInitializerMapForType enumerator_21789 (var_initializerMapForType_21752, EnumerationOrder::up) ;
      while (enumerator_21789.hasCurrentObject ()) {
        GALGAS_functionSignature temp_19 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 552)) ;
        GALGAS_functionSignature var_formalArgumentList_21868 = temp_19 ;
        cEnumerator_formalInputParameterListAST enumerator_21965 (enumerator_21789.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_21965.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_22065 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21965.current_mFormalArgumentTypeName (HERE), var_typeIndex_22065, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 554)) ;
          }
          var_formalArgumentList_21868.addAssign_operation (enumerator_21965.current_mFormalSelector (HERE), var_typeIndex_22065, enumerator_21965.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_21965.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 555)) ;
          enumerator_21965.gotoNextObject () ;
        }
        {
        ioArgument_ioInitializerMap.setter_insertKey (enumerator_21789.current_lkey (HERE), var_formalArgumentList_21868, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 565)) ;
        }
        enumerator_21789.gotoNextObject () ;
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
  GALGAS_uint var_currentDirectoryIndex_24215 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 609)) ;
  GALGAS_stringlist var_files_24342 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 611)) ;
  GALGAS_wrapperFileMap temp_0 = GALGAS_wrapperFileMap::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 612)) ;
  outArgument_outWrapperFileMap = temp_0 ;
  cEnumerator_stringlist enumerator_24426 (var_files_24342, EnumerationOrder::up) ;
  while (enumerator_24426.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_24426.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 614)) COMMA_SOURCE_FILE ("semanticContext.galgas", 614)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_absoluteFilePath_24532 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 615)).add_operation (enumerator_24426.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 615)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::init_21__21_ (enumerator_24426.current_mValue (HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 617)), inCompiler COMMA_HERE), var_absoluteFilePath_24532, GALGAS_bool (true), var_currentDirectoryIndex_24215, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 616)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 623)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_24426.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 624)) COMMA_SOURCE_FILE ("semanticContext.galgas", 624)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_string var_absoluteFilePath_24908 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 625)).add_operation (enumerator_24426.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 625)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::init_21__21_ (enumerator_24426.current_mValue (HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 627)), inCompiler COMMA_HERE), var_absoluteFilePath_24908, GALGAS_bool (false), var_currentDirectoryIndex_24215, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 626)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 633)) ;
        }
      }
    }
    enumerator_24426.gotoNextObject () ;
  }
  GALGAS_stringlist var_directories_25264 = constinArgument_inAbsoluteSourcePath.getter_directories (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 637)) ;
  GALGAS_wrapperDirectoryMap temp_3 = GALGAS_wrapperDirectoryMap::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 638)) ;
  outArgument_outWrapperDirectoryMap = temp_3 ;
  cEnumerator_stringlist enumerator_25358 (var_directories_25264, EnumerationOrder::up) ;
  while (enumerator_25358.hasCurrentObject ()) {
    GALGAS_uint var_theDirectoryIndex_25398 = ioArgument_ioWrapperDirectoryIndex ;
    GALGAS_wrapperFileMap var_internalWrapperFileMap_25634 ;
    GALGAS_wrapperDirectoryMap var_internalWrapperDirectoryMap_25668 ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 642)).add_operation (enumerator_25358.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 642)), constinArgument_inPathInWrapper.add_operation (enumerator_25358.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 643)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 643)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_25634, var_internalWrapperDirectoryMap_25668, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 641)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GALGAS_lstring::init_21__21_ (enumerator_25358.current_mValue (HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 652)), inCompiler COMMA_HERE), var_internalWrapperFileMap_25634, var_internalWrapperDirectoryMap_25668, var_theDirectoryIndex_25398, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 651)) ;
    }
    enumerator_25358.gotoNextObject () ;
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
  GALGAS_filewrapperTemplateMap temp_0 = GALGAS_filewrapperTemplateMap::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 671)) ;
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_26642 = temp_0 ;
  const GALGAS_filewrapperDeclarationAST temp_1 = this ;
  cEnumerator_filewrapperTemplateListAST enumerator_26728 (temp_1.readProperty_mFilewrapperTemplateList (), EnumerationOrder::up) ;
  while (enumerator_26728.hasCurrentObject ()) {
    GALGAS_functionSignature temp_2 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 673)) ;
    GALGAS_functionSignature var_templateSignature_26834 = temp_2 ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_26935 (enumerator_26728.current_mFilewrapperTemplateFormalInputParameters (HERE), EnumerationOrder::up) ;
    while (enumerator_26935.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_27055 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_26935.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_27055, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 675)) ;
      }
      var_templateSignature_26834.addAssign_operation (enumerator_26935.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex_27055, enumerator_26935.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_26935.current_mIsUnused (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 676)) ;
      enumerator_26935.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_26642.setter_insertKey (enumerator_26728.current_mFilewrapperTemplateName (HERE), var_templateSignature_26834, enumerator_26728.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 678)) ;
    }
    enumerator_26728.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap temp_3 = GALGAS_wrapperExtensionMap::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 685)) ;
  GALGAS_wrapperExtensionMap var_textExtensionMap_27398 = temp_3 ;
  const GALGAS_filewrapperDeclarationAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_27428 (temp_4.readProperty_mFilewrapperTextFileExtensionList (), EnumerationOrder::up) ;
  while (enumerator_27428.hasCurrentObject ()) {
    {
    var_textExtensionMap_27398.setter_insertKey (enumerator_27428.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 687)) ;
    }
    enumerator_27428.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap temp_5 = GALGAS_wrapperExtensionMap::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 690)) ;
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap_27594 = temp_5 ;
  const GALGAS_filewrapperDeclarationAST temp_6 = this ;
  cEnumerator_lstringlist enumerator_27630 (temp_6.readProperty_mFilewrapperBinaryFileExtensionList (), EnumerationOrder::up) ;
  while (enumerator_27630.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_textExtensionMap_27398.getter_hasKey (enumerator_27630.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 692)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_27630.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_27630.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 693)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 693)), fixItArray8  COMMA_SOURCE_FILE ("semanticContext.galgas", 693)) ;
      }
    }
    if (kBoolFalse == test_7) {
      {
      var_binaryFileExtensionMap_27594.setter_insertKey (enumerator_27630.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 695)) ;
      }
    }
    enumerator_27630.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap_27948 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_27994 ;
  GALGAS_string var_absoluteSourcePath_28028 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_filewrapperDeclarationAST temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::equal, temp_10.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 702)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_filewrapperDeclarationAST temp_11 = this ;
      var_absoluteSourcePath_28028 = temp_11.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_filewrapperDeclarationAST temp_12 = this ;
    const GALGAS_filewrapperDeclarationAST temp_13 = this ;
    var_absoluteSourcePath_28028 = temp_12.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 705)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 705)).add_operation (temp_13.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 705)) ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_absoluteSourcePath_28028.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 707)).operator_not (SOURCE_FILE ("semanticContext.galgas", 707)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_filewrapperDeclarationAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_28028, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 708)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 708)), fixItArray16  COMMA_SOURCE_FILE ("semanticContext.galgas", 708)) ;
      var_regularRootFileMap_27948.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_27994.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_14) {
    GALGAS_uint var_wrapperFileIndex_28544 = GALGAS_uint (uint32_t (0U)) ;
    GALGAS_uint var_wrapperDirectoryIndex_28579 = GALGAS_uint (uint32_t (0U)) ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_28028, GALGAS_string ("/"), var_textExtensionMap_27398, var_binaryFileExtensionMap_27594, var_regularRootFileMap_27948, var_wrapperDirectoryMap_27994, var_wrapperFileIndex_28544, var_wrapperDirectoryIndex_28579, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 714)) ;
    }
  }
  {
  const GALGAS_filewrapperDeclarationAST temp_17 = this ;
  const GALGAS_filewrapperDeclarationAST temp_18 = this ;
  const GALGAS_filewrapperDeclarationAST temp_19 = this ;
  const GALGAS_filewrapperDeclarationAST temp_20 = this ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_17.readProperty_mFilewrapperName (), temp_18.readProperty_mFilewrapperPath (), temp_19.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_27948, var_wrapperDirectoryMap_27994, var_filewrapperTemplateMap_26642, temp_20.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 726)) ;
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
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 747)) ;
  GALGAS_functionSignature var_functionSignature_29837 = temp_0 ;
  const GALGAS_externFunctionDeclarationAST temp_1 = this ;
  cEnumerator_formalInputParameterListAST enumerator_29931 (temp_1.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_29931.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_30032 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_29931.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_30032, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 749)) ;
    }
    var_functionSignature_29837.addAssign_operation (enumerator_29931.current_mFormalSelector (HERE), var_parameterTypeIndex_30032, enumerator_29931.current_mFormalArgumentTypeName (HERE).readProperty_string (), enumerator_29931.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 750)) ;
    enumerator_29931.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_resultTypeIndex_30234 ;
  {
  const GALGAS_externFunctionDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeIndex_30234, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 753)) ;
  }
  {
  const GALGAS_externFunctionDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_3.readProperty_mFunctionName (), var_functionSignature_29837, var_resultTypeIndex_30234, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 755)) ;
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
  GALGAS_unifiedTypeMapEntry var_resultTypeIndex_31177 ;
  {
  const GALGAS_onceFunctionDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mResultTypeName (), var_resultTypeIndex_31177, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 773)) ;
  }
  {
  const GALGAS_onceFunctionDeclarationAST temp_1 = this ;
  GALGAS_functionSignature temp_2 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 775)) ;
  const GALGAS_onceFunctionDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_1.readProperty_mFunctionName (), temp_2, var_resultTypeIndex_31177, temp_3.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 775)) ;
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
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 788)) ;
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
  GALGAS_grammarLabelMap temp_0 = GALGAS_grammarLabelMap::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 808)) ;
  GALGAS_grammarLabelMap var_grammarLabelMap_32923 = temp_0 ;
  const GALGAS_galgas_33_GrammarComponentAST temp_1 = this ;
  cEnumerator_nonTerminalLabelListAST enumerator_32983 (temp_1.readProperty_mStartSymbolLabelList (), EnumerationOrder::up) ;
  while (enumerator_32983.hasCurrentObject ()) {
    GALGAS_formalParameterSignature temp_2 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 811)) ;
    GALGAS_formalParameterSignature var_formalArgumentList_33078 = temp_2 ;
    cEnumerator_formalParameterListAST enumerator_33199 (enumerator_32983.current_mFormalArgumentList (HERE), EnumerationOrder::up) ;
    while (enumerator_33199.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentType_33288 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_33199.current_mFormalArgumentTypeName (HERE), var_argumentType_33288, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 813)) ;
      }
      var_formalArgumentList_33078.addAssign_operation (enumerator_33199.current_mFormalSelector (HERE), var_argumentType_33288, enumerator_33199.current_mFormalArgumentPassingMode (HERE), enumerator_33199.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 814)) ;
      enumerator_33199.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_32923.setter_insertKey (enumerator_32983.current_mLabelName (HERE), var_formalArgumentList_33078, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 820)) ;
    }
    enumerator_32983.gotoNextObject () ;
  }
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_4 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_5 = this ;
  ioArgument_ioSemanticContext.mProperty_grammarMap.setter_insertGrammar (temp_3.readProperty_mGrammarComponentName (), var_grammarLabelMap_32923, temp_4.readProperty_mHasIndexing ().readProperty_bool (), temp_5.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 826)) ;
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
  GALGAS_lstring var_key_35575 = GALGAS_lstring::init_21__21_ (GALGAS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 867)), temp_1.readProperty_mGrammarComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_35575, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 868)) ;
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = this ;
  cEnumerator_lstringlist enumerator_35732 (temp_3.readProperty_mSyntaxComponents (), EnumerationOrder::up) ;
  while (enumerator_35732.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_35575, GALGAS_lstring::init_21__21_ (GALGAS_string ("syntax ").add_operation (enumerator_35732.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 870)), enumerator_35732.current_mValue (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas", 870)) ;
    }
    enumerator_35732.gotoNextObject () ;
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
  GALGAS_lstring var_key_36530 = GALGAS_lstring::init_21__21_ (GALGAS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 883)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_36530, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 884)) ;
  }
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_36530, GALGAS_lstring::init_21__21_ (GALGAS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 885)), temp_4.readProperty_mLexiqueName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas", 885)) ;
  }
  const GALGAS_galgas_33_SyntaxComponentAST temp_5 = this ;
  cEnumerator_syntaxRuleListAST enumerator_36807 (temp_5.readProperty_mRuleList (), EnumerationOrder::up) ;
  while (enumerator_36807.hasCurrentObject ()) {
    cEnumerator_syntaxRuleLabelListAST enumerator_36872 (enumerator_36807.current_mLabelList (HERE), EnumerationOrder::up) ;
    while (enumerator_36872.hasCurrentObject ()) {
      cEnumerator_formalParameterListAST enumerator_36958 (enumerator_36872.current_mFormalArguments (HERE), EnumerationOrder::up) ;
      while (enumerator_36958.hasCurrentObject ()) {
        switch (enumerator_36958.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_36530, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_36958.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 890)), enumerator_36958.current_mFormalArgumentTypeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas", 890)) ;
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
        enumerator_36958.gotoNextObject () ;
      }
      enumerator_36872.gotoNextObject () ;
    }
    enumerator_36807.gotoNextObject () ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 907)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 919)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 931)) ;
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
  GALGAS_semanticInstructionListForGeneration temp_0 = GALGAS_semanticInstructionListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 102)) ;
  outArgument_outInstructionListForGeneration = temp_0 ;
  cEnumerator_localConstantList enumerator_4716 (constinArgument_inLocalConstantList, EnumerationOrder::up) ;
  while (enumerator_4716.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_4716.current_mNoWarningIfUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_4716.current_mName (HERE), enumerator_4716.current_mType (HERE), enumerator_4716.current_mCppName (HERE), enumerator_4716.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 106)) ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      {
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_4716.current_mName (HERE), enumerator_4716.current_mType (HERE), enumerator_4716.current_mCppName (HERE), enumerator_4716.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 108)) ;
      }
    }
    enumerator_4716.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_5025 (constinArgument_inLocalInitializedVariableList, EnumerationOrder::up) ;
  while (enumerator_5025.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_5025.current_mName (HERE), GALGAS_bool (true), enumerator_5025.current_mType (HERE), enumerator_5025.current_mCppName (HERE), enumerator_5025.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 113)) ;
    }
    enumerator_5025.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_5209 (constinArgument_inLocalInitializedVariableListNoWarns, EnumerationOrder::up) ;
  while (enumerator_5209.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_5209.current_mName (HERE), GALGAS_bool (false), enumerator_5209.current_mType (HERE), enumerator_5209.current_mCppName (HERE), enumerator_5209.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 116)) ;
    }
    enumerator_5209.gotoNextObject () ;
  }
  cEnumerator_semanticInstructionListAST enumerator_5411 (constinArgument_inSemanticInstructionListAST, EnumerationOrder::up) ;
  while (enumerator_5411.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_5411.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 120)) ;
    enumerator_5411.gotoNextObject () ;
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
  GALGAS_unifiedTypeMapEntry var_expressionType_6371 = constinArgument_inExpression.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_boolType_6437 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, var_expressionType_6371.objectCompare (var_boolType_6437)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outExpression = constinArgument_inExpression ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_6371, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 154)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 154)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = extensionGetter_definition (var_expressionType_6371, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).readProperty_propertyMap ().getter_hasKey (GALGAS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_AccessControl var_accessControl_6811 ;
            GALGAS_unifiedTypeMapEntry var_attributeType_6870 ;
            GALGAS_bool joker_6833 ; // Joker input parameter
            extensionGetter_definition (var_expressionType_6371, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)).readProperty_propertyMap ().method_searchKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("bool"), constinArgument_inErrorLocation, inCompiler COMMA_HERE), var_accessControl_6811, joker_6833, var_attributeType_6870, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)) ;
            extensionMethod_checkSetAccess (var_accessControl_6811, constinArgument_inAnalysisContext.readProperty_selfAvailability (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 162)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (ComparisonKind::equal, var_attributeType_6870.objectCompare (var_boolType_6437)).boolEnum () ;
              if (kBoolTrue == test_3) {
                outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::init_21__21__21__21_ (var_boolType_6437, constinArgument_inErrorLocation, constinArgument_inExpression, GALGAS_string ("bool"), inCompiler COMMA_HERE) ;
              }
            }
            if (kBoolFalse == test_3) {
              TC_Array <FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_6371, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 175)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 175)).add_operation (GALGAS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 175)), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 174)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
        if (kBoolFalse == test_2) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_6371, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)).add_operation (GALGAS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 179)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (kBoolFalse == test_1) {
      const cMapElement_getterMap * objectArray_7742 = (const cMapElement_getterMap *) extensionGetter_definition (var_expressionType_6371, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 184)).readProperty_getterMap ().readAccessForWithInstruction (GALGAS_string ("bool")) ;
      if (nullptr != objectArray_7742) {
          macroValidSharedObject (objectArray_7742, cMapElement_getterMap) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (ComparisonKind::notEqual, objectArray_7742->mProperty_mReturnedType.objectCompare (var_boolType_6437)).boolEnum () ;
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
            GALGAS_stringlist temp_10 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)) ;
            GALGAS_semanticExpressionListForGeneration temp_11 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 197)) ;
            outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_boolType_6437, constinArgument_inErrorLocation, objectArray_7742->mProperty_mKind, constinArgument_inExpression, temp_10, GALGAS_string ("bool"), temp_11, objectArray_7742->mProperty_mHasCompilerArgument, inCompiler COMMA_HERE) ;
          }
        }
      }else{
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_6371, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)).readProperty_getterMap ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_6371, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)), fixItArray13  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_12) {
          TC_Array <FixItDescription> fixItArray14 ;
          appendFixItActions (fixItArray14, kFixItReplace, extensionGetter_definition (var_expressionType_6371, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 210)).readProperty_getterMap ().getter_keyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 210))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_6371, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 208)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 208)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 208)), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 207)) ;
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
  GALGAS_unifiedTypeMapEntry var_type_11364 ;
  GALGAS_string var_cppName_11382 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GALGAS_string joker_11390 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_11364, var_cppName_11382, joker_11390, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 263)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_11400 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_11400.objectCompare (var_type_11364)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (extensionGetter_identifierRepresentation (var_type_11364, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_11400, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 266)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName_11382.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)) ;
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
  GALGAS_string var_cppName_12453 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_12595 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 286)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GALGAS_bool (true), var_type_12595, var_cppName_12453, var_cppName_12453, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 287)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_12798 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_12798.objectCompare (var_type_12595)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (extensionGetter_identifierRepresentation (var_type_12595, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_12798, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 290)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName_12453, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)) ;
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
  GALGAS_string var_cppName_13886 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_14028 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 310)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_14028, var_cppName_13886, var_cppName_13886, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_14206 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_14206.objectCompare (var_type_14028)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (extensionGetter_identifierRepresentation (var_type_14028, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_14206, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 314)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_13886, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)) ;
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
  GALGAS_formalParameterListForGeneration temp_0 = GALGAS_formalParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 143)) ;
  outArgument_outRoutineSignature = temp_0 ;
  cEnumerator_formalParameterListAST enumerator_7996 (constinArgument_inRoutineSignatureAST, EnumerationOrder::up) ;
  while (enumerator_7996.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_8029 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7996.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 145)) ;
    GALGAS_string var_formalArgumentCppName_8124 ;
    switch (enumerator_7996.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        var_formalArgumentCppName_8124 = GALGAS_string ("inArgument_").add_operation (enumerator_7996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 149)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = enumerator_7996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_insertInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7996.current (HERE).readProperty_mFormalArgumentName (), var_type_8029, var_formalArgumentCppName_8124, var_formalArgumentCppName_8124, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 152)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          extensionSetter_insertInputFormalArgument (ioArgument_ioVariableMap, enumerator_7996.current (HERE).readProperty_mFormalArgumentName (), var_type_8029, var_formalArgumentCppName_8124, var_formalArgumentCppName_8124, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 159)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        var_formalArgumentCppName_8124 = GALGAS_string ("outArgument_").add_operation (enumerator_7996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 167)) ;
        {
        extensionSetter_insertOutputFormalArgument (ioArgument_ioVariableMap, enumerator_7996.current (HERE).readProperty_mFormalArgumentName (), var_type_8029, var_formalArgumentCppName_8124, var_formalArgumentCppName_8124, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 169)) ;
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        var_formalArgumentCppName_8124 = GALGAS_string ("ioArgument_").add_operation (enumerator_7996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 176)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_7996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7996.current (HERE).readProperty_mFormalArgumentName (), var_type_8029, var_formalArgumentCppName_8124, var_formalArgumentCppName_8124, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 179)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          extensionSetter_insertInputOutputFormalArgument (ioArgument_ioVariableMap, enumerator_7996.current (HERE).readProperty_mFormalArgumentName (), var_type_8029, var_formalArgumentCppName_8124, var_formalArgumentCppName_8124, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 186)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        var_formalArgumentCppName_8124 = GALGAS_string ("constinArgument_").add_operation (enumerator_7996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 194)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = enumerator_7996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7996.current (HERE).readProperty_mFormalArgumentName (), var_type_8029, var_formalArgumentCppName_8124, var_formalArgumentCppName_8124, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 197)) ;
            }
          }
        }
        if (kBoolFalse == test_3) {
          {
          extensionSetter_insertConstantInputFormalArgument (ioArgument_ioVariableMap, enumerator_7996.current (HERE).readProperty_mFormalArgumentName (), var_type_8029, var_formalArgumentCppName_8124, var_formalArgumentCppName_8124, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 204)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssign_operation (enumerator_7996.current (HERE).readProperty_mFormalSelector (), enumerator_7996.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_8029, enumerator_7996.current (HERE).readProperty_mFormalArgumentName (), var_formalArgumentCppName_8124  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 212)) ;
    enumerator_7996.gotoNextObject () ;
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
  GALGAS_localVarManager var_variableMap_11504 = GALGAS_localVarManager::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 231)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_11671 (constinArgument_inNonMutableTypedAttributeList, EnumerationOrder::up) ;
      while (enumerator_11671.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_11504, enumerator_11671.current (HERE).readProperty_name (), enumerator_11671.current (HERE).readProperty_typeEntry (), constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 236)).add_operation (enumerator_11671.current (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 237)), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 233)) ;
        }
        enumerator_11671.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 243)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_typedPropertyList enumerator_12136 (constinArgument_inMutableTypedAttributeList, EnumerationOrder::up) ;
      while (enumerator_12136.hasCurrentObject ()) {
        {
        extensionSetter_insertMutableProperty (var_variableMap_11504, enumerator_12136.current (HERE).readProperty_name (), enumerator_12136.current (HERE).readProperty_typeEntry (), constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 248)).add_operation (enumerator_12136.current (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 249)), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 245)) ;
        }
        enumerator_12136.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_unifiedTypeMapEntry var_type_12597 ;
    GALGAS_selfMutability var_selfMutability_12623 ;
    const bool optionalResult12576 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_type_12597, var_selfMutability_12623) ;
    if (!optionalResult12576) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      cEnumerator_typedPropertyList enumerator_12682 (extensionGetter_definition (var_type_12597, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 256)).readProperty_allTypedPropertyList (), EnumerationOrder::up) ;
      while (enumerator_12682.hasCurrentObject ()) {
        GALGAS_bool temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, var_selfMutability_12623.objectCompare (GALGAS_selfMutability::class_func_initializer (SOURCE_FILE ("semanticAnalysis.galgas", 257)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_bool (ComparisonKind::notEqual, enumerator_12682.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 258)))) ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_bool (true) ;
        }
        GALGAS_bool var_initialized_12716 = temp_3 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_11504, enumerator_12682.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_12682.current (HERE).readProperty_typeEntry (), GALGAS_string ("<< unused >>"), GALGAS_string ("self.").add_operation (enumerator_12682.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 266)), var_initialized_12716, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 261)) ;
        }
        enumerator_12682.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inRoutineSignatureAST, var_variableMap_11504, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 272)) ;
  }
  GALGAS_semanticInstructionListForGeneration temp_5 = GALGAS_semanticInstructionListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 280)) ;
  outArgument_outSemanticInstructionListForGeneration = temp_5 ;
  cEnumerator_semanticInstructionListAST enumerator_13410 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_13410.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_13410.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_11504, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 282)) ;
    enumerator_13410.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_11504, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 292)) ;
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
  GALGAS_lstring var_nameForUsefulness_14318 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 307)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14318, var_nameForUsefulness_14318, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 308)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_externFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_14318  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 310)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration temp_3 = GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 313)) ;
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList_14564 = temp_3 ;
  const GALGAS_externFunctionDeclarationAST temp_4 = this ;
  cEnumerator_formalInputParameterListAST enumerator_14697 (temp_4.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_14697.hasCurrentObject ()) {
    var_formalArgumentList_14564.addAssign_operation (enumerator_14697.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14697.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 317)), enumerator_14697.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_14697.current_mFormalArgumentName (HERE), enumerator_14697.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 315)) ;
    enumerator_14697.gotoNextObject () ;
  }
  const GALGAS_externFunctionDeclarationAST temp_5 = this ;
  const GALGAS_externFunctionDeclarationAST temp_6 = this ;
  const GALGAS_externFunctionDeclarationAST temp_7 = this ;
  const GALGAS_externFunctionDeclarationAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (temp_5.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 323)), GALGAS_functionPrototypeDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21_ (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_6.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 326)), temp_7.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_14564, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mResultTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 329)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 322)) ;
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
  GALGAS_localVarManager var_variableMap_16193 = GALGAS_localVarManager::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 354)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_16348 (constinArgument_inTypedAttributeList, EnumerationOrder::up) ;
      while (enumerator_16348.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_16193, enumerator_16348.current_name (HERE), enumerator_16348.current_typeEntry (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 359)).add_operation (enumerator_16348.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 359)), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 356)) ;
        }
        enumerator_16348.gotoNextObject () ;
      }
    }
  }
  GALGAS_formalInputParameterListForGeneration temp_1 = GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 365)) ;
  outArgument_outSignatureForGeneration = temp_1 ;
  cEnumerator_formalInputParameterListAST enumerator_16739 (constinArgument_inFunctionSignature, EnumerationOrder::up) ;
  while (enumerator_16739.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_16770 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16739.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 367)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = enumerator_16739.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_cppName_16905 = GALGAS_string ("constinArgument_").add_operation (enumerator_16739.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 369)) ;
        outArgument_outSignatureForGeneration.addAssign_operation (enumerator_16739.current (HERE).readProperty_mFormalSelector (), var_parameterType_16770, var_cppName_16905, enumerator_16739.current (HERE).readProperty_mFormalArgumentName (), enumerator_16739.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 370)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = enumerator_16739.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_16193, enumerator_16739.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16770, var_cppName_16905, var_cppName_16905, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 377)) ;
            }
          }
        }
        if (kBoolFalse == test_3) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_16193, enumerator_16739.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16770, var_cppName_16905, var_cppName_16905, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 379)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      GALGAS_string var_cppName_17522 = GALGAS_string ("inArgument_").add_operation (enumerator_16739.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 382)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_16739.current (HERE).readProperty_mFormalSelector (), var_parameterType_16770, var_cppName_17522, enumerator_16739.current (HERE).readProperty_mFormalArgumentName (), enumerator_16739.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 383)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = enumerator_16739.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_16193, enumerator_16739.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16770, var_cppName_17522, var_cppName_17522, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 390)) ;
          }
        }
      }
      if (kBoolFalse == test_4) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_16193, enumerator_16739.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_16770, var_cppName_17522, var_cppName_17522, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 392)) ;
        }
      }
    }
    enumerator_16739.gotoNextObject () ;
  }
  outArgument_outReturnedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inResultTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 397)) ;
  outArgument_outResultVariableCppName = GALGAS_string ("result_").add_operation (constinArgument_inReturnVariableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 398)) ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_16193, constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 399)) ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    GALGAS_unifiedTypeMapEntry var_type_18553 ;
    GALGAS_selfMutability var_unused_0_18575 ;
    const bool optionalResult18532 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_type_18553, var_unused_0_18575) ;
    if (!optionalResult18532) {
      test_5 = kBoolFalse ;
    }
    if (kBoolTrue == test_5) {
      cEnumerator_typedPropertyList enumerator_18621 (extensionGetter_definition (var_type_18553, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 402)).readProperty_allTypedPropertyList (), EnumerationOrder::up) ;
      while (enumerator_18621.hasCurrentObject ()) {
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_16193, enumerator_18621.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfFunctionLocation, enumerator_18621.current (HERE).readProperty_typeEntry (), GALGAS_string ("<< unused >>"), GALGAS_string ("self.").add_operation (enumerator_18621.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 408)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 403)) ;
        }
        enumerator_18621.gotoNextObject () ;
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration temp_6 = GALGAS_semanticInstructionListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 414)) ;
  outArgument_outSemanticInstructionListForGeneration = temp_6 ;
  cEnumerator_semanticInstructionListAST enumerator_19017 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_19017.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_19017.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_16193, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 416)) ;
    enumerator_19017.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_16193, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 426)) ;
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
  GALGAS_lstring var_nameForUsefulness_19907 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 441)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_19907, var_nameForUsefulness_19907, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 442)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_functionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_19907  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 444)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_20175 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 451)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_HERE) ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList_20769 ;
  GALGAS_unifiedTypeMapEntry var_returnType_20803 ;
  GALGAS_string var_resultVariableCppName_20823 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_20854 ;
  {
  const GALGAS_functionDeclarationAST temp_3 = this ;
  GALGAS_typedPropertyList temp_4 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 461)) ;
  const GALGAS_functionDeclarationAST temp_5 = this ;
  const GALGAS_functionDeclarationAST temp_6 = this ;
  const GALGAS_functionDeclarationAST temp_7 = this ;
  const GALGAS_functionDeclarationAST temp_8 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_19907, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_20175, ioArgument_ioTypeMap, temp_3.readProperty_mFormalArgumentList (), temp_4, GALGAS_string::makeEmptyString (), temp_5.readProperty_mFunctionInstructionList (), temp_6.readProperty_mResultVariableName (), temp_7.readProperty_mResultTypeName (), temp_8.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_20769, var_returnType_20803, var_resultVariableCppName_20823, var_semanticInstructionListForGeneration_20854, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 455)) ;
  }
  const GALGAS_functionDeclarationAST temp_9 = this ;
  const GALGAS_functionDeclarationAST temp_10 = this ;
  const GALGAS_functionDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (temp_9.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 474)), GALGAS_functionImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_10.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 477)), temp_11.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_20769, var_returnType_20803, var_resultVariableCppName_20823, var_semanticInstructionListForGeneration_20854, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 473)) ;
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
  GALGAS_lstring var_nameForUsefulness_21893 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 497)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_21893, var_nameForUsefulness_21893, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 498)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_onceFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_21893  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 500)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_22160 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 507)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_returnType_22769 ;
  GALGAS_string var_resultVariableCppName_22789 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_22820 ;
  {
  GALGAS_formalInputParameterListAST temp_3 = GALGAS_formalInputParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 516)) ;
  GALGAS_typedPropertyList temp_4 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 517)) ;
  const GALGAS_onceFunctionDeclarationAST temp_5 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_6 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_7 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_8 = this ;
  GALGAS_formalInputParameterListForGeneration joker_22757 ; // Joker input parameter
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_21893, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_22160, ioArgument_ioTypeMap, temp_3, temp_4, GALGAS_string::makeEmptyString (), temp_5.readProperty_mFunctionInstructionList (), temp_6.readProperty_mResultVariableName (), temp_7.readProperty_mResultTypeName (), temp_8.readProperty_mEndOfFunctionInstructionList (), joker_22757, var_returnType_22769, var_resultVariableCppName_22789, var_semanticInstructionListForGeneration_22820, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 511)) ;
  }
  const GALGAS_onceFunctionDeclarationAST temp_9 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_10 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (temp_9.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 530)), GALGAS_onceFunctionDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_10.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 533)), temp_11.readProperty_mFunctionName ().readProperty_string (), var_returnType_22769, var_resultVariableCppName_22789, var_semanticInstructionListForGeneration_22820, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 529)) ;
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
  GALGAS_lstring var_filewrapperNameForUsefulness_23989 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 556)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_23989, var_filewrapperNameForUsefulness_23989, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 557)) ;
  }
  GALGAS_wrapperFileMap var_wrapperFileMap_24322 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_24367 ;
  const GALGAS_filewrapperDeclarationAST temp_1 = this ;
  GALGAS_lstring joker_24287 ; // Joker input parameter
  GALGAS_lstringlist joker_24294 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_24391_2 ; // Joker input parameter
  GALGAS_bool joker_24391_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), joker_24287, joker_24294, var_wrapperFileMap_24322, var_wrapperDirectoryMap_24367, joker_24391_2, joker_24391_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 559)) ;
  GALGAS_string var_absoluteSourcePath_24438 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::equal, temp_3.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 569)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperDeclarationAST temp_4 = this ;
      var_absoluteSourcePath_24438 = temp_4.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_5 = this ;
    const GALGAS_filewrapperDeclarationAST temp_6 = this ;
    var_absoluteSourcePath_24438 = temp_5.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 572)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 572)).add_operation (temp_6.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 572)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_absoluteSourcePath_24438.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 574)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 574)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_filewrapperDeclarationAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_24438, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)) ;
    }
  }
  if (kBoolFalse == test_7) {
    GALGAS_filewrapperTemplateListForGeneration temp_10 = GALGAS_filewrapperTemplateListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 578)) ;
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_24954 = temp_10 ;
    const GALGAS_filewrapperDeclarationAST temp_11 = this ;
    cEnumerator_filewrapperTemplateListAST enumerator_25056 (temp_11.readProperty_mFilewrapperTemplateList (), EnumerationOrder::up) ;
    while (enumerator_25056.hasCurrentObject ()) {
      const GALGAS_filewrapperDeclarationAST temp_12 = this ;
      GALGAS_lstring var_filewrapperTemplateNameForUsefulness_25145 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_12.readProperty_mFilewrapperName (), enumerator_25056.current_mFilewrapperTemplateName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 580)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_25145, var_filewrapperTemplateNameForUsefulness_25145, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 584)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_25145, var_filewrapperNameForUsefulness_23989 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 585)) ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::equal, enumerator_25056.current_mFilewrapperTemplatePath (HERE).readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 586)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_25056.current_mFilewrapperTemplatePath (HERE).readProperty_location (), GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_24438, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 588)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 588)), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 587)) ;
        }
      }
      GALGAS_string var_absoluteTemplatePath_25778 = var_absoluteSourcePath_24438.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 590)).add_operation (enumerator_25056.current_mFilewrapperTemplatePath (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 590)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList_25941 ;
      var_resultingInstructionList_25941.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::init_21__21_ (var_absoluteTemplatePath_25778, enumerator_25056.current_mFilewrapperTemplatePath (HERE).readProperty_location (), inCompiler COMMA_HERE), var_resultingInstructionList_25941  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 592)) ;
      GALGAS_templateVariableMap temp_15 = GALGAS_templateVariableMap::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 595)) ;
      GALGAS_templateVariableMap var_templateVariableMap_26115 = temp_15 ;
      GALGAS_formalInputParameterListForGeneration temp_16 = GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 596)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_26190 = temp_16 ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_26316 (enumerator_25056.current_mFilewrapperTemplateFormalInputParameters (HERE), EnumerationOrder::up) ;
      while (enumerator_26316.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_type_26379 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_26316.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 598)) ;
        GALGAS_string var_cppVarName_26463 = GALGAS_string ("in_").add_operation (enumerator_26316.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 599)) ;
        {
        var_templateVariableMap_26115.setter_insertKey (enumerator_26316.current_mFormalArgumentName (HERE), var_type_26379, var_cppVarName_26463, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 600)) ;
        }
        var_filewrapperTemplateFormalInputParameters_26190.addAssign_operation (enumerator_26316.current_mFormalTemplateSelector (HERE), var_type_26379, var_cppVarName_26463, enumerator_26316.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 601)) ;
        enumerator_26316.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration temp_17 = GALGAS_templateInstructionListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 604)) ;
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration_26787 = temp_17 ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext_26878 = GALGAS_templateAnalysisContext::init_21__21__21_ (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_26115, inCompiler COMMA_HERE) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_23989, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_26878, ioArgument_ioTypeMap, var_resultingInstructionList_25941, var_templateInstructionListForGeneration_26787, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 610)) ;
      }
      var_filewrapperTemplateListForGeneration_24954.addAssign_operation (enumerator_25056.current_mFilewrapperTemplateName (HERE).readProperty_string (), var_filewrapperTemplateFormalInputParameters_26190, var_templateInstructionListForGeneration_26787  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 619)) ;
      enumerator_25056.gotoNextObject () ;
    }
    const GALGAS_filewrapperDeclarationAST temp_18 = this ;
    const GALGAS_filewrapperDeclarationAST temp_19 = this ;
    const GALGAS_filewrapperDeclarationAST temp_20 = this ;
    const GALGAS_filewrapperDeclarationAST temp_21 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (temp_18.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 626)), GALGAS_filewrapperDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 629)), temp_20.readProperty_mFilewrapperName ().readProperty_string (), temp_21.readProperty_mFilewrapperPath ().readProperty_string (), var_wrapperFileMap_24322, var_wrapperDirectoryMap_24367, var_filewrapperTemplateListForGeneration_24954, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 625)) ;
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
  GALGAS_lstring var_nameForUsefulness_28574 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 651)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_28574, var_nameForUsefulness_28574, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 652)) ;
  }
  GALGAS_terminalMap var_terminalMap_28913 ;
  GALGAS_indexingListAST var_indexingListAST_28951 ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GALGAS_bool joker_28888 ; // Joker input parameter
  GALGAS_terminalDeclarationListAST joker_29008_4 ; // Joker input parameter
  GALGAS_lexicalAttributeListAST joker_29008_3 ; // Joker input parameter
  GALGAS_lexicalStyleListAST joker_29008_2 ; // Joker input parameter
  GALGAS_lexicalListDeclarationListAST joker_29008_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), joker_28888, var_terminalMap_28913, var_indexingListAST_28951, joker_29008_4, joker_29008_3, joker_29008_2, joker_29008_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 654)) ;
  GALGAS_stringset temp_2 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 663)) ;
  GALGAS_stringset var_indexNameSet_29095 = temp_2 ;
  cEnumerator_indexingListAST enumerator_29132 (var_indexingListAST_28951, EnumerationOrder::up) ;
  while (enumerator_29132.hasCurrentObject ()) {
    var_indexNameSet_29095.addAssign_operation (enumerator_29132.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 665)) ;
    enumerator_29132.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing_29214 = GALGAS_bool (true) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 669)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_galgas_33_SyntaxComponentAST temp_4 = this ;
      GALGAS_string var_lexiqueName_29385 = temp_4.readProperty_mLexiqueName ().readProperty_string () ;
      GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_29842 ;
      {
      const GALGAS_galgas_33_SyntaxComponentAST temp_5 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_6 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_7 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_8 = this ;
      routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (var_nameForUsefulness_28574, ioArgument_ioUsefulEntitiesGraph, temp_5.readProperty_mNonterminalDeclarationList (), temp_6.readProperty_mRuleList (), temp_7.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_29385, constinArgument_inSemanticContext, ioArgument_ioTypeMap, constinArgument_inPredefinedTypes, var_terminalMap_28913, var_indexNameSet_29095, var_hasIndexing_29214, temp_8.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_29842, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 671)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_29842  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 687)) ;
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
    test_0 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 704)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_galgas_33_GrammarComponentAST temp_1 = this ;
      routine_println_3F_ (GALGAS_string ("*** Analyzing '").add_operation (temp_1.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 705)).add_operation (GALGAS_string ("' grammar"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 705)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 705)) ;
      }
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = this ;
  GALGAS_lstring var_grammarNameForUsefulness_30863 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 708)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_30863, var_grammarNameForUsefulness_30863, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 709)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis temp_3 = GALGAS_terminalSymbolsMapForGrammarAnalysis::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 711)) ;
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_31170 = temp_3 ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis temp_4 = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 712)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_31252 = temp_4 ;
  GALGAS_lstring var_lexiqueComponentName_31305 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 713)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis temp_5 = GALGAS_syntaxComponentListForGrammarAnalysis::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_31416 = temp_5 ;
  GALGAS_nonTerminalToAddList temp_6 = GALGAS_nonTerminalToAddList::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 715)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList_31488 = temp_6 ;
  GALGAS_uint var_addedNonTerminalCount_31527 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_7 = this ;
  cEnumerator_lstringlist enumerator_31560 (temp_7.readProperty_mSyntaxComponents (), EnumerationOrder::up) ;
  while (enumerator_31560.hasCurrentObject ()) {
    GALGAS_lstring var_syntaxNameForUsefulness_31618 = function_syntaxNameForUsefulEntitiesGraph (enumerator_31560.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 718)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_30863, var_syntaxNameForUsefulness_31618 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)) ;
    }
    GALGAS_uint var_addedNonTerminalCountRef_31803 = var_addedNonTerminalCount_31527 ;
    GALGAS_lstring var_lexiqueName_31971 ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_32025 ;
    GALGAS_syntaxRuleListAST var_ruleList_32082 ;
    GALGAS_bool var_hasTranslateFeature_32108 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_31560.current_mValue (HERE), var_lexiqueName_31971, var_nonterminalDeclarationList_32025, var_ruleList_32082, var_hasTranslateFeature_32108, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 721)) ;
    GALGAS_lstring var_lexiqueNameForUsefulness_32142 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_31971, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 728)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_30863, var_lexiqueNameForUsefulness_32142 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 729)) ;
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      const GALGAS_galgas_33_GrammarComponentAST temp_9 = this ;
      test_8 = temp_9.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_32108.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 731)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 731)).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_galgas_33_GrammarComponentAST temp_10 = this ;
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_31560.current_mValue (HERE).readProperty_location (), GALGAS_string ("as '").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 732)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 732)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 732)) ;
      }
    }
    if (kBoolFalse == test_8) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_galgas_33_GrammarComponentAST temp_13 = this ;
        test_12 = var_hasTranslateFeature_32108.operator_and (temp_13.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 733)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 733)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_galgas_33_GrammarComponentAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mGrammarComponentName ().readProperty_location (), GALGAS_string ("as '").add_operation (enumerator_31560.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 734)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 734)), fixItArray15  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 734)) ;
        }
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GALGAS_bool (ComparisonKind::equal, var_lexiqueComponentName_31305.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_16) {
        var_lexiqueComponentName_31305 = var_lexiqueName_31971 ;
      }
    }
    if (kBoolFalse == test_16) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (ComparisonKind::notEqual, var_lexiqueName_31971.readProperty_string ().objectCompare (var_lexiqueComponentName_31305.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_31560.current_mValue (HERE).readProperty_location (), GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName_31971.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 740)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 741)).add_operation (var_lexiqueComponentName_31305.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 741)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 742)), fixItArray18  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 740)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_31252, var_nonterminalDeclarationList_32025, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_31252, var_ruleList_32082, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 750)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_31252, enumerator_31560.current_mValue (HERE), var_ruleList_32082, var_actuallyUsedTerminalSymbolMap_31170, var_syntaxComponentListForGrammarAnalysis_31416, var_addedNonTerminalCount_31527, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 755)) ;
    }
    GALGAS_uint var_i_33787 = GALGAS_uint (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_31527.isValid ()) {
      uint32_t variant_33797 = var_addedNonTerminalCount_31527.uintValue () ;
      bool loop_33797 = true ;
      while (loop_33797) {
        loop_33797 = GALGAS_bool (ComparisonKind::lowerThan, var_i_33787.objectCompare (var_addedNonTerminalCount_31527.substract_operation (var_addedNonTerminalCountRef_31803, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 764)))).isValid () ;
        if (loop_33797) {
          loop_33797 = GALGAS_bool (ComparisonKind::lowerThan, var_i_33787.objectCompare (var_addedNonTerminalCount_31527.substract_operation (var_addedNonTerminalCountRef_31803, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 764)))).boolValue () ;
        }
        if (loop_33797 && (0 == variant_33797)) {
          loop_33797 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 764)) ;
        }
        if (loop_33797) {
          variant_33797 -- ;
          var_nonTerminalToAddList_31488.addAssign_operation (enumerator_31560.current_mValue (HERE).readProperty_string (), var_i_33787  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 765)) ;
          var_i_33787.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 766)) ;
        }
      }
    }
    enumerator_31560.gotoNextObject () ;
  }
  GALGAS_uint var_startSymbolIndex_34938 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_35009 ;
  const GALGAS_galgas_33_GrammarComponentAST temp_19 = this ;
  var_nonTerminalMapForGrammarAnalysis_31252.method_searchKey (temp_19.readProperty_mStartSymbolName (), var_startSymbolIndex_34938, var_startSymbolAltMap_35009, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 786)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_20 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_21 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_22 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_20.readProperty_mStartSymbolName ().readProperty_location (), temp_21.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_31252.getter_locationForKey (temp_22.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 795)), var_startSymbolAltMap_35009, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 792)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis temp_23 = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 799)) ;
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_35391 = temp_23 ;
  const GALGAS_galgas_33_GrammarComponentAST temp_24 = this ;
  cEnumerator_lstringlist enumerator_35439 (temp_24.readProperty_mUnusedNonterminalList (), EnumerationOrder::up) ;
  while (enumerator_35439.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex_35548 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_35565 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_31252.method_searchKey (enumerator_35439.current_mValue (HERE), var_nonterminalIndex_35548, joker_35565, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 801)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_35391.setter_insertKey (enumerator_35439.current_mValue (HERE), var_nonterminalIndex_35548, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 802)) ;
    }
    enumerator_35439.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis temp_25 = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 805)) ;
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_35805 = temp_25 ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_35887 (var_nonTerminalMapForGrammarAnalysis_31252, EnumerationOrder::up) ;
  while (enumerator_35887.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_35805.addAssign_operation (enumerator_35887.current_lkey (HERE), enumerator_35887.current_mNonTerminalIndex (HERE), enumerator_35887.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 807)) ;
    enumerator_35887.gotoNextObject () ;
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    test_26 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_26) {
      {
      const GALGAS_galgas_33_GrammarComponentAST temp_27 = this ;
      const GALGAS_galgas_33_GrammarComponentAST temp_28 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_27.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_31252, var_syntaxComponentListForGrammarAnalysis_31416, temp_28.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 811)) ;
      }
    }
  }
  GALGAS_string var_dotDocumentFilePath_36543 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 820)) ;
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    test_29 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitClassGraph.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_29) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_36543, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 822)) ;
      }
    }
  }
  if (kBoolFalse == test_29) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_36543, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 827)) ;
    }
  }
  GALGAS_stringset temp_30 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 832)) ;
  GALGAS_stringset var_implementationFileHeader_37115 = temp_30 ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_37167 (var_nonTerminalMapForGrammarAnalysis_31252, EnumerationOrder::up) ;
  while (enumerator_37167.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_37214 (enumerator_37167.current (HERE).readProperty_mNonterminalSymbolParametersMap (), EnumerationOrder::up) ;
    while (enumerator_37214.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_37343 (enumerator_37214.current_mFormalParametersList (HERE), EnumerationOrder::up) ;
      while (enumerator_37343.hasCurrentObject ()) {
        switch (enumerator_37343.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMapEntry var_t_37526 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_37343.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 838)) ;
            extensionMethod_addHeaderFileName (var_t_37526, var_implementationFileHeader_37115, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 839)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_37343.gotoNextObject () ;
      }
      enumerator_37214.gotoNextObject () ;
    }
    enumerator_37167.gotoNextObject () ;
  }
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    test_31 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_31) {
      GALGAS_stringset temp_32 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 846)) ;
      var_implementationFileHeader_37115 = temp_32 ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_33 = this ;
  GALGAS_string var_HTMLFilePath_37919 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)).add_operation (temp_33.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)) ;
  GALGAS_string var_grammarCppFile_38450 ;
  GALGAS_string var_grammarHTMLHelperContents_38482 ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_34 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_35 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_36 = this ;
  GALGAS_string temp_37 ;
  const enumGalgasBool test_38 = temp_36.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_38) {
    temp_37 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 860)) ;
  }else if (kBoolFalse == test_38) {
    temp_37 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21_ (temp_34.readProperty_mGrammarComponentName (), temp_35.readProperty_mGrammarClass (), var_startSymbolIndex_34938, var_lexiqueComponentName_31305.readProperty_string (), var_actuallyUsedTerminalSymbolMap_31170, var_syntaxComponentListForGrammarAnalysis_31416, var_unusedNonTerminalSymbolsForGrammar_35391, var_HTMLFilePath_37919, var_nonTerminalSymbolSortedListForGrammarAnalysis_35805, temp_37, var_grammarCppFile_38450, var_grammarHTMLHelperContents_38482, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 850)) ;
  }
  enumGalgasBool test_39 = kBoolTrue ;
  if (kBoolTrue == test_39) {
    test_39 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_39) {
      var_HTMLFilePath_37919.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 866)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 866)) ;
      GALGAS_bool joker_38819 ; // Joker input parameter
      var_grammarHTMLHelperContents_38482.method_writeToFileWhenDifferentContents (var_HTMLFilePath_37919, joker_38819, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 867)) ;
    }
  }
  if (kBoolFalse == test_39) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath_37919, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 869)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_40 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_41 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_42 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_43 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_44 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (temp_40.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 876)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 876)), temp_41.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_31305.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_31252, var_nonTerminalToAddList_31488, temp_42.readProperty_mSyntaxComponents (), temp_43.readProperty_mStartSymbolName ().readProperty_string (), temp_44.readProperty_mHasTranslateFeature (), var_grammarCppFile_38450, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 872)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes function_buildPredefinedTypes (const GALGAS_unifiedTypeMap & constinArgument_inTypeMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result_result ; // Returned variable
  result_result = GALGAS_predefinedTypes::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("location"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 897)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 897)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("bool"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 898)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 898)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("char"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 899)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 899)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("string"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 900)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 900)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("uint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("sint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 902)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 902)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("uint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 903)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 903)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("sint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 904)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 904)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("double"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 905)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 905)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("lbool"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 906)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 906)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("lchar"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 907)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 907)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("lstring"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 908)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 908)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("luint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 909)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 909)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("lsint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 910)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 910)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("luint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 911)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 911)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("lsint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 912)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 912)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("ldouble"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 913)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 913)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("stringlist"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 914)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 914)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("lbigint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 915)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 915)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("bigint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 916)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 916)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("stringset"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 917)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 917)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("lstringlist"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 918)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 918)), inCompiler COMMA_HERE) ;
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
  result.appendString (" (void) { }\n\n//--- Non terminal declarations\n") ;
  GALGAS_uint index_510_ (0) ;
  if (in_NONTERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonterminalMap enumerator_510 (in_NONTERMINAL_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_510.hasCurrentObject ()) {
      GALGAS_uint index_566_ (0) ;
      if (enumerator_510.current_mLabelMap (HERE).isValid ()) {
        cEnumerator_nonterminalLabelMap enumerator_566 (enumerator_510.current_mLabelMap (HERE), EnumerationOrder::up) ;
        while (enumerator_566.hasCurrentObject ()) {
          result.appendString ("  protected: virtual void nt_") ;
          result.appendString (enumerator_510.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_566.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_799_IDX (0) ;
          if (enumerator_566.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_799 (enumerator_566.current_mSignature (HERE), EnumerationOrder::up) ;
            while (enumerator_799.hasCurrentObject ()) {
              const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_799.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              switch (test_0) {
              case kBoolTrue : {
                result.appendString ("const class GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_799.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                switch (test_1) {
                case kBoolTrue : {
                  result.appendString ("class GALGAS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_799.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  switch (test_2) {
                  case kBoolTrue : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    result.appendString ("class GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue ()) ;
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
              index_799_IDX.increment () ;
              enumerator_799.gotoNextObject () ;
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
          index_566_.increment () ;
          enumerator_566.gotoNextObject () ;
        }
      }
      result.appendString ("  protected: virtual void nt_") ;
      result.appendString (enumerator_510.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 33)).stringValue ()) ;
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
        result.appendString (enumerator_510.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
        result.appendString ("_indexing (class Lexique_") ;
        result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
        result.appendString (" * inLexique) = 0 ;\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_510_.increment () ;
      enumerator_510.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--- Rule declarations\n") ;
  GALGAS_uint index_2262_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    cEnumerator_ruleDeclarationList enumerator_2262 (in_RULE_5F_DECLARATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2262.hasCurrentObject ()) {
      GALGAS_uint index_2400_ (0) ;
      if (enumerator_2262.current_mLabelImplementationList (HERE).isValid ()) {
        cEnumerator_ruleLabelImplementationList enumerator_2400 (enumerator_2262.current_mLabelImplementationList (HERE), EnumerationOrder::up) ;
        while (enumerator_2400.hasCurrentObject ()) {
          result.appendString ("  protected: void rule_") ;
          result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_2262.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString ("_i") ;
          result.appendString (enumerator_2262.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_2400.current_mLabelName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_2704_IDX (0) ;
          if (enumerator_2400.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_2704 (enumerator_2400.current_mSignature (HERE), EnumerationOrder::up) ;
            while (enumerator_2704.hasCurrentObject ()) {
              const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_2704.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 48)))).boolEnum () ;
              switch (test_6) {
              case kBoolTrue : {
                result.appendString ("const GALGAS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_2704.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_2704_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_2704.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 50)))).boolEnum () ;
                switch (test_7) {
                case kBoolTrue : {
                  result.appendString ("GALGAS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_2704.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_2704_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::equal, enumerator_2704.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 52)))).boolEnum () ;
                  switch (test_8) {
                  case kBoolTrue : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2704.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_2704_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2704.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_2704_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue ()) ;
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
              index_2704_IDX.increment () ;
              enumerator_2704.gotoNextObject () ;
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
          index_2400_.increment () ;
          enumerator_2400.gotoNextObject () ;
        }
      }
      result.appendString ("  protected: void rule_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2262.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
      result.appendString ("_i") ;
      result.appendString (enumerator_2262.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
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
        result.appendString (enumerator_2262.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
        result.appendString ("_i") ;
        result.appendString (enumerator_2262.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
        result.appendString ("_indexing (Lexique_") ;
        result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
        result.appendString (" * inLexique) ;\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_2262_.increment () ;
      enumerator_2262.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--- Select methods\n") ;
  GALGAS_uint index_4195_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_uintlist enumerator_4195 (in_SELECT_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4195.hasCurrentObject ()) {
      result.appendString ("  protected: virtual int32_t select_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_4195.current_mValue (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue ()) ;
      result.appendString (" (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
      result.appendString (" *) = 0 ;\n\n") ;
      index_4195_.increment () ;
      enumerator_4195.gotoNextObject () ;
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
  const cMapElement_nonterminalMap * objectArray_44077 = (const cMapElement_nonterminalMap *) ioArgument_ioNonterminalDeclarationMap.readAccessForWithInstruction (constinArgument_inNonTerminalName.readProperty_string ()) ;
  if (nullptr != objectArray_44077) {
      macroValidSharedObject (objectArray_44077, cMapElement_nonterminalMap) ;
    GALGAS_stringset var_firstDeclarationLabelSet_44161 = objectArray_44077->mProperty_mLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 995)) ;
    GALGAS_stringset var_reDeclarationLabelSet_44226 = constinArgument_inNonterminalLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 996)) ;
    GALGAS_stringset var_missingLabelSet_44300 = var_firstDeclarationLabelSet_44161.substract_operation (var_reDeclarationLabelSet_44226, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 997)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::greaterThan, var_missingLabelSet_44300.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 998)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_44425 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_44443 (var_missingLabelSet_44300, EnumerationOrder::up) ;
        while (enumerator_44443.hasCurrentObject ()) {
          var_s_44425.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (enumerator_44443.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1001)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1001)) ;
          enumerator_44443.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1004)).add_operation (GALGAS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1004)).add_operation (var_s_44425, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1004)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1003)) ;
      }
    }
    GALGAS_stringset var_newLabelSet_44668 = var_reDeclarationLabelSet_44226.substract_operation (var_firstDeclarationLabelSet_44161, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1006)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_newLabelSet_44668.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1007)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_44777 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_44795 (var_newLabelSet_44668, EnumerationOrder::up) ;
        while (enumerator_44795.hasCurrentObject ()) {
          var_s_44777.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (enumerator_44795.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1010)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1010)) ;
          enumerator_44795.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1013)).add_operation (GALGAS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1013)).add_operation (var_s_44777, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1013)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1012)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::equal, var_missingLabelSet_44300.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1015)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::equal, var_newLabelSet_44668.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1015)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1015)).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_nonterminalLabelMap enumerator_45080 (objectArray_44077->mProperty_mLabelMap, EnumerationOrder::up) ;
        cEnumerator_nonterminalLabelMap enumerator_45111 (constinArgument_inNonterminalLabelMap, EnumerationOrder::up) ;
        while (enumerator_45080.hasCurrentObject () && enumerator_45111.hasCurrentObject ()) {
          GALGAS_formalParameterSignature temp_5 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1017)) ;
          GALGAS_formalParameterSignature var_newSignature_45205 = temp_5 ;
          cEnumerator_formalParameterSignature enumerator_45300 (enumerator_45111.current_mSignature (HERE), EnumerationOrder::up) ;
          while (enumerator_45300.hasCurrentObject ()) {
            var_newSignature_45205.addAssign_operation (enumerator_45300.current_mFormalSelector (HERE), enumerator_45300.current_mFormalArgumentType (HERE), enumerator_45300.current_mFormalArgumentPassingMode (HERE), enumerator_45300.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1019)) ;
            enumerator_45300.gotoNextObject () ;
          }
          {
          routine_checkMethodSignatures_3F__3F__3F__3F_ (enumerator_45080.current (HERE).readProperty_mSignatureForGeneration (), enumerator_45080.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_45205, enumerator_45111.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1021)) ;
          }
          enumerator_45080.gotoNextObject () ;
          enumerator_45111.gotoNextObject () ;
        }
      }
    }
  }else{
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1030)) ;
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
  GALGAS_nonterminalMap temp_0 = GALGAS_nonterminalMap::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1041)) ;
  outArgument_outNonterminalDeclarationMap = temp_0 ;
  cEnumerator_nonterminalDeclarationListAST enumerator_46250 (constinArgument_inNonterminalDeclarationList, EnumerationOrder::up) ;
  while (enumerator_46250.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap temp_1 = GALGAS_nonterminalLabelMap::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1044)) ;
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_46302 = temp_1 ;
    cEnumerator_nonTerminalLabelListAST enumerator_46389 (enumerator_46250.current_mLabels (HERE), EnumerationOrder::up) ;
    while (enumerator_46389.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration temp_2 = GALGAS_formalParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1046)) ;
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_46437 = temp_2 ;
      GALGAS_formalParameterSignature temp_3 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1047)) ;
      GALGAS_formalParameterSignature var_signature_46510 = temp_3 ;
      cEnumerator_formalParameterListAST enumerator_46650 (enumerator_46389.current_mFormalArgumentList (HERE), EnumerationOrder::up) ;
      while (enumerator_46650.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_t_46691 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_46650.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1049)) ;
        var_signatureForGeneration_46437.addAssign_operation (enumerator_46650.current_mFormalSelector (HERE), enumerator_46650.current_mFormalArgumentPassingMode (HERE), var_t_46691, enumerator_46650.current_mFormalArgumentName (HERE), enumerator_46650.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1050)) ;
        var_signature_46510.addAssign_operation (enumerator_46650.current_mFormalSelector (HERE), var_t_46691, enumerator_46650.current_mFormalArgumentPassingMode (HERE), enumerator_46650.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1051)) ;
        enumerator_46650.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_46302.setter_insertKey (enumerator_46389.current_mLabelName (HERE), var_signatureForGeneration_46437, var_signature_46510, enumerator_46389.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1053)) ;
      }
      enumerator_46389.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_46250.current_mNonterminalName (HERE), var_nonterminalLabelMap_46302, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1055)) ;
    }
    enumerator_46250.gotoNextObject () ;
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
  callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1097)) ;
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
  GALGAS_unifiedTypeMapEntry var_type_50431 ;
  GALGAS_string var_cppName_50449 ;
  {
  const GALGAS_inputParameterVariable temp_0 = this ;
  GALGAS_string joker_50457 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_50431, var_cppName_50449, joker_50457, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_50488 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_50488 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_50488 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_50488 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_50488 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_50488 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_50488 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_50488 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_50488 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_50488.objectCompare (var_type_50431)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_inputParameterVariable temp_2 = this ;
      const GALGAS_inputParameterVariable temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151)).add_operation (extensionGetter_identifierRepresentation (var_type_50431, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_50488, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName_50449, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1154)) ;
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
  GALGAS_unifiedTypeMapEntry var_expectedType_52105 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_52105 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_52105 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_52105 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_52105 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_52105 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_52105 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_52105 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_52105 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredVariable temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredVariable temp_2 = this ;
      GALGAS_unifiedTypeMapEntry var_type_52967 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1183)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_52105.objectCompare (var_type_52967)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredVariable temp_4 = this ;
          const GALGAS_inputParameterDeclaredVariable temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1186)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1186)).add_operation (extensionGetter_definition (var_type_52967, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1186)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1186)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1186)).add_operation (extensionGetter_definition (var_expectedType_52105, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1187)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1187)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1187)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1185)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredVariable temp_7 = this ;
  const GALGAS_inputParameterDeclaredVariable temp_8 = this ;
  GALGAS_string var_cppName_53367 = GALGAS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1191)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1191)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)) ;
  {
  const GALGAS_inputParameterDeclaredVariable temp_9 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GALGAS_bool (true), var_expectedType_52105, var_cppName_53367, var_cppName_53367, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1192)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (extensionGetter_definition (var_expectedType_52105, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1200)).readProperty_typeName ().readProperty_string (), var_cppName_53367, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1199)) ;
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
  GALGAS_unifiedTypeMapEntry var_expectedType_54292 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_54292 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_54292 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_54292 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_54292 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_54292 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_54292 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_54292 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_54292 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredConstant temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredConstant temp_2 = this ;
      GALGAS_unifiedTypeMapEntry var_type_55154 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1228)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_54292.objectCompare (var_type_55154)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredConstant temp_4 = this ;
          const GALGAS_inputParameterDeclaredConstant temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1231)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1231)).add_operation (extensionGetter_definition (var_type_55154, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1231)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1231)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1231)).add_operation (extensionGetter_definition (var_expectedType_54292, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1232)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1232)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1232)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1230)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredConstant temp_7 = this ;
  const GALGAS_inputParameterDeclaredConstant temp_8 = this ;
  GALGAS_string var_cppName_55554 = GALGAS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1236)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1236)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1236)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1236)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1236)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1236)) ;
  {
  const GALGAS_inputParameterDeclaredConstant temp_9 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_54292, var_cppName_55554, var_cppName_55554, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1237)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (extensionGetter_definition (var_expectedType_54292, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1240)).readProperty_typeName ().readProperty_string (), var_cppName_55554, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1239)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1269)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1270)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1281)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1282)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_type_57825 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GALGAS_string joker_57830 ; // Joker input parameter
  GALGAS_string joker_57833 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_57825, joker_57830, joker_57833, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1284)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_57843 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_57843.objectCompare (var_type_57825)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)).add_operation (extensionGetter_identifierRepresentation (var_type_57825, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_57843, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1289)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1289)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1289)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1287)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1300)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1301)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GALGAS_string var_cppName_58721 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1303)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1303)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1303)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1303)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1303)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1303)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_58863 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1304)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GALGAS_bool (true), var_type_58863, var_cppName_58721, var_cppName_58721, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1305)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_59089 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_59089.objectCompare (var_type_58863)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)).add_operation (extensionGetter_identifierRepresentation (var_type_58863, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_59089, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1316)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1316)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1316)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1314)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1327)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1328)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GALGAS_string var_cppName_59960 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1330)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1330)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1330)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1330)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1330)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1330)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_60102 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1331)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_60102, var_cppName_59960, var_cppName_59960, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1332)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_60280 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expectedType_60280.objectCompare (var_type_60102)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1336)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1336)).add_operation (extensionGetter_identifierRepresentation (var_type_60102, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1336)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1336)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_60280, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1337)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1337)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1337)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1335)) ;
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
      ioArgument_ioGeneratedCode.plusAssign_operation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1357)).add_operation (GALGAS_string (".appendString ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1357)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1357)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1357)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1357)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1358)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1358)) ;
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
  GALGAS_string var_cppName_62316 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1378)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1378)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1378)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1378)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1378)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1378)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_cppName_62316.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1379)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1379)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1379)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1379)) ;
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
  GALGAS_string var_cppName_62913 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1389)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1389)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1389)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1389)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1389)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1389)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_string ").add_operation (var_cppName_62913, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1390)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1390)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1390)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1390)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1390)) ;
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
  GALGAS_string var_cppName_63515 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1400)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1400)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1400)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1400)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_63515, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1401)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1401)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1401)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1401)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1401)) ;
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
  GALGAS_semanticInstructionListForGeneration temp_0 = GALGAS_semanticInstructionListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1422)) ;
  outArgument_outInstructionListForGeneration = temp_0 ;
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1424)) ;
  }
  cEnumerator_syntaxInstructionList enumerator_64669 (constinArgument_inSyntaxInstructionListAST, EnumerationOrder::up) ;
  while (enumerator_64669.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_64669.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1427)) ;
    enumerator_64669.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1444)) ;
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
  GALGAS_localVarManager var_variableMap_66214 = GALGAS_localVarManager::init (inCompiler COMMA_HERE) ;
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inFormalArguments, var_variableMap_66214, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1473)) ;
  }
  GALGAS_formalParameterSignature temp_0 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1481)) ;
  outArgument_outSignature = temp_0 ;
  cEnumerator_formalParameterListForGeneration enumerator_66564 (outArgument_outSignatureForGeneration, EnumerationOrder::up) ;
  while (enumerator_66564.hasCurrentObject ()) {
    outArgument_outSignature.addAssign_operation (enumerator_66564.current_mFormalSelector (HERE), enumerator_66564.current_mFormalArgumentType (HERE), enumerator_66564.current_mFormalArgumentPassingMode (HERE), enumerator_66564.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)) ;
    enumerator_66564.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration temp_1 = GALGAS_semanticInstructionListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1486)) ;
  outArgument_outInstructionListForGeneration = temp_1 ;
  cEnumerator_syntaxInstructionList enumerator_66897 (constinArgument_inSyntaxInstructionList, EnumerationOrder::up) ;
  while (enumerator_66897.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_66897.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_66214, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1489)) ;
    enumerator_66897.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_66214, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1506)) ;
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
  GALGAS_nonterminalMap var_nonterminalMap_68478 ;
  {
  routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, ioArgument_ioTypeMap, var_nonterminalMap_68478, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1532)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_68575 (constinArgument_inRuleList, EnumerationOrder::up) ;
  while (enumerator_68575.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap temp_0 = GALGAS_nonterminalLabelMap::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1540)) ;
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_68633 = temp_0 ;
    cEnumerator_syntaxRuleLabelListAST enumerator_68721 (enumerator_68575.current_mLabelList (HERE), EnumerationOrder::up) ;
    while (enumerator_68721.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration temp_1 = GALGAS_formalParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1542)) ;
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_68785 = temp_1 ;
      GALGAS_formalParameterSignature temp_2 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1543)) ;
      GALGAS_formalParameterSignature var_signature_68850 = temp_2 ;
      cEnumerator_formalParameterListAST enumerator_68964 (enumerator_68721.current_mFormalArguments (HERE), EnumerationOrder::up) ;
      while (enumerator_68964.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_type_69002 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_68964.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1545)) ;
        var_signatureForGeneration_68785.addAssign_operation (enumerator_68964.current_mFormalSelector (HERE), enumerator_68964.current_mFormalArgumentPassingMode (HERE), var_type_69002, enumerator_68964.current_mFormalArgumentName (HERE), GALGAS_string ("argument_").add_operation (enumerator_68964.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1551))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1546)) ;
        var_signature_68850.addAssign_operation (enumerator_68964.current_mFormalSelector (HERE), var_type_69002, enumerator_68964.current_mFormalArgumentPassingMode (HERE), enumerator_68964.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1552)) ;
        enumerator_68964.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_68633.setter_insertKey (enumerator_68721.current_mLabelName (HERE), var_signatureForGeneration_68785, var_signature_68850, enumerator_68721.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1554)) ;
      }
      enumerator_68721.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_68575.current_mNonterminalName (HERE), var_nonterminalLabelMap_68633, var_nonterminalMap_68478, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1556)) ;
    }
    enumerator_68575.gotoNextObject () ;
  }
  GALGAS_analysisContext var_analysisContext_69626 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas", 1563)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_HERE) ;
  GALGAS_uint var_selectMethodCount_69890 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_ruleDeclarationList temp_3 = GALGAS_ruleDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1569)) ;
  GALGAS_ruleDeclarationList var_ruleDeclarationList_69939 = temp_3 ;
  GALGAS_uint var_newRuleIndex_69977 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_syntaxRuleListAST enumerator_70018 (constinArgument_inRuleList, EnumerationOrder::up) ;
  while (enumerator_70018.hasCurrentObject ()) {
    GALGAS_ruleLabelImplementationList temp_4 = GALGAS_ruleLabelImplementationList::init (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1573)) ;
    GALGAS_ruleLabelImplementationList var_ruleLabelImplementationList_70091 = temp_4 ;
    GALGAS_uint var_localSelectMethodCount_70139 = var_selectMethodCount_69890 ;
    GALGAS_nonterminalLabelMap joker_70230 ; // Joker input parameter
    var_nonterminalMap_68478.method_searchKey (enumerator_70018.current_mNonterminalName (HERE), joker_70230, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1575)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_70317 (enumerator_70018.current_mLabelList (HERE), EnumerationOrder::up) ;
    while (enumerator_70317.hasCurrentObject ()) {
      var_localSelectMethodCount_70139 = var_selectMethodCount_69890 ;
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_70878 ;
      GALGAS_formalParameterSignature var_signature_70914 ;
      GALGAS_semanticInstructionListForGeneration var_instructionListForGeneration_70937 ;
      {
      routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_70317.current_mFormalArguments (HERE), enumerator_70317.current_mSyntaxInstructionList (HERE), var_analysisContext_69626, ioArgument_ioTypeMap, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1587)), var_nonterminalMap_68478, constinArgument_inSyntaxComponentName, enumerator_70317.current_mEndOfInstructionList (HERE), constinArgument_inIndexNameSet, var_localSelectMethodCount_70139, var_signatureForGeneration_70878, var_signature_70914, var_instructionListForGeneration_70937, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1578)) ;
      }
      var_ruleLabelImplementationList_70091.addAssign_operation (enumerator_70317.current_mLabelName (HERE), var_signatureForGeneration_70878, var_signature_70914, enumerator_70317.current_mEndOfArgumentLocation (HERE), var_instructionListForGeneration_70937  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1597)) ;
      enumerator_70317.gotoNextObject () ;
    }
    var_selectMethodCount_69890 = var_localSelectMethodCount_70139 ;
    GALGAS_nonterminalLabelMap joker_71255 ; // Joker input parameter
    var_nonterminalMap_68478.method_searchKey (enumerator_70018.current_mNonterminalName (HERE), joker_71255, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1605)) ;
    var_ruleDeclarationList_69939.addAssign_operation (enumerator_70018.current_mNonterminalName (HERE).readProperty_string (), var_newRuleIndex_69977, var_ruleLabelImplementationList_70091  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1606)) ;
    var_newRuleIndex_69977.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1610)) ;
    enumerator_70018.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GALGAS_syntaxDeclarationForGeneration::init_21__21__21__21__21__21__21_ (constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_68478, var_ruleDeclarationList_69939, var_selectMethodCount_69890, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature, inCompiler COMMA_HERE) ;
}


