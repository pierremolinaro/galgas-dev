#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-23.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@stringPredefinedTypeAST getInstanceMethodMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 129)) ;
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 130)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 138)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 146)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 154)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeSymbolicLinkWithPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 162)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument (outArgument_outInstanceMethodMap, GALGAS_string ("makeDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 170)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 176)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 177)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), var_t, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 179)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)), var_t, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 182))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 182)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 183)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 185)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 187)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 181)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToExecutableFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 191))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 191)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 192)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 194)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 196)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 190)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringPredefinedTypeAST_getInstanceMethodMap (void) {
  enterCategoryMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                            categoryMethod_stringPredefinedTypeAST_getInstanceMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getInstanceMethodMap (defineCategoryMethod_stringPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@bigintPredefinedTypeAST getInstanceMethodMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_bigintPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 207)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_bigIntType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), var_bigIntType COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 209)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 210)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)), var_bigIntType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)), GALGAS_string ("inDivisor")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)) ;
  var_argList.addAssign_operation (GALGAS_string ("quotient").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)), var_bigIntType, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)), GALGAS_string ("outQuotient")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)) ;
  var_argList.addAssign_operation (GALGAS_string ("remainder").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)), var_bigIntType, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)), GALGAS_string ("outRemainder")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("divideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 215))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 215)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 216)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 218)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 220)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 214)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("floorDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 224))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 224)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 225)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 227)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 229)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 223)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ceilDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 233))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 233)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 234)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 236)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 238)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 232)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_bigintPredefinedTypeAST_getInstanceMethodMap (void) {
  enterCategoryMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                            categoryMethod_bigintPredefinedTypeAST_getInstanceMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getInstanceMethodMap (defineCategoryMethod_bigintPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@stringPredefinedTypeAST getClassMethodMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 61)) ;
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFile"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 62)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFileIfExists"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 63)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeEmptyDirectory"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 64)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeDirectoryRecursively"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 65)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 66)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_boolType COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 67)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 68)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 69)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 69)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 69)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 70)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 70)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 70)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 71)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 71)), GALGAS_string ("inContents")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 71)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("generateFile"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 73))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 73)), var_argList, GALGAS_bool (true) COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 72)) ;
  }
  var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 77)) ;
  var_argList.addAssign_operation (GALGAS_string ("startPath").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 78)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 78)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 78)) ;
  var_argList.addAssign_operation (GALGAS_string ("fileName").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 79)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 79)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 79)) ;
  var_argList.addAssign_operation (GALGAS_string ("lineComment").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 80)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 80)), GALGAS_string ("inLineCommentPrefix")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 80)) ;
  var_argList.addAssign_operation (GALGAS_string ("header").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 81)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 81)), GALGAS_string ("inHeader")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 81)) ;
  var_argList.addAssign_operation (GALGAS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), GALGAS_string ("inDefaultUserZone1")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 82)) ;
  var_argList.addAssign_operation (GALGAS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 83)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 83)), GALGAS_string ("inGeneratedZone2")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 83)) ;
  var_argList.addAssign_operation (GALGAS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 84)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 84)), GALGAS_string ("inDefaultUserZone2")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 84)) ;
  var_argList.addAssign_operation (GALGAS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 85)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 85)), GALGAS_string ("inGeneratedZone3")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 85)) ;
  var_argList.addAssign_operation (GALGAS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 86)), var_boolType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 86)), GALGAS_string ("inMakeExecutable")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 86)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("generateFileWithPattern"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 88))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 88)), var_argList, GALGAS_bool (true) COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 87)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringPredefinedTypeAST_getClassMethodMap (void) {
  enterCategoryMethod_getClassMethodMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                         categoryMethod_stringPredefinedTypeAST_getClassMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getClassMethodMap (defineCategoryMethod_stringPredefinedTypeAST_getClassMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@binarysetPredefinedTypeAST getClassMethodMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binarysetPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 100)) ;
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setNodeTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 101)) ;
  }
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setAndTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 109)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binarysetPredefinedTypeAST_getClassMethodMap (void) {
  enterCategoryMethod_getClassMethodMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                         categoryMethod_binarysetPredefinedTypeAST_getClassMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getClassMethodMap (defineCategoryMethod_binarysetPredefinedTypeAST_getClassMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category getter '@galgas3GrammarComponentAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_galgas_33_GrammarComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  result_outString = GALGAS_string ("grammar ").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 312)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_galgas_33_GrammarComponentAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                         extensionGetter_galgas_33_GrammarComponentAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_galgas_33_GrammarComponentAST_keyRepresentation (defineCategoryGetter_galgas_33_GrammarComponentAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@galgas3SyntaxComponentAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  result_outString = GALGAS_string ("syntax ").add_operation (object->mAttribute_mSyntaxComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 319)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_galgas_33_SyntaxComponentAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                         extensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_galgas_33_SyntaxComponentAST_keyRepresentation (defineCategoryGetter_galgas_33_SyntaxComponentAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@lexiqueComponentAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexiqueComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  result_outString = GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 326)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexiqueComponentAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                         extensionGetter_lexiqueComponentAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexiqueComponentAST_keyRepresentation (defineCategoryGetter_lexiqueComponentAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category getter '@abstractCategoryModifierAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_abstractCategoryModifierAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractCategoryModifierAST * object = (const cPtr_abstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierAST) ;
  result_outString = GALGAS_string ("abstract category setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 333)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 333)).add_operation (object->mAttribute_mAbstractCategoryModifierName.getter_string (SOURCE_FILE ("semanticContext.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 333)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_abstractCategoryModifierAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                         extensionGetter_abstractCategoryModifierAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractCategoryModifierAST_keyRepresentation (defineCategoryGetter_abstractCategoryModifierAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@categoryModifierAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_categoryModifierAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_categoryModifierAST * object = (const cPtr_categoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierAST) ;
  result_outString = GALGAS_string ("category setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 340)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 340)).add_operation (object->mAttribute_mCategoryModifierName.getter_string (SOURCE_FILE ("semanticContext.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 340)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_categoryModifierAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                         extensionGetter_categoryModifierAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_categoryModifierAST_keyRepresentation (defineCategoryGetter_categoryModifierAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category getter '@overridingCategoryModifierAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingCategoryModifierAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingCategoryModifierAST * object = (const cPtr_overridingCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierAST) ;
  result_outString = GALGAS_string ("overriding category setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 347)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 347)).add_operation (object->mAttribute_mOverridingCategoryModifierName.getter_string (SOURCE_FILE ("semanticContext.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 347)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_overridingCategoryModifierAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                         extensionGetter_overridingCategoryModifierAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingCategoryModifierAST_keyRepresentation (defineCategoryGetter_overridingCategoryModifierAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@overridingAbstractCategoryModifierAST keyRepresentation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingAbstractCategoryModifierAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractCategoryModifierAST * object = (const cPtr_overridingAbstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryModifierAST) ;
  result_outString = GALGAS_string ("overriding category setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 354)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 354)).add_operation (object->mAttribute_mOverridingCategoryModifierName.getter_string (SOURCE_FILE ("semanticContext.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 354)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_overridingAbstractCategoryModifierAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                         extensionGetter_overridingAbstractCategoryModifierAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingAbstractCategoryModifierAST_keyRepresentation (defineCategoryGetter_overridingAbstractCategoryModifierAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@abstractCategoryMethodAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_abstractCategoryMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  result_outString = GALGAS_string ("abstract category method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 361)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 361)).add_operation (object->mAttribute_mAbstractCategoryMethodName.getter_string (SOURCE_FILE ("semanticContext.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 361)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_abstractCategoryMethodAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                         extensionGetter_abstractCategoryMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractCategoryMethodAST_keyRepresentation (defineCategoryGetter_abstractCategoryMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category getter '@categoryMethodAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_categoryMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_categoryMethodAST * object = (const cPtr_categoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodAST) ;
  result_outString = GALGAS_string ("category method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 368)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 368)).add_operation (object->mAttribute_mCategoryMethodName.getter_string (SOURCE_FILE ("semanticContext.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 368)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_categoryMethodAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                         extensionGetter_categoryMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_categoryMethodAST_keyRepresentation (defineCategoryGetter_categoryMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category getter '@overridingCategoryMethodAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingCategoryMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingCategoryMethodAST * object = (const cPtr_overridingCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodAST) ;
  result_outString = GALGAS_string ("overriding category method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 375)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 375)).add_operation (object->mAttribute_mOverridingCategoryMethodName.getter_string (SOURCE_FILE ("semanticContext.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 375)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_overridingCategoryMethodAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                         extensionGetter_overridingCategoryMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingCategoryMethodAST_keyRepresentation (defineCategoryGetter_overridingCategoryMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@overridingAbstractCategoryMethodAST keyRepresentation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingAbstractCategoryMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractCategoryMethodAST * object = (const cPtr_overridingAbstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryMethodAST) ;
  result_outString = GALGAS_string ("overriding category method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 382)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 382)).add_operation (object->mAttribute_mOverridingCategoryMethodName.getter_string (SOURCE_FILE ("semanticContext.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 382)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_overridingAbstractCategoryMethodAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                         extensionGetter_overridingAbstractCategoryMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingAbstractCategoryMethodAST_keyRepresentation (defineCategoryGetter_overridingAbstractCategoryMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@abstractCategoryGetterAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_abstractCategoryGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractCategoryGetterAST * object = (const cPtr_abstractCategoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryGetterAST) ;
  result_outString = GALGAS_string ("abstract category getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 389)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 389)).add_operation (object->mAttribute_mAbstractCategoryGetterName.getter_string (SOURCE_FILE ("semanticContext.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 389)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_abstractCategoryGetterAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractCategoryGetterAST.mSlotID,
                                         extensionGetter_abstractCategoryGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractCategoryGetterAST_keyRepresentation (defineCategoryGetter_abstractCategoryGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category getter '@categoryGetterAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_categoryGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_categoryGetterAST * object = (const cPtr_categoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryGetterAST) ;
  result_outString = GALGAS_string ("category getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 396)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 396)).add_operation (object->mAttribute_mCategoryGetterName.getter_string (SOURCE_FILE ("semanticContext.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 396)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_categoryGetterAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_categoryGetterAST.mSlotID,
                                         extensionGetter_categoryGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_categoryGetterAST_keyRepresentation (defineCategoryGetter_categoryGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category getter '@overridingCategoryGetterAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingCategoryGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingCategoryGetterAST * object = (const cPtr_overridingCategoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryGetterAST) ;
  result_outString = GALGAS_string ("overriding category getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 403)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 403)).add_operation (object->mAttribute_mOverridingCategoryGetterName.getter_string (SOURCE_FILE ("semanticContext.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 403)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_overridingCategoryGetterAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingCategoryGetterAST.mSlotID,
                                         extensionGetter_overridingCategoryGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingCategoryGetterAST_keyRepresentation (defineCategoryGetter_overridingCategoryGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@overridingAbstractCategoryGetterAST keyRepresentation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingAbstractCategoryGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractCategoryGetterAST * object = (const cPtr_overridingAbstractCategoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryGetterAST) ;
  result_outString = GALGAS_string ("overriding category getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 410)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 410)).add_operation (object->mAttribute_mAbstractCategoryGetterName.getter_string (SOURCE_FILE ("semanticContext.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 410)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_overridingAbstractCategoryGetterAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractCategoryGetterAST.mSlotID,
                                         extensionGetter_overridingAbstractCategoryGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingAbstractCategoryGetterAST_keyRepresentation (defineCategoryGetter_overridingAbstractCategoryGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category getter '@predefinedTypeAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_predefinedTypeAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  result_outString = GALGAS_string ("predefined type @").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 417)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_predefinedTypeAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                         extensionGetter_predefinedTypeAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_predefinedTypeAST_keyRepresentation (defineCategoryGetter_predefinedTypeAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category getter '@mapDeclarationAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_mapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  result_outString = GALGAS_string ("map @").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 424)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_mapDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                         extensionGetter_mapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_mapDeclarationAST_keyRepresentation (defineCategoryGetter_mapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category getter '@mapProxyDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_mapProxyDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  result_outString = GALGAS_string ("map proxy @").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 431)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_mapProxyDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                         extensionGetter_mapProxyDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_mapProxyDeclarationAST_keyRepresentation (defineCategoryGetter_mapProxyDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@enumDeclarationAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_enumDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  result_outString = GALGAS_string ("enum @").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 438)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_enumDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                         extensionGetter_enumDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumDeclarationAST_keyRepresentation (defineCategoryGetter_enumDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@sortedListDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_sortedListDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  result_outString = GALGAS_string ("sorted list @").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 445)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_sortedListDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                         extensionGetter_sortedListDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_sortedListDeclarationAST_keyRepresentation (defineCategoryGetter_sortedListDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category getter '@structDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_structDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  result_outString = GALGAS_string ("struct @").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 452)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_structDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                         extensionGetter_structDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structDeclarationAST_keyRepresentation (defineCategoryGetter_structDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@listDeclarationAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_listDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  result_outString = GALGAS_string ("list @").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 459)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_listDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         extensionGetter_listDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_listDeclarationAST_keyRepresentation (defineCategoryGetter_listDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@classDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_classDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  result_outString = GALGAS_string ("class @").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 466)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_classDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         extensionGetter_classDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_classDeclarationAST_keyRepresentation (defineCategoryGetter_classDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@arrayDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_arrayDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  result_outString = GALGAS_string ("array @").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 473)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_arrayDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                         extensionGetter_arrayDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_arrayDeclarationAST_keyRepresentation (defineCategoryGetter_arrayDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category getter '@listmapDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_listmapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  result_outString = GALGAS_string ("listmap @").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 480)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_listmapDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         extensionGetter_listmapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_listmapDeclarationAST_keyRepresentation (defineCategoryGetter_listmapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@filewrapperDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_filewrapperDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  result_outString = GALGAS_string ("filewrapper @").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticContext.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 487)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_filewrapperDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                         extensionGetter_filewrapperDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_filewrapperDeclarationAST_keyRepresentation (defineCategoryGetter_filewrapperDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category getter '@optionComponentDeclarationAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_optionComponentDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  result_outString = GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 494)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_optionComponentDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                         extensionGetter_optionComponentDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_optionComponentDeclarationAST_keyRepresentation (defineCategoryGetter_optionComponentDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@graphDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_graphDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  result_outString = GALGAS_string ("graph @").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 501)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_graphDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         extensionGetter_graphDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_graphDeclarationAST_keyRepresentation (defineCategoryGetter_graphDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@externTypeDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_externTypeDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  result_outString = GALGAS_string ("extern @").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 508)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_externTypeDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         extensionGetter_externTypeDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_externTypeDeclarationAST_keyRepresentation (defineCategoryGetter_externTypeDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category getter '@onceFunctionDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_onceFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  result_outString = GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticContext.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 515)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_onceFunctionDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                         extensionGetter_onceFunctionDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_onceFunctionDeclarationAST_keyRepresentation (defineCategoryGetter_onceFunctionDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category getter '@externFunctionDeclarationAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_externFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  result_outString = GALGAS_string ("extern function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticContext.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 522)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_externFunctionDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                         extensionGetter_externFunctionDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_externFunctionDeclarationAST_keyRepresentation (defineCategoryGetter_externFunctionDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category getter '@externRoutineDeclarationAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_externRoutineDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  result_outString = GALGAS_string ("extern routine ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticContext.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 529)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_externRoutineDeclarationAST_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                         extensionGetter_externRoutineDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_externRoutineDeclarationAST_keyRepresentation (defineCategoryGetter_externRoutineDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryMethodAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                             const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                             const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                             const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                              categoryMethod_abstractCategoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_enterInSemanticContext (defineCategoryMethod_abstractCategoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryMethodAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                     const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                     const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                     const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                     GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                              categoryMethod_categoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_enterInSemanticContext (defineCategoryMethod_categoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryMethodAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                              categoryMethod_overridingCategoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_enterInSemanticContext (defineCategoryMethod_overridingCategoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryMethodAST enterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                       const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                              categoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext (defineCategoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@abstractCategoryModifierAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                              categoryMethod_abstractCategoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_enterInSemanticContext (defineCategoryMethod_abstractCategoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@categoryModifierAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                       const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                              categoryMethod_categoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_enterInSemanticContext (defineCategoryMethod_categoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@overridingCategoryModifierAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                 const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                                 const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                              categoryMethod_overridingCategoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_enterInSemanticContext (defineCategoryMethod_overridingCategoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@overridingAbstractCategoryModifierAST enterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                         const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                                         const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                              categoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext (defineCategoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryGetterAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                             const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                             const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                             const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryGetterAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractCategoryGetterAST.mSlotID,
                                              categoryMethod_abstractCategoryGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryGetterAST_enterInSemanticContext (defineCategoryMethod_abstractCategoryGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryGetterAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                     const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                     const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                     const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                     GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryGetterAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_categoryGetterAST.mSlotID,
                                              categoryMethod_categoryGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryGetterAST_enterInSemanticContext (defineCategoryMethod_categoryGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryGetterAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryGetterAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingCategoryGetterAST.mSlotID,
                                              categoryMethod_overridingCategoryGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryGetterAST_enterInSemanticContext (defineCategoryMethod_overridingCategoryGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryGetterAST enterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                       const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryGetterAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractCategoryGetterAST.mSlotID,
                                              categoryMethod_overridingAbstractCategoryGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryGetterAST_enterInSemanticContext (defineCategoryMethod_overridingAbstractCategoryGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@predefinedTypeAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                     const GALGAS_categoryGetterMapForBuildingContext constinArgument_inCategoryGetterMapForBuildingContext,
                                                                     const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  GALGAS_constructorMap var_constructorMap ;
  const GALGAS_predefinedTypeAST temp_0 = object ;
  callCategoryMethod_getConstructorMap ((const cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_constructorMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 770)) ;
  GALGAS_getterMap var_getterMap ;
  const GALGAS_predefinedTypeAST temp_1 = object ;
  callCategoryMethod_getGetterMap ((const cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 771)) ;
  GALGAS_setterMap var_modifierMap ;
  const GALGAS_predefinedTypeAST temp_2 = object ;
  callCategoryMethod_getModifierMap ((const cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_modifierMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 772)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap ;
  const GALGAS_predefinedTypeAST temp_3 = object ;
  callCategoryMethod_getInstanceMethodMap ((const cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_instanceMethodMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 773)) ;
  GALGAS_classMethodMap var_classMethodMap ;
  const GALGAS_predefinedTypeAST temp_4 = object ;
  callCategoryMethod_getClassMethodMap ((const cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_classMethodMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 774)) ;
  GALGAS_functionSignature var_addAssignArgumentList ;
  const GALGAS_predefinedTypeAST temp_5 = object ;
  callCategoryMethod_getAddAssignArgumentList ((const cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_addAssignArgumentList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 775)) ;
  GALGAS_enumerationDescriptorList var_enumerationList ;
  GALGAS_stringlist var_enumerationVariants ;
  GALGAS_string var_enumeratedTypeName ;
  const GALGAS_predefinedTypeAST temp_6 = object ;
  callCategoryMethod_getEnumerationList ((const cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumerationList, var_enumerationVariants, var_enumeratedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 776)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mPredefinedTypeName, var_selfTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 782)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedTypeProxy ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_enumeratedTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    var_enumeratedTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 790)) ;
  }else if (kBoolFalse == test_7) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumeratedTypeName, var_enumeratedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 792)) ;
    }
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryGetterMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 800))  COMMA_SOURCE_FILE ("semanticContext.galgas", 800)), var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 795)) ;
  }
  {
  const GALGAS_predefinedTypeAST temp_8 = object ;
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 807))  COMMA_SOURCE_FILE ("semanticContext.galgas", 807)), object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 810)), GALGAS_typeKindEnum::constructor_predefinedType (SOURCE_FILE ("semanticContext.galgas", 811)), GALGAS_bool (kIsEqual, object->mAttribute_mPredefinedTypeName.objectCompare (GALGAS_string ("stringset"))), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 813)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 814)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 815)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, var_classMethodMap, var_enumerationList, var_enumerationVariants, callCategoryGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_8.ptr (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 823)), var_addAssignArgumentList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 825)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 826)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 827)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 828)), GALGAS_bool (false), var_enumeratedTypeProxy, extensionGetter_defaultConstructorName (object->mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 831)), GALGAS_string ("galgas2/predefined-types"), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 833)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 806)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                              categoryMethod_predefinedTypeAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_enterInSemanticContext (defineCategoryMethod_predefinedTypeAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@mapDeclarationAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                     const GALGAS_categoryGetterMapForBuildingContext constinArgument_inCategoryGetterMapForBuildingContext,
                                                                     const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("bool"), var_boolTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 852)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 855)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_locationTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 858)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 861)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_currentMapTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, var_currentMapTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 864)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 866)) ;
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 867)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 868)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 869)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_42536 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_42536.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_42536.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_42536.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("semanticContext.galgas", 875)) ;
      }
      var_usesSelectorsInInsertAndSearch = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_location location_3 (enumerator_42536.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("semanticContext.galgas", 879)) ;
    }
    enumerator_42536.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 883)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 884)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 885)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 886)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 892)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 888)) ;
  }
  {
  routine_enterConstructorWithArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("mapWithMapToOverride"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 899)), GALGAS_string ("inMap"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 901)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 895)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 905)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 912)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 923)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 930)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 937)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 946)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("overriddenMap"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 955)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 955)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 956)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 964)) ;
  GALGAS_typedPropertyList var_typedPropertyList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 965)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 966)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 967)), var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 967)) ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList.addAssign_operation (temp_4.getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 969)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 971)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 968)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 973)) ;
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList.addAssign_operation (temp_6.getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 975)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 977)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 974)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 979)) ;
  cEnumerator_propertyInCollectionListAST enumerator_45839 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_45839.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_45839.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 981)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 984)), var_attributeTypeIndex, enumerator_45839.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 984)) ;
    var_typedPropertyList.addAssign_operation (var_attributeTypeIndex, enumerator_45839.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 985)) ;
    var_typesToIncludeInHeaderCompilation.addAssign_operation (var_attributeTypeIndex  COMMA_SOURCE_FILE ("semanticContext.galgas", 986)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_45839.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 987))  COMMA_SOURCE_FILE ("semanticContext.galgas", 987)) ;
    GALGAS_lstring temp_8 ;
    const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_45839.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 989)) ;
    }
    var_insertMethodFormalArgumentList.addAssign_operation (temp_8, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 991)), enumerator_45839.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 988)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_45839.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 994)) ;
    }
    var_removeMethodFormalArgumentList.addAssign_operation (temp_10, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 996)), enumerator_45839.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 993)) ;
    enumerator_45839.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_46877 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_46877.hasCurrentObject ()) {
    const enumGalgasBool test_12 = var_modifierMap.getter_hasKey (enumerator_46877.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1001)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1001)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_location location_13 (enumerator_46877.current_mInsertMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_13, GALGAS_string ("the '").add_operation (enumerator_46877.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1002)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1002))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1002)) ;
    }else if (kBoolFalse == test_12) {
      {
      var_modifierMap.setter_insertOrReplace (enumerator_46877.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1006)), var_insertMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1009)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1004)) ;
      }
    }
    enumerator_46877.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_47330 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_47330.hasCurrentObject ()) {
    const enumGalgasBool test_14 = var_modifierMap.getter_hasKey (enumerator_47330.current_mMethodName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1016)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1016)).boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_location location_15 (enumerator_47330.current_mMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_15, GALGAS_string ("the '").add_operation (enumerator_47330.current_mMethodName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1017)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1017))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1017)) ;
    }else if (kBoolFalse == test_14) {
      {
      var_modifierMap.setter_insertOrReplace (enumerator_47330.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1021)), var_removeMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1024)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1019)) ;
      }
    }
    enumerator_47330.gotoNextObject () ;
  }
  cEnumerator_mapSearchMethodListAST enumerator_47832 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_47832.hasCurrentObject ()) {
    {
    var_instanceMethodMap.setter_insertKey (enumerator_47832.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1033)), var_removeMethodFormalArgumentList, enumerator_47832.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 1035)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1037)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1031)) ;
    }
    enumerator_47832.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_48152 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_48152.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (enumerator_48152.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1043)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1043)), enumerator_48152.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 1043))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1043)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_48152.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1045)) ;
    }
    {
    GALGAS_functionSignature temp_16 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1049)) ;
    temp_16.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1049)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1049)) ;
    var_getterMap.setter_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1048)), temp_16, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1050)), GALGAS_bool (true), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1053)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1046)) ;
    }
    enumerator_48152.gotoNextObject () ;
  }
  const enumGalgasBool test_17 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mInsertOrReplaceDeclarationListAST.getter_length (SOURCE_FILE ("semanticContext.galgas", 1058)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_location var_insertOrReplaceLocation ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceLocation, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1060)) ;
    {
    var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation  COMMA_SOURCE_FILE ("semanticContext.galgas", 1062)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1063)), var_insertMethodFormalArgumentList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1066)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1061)) ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_49269 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_49269.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_49269.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1072)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 1072)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1072)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1072)), enumerator_49269.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 1072))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1072)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_49269.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1073)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1074)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1075)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1075)), enumerator_49269.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1075)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1076)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1076)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1076)) ;
    {
    var_modifierMap.setter_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1079)), var_accessorFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1082)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1077)) ;
    }
    enumerator_49269.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryGetterMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1087)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1100)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1100)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 1100)), var_elementTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1098)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1108)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("semanticContext.galgas", 1109)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1111)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1112)), var_typedPropertyList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1118)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1121)).operator_or (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1121)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1121)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1121)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1121)), var_argumentTypeListForAddAssignWithFieldExpressionList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1123)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1124)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1126)), GALGAS_bool (false), var_elementTypeProxy, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 1130)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1130)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 1131)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1104)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                              categoryMethod_mapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterInSemanticContext (defineCategoryMethod_mapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@externTypeDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externTypeDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                            const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                            const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1143)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1144)) ;
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1145)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1146)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1147)) ;
  cEnumerator_externTypeConstructorList enumerator_52313 (object->mAttribute_mExternTypeConstructorList, kEnumeration_up) ;
  while (enumerator_52313.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_52313.current_mResultTypeName (HERE), var_returnedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1151)) ;
    }
    GALGAS_functionSignature var_arguments = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1153)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_52549 (enumerator_52313.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_52549.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_52549.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1156)) ;
      }
      var_arguments.addAssign_operation (enumerator_52549.current_mFormalSelector (HERE), var_argumentTypeProxy, enumerator_52549.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1157)) ;
      enumerator_52549.gotoNextObject () ;
    }
    {
    var_constructorMap.setter_insertKey (enumerator_52313.current_mConstructorName (HERE), var_arguments, GALGAS_bool (true), var_returnedTypeProxy, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1160)) ;
    }
    enumerator_52313.gotoNextObject () ;
  }
  cEnumerator_externTypeGetterList enumerator_53014 (object->mAttribute_mExternTypeGetterList, kEnumeration_up) ;
  while (enumerator_53014.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_53014.current_mResultTypeName (HERE), var_returnedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1170)) ;
    }
    GALGAS_functionSignature var_arguments = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1172)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_53238 (enumerator_53014.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_53238.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_53238.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1175)) ;
      }
      var_arguments.addAssign_operation (enumerator_53238.current_mFormalSelector (HERE), var_argumentTypeProxy, enumerator_53238.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1176)) ;
      enumerator_53238.gotoNextObject () ;
    }
    {
    var_getterMap.setter_insertKey (enumerator_53014.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1181)), var_arguments, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1183)), GALGAS_bool (true), var_returnedTypeProxy, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1186)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1179)) ;
    }
    enumerator_53014.gotoNextObject () ;
  }
  cEnumerator_externTypeModifierList enumerator_53820 (object->mAttribute_mExternTypeModifierList, kEnumeration_up) ;
  while (enumerator_53820.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1192)) ;
    cEnumerator_formalParameterListAST enumerator_53922 (enumerator_53820.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_53922.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_53922.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1194)) ;
      }
      var_routineSignature.addAssign_operation (enumerator_53922.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_53922.current_mFormalArgumentPassingMode (HERE), enumerator_53922.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1199)) ;
      enumerator_53922.gotoNextObject () ;
    }
    {
    var_modifierMap.setter_insertKey (enumerator_53820.current_mModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1204)), var_routineSignature, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1207)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1202)) ;
    }
    enumerator_53820.gotoNextObject () ;
  }
  cEnumerator_externTypeMethodList enumerator_54510 (object->mAttribute_mExternTypeMethodList, kEnumeration_up) ;
  while (enumerator_54510.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1213)) ;
    cEnumerator_formalParameterListAST enumerator_54612 (enumerator_54510.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_54612.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_54612.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1216)) ;
      }
      var_routineSignature.addAssign_operation (enumerator_54612.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_54612.current_mFormalArgumentPassingMode (HERE), enumerator_54612.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1221)) ;
      enumerator_54612.gotoNextObject () ;
    }
    {
    var_instanceMethodMap.setter_insertKey (enumerator_54510.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1226)), var_routineSignature, enumerator_54510.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1230)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1224)) ;
    }
    enumerator_54510.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mExternTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1239)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("semanticContext.galgas", 1240)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1242)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1243)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1244)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1249)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1250)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1251)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1253)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1254)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1255)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1256)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1257)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1259)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1261)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1262)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1235)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externTypeDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                              categoryMethod_externTypeDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterInSemanticContext (defineCategoryMethod_externTypeDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@graphDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                       const GALGAS_categoryGetterMapForBuildingContext constinArgument_inCategoryGetterMapForBuildingContext,
                                                                       const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1274)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1280)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, var_graphTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1286)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1292)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringListTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1298)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1304)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1305)) ;
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1306)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1307)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1308)) ;
  GALGAS_formalParameterSignature var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1310)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1312)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1314)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1311)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1317)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1319)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1316)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1322)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1324)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1321)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1327)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1329)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1326)) ;
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1332))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1332)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1333)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1335)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1337)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1331)) ;
  }
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1341))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1341)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1342)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1344)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1346)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1340)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1351)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1353)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1355)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1352)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1358)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1360)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1357)) ;
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1363))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1363)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1364)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1366)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1368)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1362)) ;
  }
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1372))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1372)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1373)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1375)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1377)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1371)) ;
  }
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1381))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1381)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1382)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1384)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1386)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1380)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("reversedGraph"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1391)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1399)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1407)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1415)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1423)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1431)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1441)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1449)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1457)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1465)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("accessibleNodesFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1477)) ;
  }
  {
  var_constructorMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1488))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1488)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1489)), GALGAS_bool (false), var_graphTypeProxy, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1487)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1494)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1496)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1498)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1495)) ;
  cEnumerator_functionSignature enumerator_63274 (var_associatedListTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1500)), kEnumeration_up) ;
  while (enumerator_63274.hasCurrentObject ()) {
    var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1502)), enumerator_63274.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1504)), enumerator_63274.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 1501)) ;
    enumerator_63274.gotoNextObject () ;
  }
  cEnumerator_graphInsertModifierList enumerator_63464 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_63464.hasCurrentObject ()) {
    {
    var_modifierMap.setter_insertOrReplace (enumerator_63464.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1510)), var_formalParameterList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1513)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1508)) ;
    }
    enumerator_63464.gotoNextObject () ;
  }
  {
  var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1520))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1520)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1521)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1522)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1524)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1519)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1528)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1529)), var_stringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1529)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1529)) ;
  {
  var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1531))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1531)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1532)), var_formalParameterList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1535)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1530)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1540)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1541)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1541)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1541)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1542)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1542)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1542)) ;
  {
  var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1544))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1544)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1545)), var_formalParameterList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1548)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1543)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1553)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1554)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1554)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1554)) ;
  {
  var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1556))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1556)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1557)), var_formalParameterList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1560)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1555)) ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryGetterMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mGraphTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1565)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mGraphTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1580)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("semanticContext.galgas", 1581)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1583)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1584)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1585)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1590)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1591)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1592)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1593)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1594)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1595)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1596)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1597)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1598)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1600)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 1602)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1602)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1603)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1576)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                              categoryMethod_graphDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterInSemanticContext (defineCategoryMethod_graphDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@filewrapperDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                             const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                             const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap = GALGAS_filewrapperTemplateMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1686)) ;
  cEnumerator_filewrapperTemplateListAST enumerator_69924 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
  while (enumerator_69924.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1688)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_70041 (enumerator_69924.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_70041.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_70041.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1691)) ;
      }
      var_templateSignature.addAssign_operation (enumerator_70041.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex, enumerator_70041.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1692)) ;
      enumerator_70041.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap.setter_insertKey (enumerator_69924.current_mFilewrapperTemplateName (HERE), var_templateSignature, enumerator_69924.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1694)) ;
    }
    enumerator_69924.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1701)) ;
  cEnumerator_lstringlist enumerator_70591 (object->mAttribute_mFilewrapperTextFileExtensionList, kEnumeration_up) ;
  while (enumerator_70591.hasCurrentObject ()) {
    {
    var_textExtensionMap.setter_insertKey (enumerator_70591.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1703)) ;
    }
    enumerator_70591.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1706)) ;
  cEnumerator_lstringlist enumerator_70790 (object->mAttribute_mFilewrapperBinaryFileExtensionList, kEnumeration_up) ;
  while (enumerator_70790.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_textExtensionMap.getter_hasKey (enumerator_70790.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticContext.galgas", 1708)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_70790.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_70790.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1709)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1709)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1709))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1709)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_binaryFileExtensionMap.setter_insertKey (enumerator_70790.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1711)) ;
      }
    }
    enumerator_70790.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap ;
  GALGAS_string var_absoluteSourcePath ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 1718)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 1718)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_absoluteSourcePath = object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 1719)) ;
  }else if (kBoolFalse == test_2) {
    var_absoluteSourcePath = object->mAttribute_mSourceFileAbsolutePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 1721)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1721)).add_operation (object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 1721)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1721)) ;
  }
  const enumGalgasBool test_3 = var_absoluteSourcePath.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 1723)).operator_not (SOURCE_FILE ("semanticContext.galgas", 1723)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFilewrapperPath.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("The '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1724)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1724))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1724)) ;
    var_regularRootFileMap.drop () ; // Release error dropped variable
    var_wrapperDirectoryMap.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_uint var_wrapperFileIndex = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_wrapperDirectoryIndex = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_recursivelyEnumerateDirectories (var_absoluteSourcePath, GALGAS_string ("/"), var_textExtensionMap, var_binaryFileExtensionMap, var_regularRootFileMap, var_wrapperDirectoryMap, var_wrapperFileIndex, var_wrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1730)) ;
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFilewrapperMap.setter_insertKey (object->mAttribute_mFilewrapperName, object->mAttribute_mFilewrapperPath, object->mAttribute_mFilewrapperTextFileExtensionList, var_regularRootFileMap, var_wrapperDirectoryMap, var_filewrapperTemplateMap, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1742)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                              categoryMethod_filewrapperDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterInSemanticContext (defineCategoryMethod_filewrapperDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionComponentDeclarationAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                 const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                                 const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  GALGAS_commandLineOptionMap var_boolOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1761)) ;
  GALGAS_commandLineOptionMap var_uintOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1762)) ;
  GALGAS_commandLineOptionMap var_stringOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1763)) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1764)) ;
  GALGAS_stringset var_optionNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticContext.galgas", 1765)) ;
  cEnumerator_commandLineOptionListAST enumerator_72919 (object->mAttribute_mOptions, kEnumeration_up) ;
  while (enumerator_72919.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_optionNameSet.getter_hasKey (enumerator_72919.current_mOptionInternalName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1767)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1767)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_72919.current_mOptionInternalName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_72919.current_mOptionInternalName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1768)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1768)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1768))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1768)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_72919.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1769)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        var_boolOptionMap.setter_insertKey (enumerator_72919.current_mOptionInternalName (HERE), enumerator_72919.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("semanticContext.galgas", 1772)), enumerator_72919.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1773)), enumerator_72919.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1774)), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1770)) ;
        }
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_72919.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("semanticContext.galgas", 1777)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_72919.current_mOptionDefaultValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("an @bool option cannot have a default value (default value is allways false)")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1778)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_72919.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1780)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_72919.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1786)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("0") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = enumerator_72919.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1786)) ;
          }
          var_uintOptionMap.setter_insertKey (enumerator_72919.current_mOptionInternalName (HERE), enumerator_72919.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("semanticContext.galgas", 1783)), enumerator_72919.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1784)), enumerator_72919.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1785)), temp_6, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1781)) ;
          }
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_72919.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("semanticContext.galgas", 1788)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_location location_9 (enumerator_72919.current_mOptionDefaultValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_9, GALGAS_string ("an @uint option default value cannot be an @string value")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1789)) ;
          }
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_72919.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1791)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            var_stringOptionMap.setter_insertKey (enumerator_72919.current_mOptionInternalName (HERE), enumerator_72919.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("semanticContext.galgas", 1794)), enumerator_72919.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1795)), enumerator_72919.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1796)), enumerator_72919.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1797)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1792)) ;
            }
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_72919.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("semanticContext.galgas", 1799)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              GALGAS_location location_12 (enumerator_72919.current_mOptionDefaultValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_12, GALGAS_string ("an @string option default value cannot be an @uint value")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1800)) ;
            }
          }else if (kBoolFalse == test_10) {
            const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_72919.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1802)).objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
            if (kBoolTrue == test_13) {
              {
              var_stringListOptionMap.setter_insertKey (enumerator_72919.current_mOptionInternalName (HERE), enumerator_72919.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("semanticContext.galgas", 1805)), enumerator_72919.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1806)), enumerator_72919.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1807)), enumerator_72919.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1808)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1803)) ;
              }
              const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_72919.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("semanticContext.galgas", 1810)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                GALGAS_location location_15 (enumerator_72919.current_mOptionDefaultValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
                inCompiler->emitSemanticError (location_15, GALGAS_string ("an @stringlist option cannot accept default value")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1811)) ;
              }
            }else if (kBoolFalse == test_13) {
              GALGAS_location location_16 (enumerator_72919.current_mOptionTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_16, GALGAS_string ("only the @bool, @uint or @string types are allowed here")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1814)) ;
            }
          }
        }
      }
    }
    var_optionNameSet.addAssign_operation (enumerator_72919.current_mOptionInternalName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1816))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1816)) ;
    enumerator_72919.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.setter_insertKey (object->mAttribute_mOptionComponentName, object->mAttribute_mIsPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1819)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                              categoryMethod_optionComponentDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterInSemanticContext (defineCategoryMethod_optionComponentDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@classDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                       const GALGAS_categoryGetterMapForBuildingContext constinArgument_inCategoryGetterMapForBuildingContext,
                                                                       const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_uintType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("semanticContext.galgas", 1837)) ;
  }
  GALGAS_getterMap var_getterMap ;
  GALGAS_setterMap var_modifierMap ;
  GALGAS_instanceMethodMap var_instanceMethodMap ;
  GALGAS_typedPropertyList var_inheritedTypedAttributeList ;
  GALGAS_attributeMap var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1843)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassIndex ;
  GALGAS_bool var_generateHeaderInSeparateFile ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("semanticContext.galgas", 1847)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassIndex = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1848)) ;
    {
    routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1849)) ;
    }
    var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1850)) ;
    var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1851)) ;
    var_inheritedTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1852)) ;
    var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1853)) ;
    var_generateHeaderInSeparateFile = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_76734 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
    while (enumerator_76734.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_76734.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1856)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generateHeaderInSeparateFile = GALGAS_bool (true) ;
      }
      enumerator_76734.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, var_superClassIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1861)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum ;
    GALGAS_getterMap var_inheritedGetterMap ;
    GALGAS_setterMap var_inheritedModifierMap ;
    GALGAS_instanceMethodMap var_inheritedMethodMap ;
    GALGAS_bool joker_77182_3 ; // Joker input parameter
    GALGAS_bool joker_77182_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_77182_1 ; // Joker input parameter
    GALGAS_bool joker_77212 ; // Joker input parameter
    GALGAS_typedPropertyList joker_77276_2 ; // Joker input parameter
    GALGAS_constructorMap joker_77276_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_77366_9 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_77366_8 ; // Joker input parameter
    GALGAS_stringlist joker_77366_7 ; // Joker input parameter
    GALGAS_uint joker_77366_6 ; // Joker input parameter
    GALGAS_functionSignature joker_77366_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_77366_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_77366_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_77366_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_77366_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_77412_4 ; // Joker input parameter
    GALGAS_string joker_77412_3 ; // Joker input parameter
    GALGAS_string joker_77412_2 ; // Joker input parameter
    GALGAS_headerKind joker_77412_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mSuperClassName, joker_77182_3, joker_77182_2, joker_77182_1, var_typeKindEnum, joker_77212, var_inheritedTypedAttributeList, var_attributeMap, joker_77276_2, joker_77276_1, var_inheritedGetterMap, var_inheritedModifierMap, var_inheritedMethodMap, joker_77366_9, joker_77366_8, joker_77366_7, joker_77366_6, joker_77366_5, joker_77366_4, joker_77366_3, joker_77366_2, joker_77366_1, var_generateHeaderInSeparateFile, joker_77412_4, joker_77412_3, joker_77412_2, joker_77412_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1866)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticContext.galgas", 1882)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSuperClassName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the @").add_operation (object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("semanticContext.galgas", 1883)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1883)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1883))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1883)) ;
    }
    var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1886)) ;
    cEnumerator_setterMap enumerator_77685 (var_inheritedModifierMap, kEnumeration_up) ;
    while (enumerator_77685.hasCurrentObject ()) {
      {
      var_modifierMap.setter_insertKey (enumerator_77685.current_lkey (HERE), enumerator_77685.current_mKind (HERE), enumerator_77685.current_mParameterList (HERE), enumerator_77685.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1893)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1888)) ;
      }
      enumerator_77685.gotoNextObject () ;
    }
    var_getterMap = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1898)) ;
    cEnumerator_getterMap enumerator_77996 (var_inheritedGetterMap, kEnumeration_up) ;
    while (enumerator_77996.hasCurrentObject ()) {
      {
      var_getterMap.setter_insertKey (enumerator_77996.current_lkey (HERE), enumerator_77996.current_mKind (HERE), enumerator_77996.current_mArgumentTypeList (HERE), enumerator_77996.current_mDeclarationLocation (HERE), enumerator_77996.current_mHasCompilerArgument (HERE), enumerator_77996.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1907)), enumerator_77996.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1900)) ;
      }
      enumerator_77996.gotoNextObject () ;
    }
    var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1912)) ;
    cEnumerator_instanceMethodMap enumerator_78369 (var_inheritedMethodMap, kEnumeration_up) ;
    while (enumerator_78369.hasCurrentObject ()) {
      {
      var_instanceMethodMap.setter_insertKey (enumerator_78369.current_lkey (HERE), enumerator_78369.current_mKind (HERE), enumerator_78369.current_mParameterList (HERE), enumerator_78369.current_mDeclarationLocation (HERE), enumerator_78369.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1920)), enumerator_78369.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1914)) ;
      }
      enumerator_78369.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1926)) ;
  cEnumerator_typedPropertyList enumerator_78769 (var_inheritedTypedAttributeList, kEnumeration_up) ;
  while (enumerator_78769.hasCurrentObject ()) {
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1928)), enumerator_78769.current_mAttributeTypeProxy (HERE), enumerator_78769.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1928)) ;
    enumerator_78769.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_78899 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_78899.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_78899.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1932)) ;
    }
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1933)), var_attributeTypeIndex, enumerator_78899.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1933)) ;
    {
    var_attributeMap.setter_insertKey (enumerator_78899.current_mPropertyName (HERE), var_attributeTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1934)) ;
    }
    const enumGalgasBool test_4 = var_getterMap.getter_hasKey (enumerator_78899.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1939)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1939)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (enumerator_78899.current_mPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("'").add_operation (enumerator_78899.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1940)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1940)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1940))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1940)) ;
    }
    enumerator_78899.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_classIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, var_classIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1944)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1950)) ;
  const enumGalgasBool test_6 = object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("semanticContext.galgas", 1951)).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    var_constructorMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1953))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1953)), var_constructorAttributeTypeList, GALGAS_bool (false), var_classIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1952)) ;
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1960)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList = var_inheritedTypedAttributeList ;
  cEnumerator_propertyInCollectionListAST enumerator_80027 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_80027.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_80027.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1964)) ;
    }
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_80263 (enumerator_80027.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_80263.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_80263.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1968)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_80263.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1970)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_hasGetter = GALGAS_bool (false) ;
        }
      }
      enumerator_80263.gotoNextObject () ;
    }
    var_currentClassTypedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_80027.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 1974)) ;
    var_allTypedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_80027.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 1975)) ;
    const enumGalgasBool test_9 = var_hasGetter.boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      var_getterMap.setter_insertKey (enumerator_80027.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1979)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1980)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1981)), GALGAS_bool (false), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1984)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1977)) ;
      }
    }
    enumerator_80027.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_81025 (var_currentClassTypedAttributeList, kEnumeration_up) ;
  while (enumerator_81025.hasCurrentObject ()) {
    const enumGalgasBool test_10 = enumerator_81025.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      GALGAS_formalParameterSignature temp_11 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1995)) ;
      temp_11.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 1995)), enumerator_81025.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1995)), enumerator_81025.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1995)) ;
      var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_81025.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1993)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 1993)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1993)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1993))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1993)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1994)), temp_11, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1997)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1992)) ;
      }
    }
    enumerator_81025.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryGetterMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mClassTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2003)) ;
  }
  GALGAS_string var_defaultConstructorName ;
  const enumGalgasBool test_12 = var_superClassIndex.getter_isNull (SOURCE_FILE ("semanticContext.galgas", 2015)).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_defaultConstructorName = GALGAS_string ("default") ;
  }else if (kBoolFalse == test_12) {
    var_defaultConstructorName = var_superClassIndex.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2018)) ;
  }
  cEnumerator_typedPropertyList enumerator_82018 (var_currentClassTypedAttributeList, kEnumeration_up) ;
  bool bool_13 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_82018.hasCurrentObject () && bool_13) {
    while (enumerator_82018.hasCurrentObject () && bool_13) {
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, enumerator_82018.current_mAttributeTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2021)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_82018.current_mAttributeTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2021)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2021)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2021)).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_defaultConstructorName = GALGAS_string::makeEmptyString () ;
      }
      enumerator_82018.gotoNextObject () ;
      if (enumerator_82018.hasCurrentObject ()) {
        bool_13 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mClassTypeName, object->mAttribute_mIsPredefined, object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("semanticContext.galgas", 2029)), var_superClassIndex, GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticContext.galgas", 2031)), GALGAS_bool (false), var_allTypedAttributeList, var_attributeMap, var_currentClassTypedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2040)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2041)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2042)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2044)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2045)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2046)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2047)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2048)), var_generateHeaderInSeparateFile, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2050)), var_defaultConstructorName, GALGAS_string ("class-").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2052)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2052)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 2053)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2026)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                              categoryMethod_classDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_enterInSemanticContext (defineCategoryMethod_classDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@externRoutineDeclarationAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externRoutineDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2065)) ;
  cEnumerator_formalParameterListAST enumerator_83697 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_83697.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_83697.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2067)) ;
    }
    var_routineSignature.addAssign_operation (enumerator_83697.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_83697.current_mFormalArgumentPassingMode (HERE), enumerator_83697.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2068)) ;
    enumerator_83697.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mRoutineMap.setter_insertKey (object->mAttribute_mRoutineName, var_routineSignature, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2071)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externRoutineDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                              categoryMethod_externRoutineDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterInSemanticContext (defineCategoryMethod_externRoutineDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@routineDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                         const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                         const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineDeclarationAST * object = (const cPtr_routineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_routineDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2086)) ;
  cEnumerator_formalParameterListAST enumerator_84693 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_84693.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_84693.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2088)) ;
    }
    var_routineSignature.addAssign_operation (enumerator_84693.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_84693.current_mFormalArgumentPassingMode (HERE), enumerator_84693.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2089)) ;
    enumerator_84693.gotoNextObject () ;
  }
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mRoutineInstructionList, ioArgument_ioSemanticContext.mAttribute_mTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2092)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mRoutineMap.setter_insertKey (object->mAttribute_mRoutineName, var_routineSignature, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2094)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_routineDeclarationAST.mSlotID,
                                              categoryMethod_routineDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineDeclarationAST_enterInSemanticContext (defineCategoryMethod_routineDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@externFunctionDeclarationAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                                const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_functionSignature var_functionSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2109)) ;
  cEnumerator_formalInputParameterListAST enumerator_85859 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_85859.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_85859.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2112)) ;
    }
    var_functionSignature.addAssign_operation (enumerator_85859.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_85859.current_mFormalArgumentTypeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2113)) ;
    enumerator_85859.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2117)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.setter_insertKey (object->mAttribute_mFunctionName, var_functionSignature, var_resultTypeIndex, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2119)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externFunctionDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                              categoryMethod_externFunctionDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterInSemanticContext (defineCategoryMethod_externFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@onceFunctionDeclarationAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                              const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                              const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                              const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2135)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.setter_insertKey (object->mAttribute_mFunctionName, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2137)), var_resultTypeIndex, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2137)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                              categoryMethod_onceFunctionDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterInSemanticContext (defineCategoryMethod_onceFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@arrayDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                       const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("semanticContext.galgas", 2148)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mDimension.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the dimension of an array should be > 0")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2149)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_arrayTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, var_arrayTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2153)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, var_elementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2156)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2158)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2159)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2160)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2161)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("bool"), var_boolType COMMA_SOURCE_FILE ("semanticContext.galgas", 2164)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("semanticContext.galgas", 2167)) ;
  }
  GALGAS_functionSignature var_uintArgs = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2169)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("semanticContext.galgas", 2171)).isValid ()) {
    uint32_t variant_88750 = object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("semanticContext.galgas", 2171)).uintValue () ;
    bool loop_88750 = true ;
    while (loop_88750) {
      loop_88750 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("semanticContext.galgas", 2171)))).isValid () ;
      if (loop_88750) {
        loop_88750 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("semanticContext.galgas", 2171)))).boolValue () ;
      }
      if (loop_88750 && (0 == variant_88750)) {
        loop_88750 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticContext.galgas", 2171)) ;
      }
      if (loop_88750) {
        variant_88750 -- ;
        var_uintArgs.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2172)), var_uintType, GALGAS_string ("inSize").add_operation (var_idx.getter_string (SOURCE_FILE ("semanticContext.galgas", 2172)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2172))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2172)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2173)) ;
      }
    }
  }
  {
  var_constructorMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2177))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2177)), var_uintArgs, GALGAS_bool (false), var_arrayTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2176)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2183)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2184)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2185)) ;
  }
  {
  var_getterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2187))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2187)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2188)), var_uintArgs, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2190)), GALGAS_bool (true), var_boolType, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2193)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2186)) ;
  }
  {
  var_getterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2197))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2197)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2198)), var_uintArgs, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2200)), GALGAS_bool (true), var_elementTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2203)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2196)) ;
  }
  GALGAS_formalParameterSignature var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2207)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2208)), var_elementTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2208)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2208)) ;
  var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("semanticContext.galgas", 2210)).isValid ()) {
    uint32_t variant_90165 = object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("semanticContext.galgas", 2210)).uintValue () ;
    bool loop_90165 = true ;
    while (loop_90165) {
      loop_90165 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("semanticContext.galgas", 2210)))).isValid () ;
      if (loop_90165) {
        loop_90165 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("semanticContext.galgas", 2210)))).boolValue () ;
      }
      if (loop_90165 && (0 == variant_90165)) {
        loop_90165 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticContext.galgas", 2210)) ;
      }
      if (loop_90165) {
        variant_90165 -- ;
        var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2211)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2211)), GALGAS_string ("inIndex").add_operation (var_idx.getter_string (SOURCE_FILE ("semanticContext.galgas", 2211)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2211))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2211)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2212)) ;
      }
    }
  }
  {
  var_modifierMap.setter_insertKey (GALGAS_string ("setValueAtIndex").getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2215)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2216)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2219)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2214)) ;
  }
  {
  var_modifierMap.setter_insertKey (GALGAS_string ("forceValueAtIndex").getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2223)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2224)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2227)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2222)) ;
  }
  {
  GALGAS_lstring joker_90769_4 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_90769_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_90769_2 ; // Joker input parameter
  GALGAS_string joker_90769_1 ; // Joker input parameter
  var_modifierFormalArgumentList.setter_popFirst (joker_90769_4, joker_90769_3, joker_90769_2, joker_90769_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2230)) ;
  }
  {
  var_modifierMap.setter_insertKey (GALGAS_string ("invalidateValueAtIndex").getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2232)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2233)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2236)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2231)) ;
  }
  {
  var_modifierMap.setter_insertKey (GALGAS_string ("setSize").getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2240)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2241)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2244)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2239)) ;
  }
  var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2247)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2248)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2248)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2248)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2249)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2249)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2249)) ;
  {
  var_modifierMap.setter_insertKey (GALGAS_string ("setSizeForAxis").getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2251)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2252)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2255)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2250)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mArrayTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2263)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("semanticContext.galgas", 2264)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2266)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2267)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2268)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2273)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2274)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2275)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2277)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2278)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2279)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2280)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2281)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2283)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2285)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2285)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2286)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2259)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                              categoryMethod_arrayDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterInSemanticContext (defineCategoryMethod_arrayDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@listmapDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                         const GALGAS_categoryGetterMapForBuildingContext constinArgument_inCategoryGetterMapForBuildingContext,
                                                                         const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum ;
  GALGAS_typedPropertyList var_listTypedAttributeList ;
  GALGAS_bool joker_93146_3 ; // Joker input parameter
  GALGAS_bool joker_93146_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_93146_1 ; // Joker input parameter
  GALGAS_bool joker_93190 ; // Joker input parameter
  GALGAS_attributeMap joker_93248_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_93248_19 ; // Joker input parameter
  GALGAS_constructorMap joker_93248_18 ; // Joker input parameter
  GALGAS_getterMap joker_93248_17 ; // Joker input parameter
  GALGAS_setterMap joker_93248_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_93248_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_93248_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_93248_13 ; // Joker input parameter
  GALGAS_stringlist joker_93248_12 ; // Joker input parameter
  GALGAS_uint joker_93248_11 ; // Joker input parameter
  GALGAS_functionSignature joker_93248_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_93248_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_93248_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_93248_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_93248_6 ; // Joker input parameter
  GALGAS_bool joker_93248_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_93248_4 ; // Joker input parameter
  GALGAS_string joker_93248_3 ; // Joker input parameter
  GALGAS_string joker_93248_2 ; // Joker input parameter
  GALGAS_headerKind joker_93248_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_93146_3, joker_93146_2, joker_93146_1, var_typeKindEnum, joker_93190, var_listTypedAttributeList, joker_93248_20, joker_93248_19, joker_93248_18, joker_93248_17, joker_93248_16, joker_93248_15, joker_93248_14, joker_93248_13, joker_93248_12, joker_93248_11, joker_93248_10, joker_93248_9, joker_93248_8, joker_93248_7, joker_93248_6, joker_93248_5, joker_93248_4, joker_93248_3, joker_93248_2, joker_93248_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2298)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticContext.galgas", 2306)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2307)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2307)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2307))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2307)) ;
    var_listTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2308)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2311)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2312)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2313)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2314)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2316)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2318)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2320)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2327)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2334)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2347)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2341)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2355)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2351)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2359)) ;
  var_enumeratorDescriptor.addAssign_operation (var_stringTypeIndex, GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2360)) ;
  var_enumeratorDescriptor.addAssign_operation (var_associatedListTypeIndex, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2361)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2363)) ;
  var_addAssignOperatorDescription.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2364)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2364)) ;
  cEnumerator_typedPropertyList enumerator_95370 (var_listTypedAttributeList, kEnumeration_up) ;
  while (enumerator_95370.hasCurrentObject ()) {
    var_addAssignOperatorDescription.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2366)), enumerator_95370.current_mAttributeTypeProxy (HERE), enumerator_95370.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2366)) ;
    enumerator_95370.gotoNextObject () ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2369)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2370)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2371)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryGetterMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListmapTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2373)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2386)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2386)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2386)), var_listElementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2384)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mListmapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2394)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("semanticContext.galgas", 2395)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2397)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2398)), var_listTypedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2404)), var_enumeratorDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2407)), var_addAssignOperatorDescription, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2409)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2410)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2411)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2412)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2416)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2416)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2417)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2390)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                              categoryMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineCategoryMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@galgas3SyntaxComponentAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                                const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (object->mAttribute_mSyntaxComponentName, object->mAttribute_mLexiqueName, object->mAttribute_mNonterminalDeclarationList, object->mAttribute_mRuleList, object->mAttribute_mHasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2428)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                              categoryMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (defineCategoryMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@galgas3GrammarComponentAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                 const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                                 const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  GALGAS_grammarLabelMap var_grammarLabelMap = GALGAS_grammarLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2445)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_98346 (object->mAttribute_mStartSymbolLabelList, kEnumeration_up) ;
  while (enumerator_98346.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_formalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2448)) ;
    cEnumerator_formalParameterListAST enumerator_98474 (enumerator_98346.current_mFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_98474.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentType ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_98474.current_mFormalArgumentTypeName (HERE), var_argumentType COMMA_SOURCE_FILE ("semanticContext.galgas", 2450)) ;
      }
      var_formalArgumentList.addAssign_operation (enumerator_98474.current_mFormalSelector (HERE), var_argumentType, enumerator_98474.current_mFormalArgumentPassingMode (HERE), enumerator_98474.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2451)) ;
      enumerator_98474.gotoNextObject () ;
    }
    {
    var_grammarLabelMap.setter_insertKey (enumerator_98346.current_mLabelName (HERE), var_formalArgumentList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2457)) ;
    }
    enumerator_98346.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mGrammarMap.setter_insertGrammar (object->mAttribute_mGrammarComponentName, var_grammarLabelMap, object->mAttribute_mHasIndexing.mAttribute_bool, object->mAttribute_mHasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2463)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                              categoryMethod_galgas_33_GrammarComponentAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (defineCategoryMethod_galgas_33_GrammarComponentAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@lexiqueComponentAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                       const GALGAS_categoryGetterMapForBuildingContext /* constinArgument_inCategoryGetterMapForBuildingContext */,
                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2479)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2480)) ;
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap, object->mAttribute_mLexicalAttributeList, var_lexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2481)) ;
  }
  GALGAS_terminalMap var_terminalMap = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2487)) ;
  cEnumerator_terminalDeclarationListAST enumerator_99930 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_99930.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2489)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_100026 (enumerator_99930.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_100026.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexicalAttributeMap.method_searchKey (enumerator_100026.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2492)) ;
      var_argumentTypeList.addAssign_operation (enumerator_100026.current_mFormalSelector (HERE), enumerator_100026.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticContext.galgas", 2493)) ;
      enumerator_100026.gotoNextObject () ;
    }
    {
    var_terminalMap.setter_insertKey (enumerator_99930.current_mName (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2495)) ;
    }
    enumerator_99930.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_100351 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_100351.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2499)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_100447 (enumerator_100351.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_100447.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexicalAttributeMap.method_searchKey (enumerator_100447.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2502)) ;
      var_argumentTypeList.addAssign_operation (enumerator_100447.current_mFormalSelector (HERE), enumerator_100447.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticContext.galgas", 2503)) ;
      enumerator_100447.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_100691 (enumerator_100351.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_100691.hasCurrentObject ()) {
      {
      var_terminalMap.setter_insertKey (enumerator_100691.current_mTerminalSpelling (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2506)) ;
      }
      enumerator_100691.gotoNextObject () ;
    }
    enumerator_100351.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (object->mAttribute_mLexiqueComponentName, var_terminalMap, object->mAttribute_mIndexingListAST, object->mAttribute_mIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2510)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueComponentAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                              categoryMethod_lexiqueComponentAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterInSemanticContext (defineCategoryMethod_lexiqueComponentAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@predefinedTypeAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                      GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2549)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2549))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2549)) ;
  {
  const GALGAS_predefinedTypeAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2550)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                               categoryMethod_predefinedTypeAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_enterDeclarationInGraph (defineCategoryMethod_predefinedTypeAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@galgas3GrammarComponentAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                  GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                  GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                  GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2561)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2561)), object->mAttribute_mGrammarComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2561)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2562)) ;
  }
  cEnumerator_lstringlist enumerator_103889 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_103889.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (enumerator_103889.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 2564)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2564)), enumerator_103889.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2564)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2564)) ;
    }
    enumerator_103889.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                               categoryMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (defineCategoryMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@galgas3SyntaxComponentAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                 GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                 GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                 GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (object->mAttribute_mSyntaxComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2576)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2576)), object->mAttribute_mSyntaxComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2576)) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2577)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2578)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2578)), object->mAttribute_mLexiqueName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2578)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2578)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_104867 (object->mAttribute_mRuleList, kEnumeration_up) ;
  while (enumerator_104867.hasCurrentObject ()) {
    cEnumerator_syntaxRuleLabelListAST enumerator_104895 (enumerator_104867.current_mLabelList (HERE), kEnumeration_up) ;
    while (enumerator_104895.hasCurrentObject ()) {
      cEnumerator_formalParameterListAST enumerator_104931 (enumerator_104895.current_mFormalArguments (HERE), kEnumeration_up) ;
      while (enumerator_104931.hasCurrentObject ()) {
        switch (enumerator_104931.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_104931.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 2583)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2583)), enumerator_104931.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2583)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2583)) ;
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
        enumerator_104931.gotoNextObject () ;
      }
      enumerator_104895.gotoNextObject () ;
    }
    enumerator_104867.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                               categoryMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (defineCategoryMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@lexiqueComponentAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2599)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2599)), object->mAttribute_mLexiqueComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2599)) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2600)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueComponentAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                               categoryMethod_lexiqueComponentAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterDeclarationInGraph (defineCategoryMethod_lexiqueComponentAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@classDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2611)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2611)), object->mAttribute_mClassTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2611))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2611)) ;
  {
  const GALGAS_classDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2612)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSuperClassName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2614)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2614)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2614)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2614)) ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_106873 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_106873.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_106873.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 2617)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2617)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2617)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2617)) ;
    }
    enumerator_106873.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                               categoryMethod_classDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_classDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@arrayDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2629)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2629)), object->mAttribute_mArrayTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2629))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2629)) ;
  {
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2630)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mElementTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2631)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2631)), object->mAttribute_mElementTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2631))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2631)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2631)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                               categoryMethod_arrayDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_arrayDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@listmapDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                          GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                          GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                          GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                          GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2642)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2642)), object->mAttribute_mListmapTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2642))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2642)) ;
  {
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2643)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2644)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2644)), object->mAttribute_mAssociatedListTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2644))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2644)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2644)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               categoryMethod_listmapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_listmapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@mapDeclarationAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                      GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2655)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2655)), object->mAttribute_mMapTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2655))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2655)) ;
  {
  const GALGAS_mapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2656)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_109424 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_109424.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_109424.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 2658)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2658)), enumerator_109424.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 2658))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2658)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2658)) ;
    }
    enumerator_109424.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                               categoryMethod_mapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_mapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@graphDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2670)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2670)), object->mAttribute_mGraphTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2670))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2670)) ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2671)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2672)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2672)), object->mAttribute_mAssociatedListTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2672))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2672)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2672)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                               categoryMethod_graphDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_graphDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@externTypeDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externTypeDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                             GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                             GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                             GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2683)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2683)), object->mAttribute_mExternTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2683))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2683)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2684)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externTypeDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                               categoryMethod_externTypeDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_externTypeDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@externFunctionDeclarationAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                 GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                 GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                 GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2695)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                               categoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@onceFunctionDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                               GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                               GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                               GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  const GALGAS_onceFunctionDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2706)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                               categoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@externRoutineDeclarationAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2717)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                               categoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@filewrapperDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                              GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                              GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                              GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2728)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                               categoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionComponentDeclarationAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                  GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                  GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2739)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                               categoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryMethodAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodAST * object = (const cPtr_overridingCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodAST) ;
  const GALGAS_overridingCategoryMethodAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2750)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                               categoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@overridingCategoryModifierAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                  GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                  GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierAST * object = (const cPtr_overridingCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierAST) ;
  const GALGAS_overridingCategoryModifierAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2761)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                               categoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryGetterAST enterDeclarationInGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                        GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryGetterAST * object = (const cPtr_overridingAbstractCategoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryGetterAST) ;
  const GALGAS_overridingAbstractCategoryGetterAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2772)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryGetterAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractCategoryGetterAST.mSlotID,
                                               categoryMethod_overridingAbstractCategoryGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryGetterAST_enterDeclarationInGraph (defineCategoryMethod_overridingAbstractCategoryGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryMethodAST enterDeclarationInGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                        GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryMethodAST * object = (const cPtr_overridingAbstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryMethodAST) ;
  const GALGAS_overridingAbstractCategoryMethodAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2783)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                               categoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@overridingAbstractCategoryModifierAST enterDeclarationInGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                          GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                          GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryModifierAST * object = (const cPtr_overridingAbstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryModifierAST) ;
  const GALGAS_overridingAbstractCategoryModifierAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2794)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                               categoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryGetterAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                      GALGAS_categoryGetterMapForBuildingContext & ioArgument_ioCategoryGetterMapForBuildingContext,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryGetterAST * object = (const cPtr_categoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryGetterAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2805)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2805)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2805)).add_operation (object->mAttribute_mCategoryGetterName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2805)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2805)), object->mAttribute_mCategoryGetterName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2805))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2805)) ;
  {
  const GALGAS_categoryGetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2806)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2807)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2807)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2807))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2807)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2807)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryGetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2809)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2809)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2809)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryGetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_categoryGetterMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2812)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2810)) ;
    }
  }
  cMapElement_categoryGetterMapForBuildingContext * objectArray_118595 = (cMapElement_categoryGetterMapForBuildingContext *) ioArgument_ioCategoryGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2815)) ;
  if (NULL != objectArray_118595) {
      macroValidSharedObject (objectArray_118595, cMapElement_categoryGetterMapForBuildingContext) ;
    {
    objectArray_118595->mAttribute_mCategoryGetterMapForType.setter_insertKey (object->mAttribute_mCategoryGetterName, object->mAttribute_mCategoryGetterReturnedTypeName, object->mAttribute_mCategoryGetterFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2816)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryGetterAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_categoryGetterAST.mSlotID,
                                               categoryMethod_categoryGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryGetterAST_enterDeclarationInGraph (defineCategoryMethod_categoryGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryMethodAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & ioArgument_ioCategoryMethodMapForBuildingContext,
                                                                      GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodAST * object = (const cPtr_categoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2832)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2832)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2832)).add_operation (object->mAttribute_mCategoryMethodName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2832)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2832)), object->mAttribute_mCategoryMethodName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2832))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2832)) ;
  {
  const GALGAS_categoryMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2833)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2834)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2834)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2834))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2834)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2834)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryMethodMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2836)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2836)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2836)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryMethodMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_categoryMethodMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2839)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2837)) ;
    }
  }
  cMapElement_categoryMethodMapForBuildingContext * objectArray_119919 = (cMapElement_categoryMethodMapForBuildingContext *) ioArgument_ioCategoryMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2842)) ;
  if (NULL != objectArray_119919) {
      macroValidSharedObject (objectArray_119919, cMapElement_categoryMethodMapForBuildingContext) ;
    {
    objectArray_119919->mAttribute_mCategoryMethodMapForType.setter_insertKey (object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2843)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                               categoryMethod_categoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_categoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@categoryModifierAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & ioArgument_ioCategoryModifierMapForBuildingContext,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierAST * object = (const cPtr_categoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2858)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2858)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2858)).add_operation (object->mAttribute_mCategoryModifierName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2858)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2858)), object->mAttribute_mCategoryModifierName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2858))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2858)) ;
  {
  const GALGAS_categoryModifierAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2859)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2860)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2860)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2860))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2860)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2860)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryModifierMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2862)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2862)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2862)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryModifierMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_categoryModifierMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2865)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2863)) ;
    }
  }
  cMapElement_categoryModifierMapForBuildingContext * objectArray_121211 = (cMapElement_categoryModifierMapForBuildingContext *) ioArgument_ioCategoryModifierMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryModifierMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2868)) ;
  if (NULL != objectArray_121211) {
      macroValidSharedObject (objectArray_121211, cMapElement_categoryModifierMapForBuildingContext) ;
    {
    objectArray_121211->mAttribute_mCategoryModifierMapForType.setter_insertKey (object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2869)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                               categoryMethod_categoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_categoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryGetterAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryGetterAST * object = (const cPtr_overridingCategoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryGetterAST) ;
  const GALGAS_overridingCategoryGetterAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2884)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryGetterAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingCategoryGetterAST.mSlotID,
                                               categoryMethod_overridingCategoryGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryGetterAST_enterDeclarationInGraph (defineCategoryMethod_overridingCategoryGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryGetterAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                              GALGAS_categoryGetterMapForBuildingContext & ioArgument_ioCategoryGetterMapForBuildingContext,
                                                                              GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryGetterAST * object = (const cPtr_abstractCategoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryGetterAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2895)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2895)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2895)).add_operation (object->mAttribute_mAbstractCategoryGetterName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2895)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2895)), object->mAttribute_mAbstractCategoryGetterName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2895))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2895)) ;
  {
  const GALGAS_abstractCategoryGetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2896)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2897)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2897)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2897))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2897)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2897)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryGetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2899)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2899)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2899)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryGetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_categoryGetterMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2902)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2900)) ;
    }
  }
  cMapElement_categoryGetterMapForBuildingContext * objectArray_123160 = (cMapElement_categoryGetterMapForBuildingContext *) ioArgument_ioCategoryGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2905)) ;
  if (NULL != objectArray_123160) {
      macroValidSharedObject (objectArray_123160, cMapElement_categoryGetterMapForBuildingContext) ;
    {
    objectArray_123160->mAttribute_mCategoryGetterMapForType.setter_insertKey (object->mAttribute_mAbstractCategoryGetterName, object->mAttribute_mAbstractCategoryGetterReturnedTypeName, object->mAttribute_mAbstractCategoryGetterFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2906)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryGetterAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractCategoryGetterAST.mSlotID,
                                               categoryMethod_abstractCategoryGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryGetterAST_enterDeclarationInGraph (defineCategoryMethod_abstractCategoryGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryMethodAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_categoryMethodMapForBuildingContext & ioArgument_ioCategoryMethodMapForBuildingContext,
                                                                              GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                              GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2922)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2922)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2922)).add_operation (object->mAttribute_mAbstractCategoryMethodName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2922)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2922)), object->mAttribute_mAbstractCategoryMethodName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2922))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2922)) ;
  {
  const GALGAS_abstractCategoryMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2923)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2924)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2924)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2924))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2924)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2924)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryMethodMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2926)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2926)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2926)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryMethodMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_categoryMethodMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2929)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2927)) ;
    }
  }
  cMapElement_categoryMethodMapForBuildingContext * objectArray_124532 = (cMapElement_categoryMethodMapForBuildingContext *) ioArgument_ioCategoryMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2932)) ;
  if (NULL != objectArray_124532) {
      macroValidSharedObject (objectArray_124532, cMapElement_categoryMethodMapForBuildingContext) ;
    {
    objectArray_124532->mAttribute_mCategoryMethodMapForType.setter_insertKey (object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2933)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                               categoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@abstractCategoryModifierAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryGetterMapForBuildingContext & /* ioArgument_ioCategoryGetterMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & ioArgument_ioCategoryModifierMapForBuildingContext,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierAST * object = (const cPtr_abstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2948)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2948)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2948)).add_operation (object->mAttribute_mAbstractCategoryModifierName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2948)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2948)), object->mAttribute_mAbstractCategoryModifierName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2948))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2948)) ;
  {
  const GALGAS_abstractCategoryModifierAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2949)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2950)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2950)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticContext.galgas", 2950))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2950)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2950)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryModifierMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 2952)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2952)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2952)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryModifierMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_categoryModifierMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2955)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2953)) ;
    }
  }
  cMapElement_categoryModifierMapForBuildingContext * objectArray_125864 = (cMapElement_categoryModifierMapForBuildingContext *) ioArgument_ioCategoryModifierMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryModifierMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2958)) ;
  if (NULL != objectArray_125864) {
      macroValidSharedObject (objectArray_125864, cMapElement_categoryModifierMapForBuildingContext) ;
    {
    objectArray_125864->mAttribute_mCategoryModifierMapForType.setter_insertKey (object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2959)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                               categoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@mapDeclarationAST addAssociatedElement'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                   GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2976)) ;
  var_structAttributeList.addAssign_operation (GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2979)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 2980)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2981))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2977)) ;
  cEnumerator_propertyInCollectionListAST enumerator_126802 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_126802.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_126802.current_mPropertyTypeName (HERE), enumerator_126802.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2987))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2983)) ;
    enumerator_126802.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2991)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2991)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2991)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 2989))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2989)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapDeclarationAST_addAssociatedElement (void) {
  enterCategoryMethod_addAssociatedElement (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                            categoryMethod_mapDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_addAssociatedElement (defineCategoryMethod_mapDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@listmapDeclarationAST addAssociatedElement'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3000)) ;
  var_structAttributeList.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 3003)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 3004)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3005))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3001)) ;
  var_structAttributeList.addAssign_operation (object->mAttribute_mAssociatedListTypeName, GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("semanticContext.galgas", 3009)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3010))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3006)) ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3014)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3014)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3014)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 3012))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3012)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterCategoryMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                            categoryMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineCategoryMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category getter '@semanticTypeForGeneration implementationCppFileName'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_semanticTypeForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outName = object->mAttribute_mTypeProxy.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 501)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_semanticTypeForGeneration_implementationCppFileName (void) {
  enterCategoryGetter_implementationCppFileName (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                                 extensionGetter_semanticTypeForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticTypeForGeneration_implementationCppFileName (defineCategoryGetter_semanticTypeForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@semanticTypeForGeneration hasCppHeaderFile'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_semanticTypeForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (true) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_semanticTypeForGeneration_hasCppHeaderFile (void) {
  enterCategoryGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                        extensionGetter_semanticTypeForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticTypeForGeneration_hasCppHeaderFile (defineCategoryGetter_semanticTypeForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category getter '@semanticTypeForGeneration isPredefined'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_semanticTypeForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outResult = object->mAttribute_mTypeProxy.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 513)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_semanticTypeForGeneration_isPredefined (void) {
  enterCategoryGetter_isPredefined (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                    extensionGetter_semanticTypeForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticTypeForGeneration_isPredefined (defineCategoryGetter_semanticTypeForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@semanticTypeForGeneration headerKind'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_semanticTypeForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outHeaderKind = object->mAttribute_mTypeProxy.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 519)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_semanticTypeForGeneration_headerKind (void) {
  enterCategoryGetter_headerKind (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                  extensionGetter_semanticTypeForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticTypeForGeneration_headerKind (defineCategoryGetter_semanticTypeForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category getter '@semanticDeclarationWithHeaderForGeneration implementationCppFileName'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                           C_Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_semanticDeclarationWithHeaderForGeneration * object = (const cPtr_semanticDeclarationWithHeaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticDeclarationWithHeaderForGeneration) ;
  result_outName = object->mAttribute_mImplementationCppFileName ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (void) {
  enterCategoryGetter_implementationCppFileName (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                                 extensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (defineCategoryGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category getter '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  const cPtr_semanticDeclarationWithHeaderForGeneration * object = (const cPtr_semanticDeclarationWithHeaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticDeclarationWithHeaderForGeneration) ;
  result_outHasHeader = object->mAttribute_mHasHeader ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (void) {
  enterCategoryGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                        extensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (defineCategoryGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@semanticDeclarationWithHeaderForGeneration headerKind'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 548)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_semanticDeclarationWithHeaderForGeneration_headerKind (void) {
  enterCategoryGetter_headerKind (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                  extensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_headerKind (defineCategoryGetter_semanticDeclarationWithHeaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@semanticDeclarationWithHeaderForGeneration isPredefined'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_semanticDeclarationWithHeaderForGeneration_isPredefined (void) {
  enterCategoryGetter_isPredefined (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                    extensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_isPredefined (defineCategoryGetter_semanticDeclarationWithHeaderForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@selfCopyInExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_selfCopyInExpressionAST.mSlotID,
                                                        categoryMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@selfCopyInExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfCopyInExpressionAST * object = (const cPtr_selfCopyInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfCopyInExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfCopyTypeProxy.getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 532)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mSelfLocation, GALGAS_string ("'selfcopy' cannot be used in this context")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 533)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_selfCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    outArgument_outExpression = GALGAS_selfCopyInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSelfCopyTypeProxy, object->mAttribute_mSelfLocation, var_selfCppName  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 536)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_selfCopyInExpressionAST.mSlotID,
                                                 categoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@hereExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_hereExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_hereExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_hereExpressionAST.mSlotID,
                                                        categoryMethod_hereExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_hereExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_hereExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@hereExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_hereExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_hereExpressionAST * object = (const cPtr_hereExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_hereExpressionAST) ;
  outArgument_outExpression = GALGAS_hereExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLocationType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 554)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_hereExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_hereExpressionAST.mSlotID,
                                                 categoryMethod_hereExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_hereExpressionAST_analyzeSemanticExpression (defineCategoryMethod_hereExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@trueExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_trueExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_trueExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_trueExpressionAST.mSlotID,
                                                        categoryMethod_trueExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_trueExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@trueExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_trueExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_trueExpressionAST * object = (const cPtr_trueExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_trueExpressionAST) ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 571)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_trueExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_trueExpressionAST.mSlotID,
                                                 categoryMethod_trueExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionAST_analyzeSemanticExpression (defineCategoryMethod_trueExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@falseExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_falseExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_falseExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_falseExpressionAST.mSlotID,
                                                        categoryMethod_falseExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_falseExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@falseExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_falseExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_falseExpressionAST * object = (const cPtr_falseExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_falseExpressionAST) ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 588)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_falseExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_falseExpressionAST.mSlotID,
                                                 categoryMethod_falseExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionAST_analyzeSemanticExpression (defineCategoryMethod_falseExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@literalCharExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalCharExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalCharExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalCharExpressionAST.mSlotID,
                                                        categoryMethod_literalCharExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalCharExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@literalCharExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalCharExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalCharExpressionAST * object = (const cPtr_literalCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalCharExpressionAST) ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mCharacter.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 605)), object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 605))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 605)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalCharExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalCharExpressionAST.mSlotID,
                                                 categoryMethod_literalCharExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalCharExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalStringExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalStringExpressionAST.mSlotID,
                                                        categoryMethod_literalStringExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalStringExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalStringExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringExpressionAST * object = (const cPtr_literalStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringExpressionAST) ;
  GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringlist enumerator_41879 (object->mAttribute_mStringSequence, kEnumeration_up) ;
  while (enumerator_41879.hasCurrentObject ()) {
    var_s.plusAssign_operation(enumerator_41879.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 624)) ;
    enumerator_41879.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mLocation, var_s  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 626)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalStringExpressionAST.mSlotID,
                                                 categoryMethod_literalStringExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalStringExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalDoubleExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalDoubleExpressionAST.mSlotID,
                                                        categoryMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalDoubleExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalDoubleExpressionAST * object = (const cPtr_literalDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalDoubleExpressionAST) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mDoubleType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 643)), object->mAttribute_mValue.getter_double (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 643))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 643)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionAST.mSlotID,
                                                 categoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@literalUIntExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalUIntExpressionAST.mSlotID,
                                                        categoryMethod_literalUIntExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalUIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@literalUIntExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUIntExpressionAST * object = (const cPtr_literalUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 660)), object->mAttribute_mValue.getter_uint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 660))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 660)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUIntExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalUIntExpressionAST.mSlotID,
                                                 categoryMethod_literalUIntExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalUIntExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalUInt64ExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                              GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST.mSlotID,
                                                        categoryMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalUInt64ExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUInt_36__34_ExpressionAST * object = (const cPtr_literalUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUInt_36__34_Type, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 679)), object->mAttribute_mValue.getter_uint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 680))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 677)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST.mSlotID,
                                                 categoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@literalSIntExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalSIntExpressionAST.mSlotID,
                                                        categoryMethod_literalSIntExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalSIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@literalSIntExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSIntExpressionAST * object = (const cPtr_literalSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSIntType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 697)), object->mAttribute_mValue.getter_sint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 697))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 697)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSIntExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalSIntExpressionAST.mSlotID,
                                                 categoryMethod_literalSIntExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalSIntExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalSInt64ExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                              GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST.mSlotID,
                                                        categoryMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalBigIntExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalBigIntExpressionAST.mSlotID,
                                                        categoryMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalSInt64ExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSInt_36__34_ExpressionAST * object = (const cPtr_literalSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSInt_36__34_Type, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 724)), object->mAttribute_mValue.getter_sint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 725))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 722)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST.mSlotID,
                                                 categoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalBigIntExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBigIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBigIntExpressionAST * object = (const cPtr_literalBigIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBigIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBigIntType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 739)), object->mAttribute_mValue.getter_bigint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 740))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 737)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBigIntExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalBigIntExpressionAST.mSlotID,
                                                 categoryMethod_literalBigIntExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalBigIntExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@defaultConstructorExpressionAST enterExpressionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_50465 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_50465 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 819)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_defaultConstructorExpressionAST.mSlotID,
                                                        categoryMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@defaultConstructorExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = constinArgument_inType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 832)) ;
  }
  const enumGalgasBool test_1 = var_type.getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 834)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 835)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_type.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 838)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 838)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("an abstract class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 839)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_type.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 840)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("this class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 841)) ;
      }
    }
    outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_type, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 844)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionAST.mSlotID,
                                                 categoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (defineCategoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@constructorExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_51841 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_51841 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 856)) ;
    }
  }
  categoryMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 858)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                        categoryMethod_constructorExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_constructorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@constructorExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
  GALGAS_unifiedTypeMap_2D_proxy var_constructorType ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList ;
  GALGAS_bool var_hasCompilerArgument ;
  {
  routine_analyzeConstructorInvocation (constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, object->mAttribute_mTypeName, object->mAttribute_mConstructorName, object->mAttribute_mExpressions, var_returnedType, var_constructorType, var_constructorEffectiveParameterList, var_hasCompilerArgument, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 868)) ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mConstructorName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 883)), var_constructorType, object->mAttribute_mConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 885)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 881)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                 categoryMethod_constructorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionAST_analyzeSemanticExpression (defineCategoryMethod_constructorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@getterCallExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_getterCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionAST * object = (const cPtr_getterCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiver.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 895)) ;
  categoryMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 896)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_getterCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_getterCallExpressionAST.mSlotID,
                                                        categoryMethod_getterCallExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getterCallExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_getterCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@getterCallExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_getterCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionAST * object = (const cPtr_getterCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiver.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 909)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 908)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType = var_receiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 914)) ;
  GALGAS_getterMap var_getterMap = var_receiverType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 916)) ;
  GALGAS_functionSignature var_getterFormalArgumentTypeList ;
  GALGAS_methodKind var_kind ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
  GALGAS_stringlist var_fieldList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 922)) ;
  const cMapElement_getterMap * objectArray_54087 = (const cMapElement_getterMap *) var_getterMap.readAccessForWithInstruction (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 923))) ;
  if (NULL != objectArray_54087) {
      macroValidSharedObject (objectArray_54087, cMapElement_getterMap) ;
    var_getterFormalArgumentTypeList = objectArray_54087->mAttribute_mArgumentTypeList ;
    var_hasCompilerArgument = objectArray_54087->mAttribute_mHasCompilerArgument ;
    var_returnedType = objectArray_54087->mAttribute_mReturnedType ;
    var_kind = objectArray_54087->mAttribute_mKind ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, objectArray_54087->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (object->mAttribute_mGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, objectArray_54087->mAttribute_mErrorMessage  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 929)) ;
    }
  }else{
    GALGAS_uint var_matchingReaderCount = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_receiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 933)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 933)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_getterFormalArgumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 934)) ;
      var_hasCompilerArgument = GALGAS_bool (true) ;
      var_returnedType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 936)) ;
      var_kind = GALGAS_methodKind::constructor_definedAsCategory (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 937)) ;
      cEnumerator_typedPropertyList enumerator_54689 (var_receiverType.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 938)), kEnumeration_up) ;
      while (enumerator_54689.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_attributeType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (enumerator_54689.current_mAttributeTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 941)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 941))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 941)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 939)) ;
        GALGAS_getterMap var_aMap = var_attributeType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 943)) ;
        const cMapElement_getterMap * objectArray_54947 = (const cMapElement_getterMap *) var_aMap.readAccessForWithInstruction (object->mAttribute_mGetterName.mAttribute_string) ;
        if (NULL != objectArray_54947) {
            macroValidSharedObject (objectArray_54947, cMapElement_getterMap) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_attributeType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 945)).objectCompare (enumerator_54689.current_mAttributeName (HERE).mAttribute_string)).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_matchingReaderCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 946)) ;
            var_getterFormalArgumentTypeList = objectArray_54947->mAttribute_mArgumentTypeList ;
            var_hasCompilerArgument = objectArray_54947->mAttribute_mHasCompilerArgument ;
            var_returnedType = objectArray_54947->mAttribute_mReturnedType ;
            var_kind = objectArray_54947->mAttribute_mKind ;
            var_fieldList.addAssign_operation (enumerator_54689.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 951)) ;
            const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, objectArray_54947->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_4) {
              GALGAS_location location_5 (object->mAttribute_mGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_5, objectArray_54947->mAttribute_mErrorMessage  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 953)) ;
            }
          }
        }
        enumerator_54689.gotoNextObject () ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_matchingReaderCount.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (object->mAttribute_mGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the '@").add_operation (var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 960)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 960)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 960)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 960)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 960)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 960))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 959)) ;
        var_getterFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
          cEnumerator_stringlist enumerator_55841 (var_fieldList, kEnumeration_up) ;
          while (enumerator_55841.hasCurrentObject ()) {
            var_s.plusAssign_operation(enumerator_55841.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 966)) ;
            if (enumerator_55841.hasNextObject ()) {
              var_s.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 967)) ;
            }
            enumerator_55841.gotoNextObject () ;
          }
          GALGAS_location location_9 (object->mAttribute_mGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_9, GALGAS_string ("the '@").add_operation (var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 970)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 970)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 970)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 970)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 970)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 970)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 971)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 971))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 969)) ;
          var_getterFormalArgumentTypeList.drop () ; // Release error dropped variable
          var_hasCompilerArgument.drop () ; // Release error dropped variable
          var_returnedType.drop () ; // Release error dropped variable
          var_kind.drop () ; // Release error dropped variable
        }
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_getterMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 974)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_location location_11 (object->mAttribute_mGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_11, GALGAS_string ("the '@").add_operation (var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 976)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 976)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 976))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 975)) ;
        var_getterFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_10) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_getterMap enumerator_56501 (var_getterMap, kEnumeration_up) ;
        while (enumerator_56501.hasCurrentObject ()) {
          var_s.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_56501.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 981)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 981)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 981)) ;
          cEnumerator_functionSignature enumerator_56569 (enumerator_56501.current_mArgumentTypeList (HERE), kEnumeration_up) ;
          while (enumerator_56569.hasCurrentObject ()) {
            GALGAS_string temp_12 ;
            const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_56569.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_13) {
              temp_12 = enumerator_56569.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 983)) ;
            }else if (kBoolFalse == test_13) {
              temp_12 = GALGAS_string::makeEmptyString () ;
            }
            var_s.plusAssign_operation(GALGAS_string (" \?").add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 983)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 983)).add_operation (enumerator_56569.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 983)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 983)) ;
            enumerator_56569.gotoNextObject () ;
          }
          var_s.plusAssign_operation(GALGAS_string (" -> @").add_operation (enumerator_56501.current_mReturnedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 985)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 985)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 985)) ;
          enumerator_56501.gotoNextObject () ;
        }
        GALGAS_string temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_getterMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 989)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = GALGAS_string ("getters are") ;
        }else if (kBoolFalse == test_15) {
          temp_14 = GALGAS_string ("getter is") ;
        }
        GALGAS_location location_16 (object->mAttribute_mGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_16, GALGAS_string ("the '@").add_operation (var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 988)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 988)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 988)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 988)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 988)).add_operation (GALGAS_string ("' getter; available "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 988)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 988)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 989)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 990))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 987)) ;
        var_getterFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 995)).objectCompare (var_getterFormalArgumentTypeList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 995)))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_location location_18 (object->mAttribute_mGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_18, GALGAS_string ("calling the '").add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 996)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 996)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 996)).add_operation (var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 996)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 996)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 996)).add_operation (var_getterFormalArgumentTypeList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 997)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 997)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 996)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 997)).add_operation (object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 998)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 998)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 997)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 998))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 996)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_17) {
    GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1000)) ;
    cEnumerator_actualOutputExpressionList enumerator_57581 (object->mAttribute_mExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_57617 (var_getterFormalArgumentTypeList, kEnumeration_up) ;
    while (enumerator_57581.hasCurrentObject () && enumerator_57617.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_57581.current_mExpression (HERE).ptr (), enumerator_57617.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1002)) ;
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_57617.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_57581.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_string temp_20 ;
        const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, enumerator_57617.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_21) {
          temp_20 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_21) {
          temp_20 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_22 (enumerator_57581.current_mActualSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_22, GALGAS_string ("the selector should be '!").add_operation (enumerator_57617.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1009)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1009)).add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1009)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1009))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1009)) ;
      }
      {
      routine_checkAssignmentTypes (enumerator_57617.current_mFormalArgumentType (HERE), var_exp.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1011)), enumerator_57581.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1011)) ;
      }
      var_constructorEffectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1012)) ;
      enumerator_57581.gotoNextObject () ;
      enumerator_57617.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1016)), var_kind, var_receiverExpression, var_fieldList, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1014)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_getterCallExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_getterCallExpressionAST.mSlotID,
                                                 categoryMethod_getterCallExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getterCallExpressionAST_analyzeSemanticExpression (defineCategoryMethod_getterCallExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                        categoryMethod_optionExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_optionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@optionExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionExpressionAST * object = (const cPtr_optionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionExpressionAST) ;
  GALGAS_bool var_optionComponentIsPredefined ;
  GALGAS_commandLineOptionMap var_boolOptionMap ;
  GALGAS_commandLineOptionMap var_uintOptionMap ;
  GALGAS_commandLineOptionMap var_stringOptionMap ;
  GALGAS_commandLineOptionMap var_stringListOptionMap ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_optionComponentIsPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1063)) ;
  GALGAS_bool var_found = var_boolOptionMap.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1071)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1071)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType ;
  const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1073)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_found = var_uintOptionMap.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1074)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1074)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType ;
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1077)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_found = var_stringOptionMap.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1078)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1078)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }
  const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1081)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_found = var_stringListOptionMap.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1082)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1082)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringListType ;
  }
  const enumGalgasBool test_3 = var_found.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1086)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1089)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1091)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1092))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1087)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1093)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1096)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1098)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1099))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1094)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1100)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1103)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1105)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1106))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1101)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1107)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1110)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1112)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1113))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1108)) ;
          }else if (kBoolFalse == test_7) {
            GALGAS_location location_8 (object->mAttribute_mOptionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_8, GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1115)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_3) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_commandLineOptionMap enumerator_62232 (var_boolOptionMap, kEnumeration_up) ;
    while (enumerator_62232.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_62232.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1120)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1120)).add_operation (GALGAS_string ("' @bool option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1120)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1120)) ;
      enumerator_62232.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_62318 (var_uintOptionMap, kEnumeration_up) ;
    while (enumerator_62318.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_62318.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)).add_operation (GALGAS_string ("' @uint option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)) ;
      enumerator_62318.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_62406 (var_stringOptionMap, kEnumeration_up) ;
    while (enumerator_62406.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_62406.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)).add_operation (GALGAS_string ("' @string option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)) ;
      enumerator_62406.gotoNextObject () ;
    }
    GALGAS_location location_9 (object->mAttribute_mOptionEntryName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("the '").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)).add_operation (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)).add_operation (GALGAS_string ("' option; available options:"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1128)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                 categoryMethod_optionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionExpressionAST_analyzeSemanticExpression (defineCategoryMethod_optionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@orExpressionAST enterExpressionInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1198)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1199)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                        categoryMethod_orExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_orExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@orExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1211)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1210)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1218)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1217)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1224)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1227)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1228)).operator_and (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1228)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1228)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1225)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1234)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                 categoryMethod_orExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionAST_analyzeSemanticExpression (defineCategoryMethod_orExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@orShortExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1246)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1247)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                        categoryMethod_orShortExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_orShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@orShortExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1259)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1258)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1266)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1265)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1272)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1275)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1276)).operator_and (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1276)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1276)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1273)) ;
  }
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1282)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orShortExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                 categoryMethod_orShortExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionAST_analyzeSemanticExpression (defineCategoryMethod_orShortExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@andExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1294)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1295)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                        categoryMethod_andExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_andExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@andExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1307)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1306)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1314)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1313)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1320)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1323)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1324)).operator_and (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1324)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1324)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1321)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1330)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                 categoryMethod_andExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionAST_analyzeSemanticExpression (defineCategoryMethod_andExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@andShortExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1342)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1343)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                        categoryMethod_andShortExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andShortExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_andShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@andShortExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1355)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1354)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1362)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1361)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1368)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1371)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1372)).operator_and (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1372)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1372)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1369)) ;
  }
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1378)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andShortExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                 categoryMethod_andShortExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andShortExpressionAST_analyzeSemanticExpression (defineCategoryMethod_andShortExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@xorExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_xorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1390)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1391)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_xorExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                        categoryMethod_xorExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_xorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@xorExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_xorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1403)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1402)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1410)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1409)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1416)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1419)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1420)).operator_and (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1420)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1420)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("^"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1417)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1426)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_xorExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                 categoryMethod_xorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionAST_analyzeSemanticExpression (defineCategoryMethod_xorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@closedSliceExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1439)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1440)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                        categoryMethod_closedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_closedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@closedSliceExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_closedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1453)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1452)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1460)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1459)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1466)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1467)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_leftExpression.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1468)), GALGAS_string ("the left expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1468)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1470)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1471)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_rightExpression.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1472)), GALGAS_string ("the right expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1472)) ;
  }
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1476))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1476)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1476)), object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1475)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_closedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                 categoryMethod_closedSliceExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionAST_analyzeSemanticExpression (defineCategoryMethod_closedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@openedSliceExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1488)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1489)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                        categoryMethod_openedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_openedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@openedSliceExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_openedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1502)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1501)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1509)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1508)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1515)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1516)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_leftExpression.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1517)), GALGAS_string ("the left expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1517)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1519)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1520)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_rightExpression.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1521)), GALGAS_string ("the right expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1521)) ;
  }
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1525))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1525)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1525)), object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1524)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_openedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                 categoryMethod_openedSliceExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionAST_analyzeSemanticExpression (defineCategoryMethod_openedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@equalExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_equalExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionAST * object = (const cPtr_equalExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1537)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1538)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_equalExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_equalExpressionAST.mSlotID,
                                                        categoryMethod_equalExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_equalExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@equalExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_equalExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionAST * object = (const cPtr_equalExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1550)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1550)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1551)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1554)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1556)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1557)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1557)).objectCompare (var_rightType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1557)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1557)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1559)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1559)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1559)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1559)).add_operation (var_rightType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1559)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1559)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1559)).add_operation (GALGAS_string ("': '==' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1559))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1558)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_equalExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1563)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_equalExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_equalExpressionAST.mSlotID,
                                                 categoryMethod_equalExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionAST_analyzeSemanticExpression (defineCategoryMethod_equalExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@notEqualExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionAST * object = (const cPtr_notEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1577)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1578)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_notEqualExpressionAST.mSlotID,
                                                        categoryMethod_notEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_notEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@notEqualExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionAST * object = (const cPtr_notEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1590)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1589)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1595)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1597)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1604)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)).objectCompare (var_rightType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1607)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1607)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1607)).add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1607)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1607)).add_operation (GALGAS_string ("': '!=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1607))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1606)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1611)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notEqualExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notEqualExpressionAST.mSlotID,
                                                 categoryMethod_notEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionAST_analyzeSemanticExpression (defineCategoryMethod_notEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@lowerOrEqualExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionAST * object = (const cPtr_lowerOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1624)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1625)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lowerOrEqualExpressionAST.mSlotID,
                                                        categoryMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lowerOrEqualExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionAST * object = (const cPtr_lowerOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1637)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1636)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1644)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1643)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1650)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1651)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1652)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1652)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1652)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1654)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1654)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1654))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1653)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1656)).objectCompare (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1656)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1658)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1658)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1658)).add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1658)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1658)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1658))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1657)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1662)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lowerOrEqualExpressionAST.mSlotID,
                                                 categoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (defineCategoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@greaterOrEqualExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionAST * object = (const cPtr_greaterOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1675)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1676)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_greaterOrEqualExpressionAST.mSlotID,
                                                        categoryMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@greaterOrEqualExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionAST * object = (const cPtr_greaterOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1688)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1687)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1693)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1695)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1702)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1703)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1703)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1703)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1705)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1705)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1705))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1704)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1707)).objectCompare (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1707)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1709)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1709)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1709)).add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1709)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1709)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1709))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1708)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1713)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_greaterOrEqualExpressionAST.mSlotID,
                                                 categoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (defineCategoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@strictGreaterExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionAST * object = (const cPtr_strictGreaterExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1726)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1727)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_strictGreaterExpressionAST.mSlotID,
                                                        categoryMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@strictGreaterExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionAST * object = (const cPtr_strictGreaterExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1739)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1738)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1744)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1746)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1753)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1754)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1754)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1754)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1756)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1756)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1756))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1755)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1758)).objectCompare (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1758)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1760)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1760)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1760)).add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1760)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1760)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1760))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1759)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1764)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_strictGreaterExpressionAST.mSlotID,
                                                 categoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionAST_analyzeSemanticExpression (defineCategoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@strictLowerExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionAST * object = (const cPtr_strictLowerExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1777)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1778)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_strictLowerExpressionAST.mSlotID,
                                                        categoryMethod_strictLowerExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_strictLowerExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@strictLowerExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictLowerExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionAST * object = (const cPtr_strictLowerExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1790)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1789)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1795)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1797)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1804)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1806)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1809)).objectCompare (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1809)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1811)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1811)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1811)).add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1811)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1811)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1811))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1810)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1815)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictLowerExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_strictLowerExpressionAST.mSlotID,
                                                 categoryMethod_strictLowerExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionAST_analyzeSemanticExpression (defineCategoryMethod_strictLowerExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@rightShiftExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1828)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1829)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_rightShiftExpressionAST.mSlotID,
                                                        categoryMethod_rightShiftExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_rightShiftExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@rightShiftExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_rightShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1841)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1840)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1848)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1847)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1854)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1855)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1856)).operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1856)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1856)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1858)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1858)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1858))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1857)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1860)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1862)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1862)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1862))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1861)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1866)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_rightShiftExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_rightShiftExpressionAST.mSlotID,
                                                 categoryMethod_rightShiftExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionAST_analyzeSemanticExpression (defineCategoryMethod_rightShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@leftShiftExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1879)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1880)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_leftShiftExpressionAST.mSlotID,
                                                        categoryMethod_leftShiftExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_leftShiftExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@leftShiftExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_leftShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1892)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1891)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1899)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1898)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1905)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1906)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1907)).operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1907)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1907)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1909)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1909)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1909))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1908)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1911)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1913)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1913)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1913))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1912)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1917)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_leftShiftExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_leftShiftExpressionAST.mSlotID,
                                                 categoryMethod_leftShiftExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionAST_analyzeSemanticExpression (defineCategoryMethod_leftShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1930)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1931)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_addExpressionNoOverflowAST.mSlotID,
                                                        categoryMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (defineCategoryMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@addExpressionNoOverflowAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1944)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1943)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1951)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1950)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1957)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1960)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1961)).operator_and (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1961)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1961)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1958)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionNoOverflowForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1967)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_addExpressionNoOverflowAST.mSlotID,
                                                 categoryMethod_addExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (defineCategoryMethod_addExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@addExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1980)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1981)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_addExpressionAST.mSlotID,
                                                        categoryMethod_addExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_addExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@addExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1993)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1992)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2000)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1999)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2006)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2009)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2010)).operator_and (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2010)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2010)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2007)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2016)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_addExpressionAST.mSlotID,
                                                 categoryMethod_addExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionAST_analyzeSemanticExpression (defineCategoryMethod_addExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2029)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2030)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_subExpressionNoOverflowAST.mSlotID,
                                                        categoryMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (defineCategoryMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@subExpressionNoOverflowAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2043)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2042)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2050)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2049)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2056)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2059)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2060)).operator_and (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2060)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2060)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2057)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionNoOverflowForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2066)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_subExpressionNoOverflowAST.mSlotID,
                                                 categoryMethod_subExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (defineCategoryMethod_subExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@subExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2079)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2080)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_subExpressionAST.mSlotID,
                                                        categoryMethod_subExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_subExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@subExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2092)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2091)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2099)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2098)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2105)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2108)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2109)).operator_and (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2109)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2109)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2106)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2115)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_subExpressionAST.mSlotID,
                                                 categoryMethod_subExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionAST_analyzeSemanticExpression (defineCategoryMethod_subExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2129)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST.mSlotID,
                                                        categoryMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (defineCategoryMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2141)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2140)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2148)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2147)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2154)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2157)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2158)).operator_and (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2158)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2158)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2155)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2164)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST.mSlotID,
                                                 categoryMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (defineCategoryMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@multiplicationExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2176)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2177)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_multiplicationExpressionAST.mSlotID,
                                                        categoryMethod_multiplicationExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_multiplicationExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@multiplicationExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2189)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2188)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2196)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2195)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2202)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2205)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2206)).operator_and (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2206)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2206)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2203)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2212)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_multiplicationExpressionAST.mSlotID,
                                                 categoryMethod_multiplicationExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionAST_analyzeSemanticExpression (defineCategoryMethod_multiplicationExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2224)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2225)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST.mSlotID,
                                                        categoryMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (defineCategoryMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2237)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2236)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2244)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2243)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2250)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2253)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2254)).operator_and (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2254)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2254)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2251)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionNoOverflowForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2260)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST.mSlotID,
                                                 categoryMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (defineCategoryMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@divisionExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2273)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2274)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_divisionExpressionAST.mSlotID,
                                                        categoryMethod_divisionExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_divisionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@divisionExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2286)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2285)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2293)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2292)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2299)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2302)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2303)).operator_and (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2303)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2303)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2300)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2309)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_divisionExpressionAST.mSlotID,
                                                 categoryMethod_divisionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionAST_analyzeSemanticExpression (defineCategoryMethod_divisionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@moduloExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_moduloExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2321)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2322)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_moduloExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                        categoryMethod_moduloExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_moduloExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@moduloExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_moduloExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2334)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2333)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2341)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2340)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2347)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2350)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2351)).operator_and (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2351)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2351)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("mod"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2348)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2357)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_moduloExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                 categoryMethod_moduloExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionAST_analyzeSemanticExpression (defineCategoryMethod_moduloExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@unaryMinusNoOverflowExpressionAST enterExpressionInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusNoOverflowExpressionAST * object = (const cPtr_unaryMinusNoOverflowExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusNoOverflowExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2369)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST.mSlotID,
                                                        categoryMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@unaryMinusNoOverflowExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusNoOverflowExpressionAST * object = (const cPtr_unaryMinusNoOverflowExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusNoOverflowExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2381)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2381)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2383)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2384)).operator_and (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2384)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2384)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2386)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2386)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2386))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2385)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionNoOverflowForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2390)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST.mSlotID,
                                                 categoryMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (defineCategoryMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@unaryMinusExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2402)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryMinusExpressionAST.mSlotID,
                                                        categoryMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@unaryMinusExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2414)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2414)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2416)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2417)).operator_and (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2417)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2417)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2419)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2419)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2419))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2418)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2423)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionAST.mSlotID,
                                                 categoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionAST_analyzeSemanticExpression (defineCategoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@unaryPlusExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryPlusExpressionAST * object = (const cPtr_unaryPlusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryPlusExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2435)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryPlusExpressionAST.mSlotID,
                                                        categoryMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@unaryPlusExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryPlusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryPlusExpressionAST * object = (const cPtr_unaryPlusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryPlusExpressionAST) ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2446)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2446)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = outArgument_outExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2448)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2449)).operator_and (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2449)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2449)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2451)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2451)).add_operation (GALGAS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2451))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2450)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryPlusExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryPlusExpressionAST.mSlotID,
                                                 categoryMethod_unaryPlusExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryPlusExpressionAST_analyzeSemanticExpression (defineCategoryMethod_unaryPlusExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@notExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2461)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                        categoryMethod_notExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_notExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@notExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2473)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2473)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2475)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2476)).operator_and (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2476)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2476)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2478)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2478)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2478))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2477)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2482)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                 categoryMethod_notExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notExpressionAST_analyzeSemanticExpression (defineCategoryMethod_notExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@structFieldAccessExpressionAST enterExpressionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_structFieldAccessExpressionAST.mSlotID,
                                                        categoryMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@structFieldAccessExpressionAST analyzeSemanticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionAST * object = (const cPtr_structFieldAccessExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2506)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2505)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2512)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2513)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2513)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mStructFieldName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '.' operator requires the receiver to be a struct")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2514)) ;
  }
  GALGAS_attributeMap var_attributeMap = var_type.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2516)) ;
  var_attributeMap.method_searchKey (object->mAttribute_mStructFieldName, var_type, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2517)) ;
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression, object->mAttribute_mStructFieldName.mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2523)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_structFieldAccessExpressionAST.mSlotID,
                                                 categoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (defineCategoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@complementExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_complementExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2536)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_complementExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_complementExpressionAST.mSlotID,
                                                        categoryMethod_complementExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complementExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_complementExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@complementExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_complementExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2548)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2548)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2550)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2551)).operator_and (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2551)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2551)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2553)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2553)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2553))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2552)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2557)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_complementExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_complementExpressionAST.mSlotID,
                                                 categoryMethod_complementExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complementExpressionAST_analyzeSemanticExpression (defineCategoryMethod_complementExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ifExpressionAST enterExpressionInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mIfExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2569)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mThenExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2570)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mElseExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2571)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                        categoryMethod_ifExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_ifExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@ifExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_if_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mIfExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2583)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_if_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2583)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mThenExpression.ptr (), constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_then_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2586)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mElseExpression.ptr (), constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_else_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2589)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_if_5F_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2591)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2591)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("the test expression type is '@").add_operation (var_if_5F_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2593)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2593)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2593)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2593))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2592)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_then_5F_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2595)).objectCompare (var_else_5F_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2595)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand expression types are '@").add_operation (var_then_5F_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2597)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2597)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2597)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2597)).add_operation (var_else_5F_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2597)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2597)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2597)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2597))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2596)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2602)), object->mAttribute_mOperatorLocation, var_if_5F_expression, var_then_5F_expression, var_else_5F_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2601)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                 categoryMethod_ifExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeSemanticExpression (defineCategoryMethod_ifExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@functionCallExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  cEnumerator_actualOutputExpressionList enumerator_116560 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_116560.hasCurrentObject ()) {
    callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_116560.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2617)) ;
    enumerator_116560.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                        categoryMethod_functionCallExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_functionCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@functionCallExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  GALGAS_functionSignature var_functionSignature ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  GALGAS_bool var_isInternal ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionName, var_functionSignature, var_resultType, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2629)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.getter_locationForKey (object->mAttribute_mFunctionName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2637)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFunctionName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2638)).objectCompare (var_procDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2638)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2639)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2639)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2639))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2639)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_functionSignature.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2643)).objectCompare (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2643)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2645)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2645)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2645)).add_operation (var_functionSignature.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2645)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2645)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2645)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2645)).add_operation (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2646)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2646)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2646)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2646))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2644)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2650)) ;
    cEnumerator_functionSignature enumerator_118083 (var_functionSignature, kEnumeration_up) ;
    cEnumerator_actualOutputExpressionList enumerator_118106 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    while (enumerator_118083.hasCurrentObject () && enumerator_118106.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_118106.current_mExpression (HERE).ptr (), enumerator_118083.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2652)) ;
      {
      routine_checkAssignmentTypes (enumerator_118083.current_mFormalArgumentType (HERE), var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2658)), enumerator_118106.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2658)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_118083.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_118106.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_118083.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = enumerator_118083.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2660)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_8 (enumerator_118106.current_mActualSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2660)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2660))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2660)) ;
      }
      var_semanticExpressionListForGeneration.addAssign_operation (var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2662)) ;
      enumerator_118083.gotoNextObject () ;
      enumerator_118106.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType, object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2666)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2667)), var_semanticExpressionListForGeneration  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2664)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                 categoryMethod_functionCallExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallExpressionAST_analyzeSemanticExpression (defineCategoryMethod_functionCallExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@varInExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                        categoryMethod_varInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_varInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@varInExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_string var_sourceVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  {
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mAttribute_mVarName, var_type, var_sourceVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2686)) ;
  }
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type, object->mAttribute_mVarName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2694)), var_sourceVariableCppName, var_nameForCheckingFormalParameterUsing  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2692)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                 categoryMethod_varInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_varInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalTypeInExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                        categoryMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalTypeInExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  GALGAS_bool joker_120548_26 ; // Joker input parameter
  GALGAS_bool joker_120548_25 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_120548_24 ; // Joker input parameter
  GALGAS_typeKindEnum joker_120548_23 ; // Joker input parameter
  GALGAS_bool joker_120548_22 ; // Joker input parameter
  GALGAS_typedPropertyList joker_120548_21 ; // Joker input parameter
  GALGAS_attributeMap joker_120548_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_120548_19 ; // Joker input parameter
  GALGAS_constructorMap joker_120548_18 ; // Joker input parameter
  GALGAS_getterMap joker_120548_17 ; // Joker input parameter
  GALGAS_setterMap joker_120548_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_120548_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_120548_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_120548_13 ; // Joker input parameter
  GALGAS_stringlist joker_120548_12 ; // Joker input parameter
  GALGAS_uint joker_120548_11 ; // Joker input parameter
  GALGAS_functionSignature joker_120548_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_120548_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_120548_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_120548_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_120548_6 ; // Joker input parameter
  GALGAS_bool joker_120548_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_120548_4 ; // Joker input parameter
  GALGAS_string joker_120548_3 ; // Joker input parameter
  GALGAS_string joker_120548_2 ; // Joker input parameter
  GALGAS_headerKind joker_120548_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mLiteralTypeName, joker_120548_26, joker_120548_25, joker_120548_24, joker_120548_23, joker_120548_22, joker_120548_21, joker_120548_20, joker_120548_19, joker_120548_18, joker_120548_17, joker_120548_16, joker_120548_15, joker_120548_14, joker_120548_13, joker_120548_12, joker_120548_11, joker_120548_10, joker_120548_9, joker_120548_8, joker_120548_7, joker_120548_6, joker_120548_5, joker_120548_4, joker_120548_3, joker_120548_2, joker_120548_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2715)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2718))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2718)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2718)), object->mAttribute_mLiteralTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2719)), object->mAttribute_mLiteralTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2720))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2717)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                 categoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2728)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST.mSlotID,
                                                        categoryMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@testDynamicClassInExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2740)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2740)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_castType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2742)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2744)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2744)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2744)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = var_castType ;
    GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2747)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2748)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2748)).isValid ()) {
      uint32_t variant_122093 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2748)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2748)).uintValue () ;
      bool loop_122093 = true ;
      while (loop_122093) {
        loop_122093 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).operator_and (var_t.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).isValid () ;
        if (loop_122093) {
          loop_122093 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).operator_and (var_t.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).boolValue () ;
        }
        if (loop_122093 && (0 == variant_122093)) {
          loop_122093 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2748)) ;
        }
        if (loop_122093) {
          variant_122093 -- ;
          var_t = var_t.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2750)) ;
          var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2751)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2753)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2755)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2755)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2755)).add_operation (var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2755)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2755)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2755)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2755))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2754)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->emitSemanticError (var_expression.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2758)), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2759)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2759)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2758)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2759))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2758)) ;
  }
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2764)), var_expression, object->mAttribute_mTypeComparisonKind, var_castType  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2762)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST.mSlotID,
                                                 categoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression, NULL) ;

