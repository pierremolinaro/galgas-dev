#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-24.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@bigintPredefinedTypeAST getSetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bigintPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_setterMap & outArgument_outSetterMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 277)) ;
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), GALGAS_string ("inBit"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 278)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("complementBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 288)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bigintPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                     extensionMethod_bigintPredefinedTypeAST_getSetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getSetterMap (defineExtensionMethod_bigintPredefinedTypeAST_getSetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@timerPredefinedTypeAST getSetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_timerPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                 GALGAS_setterMap & outArgument_outSetterMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 304)) ;
  {
  routine_enterModifierWithoutArgument (outArgument_outSetterMap, GALGAS_string ("stop"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 305)) ;
  }
  {
  routine_enterModifierWithoutArgument (outArgument_outSetterMap, GALGAS_string ("resume"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 310)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_timerPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                     extensionMethod_timerPredefinedTypeAST_getSetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getSetterMap (defineExtensionMethod_timerPredefinedTypeAST_getSetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@dataPredefinedTypeAST getInstanceMethodMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_dataPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 89)) ;
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 90)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 98)) ;
  }
  GALGAS_formalParameterSignature var_argList_5054 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 106)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_5110 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_5110 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 108)) ;
  }
  var_argList_5054.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)), var_t_5110, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_5110 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 110)) ;
  }
  var_argList_5054.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 111)), var_t_5110, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 111)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 111)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 113))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 113)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 114)), var_argList_5054, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 116)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 118)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 112)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_dataPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                             extensionMethod_dataPredefinedTypeAST_getInstanceMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_dataPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@stringPredefinedTypeAST getInstanceMethodMap'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
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
  GALGAS_formalParameterSignature var_argList_7276 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 176)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_7380 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_7380 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 177)) ;
  }
  var_argList_7276.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), var_t_7380, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_7380 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 179)) ;
  }
  var_argList_7276.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)), var_t_7380, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 182))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 182)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 183)), var_argList_7276, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 185)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 187)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 181)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToExecutableFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 191))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 191)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 192)), var_argList_7276, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 194)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 196)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 190)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                             extensionMethod_stringPredefinedTypeAST_getInstanceMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_stringPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@bigintPredefinedTypeAST getInstanceMethodMap'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 207)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_bigIntType_8552 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), var_bigIntType_8552 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 209)) ;
  }
  GALGAS_formalParameterSignature var_argList_8589 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 210)) ;
  var_argList_8589.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)), var_bigIntType_8552, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)), GALGAS_string ("inDivisor")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)) ;
  var_argList_8589.addAssign_operation (GALGAS_string ("quotient").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)), var_bigIntType_8552, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)), GALGAS_string ("outQuotient")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)) ;
  var_argList_8589.addAssign_operation (GALGAS_string ("remainder").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)), var_bigIntType_8552, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)), GALGAS_string ("outRemainder")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("divideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 215))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 215)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 216)), var_argList_8589, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 218)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 220)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 214)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("floorDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 224))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 224)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 225)), var_argList_8589, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 227)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 229)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 223)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ceilDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 233))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 233)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 234)), var_argList_8589, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 236)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 238)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 232)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                             extensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@stringPredefinedTypeAST getClassMethodMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
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
  GALGAS_unifiedTypeMap_2D_proxy var_stringType_4145 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_4145 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 66)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolType_4254 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_boolType_4254 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 67)) ;
  }
  GALGAS_formalParameterSignature var_argList_4269 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 68)) ;
  var_argList_4269.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 69)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 69)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 69)) ;
  var_argList_4269.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 70)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 70)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 70)) ;
  var_argList_4269.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 71)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 71)), GALGAS_string ("inContents")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 71)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("generateFile"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 73))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 73)), var_argList_4269, GALGAS_bool (true) COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 72)) ;
  }
  var_argList_4269 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 77)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("startPath").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 78)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 78)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 78)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("fileName").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 79)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 79)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 79)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("lineComment").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 80)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 80)), GALGAS_string ("inLineCommentPrefix")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 80)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("header").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 81)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 81)), GALGAS_string ("inHeader")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 81)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), GALGAS_string ("inDefaultUserZone1")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 82)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 83)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 83)), GALGAS_string ("inGeneratedZone2")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 83)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 84)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 84)), GALGAS_string ("inDefaultUserZone2")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 84)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 85)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 85)), GALGAS_string ("inGeneratedZone3")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 85)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 86)), var_boolType_4254, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 86)), GALGAS_string ("inMakeExecutable")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 86)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("generateFileWithPattern"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 88))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 88)), var_argList_4269, GALGAS_bool (true) COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 87)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringPredefinedTypeAST_getClassMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_stringPredefinedTypeAST_getClassMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@binarysetPredefinedTypeAST getClassMethodMap'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binarysetPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
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

static void defineExtensionMethod_binarysetPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                          extensionMethod_binarysetPredefinedTypeAST_getClassMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_binarysetPredefinedTypeAST_getClassMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@galgas3GrammarComponentAST keyRepresentation'                     *
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

static void defineExtensionGetter_galgas_33_GrammarComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                          extensionGetter_galgas_33_GrammarComponentAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_galgas_33_GrammarComponentAST_keyRepresentation (defineExtensionGetter_galgas_33_GrammarComponentAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@galgas3SyntaxComponentAST keyRepresentation'                      *
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

static void defineExtensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                          extensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_galgas_33_SyntaxComponentAST_keyRepresentation (defineExtensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@lexiqueComponentAST keyRepresentation'                         *
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

static void defineExtensionGetter_lexiqueComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                          extensionGetter_lexiqueComponentAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexiqueComponentAST_keyRepresentation (defineExtensionGetter_lexiqueComponentAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@predefinedTypeAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_predefinedTypeAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  result_outString = GALGAS_string ("predefined type @").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 333)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_predefinedTypeAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                          extensionGetter_predefinedTypeAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_predefinedTypeAST_keyRepresentation (defineExtensionGetter_predefinedTypeAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@mapDeclarationAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_mapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  result_outString = GALGAS_string ("map @").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 340)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_mapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                          extensionGetter_mapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_mapDeclarationAST_keyRepresentation (defineExtensionGetter_mapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@mapProxyDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_mapProxyDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  result_outString = GALGAS_string ("map proxy @").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 347)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_mapProxyDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                          extensionGetter_mapProxyDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_mapProxyDeclarationAST_keyRepresentation (defineExtensionGetter_mapProxyDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@enumDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_enumDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  result_outString = GALGAS_string ("enum @").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 354)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_enumDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                          extensionGetter_enumDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumDeclarationAST_keyRepresentation (defineExtensionGetter_enumDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@sortedListDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_sortedListDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  result_outString = GALGAS_string ("sorted list @").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 361)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_sortedListDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                          extensionGetter_sortedListDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_sortedListDeclarationAST_keyRepresentation (defineExtensionGetter_sortedListDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@structDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_structDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  result_outString = GALGAS_string ("struct @").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 368)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_structDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                          extensionGetter_structDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structDeclarationAST_keyRepresentation (defineExtensionGetter_structDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@listDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_listDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  result_outString = GALGAS_string ("list @").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 375)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_listDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                          extensionGetter_listDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_listDeclarationAST_keyRepresentation (defineExtensionGetter_listDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@classDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_classDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  result_outString = GALGAS_string ("class @").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 382)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_classDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                          extensionGetter_classDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_classDeclarationAST_keyRepresentation (defineExtensionGetter_classDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@arrayDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_arrayDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  result_outString = GALGAS_string ("array @").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 389)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_arrayDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                          extensionGetter_arrayDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_arrayDeclarationAST_keyRepresentation (defineExtensionGetter_arrayDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@listmapDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_listmapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  result_outString = GALGAS_string ("listmap @").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 396)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_listmapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                          extensionGetter_listmapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_listmapDeclarationAST_keyRepresentation (defineExtensionGetter_listmapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@filewrapperDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_filewrapperDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  result_outString = GALGAS_string ("filewrapper @").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticContext.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 403)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_filewrapperDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                          extensionGetter_filewrapperDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_filewrapperDeclarationAST_keyRepresentation (defineExtensionGetter_filewrapperDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@optionComponentDeclarationAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_optionComponentDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  result_outString = GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 410)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_optionComponentDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                          extensionGetter_optionComponentDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_optionComponentDeclarationAST_keyRepresentation (defineExtensionGetter_optionComponentDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@graphDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_graphDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  result_outString = GALGAS_string ("graph @").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 417)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_graphDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                          extensionGetter_graphDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_graphDeclarationAST_keyRepresentation (defineExtensionGetter_graphDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@externTypeDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_externTypeDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  result_outString = GALGAS_string ("extern @").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 424)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_externTypeDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                          extensionGetter_externTypeDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_externTypeDeclarationAST_keyRepresentation (defineExtensionGetter_externTypeDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@onceFunctionDeclarationAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_onceFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  result_outString = GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticContext.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 431)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_onceFunctionDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                          extensionGetter_onceFunctionDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_onceFunctionDeclarationAST_keyRepresentation (defineExtensionGetter_onceFunctionDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@externFunctionDeclarationAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_externFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  result_outString = GALGAS_string ("extern function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticContext.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 438)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_externFunctionDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                          extensionGetter_externFunctionDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_externFunctionDeclarationAST_keyRepresentation (defineExtensionGetter_externFunctionDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@externRoutineDeclarationAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_externRoutineDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  result_outString = GALGAS_string ("extern routine ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticContext.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 445)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_externRoutineDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                          extensionGetter_externRoutineDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_externRoutineDeclarationAST_keyRepresentation (defineExtensionGetter_externRoutineDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@predefinedTypeAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                      const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                      const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  GALGAS_constructorMap var_constructorMap_28650 ;
  const GALGAS_predefinedTypeAST temp_0 = object ;
  callExtensionMethod_getConstructorMap ((const cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_constructorMap_28650, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 579)) ;
  GALGAS_getterMap var_getterMap_28727 ;
  const GALGAS_predefinedTypeAST temp_1 = object ;
  callExtensionMethod_getGetterMap ((const cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_28727, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 580)) ;
  GALGAS_setterMap var_setterMap_28804 ;
  const GALGAS_predefinedTypeAST temp_2 = object ;
  callExtensionMethod_getSetterMap ((const cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_setterMap_28804, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 581)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_28905 ;
  const GALGAS_predefinedTypeAST temp_3 = object ;
  callExtensionMethod_getInstanceMethodMap ((const cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_instanceMethodMap_28905, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 582)) ;
  GALGAS_classMethodMap var_classMethodMap_28997 ;
  const GALGAS_predefinedTypeAST temp_4 = object ;
  callExtensionMethod_getClassMethodMap ((const cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_classMethodMap_28997, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 583)) ;
  GALGAS_functionSignature var_addAssignArgumentList_29106 ;
  const GALGAS_predefinedTypeAST temp_5 = object ;
  callExtensionMethod_getAddAssignArgumentList ((const cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_addAssignArgumentList_29106, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 584)) ;
  GALGAS_enumerationDescriptorList var_enumerationList_29219 ;
  GALGAS_stringlist var_enumerationVariants_29260 ;
  GALGAS_string var_enumeratedTypeName_29296 ;
  const GALGAS_predefinedTypeAST temp_6 = object ;
  callExtensionMethod_getEnumerationList ((const cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumerationList_29219, var_enumerationVariants_29260, var_enumeratedTypeName_29296, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 585)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_29448 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mPredefinedTypeName, var_selfTypeProxy_29448 COMMA_SOURCE_FILE ("semanticContext.galgas", 591)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedTypeProxy_29513 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_enumeratedTypeName_29296.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    var_enumeratedTypeProxy_29513 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 599)) ;
  }else if (kBoolFalse == test_7) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumeratedTypeName_29296, var_enumeratedTypeProxy_29513 COMMA_SOURCE_FILE ("semanticContext.galgas", 601)) ;
    }
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 609))  COMMA_SOURCE_FILE ("semanticContext.galgas", 609)), var_getterMap_28727, var_setterMap_28804, var_instanceMethodMap_28905, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 604)) ;
  }
  {
  const GALGAS_predefinedTypeAST temp_8 = object ;
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 616))  COMMA_SOURCE_FILE ("semanticContext.galgas", 616)), object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 619)), GALGAS_typeKindEnum::constructor_predefinedType (SOURCE_FILE ("semanticContext.galgas", 620)), GALGAS_bool (kIsEqual, object->mAttribute_mPredefinedTypeName.objectCompare (GALGAS_string ("stringset"))), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 622)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 623)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 624)), var_constructorMap_28650, var_getterMap_28727, var_setterMap_28804, var_instanceMethodMap_28905, var_classMethodMap_28997, var_enumerationList_29219, var_enumerationVariants_29260, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_8.ptr (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 632)), var_addAssignArgumentList_29106, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 634)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 635)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 636)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 637)), GALGAS_bool (false), var_enumeratedTypeProxy_29513, extensionGetter_defaultConstructorName (object->mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 640)), GALGAS_string ("galgas2/predefined-types"), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 615)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                               extensionMethod_predefinedTypeAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_enterInSemanticContext (defineExtensionMethod_predefinedTypeAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@filewrapperDeclarationAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                              const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                              const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                              const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_34236 = GALGAS_filewrapperTemplateMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 731)) ;
  cEnumerator_filewrapperTemplateListAST enumerator_34309 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
  while (enumerator_34309.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature_34338 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 733)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_34417 (enumerator_34309.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_34417.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_34467 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_34417.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_34467 COMMA_SOURCE_FILE ("semanticContext.galgas", 736)) ;
      }
      var_templateSignature_34338.addAssign_operation (enumerator_34417.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex_34467, enumerator_34417.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 737)) ;
      enumerator_34417.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_34236.setter_insertKey (enumerator_34309.current_mFilewrapperTemplateName (HERE), var_templateSignature_34338, enumerator_34309.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 739)) ;
    }
    enumerator_34309.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap_34888 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 746)) ;
  cEnumerator_lstringlist enumerator_34967 (object->mAttribute_mFilewrapperTextFileExtensionList, kEnumeration_up) ;
  while (enumerator_34967.hasCurrentObject ()) {
    {
    var_textExtensionMap_34888.setter_insertKey (enumerator_34967.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 748)) ;
    }
    enumerator_34967.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap_35085 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 751)) ;
  cEnumerator_lstringlist enumerator_35166 (object->mAttribute_mFilewrapperBinaryFileExtensionList, kEnumeration_up) ;
  while (enumerator_35166.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_textExtensionMap_34888.getter_hasKey (enumerator_35166.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticContext.galgas", 753)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_35166.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 754)), GALGAS_string ("the '").add_operation (enumerator_35166.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 754)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 754)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 754))  COMMA_SOURCE_FILE ("semanticContext.galgas", 754)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_binaryFileExtensionMap_35085.setter_insertKey (enumerator_35166.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 756)) ;
      }
    }
    enumerator_35166.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap_35447 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_35490 ;
  GALGAS_string var_absoluteSourcePath_35519 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 763)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 763)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_absoluteSourcePath_35519 = object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 764)) ;
  }else if (kBoolFalse == test_1) {
    var_absoluteSourcePath_35519 = object->mAttribute_mSourceFileAbsolutePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 766)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 766)).add_operation (object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 766)) ;
  }
  const enumGalgasBool test_2 = var_absoluteSourcePath_35519.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 768)).operator_not (SOURCE_FILE ("semanticContext.galgas", 768)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticContext.galgas", 769)), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_35519, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 769)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 769))  COMMA_SOURCE_FILE ("semanticContext.galgas", 769)) ;
    var_regularRootFileMap_35447.drop () ; // Release error dropped variable
    var_wrapperDirectoryMap_35490.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_wrapperFileIndex_36011 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_wrapperDirectoryIndex_36047 = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_recursivelyEnumerateDirectories (var_absoluteSourcePath_35519, GALGAS_string ("/"), var_textExtensionMap_34888, var_binaryFileExtensionMap_35085, var_regularRootFileMap_35447, var_wrapperDirectoryMap_35490, var_wrapperFileIndex_36011, var_wrapperDirectoryIndex_36047, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 775)) ;
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFilewrapperMap.setter_insertKey (object->mAttribute_mFilewrapperName, object->mAttribute_mFilewrapperPath, object->mAttribute_mFilewrapperTextFileExtensionList, var_regularRootFileMap_35447, var_wrapperDirectoryMap_35490, var_filewrapperTemplateMap_34236, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 787)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                               extensionMethod_filewrapperDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterInSemanticContext (defineExtensionMethod_filewrapperDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@optionComponentDeclarationAST enterInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionComponentDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                  const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  GALGAS_commandLineOptionMap var_boolOptionMap_37092 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 806)) ;
  GALGAS_commandLineOptionMap var_uintOptionMap_37135 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 807)) ;
  GALGAS_commandLineOptionMap var_stringOptionMap_37180 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 808)) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_37229 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 809)) ;
  GALGAS_stringset var_optionNameSet_37254 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticContext.galgas", 810)) ;
  cEnumerator_commandLineOptionListAST enumerator_37297 (object->mAttribute_mOptions, kEnumeration_up) ;
  while (enumerator_37297.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_optionNameSet_37254.getter_hasKey (enumerator_37297.current_mOptionInternalName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 812)) COMMA_SOURCE_FILE ("semanticContext.galgas", 812)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_37297.current_mOptionInternalName (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 813)), GALGAS_string ("the '").add_operation (enumerator_37297.current_mOptionInternalName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 813)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 813)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 813))  COMMA_SOURCE_FILE ("semanticContext.galgas", 813)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_37297.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 814)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        var_boolOptionMap_37092.setter_insertKey (enumerator_37297.current_mOptionInternalName (HERE), enumerator_37297.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("semanticContext.galgas", 817)), enumerator_37297.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 818)), enumerator_37297.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 819)), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 815)) ;
        }
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_37297.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("semanticContext.galgas", 822)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (enumerator_37297.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 823)), GALGAS_string ("an @bool option cannot have a default value (default value is allways false)")  COMMA_SOURCE_FILE ("semanticContext.galgas", 823)) ;
        }
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_37297.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 825)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          GALGAS_string temp_4 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_37297.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 831)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            temp_4 = GALGAS_string ("0") ;
          }else if (kBoolFalse == test_5) {
            temp_4 = enumerator_37297.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 831)) ;
          }
          var_uintOptionMap_37135.setter_insertKey (enumerator_37297.current_mOptionInternalName (HERE), enumerator_37297.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("semanticContext.galgas", 828)), enumerator_37297.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 829)), enumerator_37297.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 830)), temp_4, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 826)) ;
          }
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_37297.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("semanticContext.galgas", 833)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            inCompiler->emitSemanticError (enumerator_37297.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 834)), GALGAS_string ("an @uint option default value cannot be an @string value")  COMMA_SOURCE_FILE ("semanticContext.galgas", 834)) ;
          }
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_37297.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 836)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            var_stringOptionMap_37180.setter_insertKey (enumerator_37297.current_mOptionInternalName (HERE), enumerator_37297.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("semanticContext.galgas", 839)), enumerator_37297.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 840)), enumerator_37297.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 841)), enumerator_37297.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 842)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 837)) ;
            }
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_37297.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("semanticContext.galgas", 844)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              inCompiler->emitSemanticError (enumerator_37297.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 845)), GALGAS_string ("an @string option default value cannot be an @uint value")  COMMA_SOURCE_FILE ("semanticContext.galgas", 845)) ;
            }
          }else if (kBoolFalse == test_7) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_37297.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 847)).objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
            if (kBoolTrue == test_9) {
              {
              var_stringListOptionMap_37229.setter_insertKey (enumerator_37297.current_mOptionInternalName (HERE), enumerator_37297.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("semanticContext.galgas", 850)), enumerator_37297.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 851)), enumerator_37297.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 852)), enumerator_37297.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 848)) ;
              }
              const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_37297.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("semanticContext.galgas", 855)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                inCompiler->emitSemanticError (enumerator_37297.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 856)), GALGAS_string ("an @stringlist option cannot accept default value")  COMMA_SOURCE_FILE ("semanticContext.galgas", 856)) ;
              }
            }else if (kBoolFalse == test_9) {
              inCompiler->emitSemanticError (enumerator_37297.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 859)), GALGAS_string ("only the @bool, @uint or @string types are allowed here")  COMMA_SOURCE_FILE ("semanticContext.galgas", 859)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_37254.addAssign_operation (enumerator_37297.current_mOptionInternalName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 861))  COMMA_SOURCE_FILE ("semanticContext.galgas", 861)) ;
    enumerator_37297.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.setter_insertKey (object->mAttribute_mOptionComponentName, object->mAttribute_mIsPredefined, var_boolOptionMap_37092, var_uintOptionMap_37135, var_stringOptionMap_37180, var_stringListOptionMap_37229, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 864)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                               extensionMethod_optionComponentDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterInSemanticContext (defineExtensionMethod_optionComponentDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@externRoutineDeclarationAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externRoutineDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature_40336 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 882)) ;
  cEnumerator_formalParameterListAST enumerator_40398 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_40398.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_40516 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_40398.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_40516 COMMA_SOURCE_FILE ("semanticContext.galgas", 884)) ;
    }
    var_routineSignature_40336.addAssign_operation (enumerator_40398.current_mFormalSelector (HERE), var_parameterTypeIndex_40516, enumerator_40398.current_mFormalArgumentPassingMode (HERE), enumerator_40398.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 885)) ;
    enumerator_40398.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mRoutineMap.setter_insertKey (object->mAttribute_mRoutineName, var_routineSignature_40336, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 888)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externRoutineDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                               extensionMethod_externRoutineDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterInSemanticContext (defineExtensionMethod_externRoutineDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@routineDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_routineDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                          const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                          const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineDeclarationAST * object = (const cPtr_routineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_routineDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature_41325 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 903)) ;
  cEnumerator_formalParameterListAST enumerator_41387 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_41387.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_41505 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_41387.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_41505 COMMA_SOURCE_FILE ("semanticContext.galgas", 905)) ;
    }
    var_routineSignature_41325.addAssign_operation (enumerator_41387.current_mFormalSelector (HERE), var_parameterTypeIndex_41505, enumerator_41387.current_mFormalArgumentPassingMode (HERE), enumerator_41387.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 906)) ;
    enumerator_41387.gotoNextObject () ;
  }
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mRoutineInstructionList, ioArgument_ioSemanticContext.mAttribute_mTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 909)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mRoutineMap.setter_insertKey (object->mAttribute_mRoutineName, var_routineSignature_41325, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 911)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_routineDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_routineDeclarationAST.mSlotID,
                                               extensionMethod_routineDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineDeclarationAST_enterInSemanticContext (defineExtensionMethod_routineDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@externFunctionDeclarationAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_functionSignature var_functionSignature_42491 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 926)) ;
  cEnumerator_formalInputParameterListAST enumerator_42546 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_42546.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_42594 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_42546.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_42594 COMMA_SOURCE_FILE ("semanticContext.galgas", 929)) ;
    }
    var_functionSignature_42491.addAssign_operation (enumerator_42546.current_mFormalSelector (HERE), var_parameterTypeIndex_42594, enumerator_42546.current_mFormalArgumentTypeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 930)) ;
    enumerator_42546.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeIndex_42863 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex_42863 COMMA_SOURCE_FILE ("semanticContext.galgas", 934)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.setter_insertKey (object->mAttribute_mFunctionName, var_functionSignature_42491, var_resultTypeIndex_42863, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 936)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externFunctionDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                               extensionMethod_externFunctionDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterInSemanticContext (defineExtensionMethod_externFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@onceFunctionDeclarationAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onceFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeIndex_43786 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex_43786 COMMA_SOURCE_FILE ("semanticContext.galgas", 952)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.setter_insertKey (object->mAttribute_mFunctionName, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 954)), var_resultTypeIndex_43786, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 954)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onceFunctionDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                               extensionMethod_onceFunctionDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterInSemanticContext (defineExtensionMethod_onceFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@galgas3SyntaxComponentAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (object->mAttribute_mSyntaxComponentName, object->mAttribute_mLexiqueName, object->mAttribute_mNonterminalDeclarationList, object->mAttribute_mRuleList, object->mAttribute_mHasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 964)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                               extensionMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (defineExtensionMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@galgas3GrammarComponentAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                  const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  GALGAS_grammarLabelMap var_grammarLabelMap_45204 = GALGAS_grammarLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 981)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_45267 (object->mAttribute_mStartSymbolLabelList, kEnumeration_up) ;
  while (enumerator_45267.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_formalArgumentList_45322 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 984)) ;
    cEnumerator_formalParameterListAST enumerator_45386 (enumerator_45267.current_mFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_45386.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentType_45522 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_45386.current_mFormalArgumentTypeName (HERE), var_argumentType_45522 COMMA_SOURCE_FILE ("semanticContext.galgas", 986)) ;
      }
      var_formalArgumentList_45322.addAssign_operation (enumerator_45386.current_mFormalSelector (HERE), var_argumentType_45522, enumerator_45386.current_mFormalArgumentPassingMode (HERE), enumerator_45386.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 987)) ;
      enumerator_45386.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_45204.setter_insertKey (enumerator_45267.current_mLabelName (HERE), var_formalArgumentList_45322, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 993)) ;
    }
    enumerator_45267.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mGrammarMap.setter_insertGrammar (object->mAttribute_mGrammarComponentName, var_grammarLabelMap_45204, object->mAttribute_mHasIndexing.mAttribute_bool, object->mAttribute_mHasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 999)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                               extensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (defineExtensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@lexiqueComponentAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap_46557 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1015)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap_46625 = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1016)) ;
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_46557, object->mAttribute_mLexicalAttributeList, var_lexicalAttributeMap_46625, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1017)) ;
  }
  GALGAS_terminalMap var_terminalMap_46802 = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1023)) ;
  cEnumerator_terminalDeclarationListAST enumerator_46844 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_46844.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_46872 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1025)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_46931 (enumerator_46844.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_46931.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_46978 ;
      var_lexicalAttributeMap_46625.method_searchKey (enumerator_46931.current_mAttributeName (HERE), var_attributeLexicalType_46978, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1028)) ;
      var_argumentTypeList_46872.addAssign_operation (enumerator_46931.current_mFormalSelector (HERE), enumerator_46931.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType_46978  COMMA_SOURCE_FILE ("semanticContext.galgas", 1029)) ;
      enumerator_46931.gotoNextObject () ;
    }
    {
    var_terminalMap_46802.setter_insertKey (enumerator_46844.current_mName (HERE), var_argumentTypeList_46872, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1031)) ;
    }
    enumerator_46844.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_47256 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_47256.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_47284 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1035)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_47343 (enumerator_47256.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_47343.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_47390 ;
      var_lexicalAttributeMap_46625.method_searchKey (enumerator_47343.current_mAttributeName (HERE), var_attributeLexicalType_47390, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1038)) ;
      var_argumentTypeList_47284.addAssign_operation (enumerator_47343.current_mFormalSelector (HERE), enumerator_47343.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType_47390  COMMA_SOURCE_FILE ("semanticContext.galgas", 1039)) ;
      enumerator_47343.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_47587 (enumerator_47256.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_47587.hasCurrentObject ()) {
      {
      var_terminalMap_46802.setter_insertKey (enumerator_47587.current_mTerminalSpelling (HERE), var_argumentTypeList_47284, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1042)) ;
      }
      enumerator_47587.gotoNextObject () ;
    }
    enumerator_47256.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (object->mAttribute_mLexiqueComponentName, var_terminalMap_46802, object->mAttribute_mIndexingListAST, object->mAttribute_mIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1046)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueComponentAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                               extensionMethod_lexiqueComponentAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterInSemanticContext (defineExtensionMethod_lexiqueComponentAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@predefinedTypeAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  GALGAS_lstring var_key_49903 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1085)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1085))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1085)) ;
  {
  const GALGAS_predefinedTypeAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_49903, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1086)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                                extensionMethod_predefinedTypeAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_enterDeclarationInGraph (defineExtensionMethod_predefinedTypeAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                   GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                   GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                   GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  GALGAS_lstring var_key_50623 = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 1097)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1097)), object->mAttribute_mGrammarComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 1097)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_50623, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1098)) ;
  }
  cEnumerator_lstringlist enumerator_50794 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_50794.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_50623, GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (enumerator_50794.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1100)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1100)), enumerator_50794.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 1100)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1100)) ;
    }
    enumerator_50794.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                                extensionMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (defineExtensionMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  GALGAS_lstring var_key_51501 = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (object->mAttribute_mSyntaxComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 1112)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1112)), object->mAttribute_mSyntaxComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 1112)) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_51501, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1113)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_51501, GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueName.getter_string (SOURCE_FILE ("semanticContext.galgas", 1114)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1114)), object->mAttribute_mLexiqueName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 1114)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1114)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_51775 (object->mAttribute_mRuleList, kEnumeration_up) ;
  while (enumerator_51775.hasCurrentObject ()) {
    cEnumerator_syntaxRuleLabelListAST enumerator_51803 (enumerator_51775.current_mLabelList (HERE), kEnumeration_up) ;
    while (enumerator_51803.hasCurrentObject ()) {
      cEnumerator_formalParameterListAST enumerator_51839 (enumerator_51803.current_mFormalArguments (HERE), kEnumeration_up) ;
      while (enumerator_51839.hasCurrentObject ()) {
        switch (enumerator_51839.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_51501, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_51839.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1119)), enumerator_51839.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 1119)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1119)) ;
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
        enumerator_51839.gotoNextObject () ;
      }
      enumerator_51803.gotoNextObject () ;
    }
    enumerator_51775.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                                extensionMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (defineExtensionMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@lexiqueComponentAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lstring var_key_52740 = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 1135)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1135)), object->mAttribute_mLexiqueComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 1135)) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_52740, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1136)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueComponentAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                                extensionMethod_lexiqueComponentAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterDeclarationInGraph (defineExtensionMethod_lexiqueComponentAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@externFunctionDeclarationAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externFunctionDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 1147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                                extensionMethod_externFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  const GALGAS_onceFunctionDeclarationAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 1158)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                                extensionMethod_onceFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_onceFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@externRoutineDeclarationAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externRoutineDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 1169)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externRoutineDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                                extensionMethod_externRoutineDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externRoutineDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@filewrapperDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 1180)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                                extensionMethod_filewrapperDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_filewrapperDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                   GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                   GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                   GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 1191)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                                extensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@semanticTypeForGeneration implementationCppFileName'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_semanticTypeForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outName = object->mAttribute_mTypeProxy.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 506)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_semanticTypeForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                                  extensionGetter_semanticTypeForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticTypeForGeneration_implementationCppFileName (defineExtensionGetter_semanticTypeForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@semanticTypeForGeneration hasCppHeaderFile'                      *
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

static void defineExtensionGetter_semanticTypeForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                         extensionGetter_semanticTypeForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticTypeForGeneration_hasCppHeaderFile (defineExtensionGetter_semanticTypeForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@semanticTypeForGeneration isPredefined'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_semanticTypeForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outResult = object->mAttribute_mTypeProxy.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 518)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_semanticTypeForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                     extensionGetter_semanticTypeForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticTypeForGeneration_isPredefined (defineExtensionGetter_semanticTypeForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@semanticTypeForGeneration headerKind'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_semanticTypeForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outHeaderKind = object->mAttribute_mTypeProxy.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 524)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_semanticTypeForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                   extensionGetter_semanticTypeForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticTypeForGeneration_headerKind (defineExtensionGetter_semanticTypeForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@semanticDeclarationWithHeaderForGeneration implementationCppFileName'         *
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

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                                  extensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'              *
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

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                         extensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@semanticDeclarationWithHeaderForGeneration headerKind'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 553)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                   extensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_headerKind (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@semanticDeclarationWithHeaderForGeneration isPredefined'                *
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

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                     extensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_isPredefined (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@selfCopyInExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_selfCopyInExpressionAST.mSlotID,
                                                         extensionMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@selfCopyInExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfCopyInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfCopyInExpressionAST * object = (const cPtr_selfCopyInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfCopyInExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfCopyTypeProxy.getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 640)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mSelfLocation, GALGAS_string ("'selfcopy' cannot be used in this context")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 641)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_selfCppName_42461 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    outArgument_outExpression = GALGAS_selfCopyInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSelfCopyTypeProxy, object->mAttribute_mSelfLocation, var_selfCppName_42461  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 644)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfCopyInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_selfCopyInExpressionAST.mSlotID,
                                                  extensionMethod_selfCopyInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_selfCopyInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@trueExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_trueExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_trueExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_trueExpressionAST.mSlotID,
                                                         extensionMethod_trueExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_trueExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@trueExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_trueExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_trueExpressionAST * object = (const cPtr_trueExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_trueExpressionAST) ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 663)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_trueExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_trueExpressionAST.mSlotID,
                                                  extensionMethod_trueExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionAST_analyzeSemanticExpression (defineExtensionMethod_trueExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@falseExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_falseExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_falseExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_falseExpressionAST.mSlotID,
                                                         extensionMethod_falseExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_falseExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@falseExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_falseExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_falseExpressionAST * object = (const cPtr_falseExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_falseExpressionAST) ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 681)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_falseExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_falseExpressionAST.mSlotID,
                                                  extensionMethod_falseExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionAST_analyzeSemanticExpression (defineExtensionMethod_falseExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@literalCharExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalCharExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalCharExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalCharExpressionAST.mSlotID,
                                                         extensionMethod_literalCharExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalCharExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@literalCharExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalCharExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalCharExpressionAST * object = (const cPtr_literalCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalCharExpressionAST) ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mCharacter.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 701)), object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 702))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 699)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalCharExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalCharExpressionAST.mSlotID,
                                                  extensionMethod_literalCharExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalCharExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@literalStringExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalStringExpressionAST.mSlotID,
                                                         extensionMethod_literalStringExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalStringExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@literalStringExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringExpressionAST * object = (const cPtr_literalStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringExpressionAST) ;
  GALGAS_string var_s_45436 = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringlist enumerator_45469 (object->mAttribute_mStringSequence, kEnumeration_up) ;
  while (enumerator_45469.hasCurrentObject ()) {
    var_s_45436.plusAssign_operation(enumerator_45469.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 723)) ;
    enumerator_45469.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mLocation, var_s_45436  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 725)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalStringExpressionAST.mSlotID,
                                                  extensionMethod_literalStringExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalStringExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@literalDoubleExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalDoubleExpressionAST.mSlotID,
                                                         extensionMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@literalDoubleExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalDoubleExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalDoubleExpressionAST * object = (const cPtr_literalDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalDoubleExpressionAST) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mDoubleType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 743)), object->mAttribute_mValue.getter_double (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 743))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 743)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalDoubleExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionAST.mSlotID,
                                                  extensionMethod_literalDoubleExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalDoubleExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@literalUIntExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalUIntExpressionAST.mSlotID,
                                                         extensionMethod_literalUIntExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalUIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@literalUIntExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalUIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUIntExpressionAST * object = (const cPtr_literalUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 763)), object->mAttribute_mValue.getter_uint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 764))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 761)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalUIntExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalUIntExpressionAST.mSlotID,
                                                  extensionMethod_literalUIntExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalUIntExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@literalUInt64ExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST.mSlotID,
                                                         extensionMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@literalUInt64ExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUInt_36__34_ExpressionAST * object = (const cPtr_literalUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUInt_36__34_Type, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 785)), object->mAttribute_mValue.getter_uint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 786))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 783)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST.mSlotID,
                                                  extensionMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@literalSIntExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalSIntExpressionAST.mSlotID,
                                                         extensionMethod_literalSIntExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalSIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@literalSIntExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalSIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSIntExpressionAST * object = (const cPtr_literalSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSIntType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 804)), object->mAttribute_mValue.getter_sint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 804))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 804)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalSIntExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalSIntExpressionAST.mSlotID,
                                                  extensionMethod_literalSIntExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalSIntExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@literalSInt64ExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST.mSlotID,
                                                         extensionMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@literalBigIntExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalBigIntExpressionAST.mSlotID,
                                                         extensionMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@literalSInt64ExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSInt_36__34_ExpressionAST * object = (const cPtr_literalSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSInt_36__34_Type, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 831)), object->mAttribute_mValue.getter_sint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 832))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 829)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST.mSlotID,
                                                  extensionMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@literalBigIntExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBigIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBigIntExpressionAST * object = (const cPtr_literalBigIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBigIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBigIntType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 846)), object->mAttribute_mValue.getter_bigint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 847))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 844)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBigIntExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalBigIntExpressionAST.mSlotID,
                                                  extensionMethod_literalBigIntExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalBigIntExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@defaultConstructorExpressionAST enterExpressionInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_54108 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_54108 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 931)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_defaultConstructorExpressionAST.mSlotID,
                                                         extensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@defaultConstructorExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_54495 = constinArgument_inType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_type_54495 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 945)) ;
  }
  const enumGalgasBool test_1 = var_type_54495.getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 947)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 948)), GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 948)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = var_type_54495.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 951)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 951)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 952)), GALGAS_string ("an abstract class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 952)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_type_54495.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 953)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 954)), GALGAS_string ("this class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 954)) ;
      }
    }
    outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_type_54495, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 957)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionAST.mSlotID,
                                                  extensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@constructorExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_55484 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_55484 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 969)) ;
    }
  }
  extensionMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 971)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                         extensionMethod_constructorExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_constructorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@constructorExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_56085 ;
  GALGAS_unifiedTypeMap_2D_proxy var_constructorType_56132 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_56212 ;
  GALGAS_bool var_hasCompilerArgument_56247 ;
  {
  routine_analyzeConstructorInvocation (constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, object->mAttribute_mTypeName, object->mAttribute_mConstructorName, object->mAttribute_mExpressions, var_returnedType_56085, var_constructorType_56132, var_constructorEffectiveParameterList_56212, var_hasCompilerArgument_56247, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 982)) ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_56085, object->mAttribute_mConstructorName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 997)), var_constructorType_56132, object->mAttribute_mConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 999)), var_constructorEffectiveParameterList_56212, var_hasCompilerArgument_56247  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 995)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                  extensionMethod_constructorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_constructorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionAST * object = (const cPtr_getterCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiver.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1009)) ;
  extensionMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1010)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_getterCallExpressionAST.mSlotID,
                                                         extensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getterCallExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getterCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionAST * object = (const cPtr_getterCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_57386 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiver.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1023)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_57386, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_57431 = var_receiverExpression_57386.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1028)) ;
  GALGAS_getterMap var_getterMap_57513 = var_receiverType_57431.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1030)) ;
  GALGAS_functionSignature var_getterFormalArgumentTypeList_57610 ;
  GALGAS_methodKind var_kind_57629 ;
  GALGAS_bool var_hasCompilerArgument_57657 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_57694 ;
  GALGAS_stringlist var_fieldList_57718 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1036)) ;
  const cMapElement_getterMap * objectArray_57730 = (const cMapElement_getterMap *) var_getterMap_57513.readAccessForWithInstruction (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1037))) ;
  if (NULL != objectArray_57730) {
      macroValidSharedObject (objectArray_57730, cMapElement_getterMap) ;
    var_getterFormalArgumentTypeList_57610 = objectArray_57730->mAttribute_mArgumentTypeList ;
    var_hasCompilerArgument_57657 = objectArray_57730->mAttribute_mHasCompilerArgument ;
    var_returnedType_57694 = objectArray_57730->mAttribute_mReturnedType ;
    var_kind_57629 = objectArray_57730->mAttribute_mKind ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, objectArray_57730->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1043)), objectArray_57730->mAttribute_mErrorMessage  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1043)) ;
    }
  }else{
    GALGAS_uint var_matchingReaderCount_58035 = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_receiverType_57431.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1047)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1047)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_getterFormalArgumentTypeList_57610 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1048)) ;
      var_hasCompilerArgument_57657 = GALGAS_bool (true) ;
      var_returnedType_57694 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1050)) ;
      var_kind_57629 = GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1051)) ;
      cEnumerator_typedPropertyList enumerator_58333 (var_receiverType_57431.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1052)), kEnumeration_up) ;
      while (enumerator_58333.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_attributeType_58362 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (enumerator_58333.current_mAttributeTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1053)) ;
        GALGAS_getterMap var_aMap_58549 = var_attributeType_58362.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1057)) ;
        const cMapElement_getterMap * objectArray_58591 = (const cMapElement_getterMap *) var_aMap_58549.readAccessForWithInstruction (object->mAttribute_mGetterName.mAttribute_string) ;
        if (NULL != objectArray_58591) {
            macroValidSharedObject (objectArray_58591, cMapElement_getterMap) ;
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_attributeType_58362.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1059)).objectCompare (enumerator_58333.current_mAttributeName (HERE).mAttribute_string)).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_matchingReaderCount_58035.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1060)) ;
            var_getterFormalArgumentTypeList_57610 = objectArray_58591->mAttribute_mArgumentTypeList ;
            var_hasCompilerArgument_57657 = objectArray_58591->mAttribute_mHasCompilerArgument ;
            var_returnedType_57694 = objectArray_58591->mAttribute_mReturnedType ;
            var_kind_57629 = objectArray_58591->mAttribute_mKind ;
            var_fieldList_57718.addAssign_operation (enumerator_58333.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1065)) ;
            const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, objectArray_58591->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1067)), objectArray_58591->mAttribute_mErrorMessage  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1067)) ;
            }
          }
        }
        enumerator_58333.gotoNextObject () ;
      }
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_matchingReaderCount_58035.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1073)), GALGAS_string ("the '@").add_operation (var_receiverType_57431.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1074)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1074)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1074)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1074)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1074)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1074))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1073)) ;
        var_getterFormalArgumentTypeList_57610.drop () ; // Release error dropped variable
        var_hasCompilerArgument_57657.drop () ; // Release error dropped variable
        var_returnedType_57694.drop () ; // Release error dropped variable
        var_kind_57629.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_58035.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string var_s_59452 = GALGAS_string::makeEmptyString () ;
          cEnumerator_stringlist enumerator_59485 (var_fieldList_57718, kEnumeration_up) ;
          while (enumerator_59485.hasCurrentObject ()) {
            var_s_59452.plusAssign_operation(enumerator_59485.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1080)) ;
            if (enumerator_59485.hasNextObject ()) {
              var_s_59452.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1081)) ;
            }
            enumerator_59485.gotoNextObject () ;
          }
          inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1083)), GALGAS_string ("the '@").add_operation (var_receiverType_57431.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1084)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1084)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1084)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1084)).add_operation (var_s_59452, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1083)) ;
          var_getterFormalArgumentTypeList_57610.drop () ; // Release error dropped variable
          var_hasCompilerArgument_57657.drop () ; // Release error dropped variable
          var_returnedType_57694.drop () ; // Release error dropped variable
          var_kind_57629.drop () ; // Release error dropped variable
        }
      }
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_getterMap_57513.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1088)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1089)), GALGAS_string ("the '@").add_operation (var_receiverType_57431.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1090)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1090))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1089)) ;
        var_getterFormalArgumentTypeList_57610.drop () ; // Release error dropped variable
        var_hasCompilerArgument_57657.drop () ; // Release error dropped variable
        var_returnedType_57694.drop () ; // Release error dropped variable
        var_kind_57629.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        GALGAS_string var_s_60114 = GALGAS_string::makeEmptyString () ;
        cEnumerator_getterMap enumerator_60145 (var_getterMap_57513, kEnumeration_up) ;
        while (enumerator_60145.hasCurrentObject ()) {
          var_s_60114.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_60145.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1095)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1095)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1095)) ;
          cEnumerator_functionSignature enumerator_60213 (enumerator_60145.current_mArgumentTypeList (HERE), kEnumeration_up) ;
          while (enumerator_60213.hasCurrentObject ()) {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_60213.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = enumerator_60213.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1097)) ;
            }else if (kBoolFalse == test_8) {
              temp_7 = GALGAS_string::makeEmptyString () ;
            }
            var_s_60114.plusAssign_operation(GALGAS_string (" \?").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1097)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1097)).add_operation (enumerator_60213.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1097)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1097)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1097)) ;
            enumerator_60213.gotoNextObject () ;
          }
          var_s_60114.plusAssign_operation(GALGAS_string (" -> @").add_operation (enumerator_60145.current_mReturnedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1099)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1099)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1099)) ;
          enumerator_60145.gotoNextObject () ;
        }
        GALGAS_string temp_9 ;
        const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_getterMap_57513.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1103)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          temp_9 = GALGAS_string ("getters are") ;
        }else if (kBoolFalse == test_10) {
          temp_9 = GALGAS_string ("getter is") ;
        }
        inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1101)), GALGAS_string ("the '@").add_operation (var_receiverType_57431.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)).add_operation (GALGAS_string ("' getter; available "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1103)).add_operation (var_s_60114, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1104))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1101)) ;
        var_getterFormalArgumentTypeList_57610.drop () ; // Release error dropped variable
        var_hasCompilerArgument_57657.drop () ; // Release error dropped variable
        var_returnedType_57694.drop () ; // Release error dropped variable
        var_kind_57629.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)).objectCompare (var_getterFormalArgumentTypeList_57610.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1110)), GALGAS_string ("calling the '").add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1110)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1110)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1110)).add_operation (var_receiverType_57431.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1110)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1110)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1110)).add_operation (var_getterFormalArgumentTypeList_57610.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1111)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1111)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1110)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1111)).add_operation (object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1112)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1112)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1111)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1112))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1110)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_11) {
    GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_61148 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1114)) ;
    cEnumerator_actualOutputExpressionList enumerator_61216 (object->mAttribute_mExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_61252 (var_getterFormalArgumentTypeList_57610, kEnumeration_up) ;
    while (enumerator_61216.hasCurrentObject () && enumerator_61252.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_61426 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_61216.current_mExpression (HERE).ptr (), enumerator_61252.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_61426, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1116)) ;
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_61252.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_61216.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string temp_13 ;
        const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_61252.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_14) {
          temp_13 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_14) {
          temp_13 = GALGAS_string::makeEmptyString () ;
        }
        inCompiler->emitSemanticError (enumerator_61216.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)), GALGAS_string ("the selector should be '!").add_operation (enumerator_61252.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)) ;
      }
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_61252.current_mFormalArgumentType (HERE), var_exp_61426.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1125)), enumerator_61216.current_mEndOfExpressionLocation (HERE), var_exp_61426, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1125)) ;
      }
      var_constructorEffectiveParameterList_61148.addAssign_operation (var_exp_61426  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)) ;
      enumerator_61216.gotoNextObject () ;
      enumerator_61252.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_57694, object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1130)), var_kind_57629, var_receiverExpression_57386, var_fieldList_57718, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1134)), var_constructorEffectiveParameterList_61148, var_hasCompilerArgument_57657  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1128)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getterCallExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_getterCallExpressionAST.mSlotID,
                                                  extensionMethod_getterCallExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getterCallExpressionAST_analyzeSemanticExpression (defineExtensionMethod_getterCallExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                         extensionMethod_optionExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_optionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@optionExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionExpressionAST * object = (const cPtr_optionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionExpressionAST) ;
  GALGAS_bool var_optionComponentIsPredefined_63588 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_63633 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_63678 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_63725 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_63776 ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_optionComponentIsPredefined_63588, var_boolOptionMap_63633, var_uintOptionMap_63678, var_stringOptionMap_63725, var_stringListOptionMap_63776, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1177)) ;
  GALGAS_bool var_found_63794 = var_boolOptionMap_63633.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1185)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1185)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_63883 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType ;
  const enumGalgasBool test_0 = var_found_63794.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1187)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_found_63794 = var_uintOptionMap_63678.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1188)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1188)) ;
    var_returnedType_63883 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType ;
  }
  const enumGalgasBool test_1 = var_found_63794.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1191)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_found_63794 = var_stringOptionMap_63725.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1192)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1192)) ;
    var_returnedType_63883 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }
  const enumGalgasBool test_2 = var_found_63794.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1195)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_found_63794 = var_stringListOptionMap_63776.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1196)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1196)) ;
    var_returnedType_63883 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringListType ;
  }
  const enumGalgasBool test_3 = var_found_63794.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1200)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_63883, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1203)), var_optionComponentIsPredefined_63588, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1205)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1206))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1201)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1207)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1210)), var_optionComponentIsPredefined_63588, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1212)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1213))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1208)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1214)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1217)), var_optionComponentIsPredefined_63588, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1219)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1220))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1215)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1221)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1224)), var_optionComponentIsPredefined_63588, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1226)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1227))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1222)) ;
          }else if (kBoolFalse == test_7) {
            inCompiler->emitSemanticError (object->mAttribute_mOptionGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1229)), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1229)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_3) {
    GALGAS_string var_s_65855 = GALGAS_string::makeEmptyString () ;
    cEnumerator_commandLineOptionMap enumerator_65888 (var_boolOptionMap_63633, kEnumeration_up) ;
    while (enumerator_65888.hasCurrentObject ()) {
      var_s_65855.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_65888.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1234)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1234)).add_operation (GALGAS_string ("' @bool option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1234)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1234)) ;
      enumerator_65888.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_65974 (var_uintOptionMap_63678, kEnumeration_up) ;
    while (enumerator_65974.hasCurrentObject ()) {
      var_s_65855.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_65974.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1237)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1237)).add_operation (GALGAS_string ("' @uint option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1237)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1237)) ;
      enumerator_65974.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_66062 (var_stringOptionMap_63725, kEnumeration_up) ;
    while (enumerator_66062.hasCurrentObject ()) {
      var_s_65855.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_66062.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1240)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1240)).add_operation (GALGAS_string ("' @string option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1240)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1240)) ;
      enumerator_66062.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mOptionEntryName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1242)), GALGAS_string ("the '").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1243)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1243)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1243)).add_operation (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1243)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1243)).add_operation (GALGAS_string ("' option; available options:"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1243)).add_operation (var_s_65855, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1243))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1242)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                  extensionMethod_optionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_optionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_orExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1253)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_orExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                         extensionMethod_orExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_orExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@orExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_orExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_67226 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1266)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_67226, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1265)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_67436 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1273)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_67436, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1272)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_67510 = var_leftExpression_67226.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1279)) ;
  {
  routine_checkDiadicOperator (var_leftType_67510, var_rightExpression_67436.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1282)), GALGAS_bool (kIsNotEqual, var_leftType_67510.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1283)).operator_and (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1283)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1283)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression_67436, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1280)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType_67510, object->mAttribute_mOperatorLocation, var_leftExpression_67226, var_rightExpression_67436  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1289)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_orExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                  extensionMethod_orExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionAST_analyzeSemanticExpression (defineExtensionMethod_orExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_orShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1301)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1302)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_orShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                         extensionMethod_orShortExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_orShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_orShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_68818 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1314)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_68818, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1313)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_69028 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1321)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_69028, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1320)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_69102 = var_leftExpression_68818.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1327)) ;
  {
  routine_checkDiadicOperator (var_leftType_69102, var_rightExpression_69028.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1330)), GALGAS_bool (kIsNotEqual, var_leftType_69102.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1331)).operator_and (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1331)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1331)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression_69028, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1328)) ;
  }
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftType_69102, object->mAttribute_mOperatorLocation, var_leftExpression_68818, var_rightExpression_69028  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1337)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_orShortExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                  extensionMethod_orShortExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionAST_analyzeSemanticExpression (defineExtensionMethod_orShortExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_andExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1349)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1350)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_andExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                         extensionMethod_andExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_andExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@andExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_andExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_70407 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1362)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_70407, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1361)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_70617 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1369)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_70617, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1368)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_70691 = var_leftExpression_70407.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1375)) ;
  {
  routine_checkDiadicOperator (var_leftType_70691, var_rightExpression_70617.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1378)), GALGAS_bool (kIsNotEqual, var_leftType_70691.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1379)).operator_and (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1379)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1379)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression_70617, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1376)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType_70691, object->mAttribute_mOperatorLocation, var_leftExpression_70407, var_rightExpression_70617  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1385)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_andExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                  extensionMethod_andExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionAST_analyzeSemanticExpression (defineExtensionMethod_andExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_andShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1397)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1398)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_andShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                         extensionMethod_andShortExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andShortExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_andShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_andShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_72003 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1410)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_72003, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1409)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_72213 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1417)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_72213, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1416)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_72287 = var_leftExpression_72003.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1423)) ;
  {
  routine_checkDiadicOperator (var_leftType_72287, var_rightExpression_72213.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1426)), GALGAS_bool (kIsNotEqual, var_leftType_72287.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1427)).operator_and (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1427)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1427)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression_72213, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1424)) ;
  }
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftType_72287, object->mAttribute_mOperatorLocation, var_leftExpression_72003, var_rightExpression_72213  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1433)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_andShortExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                  extensionMethod_andShortExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andShortExpressionAST_analyzeSemanticExpression (defineExtensionMethod_andShortExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_xorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1445)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1446)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_xorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                         extensionMethod_xorExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_xorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@xorExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_xorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_73594 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1458)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_73594, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1457)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_73804 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1465)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_73804, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1464)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_73878 = var_leftExpression_73594.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1471)) ;
  {
  routine_checkDiadicOperator (var_leftType_73878, var_rightExpression_73804.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1474)), GALGAS_bool (kIsNotEqual, var_leftType_73878.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1475)).operator_and (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1475)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1475)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("^"), object->mAttribute_mOperatorLocation, var_rightExpression_73804, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1472)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType_73878, object->mAttribute_mOperatorLocation, var_leftExpression_73594, var_rightExpression_73804  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1481)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_xorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                  extensionMethod_xorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_xorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1494)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1495)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                         extensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_closedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_75217 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_75217, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1507)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_75445 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_75445, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1514)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_75519 = var_leftExpression_75217.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1521)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_75519.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1522)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_leftExpression_75217.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1523)), GALGAS_string ("the left expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1523)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_75724 = var_rightExpression_75445.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1525)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType_75724.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1526)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_rightExpression_75445.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1527)), GALGAS_string ("the right expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1527)) ;
  }
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_75217.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1531))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1531)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1531)), object->mAttribute_mOperatorLocation, var_leftExpression_75217, var_rightExpression_75445  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1530)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_closedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                  extensionMethod_closedSliceExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionAST_analyzeSemanticExpression (defineExtensionMethod_closedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1543)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1544)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                         extensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_openedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_77105 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_77105, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1556)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_77333 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_77333, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1563)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_77407 = var_leftExpression_77105.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1570)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_77407.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1571)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_leftExpression_77105.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1572)), GALGAS_string ("the left expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1572)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_77612 = var_rightExpression_77333.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1574)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType_77612.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1575)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_rightExpression_77333.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1576)), GALGAS_string ("the right expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1576)) ;
  }
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_77105.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1580))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1580)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1580)), object->mAttribute_mOperatorLocation, var_leftExpression_77105, var_rightExpression_77333  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1579)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_openedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                  extensionMethod_openedSliceExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionAST_analyzeSemanticExpression (defineExtensionMethod_openedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@equalExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_equalExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionAST * object = (const cPtr_equalExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1592)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1593)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_equalExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_equalExpressionAST.mSlotID,
                                                         extensionMethod_equalExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_equalExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@equalExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_equalExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionAST * object = (const cPtr_equalExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_78964 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1606)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_78964, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_79005 = var_leftExpression_78964.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1611)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_79225 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType_79005, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_79225, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1613)) ;
  {
  routine_checkDiadicOperator (var_leftType_79005, var_rightExpression_79225.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1622)), GALGAS_bool (true), GALGAS_string ("=="), object->mAttribute_mOperatorLocation, var_rightExpression_79225, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1620)) ;
  }
  outArgument_outExpression = GALGAS_equalExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_78964, var_rightExpression_79225  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1629)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_equalExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_equalExpressionAST.mSlotID,
                                                  extensionMethod_equalExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionAST_analyzeSemanticExpression (defineExtensionMethod_equalExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@notEqualExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_notEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionAST * object = (const cPtr_notEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1657)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1658)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_notEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_notEqualExpressionAST.mSlotID,
                                                         extensionMethod_notEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_notEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@notEqualExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_notEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionAST * object = (const cPtr_notEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_81032 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1670)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_81032, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1669)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_81073 = var_leftExpression_81032.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1675)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_81292 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType_81073, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_81292, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1677)) ;
  {
  routine_checkDiadicOperator (var_leftType_81073, var_rightExpression_81292.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1686)), GALGAS_bool (true), GALGAS_string ("!="), object->mAttribute_mOperatorLocation, var_rightExpression_81292, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1684)) ;
  }
  outArgument_outExpression = GALGAS_notEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_81032, var_rightExpression_81292  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1693)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_notEqualExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notEqualExpressionAST.mSlotID,
                                                  extensionMethod_notEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionAST_analyzeSemanticExpression (defineExtensionMethod_notEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@lowerOrEqualExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionAST * object = (const cPtr_lowerOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1721)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1722)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lowerOrEqualExpressionAST.mSlotID,
                                                         extensionMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lowerOrEqualExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionAST * object = (const cPtr_lowerOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_83176 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1734)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_83176, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1733)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_83217 = var_leftExpression_83176.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1739)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_83436 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType_83217, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_83436, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1741)) ;
  {
  routine_checkDiadicOperator (var_leftType_83217, var_rightExpression_83436.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1750)), GALGAS_bool (true), GALGAS_string ("<="), object->mAttribute_mOperatorLocation, var_rightExpression_83436, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1748)) ;
  }
  outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_83176, var_rightExpression_83436  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1757)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lowerOrEqualExpressionAST.mSlotID,
                                                  extensionMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (defineExtensionMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@greaterOrEqualExpressionAST enterExpressionInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionAST * object = (const cPtr_greaterOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1789)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1790)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_greaterOrEqualExpressionAST.mSlotID,
                                                         extensionMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@greaterOrEqualExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionAST * object = (const cPtr_greaterOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_85596 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1802)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_85596, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1801)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_85637 = var_leftExpression_85596.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_85856 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType_85637, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_85856, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1809)) ;
  {
  routine_checkDiadicOperator (var_leftType_85637, var_rightExpression_85856.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1818)), GALGAS_bool (true), GALGAS_string (">="), object->mAttribute_mOperatorLocation, var_rightExpression_85856, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1816)) ;
  }
  outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_85596, var_rightExpression_85856  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1825)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_greaterOrEqualExpressionAST.mSlotID,
                                                  extensionMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (defineExtensionMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@strictGreaterExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionAST * object = (const cPtr_strictGreaterExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1856)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1857)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_strictGreaterExpressionAST.mSlotID,
                                                         extensionMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@strictGreaterExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_strictGreaterExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionAST * object = (const cPtr_strictGreaterExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_87949 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1869)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_87949, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1868)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_87990 = var_leftExpression_87949.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1874)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_88209 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType_87990, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_88209, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1876)) ;
  {
  routine_checkDiadicOperator (var_leftType_87990, var_rightExpression_88209.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1885)), GALGAS_bool (true), GALGAS_string (">"), object->mAttribute_mOperatorLocation, var_rightExpression_88209, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1883)) ;
  }
  outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_87949, var_rightExpression_88209  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1892)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_strictGreaterExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_strictGreaterExpressionAST.mSlotID,
                                                  extensionMethod_strictGreaterExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionAST_analyzeSemanticExpression (defineExtensionMethod_strictGreaterExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@strictLowerExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionAST * object = (const cPtr_strictLowerExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1923)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1924)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_strictLowerExpressionAST.mSlotID,
                                                         extensionMethod_strictLowerExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_strictLowerExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@strictLowerExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_strictLowerExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionAST * object = (const cPtr_strictLowerExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_90293 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1936)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_90293, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1935)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_90334 = var_leftExpression_90293.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1941)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_90553 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType_90334, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_90553, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1943)) ;
  {
  routine_checkDiadicOperator (var_leftType_90334, var_rightExpression_90553.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1952)), GALGAS_bool (true), GALGAS_string ("<"), object->mAttribute_mOperatorLocation, var_rightExpression_90553, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1950)) ;
  }
  outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_90293, var_rightExpression_90553  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1959)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_strictLowerExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_strictLowerExpressionAST.mSlotID,
                                                  extensionMethod_strictLowerExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionAST_analyzeSemanticExpression (defineExtensionMethod_strictLowerExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@rightShiftExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1993)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1994)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_rightShiftExpressionAST.mSlotID,
                                                         extensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@rightShiftExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_rightShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_92634 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2007)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_92634, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2006)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_92866 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_92866, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2013)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_92940 = var_leftExpression_92634.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2020)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_93009 = var_rightExpression_92866.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2021)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType_92940.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2022)).operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2022)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2022)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_92940.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2024)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2024)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2024))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2023)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType_93009.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2026)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_93009.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2028)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2028)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2028))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2027)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType_92940, object->mAttribute_mOperatorLocation, var_leftExpression_92634, var_rightExpression_92866  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2032)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_rightShiftExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_rightShiftExpressionAST.mSlotID,
                                                  extensionMethod_rightShiftExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionAST_analyzeSemanticExpression (defineExtensionMethod_rightShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@leftShiftExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2046)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2047)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_leftShiftExpressionAST.mSlotID,
                                                         extensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@leftShiftExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_leftShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_94562 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2060)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_94562, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2059)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_94794 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_94794, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2066)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_94868 = var_leftExpression_94562.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2073)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_94937 = var_rightExpression_94794.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2074)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType_94868.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2075)).operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2075)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2075)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_94868.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2077)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2077)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2077))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2076)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType_94937.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2079)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_94937.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2081)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2081)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2081))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2080)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType_94868, object->mAttribute_mOperatorLocation, var_leftExpression_94562, var_rightExpression_94794  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2085)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_leftShiftExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_leftShiftExpressionAST.mSlotID,
                                                  extensionMethod_leftShiftExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionAST_analyzeSemanticExpression (defineExtensionMethod_leftShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2099)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2100)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_addExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@addExpressionNoOverflowAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_96497 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2113)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_96497, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2112)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_96707 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2120)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_96707, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2119)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_96781 = var_leftExpression_96497.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2126)) ;
  {
  routine_checkDiadicOperator (var_leftType_96781, var_rightExpression_96707.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2129)), GALGAS_bool (kIsNotEqual, var_leftType_96781.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2130)).operator_and (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2130)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2130)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&+"), object->mAttribute_mOperatorLocation, var_rightExpression_96707, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2127)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionNoOverflowForGeneration::constructor_new (var_leftType_96781, object->mAttribute_mOperatorLocation, var_leftExpression_96497, var_rightExpression_96707  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_addExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@addExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2149)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_addExpressionAST.mSlotID,
                                                         extensionMethod_addExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_addExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@addExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_98102 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2162)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_98102, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2161)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_98312 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2169)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_98312, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2168)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_98386 = var_leftExpression_98102.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2175)) ;
  {
  routine_checkDiadicOperator (var_leftType_98386, var_rightExpression_98312.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2178)), GALGAS_bool (kIsNotEqual, var_leftType_98386.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2179)).operator_and (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2179)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2179)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression_98312, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2176)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType_98386, object->mAttribute_mOperatorLocation, var_leftExpression_98102, var_rightExpression_98312  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2185)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_addExpressionAST.mSlotID,
                                                  extensionMethod_addExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionAST_analyzeSemanticExpression (defineExtensionMethod_addExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2198)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2199)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_subExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@subExpressionNoOverflowAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_99711 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2212)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_99711, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2211)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_99921 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2219)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_99921, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2218)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_99995 = var_leftExpression_99711.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2225)) ;
  {
  routine_checkDiadicOperator (var_leftType_99995, var_rightExpression_99921.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2228)), GALGAS_bool (kIsNotEqual, var_leftType_99995.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2229)).operator_and (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2229)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2229)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&-"), object->mAttribute_mOperatorLocation, var_rightExpression_99921, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2226)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionNoOverflowForGeneration::constructor_new (var_leftType_99995, object->mAttribute_mOperatorLocation, var_leftExpression_99711, var_rightExpression_99921  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2235)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_subExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@subExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_subExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2248)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2249)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_subExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_subExpressionAST.mSlotID,
                                                         extensionMethod_subExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_subExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@subExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_subExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_101316 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2261)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_101316, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2260)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_101526 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2268)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_101526, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2267)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_101600 = var_leftExpression_101316.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2274)) ;
  {
  routine_checkDiadicOperator (var_leftType_101600, var_rightExpression_101526.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2277)), GALGAS_bool (kIsNotEqual, var_leftType_101600.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2278)).operator_and (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2278)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2278)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression_101526, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2275)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType_101600, object->mAttribute_mOperatorLocation, var_leftExpression_101316, var_rightExpression_101526  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2284)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_subExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_subExpressionAST.mSlotID,
                                                  extensionMethod_subExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionAST_analyzeSemanticExpression (defineExtensionMethod_subExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2297)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2298)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_102947 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2310)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_102947, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2309)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_103157 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2317)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_103157, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2316)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_103231 = var_leftExpression_102947.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2323)) ;
  {
  routine_checkDiadicOperator (var_leftType_103231, var_rightExpression_103157.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2326)), GALGAS_bool (kIsNotEqual, var_leftType_103231.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2327)).operator_and (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2327)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2327)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&*"), object->mAttribute_mOperatorLocation, var_rightExpression_103157, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2324)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowForGeneration::constructor_new (var_leftType_103231, object->mAttribute_mOperatorLocation, var_leftExpression_102947, var_rightExpression_103157  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2333)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@multiplicationExpressionAST enterExpressionInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2345)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2346)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_multiplicationExpressionAST.mSlotID,
                                                         extensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@multiplicationExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_multiplicationExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_104582 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2358)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_104582, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2357)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_104792 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2365)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_104792, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2364)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_104866 = var_leftExpression_104582.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2371)) ;
  {
  routine_checkDiadicOperator (var_leftType_104866, var_rightExpression_104792.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2374)), GALGAS_bool (kIsNotEqual, var_leftType_104866.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2375)).operator_and (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2375)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2375)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression_104792, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2372)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType_104866, object->mAttribute_mOperatorLocation, var_leftExpression_104582, var_rightExpression_104792  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2381)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_multiplicationExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_multiplicationExpressionAST.mSlotID,
                                                  extensionMethod_multiplicationExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionAST_analyzeSemanticExpression (defineExtensionMethod_multiplicationExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2393)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2394)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_106209 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2406)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_106209, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2405)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_106419 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2413)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_106419, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2412)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_106493 = var_leftExpression_106209.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2419)) ;
  {
  routine_checkDiadicOperator (var_leftType_106493, var_rightExpression_106419.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2422)), GALGAS_bool (kIsNotEqual, var_leftType_106493.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2423)).operator_and (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2423)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2423)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&/"), object->mAttribute_mOperatorLocation, var_rightExpression_106419, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2420)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionNoOverflowForGeneration::constructor_new (var_leftType_106493, object->mAttribute_mOperatorLocation, var_leftExpression_106209, var_rightExpression_106419  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2429)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@divisionExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_divisionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2442)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2443)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_divisionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_divisionExpressionAST.mSlotID,
                                                         extensionMethod_divisionExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_divisionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@divisionExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_divisionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_107829 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2455)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_107829, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2454)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_108039 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2462)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_108039, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2461)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_108113 = var_leftExpression_107829.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2468)) ;
  {
  routine_checkDiadicOperator (var_leftType_108113, var_rightExpression_108039.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2471)), GALGAS_bool (kIsNotEqual, var_leftType_108113.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2472)).operator_and (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2472)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2472)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression_108039, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2469)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType_108113, object->mAttribute_mOperatorLocation, var_leftExpression_107829, var_rightExpression_108039  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2478)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_divisionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_divisionExpressionAST.mSlotID,
                                                  extensionMethod_divisionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_divisionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@moduloExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduloExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2490)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2491)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduloExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                         extensionMethod_moduloExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_moduloExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduloExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_109426 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2503)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_109426, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2502)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_109636 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2510)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_109636, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2509)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_109710 = var_leftExpression_109426.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2516)) ;
  {
  routine_checkDiadicOperator (var_leftType_109710, var_rightExpression_109636.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2519)), GALGAS_bool (kIsNotEqual, var_leftType_109710.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2520)).operator_and (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2520)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2520)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("mod"), object->mAttribute_mOperatorLocation, var_rightExpression_109636, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2517)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType_109710, object->mAttribute_mOperatorLocation, var_leftExpression_109426, var_rightExpression_109636  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2526)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduloExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                  extensionMethod_moduloExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionAST_analyzeSemanticExpression (defineExtensionMethod_moduloExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@unaryMinusNoOverflowExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusNoOverflowExpressionAST * object = (const cPtr_unaryMinusNoOverflowExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusNoOverflowExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2538)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST.mSlotID,
                                                         extensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@unaryMinusNoOverflowExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusNoOverflowExpressionAST * object = (const cPtr_unaryMinusNoOverflowExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusNoOverflowExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_110845 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2550)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_110845, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2550)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_111029 = var_expression_110845.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2552)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_111029.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2553)).operator_and (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2553)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2553)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_111029.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2555)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2555)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2555))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2554)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionNoOverflowForGeneration::constructor_new (var_type_111029, object->mAttribute_mOperatorLocation, var_expression_110845  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2559)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST.mSlotID,
                                                  extensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (defineExtensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@unaryMinusExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2571)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryMinusExpressionAST.mSlotID,
                                                         extensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@unaryMinusExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_112162 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2583)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_112162, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2583)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_112346 = var_expression_112162.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2585)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_112346.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2586)).operator_and (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2586)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2586)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_112346.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2588)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2588)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2588))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2587)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_112346, object->mAttribute_mOperatorLocation, var_expression_112162  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2592)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionAST.mSlotID,
                                                  extensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionAST_analyzeSemanticExpression (defineExtensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@unaryPlusExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryPlusExpressionAST * object = (const cPtr_unaryPlusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryPlusExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2604)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryPlusExpressionAST.mSlotID,
                                                         extensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@unaryPlusExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryPlusExpressionAST * object = (const cPtr_unaryPlusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryPlusExpressionAST) ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2615)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2615)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_113581 = outArgument_outExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2617)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_113581.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2618)).operator_and (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2618)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2618)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_113581.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2620)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2620)).add_operation (GALGAS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2620))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2619)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryPlusExpressionAST.mSlotID,
                                                  extensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryPlusExpressionAST_analyzeSemanticExpression (defineExtensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_notExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2630)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_notExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                         extensionMethod_notExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_notExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@notExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_notExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_114534 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2642)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_114534, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2642)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_114718 = var_expression_114534.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2644)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_114718.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2645)).operator_and (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2645)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2645)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_114718.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2647)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2647)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2647))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2646)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_114718, object->mAttribute_mOperatorLocation, var_expression_114534  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2651)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_notExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                  extensionMethod_notExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notExpressionAST_analyzeSemanticExpression (defineExtensionMethod_notExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@structFieldAccessExpressionAST enterExpressionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                             GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_structFieldAccessExpressionAST.mSlotID,
                                                         extensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@structFieldAccessExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionAST * object = (const cPtr_structFieldAccessExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_115909 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2675)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_115909, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2674)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_115979 = var_expression_115909.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2681)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type_115979.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2682)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2682)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mStructFieldName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2683)), GALGAS_string ("the '.' operator requires the receiver to be a struct")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2683)) ;
  }
  GALGAS_attributeMap var_attributeMap_116188 = var_type_115979.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2685)) ;
  var_attributeMap_116188.method_searchKey (object->mAttribute_mStructFieldName, var_type_115979, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2686)) ;
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type_115979, object->mAttribute_mOperatorLocation, var_expression_115909, object->mAttribute_mStructFieldName.mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2692)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_structFieldAccessExpressionAST.mSlotID,
                                                  extensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (defineExtensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@complementExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complementExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2705)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complementExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_complementExpressionAST.mSlotID,
                                                         extensionMethod_complementExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complementExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_complementExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@complementExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complementExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_117191 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2717)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_117191, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2717)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_117375 = var_expression_117191.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2719)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_117375.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2720)).operator_and (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2720)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2720)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_117375.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2722)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2722)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2722))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2721)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_117375, object->mAttribute_mOperatorLocation, var_expression_117191  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2726)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complementExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_complementExpressionAST.mSlotID,
                                                  extensionMethod_complementExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complementExpressionAST_analyzeSemanticExpression (defineExtensionMethod_complementExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@ifExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mIfExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2738)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mThenExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2739)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mElseExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2740)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                         extensionMethod_ifExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_ifExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@ifExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_if_5F_expression_118739 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mIfExpression.ptr (), constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_if_5F_expression_118739, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2752)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression_118826 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mThenExpression.ptr (), constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_then_5F_expression_118826, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2760)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression_119015 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mElseExpression.ptr (), constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_else_5F_expression_119015, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2763)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_if_5F_expression_118739.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2765)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2765)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("the test expression type is '@").add_operation (var_if_5F_expression_118739.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2767)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2767)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2767)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2767))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2766)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_then_5F_expression_118826.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2769)).objectCompare (var_else_5F_expression_119015.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2769)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand expression types are '@").add_operation (var_then_5F_expression_118826.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2771)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2771)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2771)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2771)).add_operation (var_else_5F_expression_119015.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2771)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2771)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2771)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2771))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2770)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression_118826.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2776)), object->mAttribute_mOperatorLocation, var_if_5F_expression_118739, var_then_5F_expression_118826, var_else_5F_expression_119015  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2775)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                  extensionMethod_ifExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeSemanticExpression (defineExtensionMethod_ifExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  cEnumerator_actualOutputExpressionList enumerator_120132 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_120132.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_120132.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2791)) ;
    enumerator_120132.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                         extensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  GALGAS_functionSignature var_functionSignature_120724 ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_120766 ;
  GALGAS_bool var_isInternal_120792 ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionName, var_functionSignature_120724, var_resultType_120766, var_isInternal_120792, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2804)) ;
  const enumGalgasBool test_0 = var_isInternal_120792.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation_120869 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.getter_locationForKey (object->mAttribute_mFunctionName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2812)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFunctionName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2813)).objectCompare (var_procDeclarationLocation_120869.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2813)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2814)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_120869.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2814)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2814)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2814))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2814)) ;
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_functionSignature_120724.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2818)).objectCompare (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2818)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2819)), GALGAS_string ("the '").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2820)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2820)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2820)).add_operation (var_functionSignature_120724.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2820)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2820)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2820)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2820)).add_operation (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2821)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2821)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2821)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2821))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2819)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_121573 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2825)) ;
    cEnumerator_functionSignature enumerator_121646 (var_functionSignature_120724, kEnumeration_up) ;
    cEnumerator_actualOutputExpressionList enumerator_121669 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    while (enumerator_121646.hasCurrentObject () && enumerator_121669.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_121850 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_121669.current_mExpression (HERE).ptr (), enumerator_121646.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_121850, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2827)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_121646.current_mFormalArgumentType (HERE), var_expression_121850.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2833)), enumerator_121669.current_mEndOfExpressionLocation (HERE), var_expression_121850, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2833)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_121646.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_121669.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_4 ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_121646.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = enumerator_121646.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2835)) ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_string::makeEmptyString () ;
        }
        inCompiler->emitSemanticError (enumerator_121669.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2835)), GALGAS_string ("the selector should be '!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2835)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2835))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2835)) ;
      }
      var_semanticExpressionListForGeneration_121573.addAssign_operation (var_expression_121850  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2837)) ;
      enumerator_121646.gotoNextObject () ;
      enumerator_121669.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_120766, object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2841)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2842)), var_semanticExpressionListForGeneration_121573  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2839)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionCallExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                  extensionMethod_functionCallExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallExpressionAST_analyzeSemanticExpression (defineExtensionMethod_functionCallExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@varInExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                         extensionMethod_varInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_varInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@varInExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_123155 ;
  GALGAS_string var_sourceVariableCppName_123194 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_123247 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mAttribute_mVarName, var_type_123155, var_sourceVariableCppName_123194, var_nameForCheckingFormalParameterUsing_123247, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2862)) ;
  }
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_123155, object->mAttribute_mVarName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2870)), var_sourceVariableCppName_123194, var_nameForCheckingFormalParameterUsing_123247  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2868)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                  extensionMethod_varInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_varInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_123713 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mLiteralTypeName, joker_123713 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2881)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                         extensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  GALGAS_bool joker_124201_26 ; // Joker input parameter
  GALGAS_bool joker_124201_25 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_124201_24 ; // Joker input parameter
  GALGAS_typeKindEnum joker_124201_23 ; // Joker input parameter
  GALGAS_bool joker_124201_22 ; // Joker input parameter
  GALGAS_typedPropertyList joker_124201_21 ; // Joker input parameter
  GALGAS_attributeMap joker_124201_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_124201_19 ; // Joker input parameter
  GALGAS_constructorMap joker_124201_18 ; // Joker input parameter
  GALGAS_getterMap joker_124201_17 ; // Joker input parameter
  GALGAS_setterMap joker_124201_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_124201_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_124201_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_124201_13 ; // Joker input parameter
  GALGAS_stringlist joker_124201_12 ; // Joker input parameter
  GALGAS_uint joker_124201_11 ; // Joker input parameter
  GALGAS_functionSignature joker_124201_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_124201_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_124201_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_124201_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_124201_6 ; // Joker input parameter
  GALGAS_bool joker_124201_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_124201_4 ; // Joker input parameter
  GALGAS_string joker_124201_3 ; // Joker input parameter
  GALGAS_string joker_124201_2 ; // Joker input parameter
  GALGAS_headerKind joker_124201_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mLiteralTypeName, joker_124201_26, joker_124201_25, joker_124201_24, joker_124201_23, joker_124201_22, joker_124201_21, joker_124201_20, joker_124201_19, joker_124201_18, joker_124201_17, joker_124201_16, joker_124201_15, joker_124201_14, joker_124201_13, joker_124201_12, joker_124201_11, joker_124201_10, joker_124201_9, joker_124201_8, joker_124201_7, joker_124201_6, joker_124201_5, joker_124201_4, joker_124201_3, joker_124201_2, joker_124201_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2893)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_124221 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mLiteralTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2895)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)), object->mAttribute_mLiteralTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2898)), var_type_124221  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2896)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                  extensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2908)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST.mSlotID,
                                                         extensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@testDynamicClassInExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_125292 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2921)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_125292, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2921)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_castType_125460 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2923)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expression_125292.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2925)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2925)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2925)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_125751 = var_castType_125460 ;
    GALGAS_bool var_found_125778 = GALGAS_bool (kIsEqual, var_t_125751.objectCompare (var_expression_125292.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2928)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2929)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2929)).isValid ()) {
      uint32_t variant_125819 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2929)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2929)).uintValue () ;
      bool loop_125819 = true ;
      while (loop_125819) {
        loop_125819 = var_found_125778.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2930)).operator_and (var_t_125751.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2930)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2930)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2930)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2930)).isValid () ;
        if (loop_125819) {
          loop_125819 = var_found_125778.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2930)).operator_and (var_t_125751.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2930)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2930)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2930)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2930)).boolValue () ;
        }
        if (loop_125819 && (0 == variant_125819)) {
          loop_125819 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2929)) ;
        }
        if (loop_125819) {
          variant_125819 -- ;
          var_t_125751 = var_t_125751.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2931)) ;
          var_found_125778 = GALGAS_bool (kIsEqual, var_t_125751.objectCompare (var_expression_125292.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2932)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found_125778.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2934)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2935)), GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2936)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2936)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2936)).add_operation (var_expression_125292.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2936)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2936)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2936)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2936))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2935)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->emitSemanticError (var_expression_125292.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2939)), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression_125292.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2940)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2940)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2939)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2940))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2939)) ;
  }
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2945)), var_expression_125292, object->mAttribute_mTypeComparisonKind, var_castType_125460  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2943)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST.mSlotID,
                                                  extensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@castInExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_castInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionAST * object = (const cPtr_castInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2956)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_castInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_castInExpressionAST.mSlotID,
                                                         extensionMethod_castInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_castInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_castInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@castInExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_castInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionAST * object = (const cPtr_castInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_127433 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2969)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_127433, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2968)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_127476 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expression_127433.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2979)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2979)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2979)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_127780 = var_type_127476 ;
    GALGAS_bool var_found_127803 = GALGAS_bool (kIsEqual, var_t_127780.objectCompare (var_expression_127433.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2982)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2983)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2983)).isValid ()) {
      uint32_t variant_127844 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2983)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2983)).uintValue () ;
      bool loop_127844 = true ;
      while (loop_127844) {
        loop_127844 = var_found_127803.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2984)).operator_and (var_t_127780.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2984)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2984)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2984)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2984)).isValid () ;
        if (loop_127844) {
          loop_127844 = var_found_127803.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2984)).operator_and (var_t_127780.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2984)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2984)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2984)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2984)).boolValue () ;
        }
        if (loop_127844 && (0 == variant_127844)) {
          loop_127844 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2983)) ;
        }
        if (loop_127844) {
          variant_127844 -- ;
          var_t_127780 = var_t_127780.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2985)) ;
          var_found_127803 = GALGAS_bool (kIsEqual, var_t_127780.objectCompare (var_expression_127433.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2986)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found_127803.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2988)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2989)), GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)).add_operation (var_expression_127433.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2991)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2991)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2991))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2989)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expression_127433.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2993)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2993)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (var_expression_127433.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2998)), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (var_expression_127433.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3000)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3000)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2999)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3000))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2998)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_expression_127433.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3003)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3003)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::constructor_new (var_type_127476, object->mAttribute_mEndOfReceiverExpression, var_expression_127433, object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3008))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3004)) ;
  }else if (kBoolFalse == test_3) {
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::constructor_new (var_type_127476, object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3012)), var_expression_127433, object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3014))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3010)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_castInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_castInExpressionAST.mSlotID,
                                                  extensionMethod_castInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_castInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_castInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperObjectInstanciationInExpressionAST * object = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  GALGAS_lstring var_filewrapperPath_129833 ;
  GALGAS_bool var_isInternal_129867 ;
  GALGAS_lstringlist joker_129839_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_129839_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_129839_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_129839_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, var_filewrapperPath_129833, joker_129839_4, joker_129839_3, joker_129839_2, joker_129839_1, var_isInternal_129867, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3034)) ;
  const enumGalgasBool test_0 = var_isInternal_129867.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation_129951 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.getter_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3042)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3043)).objectCompare (var_filewrapperDeclarationLocation_129951.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3043)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3044)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_129951.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3044)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3044)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3044))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3044)) ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049)), object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3050)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3051)), var_filewrapperPath_129833.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3052))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3048)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  cEnumerator_actualOutputExpressionList enumerator_130838 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_130838.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_130838.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3061)) ;
    enumerator_130838.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_131439 ;
  GALGAS_bool var_isInternal_131466 ;
  GALGAS_lstring joker_131380_4 ; // Joker input parameter
  GALGAS_lstringlist joker_131380_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_131380_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_131380_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_131380_4, joker_131380_3, joker_131380_2, joker_131380_1, var_filewrapperTemplateMap_131439, var_isInternal_131466, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3074)) ;
  const enumGalgasBool test_0 = var_isInternal_131466.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation_131551 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.getter_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3082)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3083)).objectCompare (var_filewrapperDeclarationLocation_131551.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3083)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3084)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_131551.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3084)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3084)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3084))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3084)) ;
    }
  }
  GALGAS_functionSignature var_templateSignature_131973 ;
  GALGAS_lstring joker_131975 ; // Joker input parameter
  var_filewrapperTemplateMap_131439.method_searchKey (object->mAttribute_mFilewrapperTemplateName, var_templateSignature_131973, joker_131975, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3088)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_132063 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3091)).objectCompare (var_templateSignature_131973.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3091)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mFilewrapperTemplateName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3092)), GALGAS_string ("calling the '").add_operation (object->mAttribute_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3093)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3093)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3093)).add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3093)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3093)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3093)).add_operation (var_templateSignature_131973.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3094)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3094)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3093)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3094)).add_operation (object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3095)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3095)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3094)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3095))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3092)) ;
    var_effectiveParameterList_132063.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    var_effectiveParameterList_132063 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3098)) ;
    cEnumerator_actualOutputExpressionList enumerator_132553 (object->mAttribute_mExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_132578 (var_templateSignature_131973, kEnumeration_up) ;
    while (enumerator_132553.hasCurrentObject () && enumerator_132578.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_132578.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_132553.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_4 ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_132578.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_string::makeEmptyString () ;
        }
        inCompiler->emitSemanticError (enumerator_132553.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)), GALGAS_string ("the selector should be '!").add_operation (enumerator_132578.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)) ;
      }
      GALGAS_semanticExpressionForGeneration var_exp_132965 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_132553.current_mExpression (HERE).ptr (), enumerator_132578.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_132965, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3103)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_132578.current_mFormalArgumentType (HERE), var_exp_132965.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3109)), enumerator_132553.current_mEndOfExpressionLocation (HERE), var_exp_132965, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3109)) ;
      }
      var_effectiveParameterList_132063.addAssign_operation (var_exp_132965  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3110)) ;
      enumerator_132553.gotoNextObject () ;
      enumerator_132578.gotoNextObject () ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3116)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3117)), object->mAttribute_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3118)), var_effectiveParameterList_132063  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionAST * object = (const cPtr_filewrapperInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionAST) ;
  GALGAS_stringlist var_directoryList_134072 ;
  GALGAS_string var_fileName_134091 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3140)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3141)), GALGAS_string ("path is empty")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3141)) ;
    var_directoryList_134072.drop () ; // Release error dropped variable
    var_fileName_134091.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_firstCharacterOrNul (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3142)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3143)), GALGAS_string ("the path should not begin with '/'")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3143)) ;
      var_directoryList_134072.drop () ; // Release error dropped variable
      var_fileName_134091.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_directoryList_134072 = object->mAttribute_mFilewrapperPath.mAttribute_string.getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3145)) ;
      {
      var_directoryList_134072.setter_popLast (var_fileName_134091, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3146)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_134653 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_134707 ;
  GALGAS_bool var_isInternal_134740 ;
  GALGAS_lstring joker_134601 ; // Joker input parameter
  GALGAS_lstringlist joker_134608 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_134713 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_134601, joker_134608, var_filewrapperFileMap_134653, var_filewrapperDirectoryMap_134707, joker_134713, var_isInternal_134740, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3149)) ;
  const enumGalgasBool test_2 = var_isInternal_134740.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location var_filewrapperDeclarationLocation_134824 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.getter_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3160)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).objectCompare (var_filewrapperDeclarationLocation_134824.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3162)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_134824.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3162)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3162)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3162))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3162)) ;
    }
  }
  GALGAS_string var_builtPath_135178 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_134707.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)).isValid ()) {
    uint32_t variant_135190 = var_filewrapperDirectoryMap_134707.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)).uintValue () ;
    bool loop_135190 = true ;
    while (loop_135190) {
      loop_135190 = GALGAS_bool (kIsStrictSup, var_directoryList_134072.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3168)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_135190) {
        loop_135190 = GALGAS_bool (kIsStrictSup, var_directoryList_134072.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3168)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_135190 && (0 == variant_135190)) {
        loop_135190 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)) ;
      }
      if (loop_135190) {
        variant_135190 -- ;
        GALGAS_string var_directoryName_135292 ;
        {
        var_directoryList_134072.setter_popFirst (var_directoryName_135292, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3170)) ;
        }
        var_builtPath_135178.plusAssign_operation(var_directoryName_135292.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3171)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3171)) ;
        const enumGalgasBool test_4 = var_filewrapperDirectoryMap_134707.getter_hasKey (var_directoryName_135292 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3172)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_uint joker_135602 ; // Joker input parameter
          var_filewrapperDirectoryMap_134707.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName_135292, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3174))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3174)), var_filewrapperFileMap_134653, var_filewrapperDirectoryMap_134707, joker_135602, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3173)) ;
        }else if (kBoolFalse == test_4) {
          inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180)), GALGAS_string ("the '").add_operation (var_builtPath_135178, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180)).add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180)) ;
          var_filewrapperFileMap_134653.drop () ; // Release error dropped variable
          var_directoryList_134072 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3181)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_135862 ;
  GALGAS_bool var_isTextFile_135881 ;
  const enumGalgasBool test_5 = var_filewrapperFileMap_134653.getter_hasKey (var_fileName_134091 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3186)).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string joker_136007 ; // Joker input parameter
    GALGAS_uint joker_136022 ; // Joker input parameter
    var_filewrapperFileMap_134653.method_searchKey (GALGAS_lstring::constructor_new (var_fileName_134091, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3187))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3187)), joker_136007, var_isTextFile_135881, joker_136022, var_fileIndex_135862, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3187)) ;
  }else if (kBoolFalse == test_5) {
    inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3189)), GALGAS_string ("the '").add_operation (var_fileName_134091, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3190)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3190)).add_operation (var_builtPath_135178, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3190)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3190)).add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3190)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3190)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3190))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3189)) ;
    var_fileIndex_135862.drop () ; // Release error dropped variable
    var_isTextFile_135881.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_6 ;
  const enumGalgasBool test_7 = var_isTextFile_135881.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3197))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3197)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3197)) ;
  }
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_6, object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3199)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3200)), var_fileIndex_135862, var_isTextFile_135881  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3194)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                         extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionExpressionAST * object = (const cPtr_lexiqueIntrospectionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionExpressionAST) ;
  GALGAS_terminalMap joker_137401_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_137401_2 ; // Joker input parameter
  GALGAS_lstring joker_137401_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueComponentName, joker_137401_3, joker_137401_2, joker_137401_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3221)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mLexiqueGetterName.mAttribute_string.objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLexiqueGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)), GALGAS_string ("unknown getter")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)) ;
  }
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3231)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3231)), object->mAttribute_mLexiqueComponentName.mAttribute_location, object->mAttribute_mLexiqueComponentName.mAttribute_string, object->mAttribute_mLexiqueGetterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3230)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                  extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@expressionCollectionValue enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3246)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                               extensionMethod_expressionCollectionValue_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionCollectionValue_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@expressionListCollectionValue enterInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionListCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  extensionMethod_enterInSemanticContext (object->mAttribute_mExpressionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3252)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                               extensionMethod_expressionListCollectionValue_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@expressionCollectionValue analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                               GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  GALGAS_semanticExpressionForGeneration var_expression_139646 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_139646, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3271)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inElementType, var_expression_139646.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3278)), object->mAttribute_mExpressionLocation, var_expression_139646, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3278)) ;
  }
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (object->mAttribute_mExpressionLocation, var_expression_139646  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                extensionMethod_expressionCollectionValue_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValue_analyze (defineExtensionMethod_expressionCollectionValue_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@expressionListCollectionValue analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionListCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  GALGAS_functionSignature var_formalParameterTypeList_140378 = constinArgument_inElementType.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3290)) ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_140499 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList_140378.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3292)).objectCompare (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3292)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfExpressionLocation, GALGAS_string ("element of of '@").add_operation (constinArgument_inElementType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3293)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3293)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3293)).add_operation (var_formalParameterTypeList_140378.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3294)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3293)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3293)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3294)).add_operation (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3295)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3294)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3294)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3295))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3293)) ;
    var_semanticExpressionListForGeneration_140499.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration_140499 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3297)) ;
    cEnumerator_actualOutputExpressionList enumerator_140954 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_140985 (var_formalParameterTypeList_140378, kEnumeration_up) ;
    while (enumerator_140954.hasCurrentObject () && enumerator_140985.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_141170 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_140954.current (HERE).mAttribute_mExpression.ptr (), enumerator_140985.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_141170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3299)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_140985.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_140954.current (HERE).mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_140985.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_string::makeEmptyString () ;
        }
        inCompiler->emitSemanticError (enumerator_140954.current (HERE).mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3306)), GALGAS_string ("the selector should be '!").add_operation (enumerator_140985.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3307)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3307)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3307)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3307))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3306)) ;
      }
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_140985.current_mFormalArgumentType (HERE), var_exp_141170.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3309)), object->mAttribute_mEndOfExpressionLocation, var_exp_141170, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3309)) ;
      }
      var_semanticExpressionListForGeneration_140499.addAssign_operation (var_exp_141170  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3310)) ;
      enumerator_140954.gotoNextObject () ;
      enumerator_140985.gotoNextObject () ;
    }
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (object->mAttribute_mEndOfExpressionLocation, var_semanticExpressionListForGeneration_140499  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3312))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3312)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionListCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                extensionMethod_expressionListCollectionValue_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionValue_analyze (defineExtensionMethod_expressionListCollectionValue_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_collectionValueAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  cEnumerator_collectionValueElementList enumerator_143276 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_143276.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractCollectionValueElement *) enumerator_143276.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3352)) ;
    enumerator_143276.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                         extensionMethod_collectionValueAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_collectionValueAST_enterExpressionInSemanticContext (defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@collectionValueAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_collectionValueAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_143728 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_targetType_143728 = constinArgument_inType ;
  }else if (kBoolFalse == test_0) {
    var_targetType_143728 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3369)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetType_143728.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3372)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)), GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = var_targetType_143728.getter_mSupportCollectionValue (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3374)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3374)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3375)), GALGAS_string ("the @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3375)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3375)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3375))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3375)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mAttribute_mElementList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3377)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType_143728, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3378)) ;
      }else if (kBoolFalse == test_3) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration_144358 = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3382)) ;
        cEnumerator_collectionValueElementList enumerator_144433 (object->mAttribute_mElementList, kEnumeration_up) ;
        while (enumerator_144433.hasCurrentObject ()) {
          callExtensionMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_144433.current_mElement (HERE).ptr (), constinArgument_inAnalysisContext, var_targetType_143728, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration_144358, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3384)) ;
          enumerator_144433.gotoNextObject () ;
        }
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType_143728, object->mAttribute_mEndOfCollectionValue, var_collectionValueElementListForGeneration_144358  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3391)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_collectionValueAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                  extensionMethod_collectionValueAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_collectionValueAST_analyzeSemanticExpression (defineExtensionMethod_collectionValueAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 118)))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 119)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 118)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 120)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 121)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 121)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 122)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 123))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 120)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 126)), GALGAS_string ("the selector should be '!").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 127)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 127)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 127))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 126)) ;
    }
    GALGAS_semanticExpressionForGeneration var_expression_6901 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_6901, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 129)) ;
    {
    routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inFormalArgumentType, var_expression_6901.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)), object->mAttribute_mEndOfExpressionLocation, var_expression_6901, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_expression_6901  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 138))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 138)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                   extensionMethod_outputActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                      const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                      const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterAST * object = (const cPtr_outputInputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 157)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 157)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 158)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 158))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)), GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)) ;
    }
  }
  GALGAS_string var_variableCppName_8510 ;
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType_8628 ;
  {
  GALGAS_string joker_8647 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mOutputInputActualParameterName, var_parameterType_8628, var_variableCppName_8510, joker_8647, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 164)) ;
  }
  GALGAS_unifiedTypeMapProxyList var_typeList_8664 = GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (var_parameterType_8628  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 165)) ;
  cEnumerator_lstringlist enumerator_8756 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_8756.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_8780 = var_parameterType_8628.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 167)) ;
    var_attributeMap_8780.method_searchKey (enumerator_8756.current_mValue (HERE), var_parameterType_8628, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 168)) ;
    var_typeList_8664.addAssign_operation (var_parameterType_8628  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 176)) ;
    enumerator_8756.gotoNextObject () ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_8628)).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (object->mAttribute_mOutputInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_8628.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 181)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 181)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 182)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 182))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)) ;
  }
  const enumGalgasBool test_5 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 185)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 185)).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (object->mAttribute_mOutputInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 186)), GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 186)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 189))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 189)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (var_parameterType_8628, var_variableCppName_8510, object->mAttribute_mStructAttributeList, var_typeList_8664  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 191))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 191)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                   extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@outputInputSingleJokerParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputSingleJokerParameterAST * object = (const cPtr_outputInputSingleJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputSingleJokerParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 209)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 210)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 211)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 211)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 212)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 212))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 210)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214)), GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_11111 = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 216)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_defaultConstructorName_11111.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 218)), GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 218)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 218))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 218)) ;
  }
  GALGAS_string var_cppVarName_11384 = GALGAS_string ("joker_").add_operation (object->mAttribute_mActualSelector.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 221)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 221)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_11384, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mAttribute_mActualSelector.mAttribute_location  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 226))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 222))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 222)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_11384, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 230)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 231))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputJokerParameterAST * object = (const cPtr_outputInputJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputJokerParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 245)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 247)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 247)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 248)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 248))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 246)) ;
  }
  GALGAS_string var_defaultConstructorName_12944 = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 250)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_defaultConstructorName_12944.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 252)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 252))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 252)) ;
  }
  GALGAS_string var_cppVarName_13220 = GALGAS_string ("joker_").add_operation (object->mAttribute_mQualifierLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 255)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 255)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 255)).add_operation (object->mAttribute_mJokerIndex.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 255)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_13220, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mAttribute_mQualifierLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 260))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 256))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 256)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_13220, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 264)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 265))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 261))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 261)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                                const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                                GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                                GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualExistingVariableParameterAST * object = (const cPtr_inputActualExistingVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualExistingVariableParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 279)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 280)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 281)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 281)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 282)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 282))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 280)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 284)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 284)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 284)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 284))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 284)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType_15046 ;
  GALGAS_string var_targetVariableCppName_15077 ;
  {
  GALGAS_string joker_15083 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mInputActualParameterName, var_parameterType_15046, var_targetVariableCppName_15077, joker_15083, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 286)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_15046)).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_15046.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 295)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 295)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 296)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 296))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)) ;
  }
  const enumGalgasBool test_5 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 299)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 299)).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 300)), GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 300)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType_15046, var_targetVariableCppName_15077  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 305))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 305)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewVariableParameterAST * object = (const cPtr_inputActualNewVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewVariableParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 323)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 324)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 325)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 325)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 326)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 326))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 324)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputOptionalActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType_17106 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 333)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_17106)).boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 338)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_17106.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 339)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 339)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 340)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 340))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 338)) ;
    }
  }
  GALGAS_string var_targetVariableCppName_17567 = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 344)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 344)).add_operation (object->mAttribute_mInputActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 344)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 344)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName_17567, var_targetVariableCppName_17567, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 345)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_17567  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 352))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 352)) ;
  const enumGalgasBool test_6 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 356)).boolEnum () ;
  if (kBoolTrue == test_6) {
    inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 357)), GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 357)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 360)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_17567  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewConstantParameterAST * object = (const cPtr_inputActualNewConstantParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewConstantParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 380)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 381)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 382)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 382)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 383)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 383))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 381)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 385)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 385)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 385)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 385))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 385)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputOptionalActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType_19772 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 389)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_19772)).boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 394)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_19772.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 395)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 395)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 396)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 396))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 394)) ;
    }
  }
  GALGAS_string var_targetVariableCppName_20233 = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 400)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 400)).add_operation (object->mAttribute_mInputActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 400)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 400)) ;
  const enumGalgasBool test_6 = object->mAttribute_mMarkedAsUnused.boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName_20233, var_targetVariableCppName_20233, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 402)) ;
    }
  }else if (kBoolFalse == test_6) {
    {
    ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName_20233, var_targetVariableCppName_20233, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 409)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_20233  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 417))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 417)) ;
  const enumGalgasBool test_7 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 422)).boolEnum () ;
  if (kBoolTrue == test_7) {
    inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 423)), GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 423)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 426)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_20233  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 428))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 428)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputSingleJokerActualParameterAST * object = (const cPtr_inputSingleJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputSingleJokerActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 445)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 446)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 447)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 447)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 448)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 448))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 446)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 450)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 450)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 450)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 450))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 450)) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_string var_cppVarName_22581 = GALGAS_string ("joker_").add_operation (object->mAttribute_mActualSelector.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 452)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 452)) ;
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_22581  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 454))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 454)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerActualParameterAST * object = (const cPtr_inputJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 471)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 474)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 474))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 472)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_cppVarName_23812 = GALGAS_string ("joker_").add_operation (object->mAttribute_mQualifierLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)).add_operation (object->mAttribute_mJokerIndex.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_23812  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 478))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 478)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 517)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                        extensionMethod_outputActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                        extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@outputInputSingleJokerParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 700)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 701)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 713)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 714)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 714)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type_34255 ;
  GALGAS_string var_cppName_34276 ;
  {
  GALGAS_string joker_34278 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type_34255, var_cppName_34276, joker_34278, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 716)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_34299 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_34299.objectCompare (var_type_34255)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 719)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)).add_operation (var_type_34255.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)).add_operation (var_expectedType_34299.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 719)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName_34276.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 723)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 723)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 723))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 723)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                         const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                         GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 734)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 735)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 735)) ;
  }
  GALGAS_string var_cppName_35322 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_35446 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 738)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type_35446, var_cppName_35322, var_cppName_35322, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 739)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_35666 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_35666.objectCompare (var_type_35446)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 742)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 743)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 743)).add_operation (var_type_35446.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 743)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 743)).add_operation (var_expectedType_35666.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 742)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName_35322, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                           const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                           GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 757)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 758)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 758)) ;
  }
  GALGAS_string var_cppName_36694 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_36818 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 761)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mActualParameterName, var_type_36818, var_cppName_36694, var_cppName_36694, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 762)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_37031 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_37031.objectCompare (var_type_36818)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 765)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 766)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 766)).add_operation (var_type_36818.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 766)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 766)).add_operation (var_expectedType_37031.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 765)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_36694, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@predefinedTypeAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 109)), GALGAS_primitiveTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 111))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 111)), object->mAttribute_mPredefinedTypeName, object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 110)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 108)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                         extensionMethod_predefinedTypeAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_semanticAnalysis (defineExtensionMethod_predefinedTypeAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@externFunctionDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList_13389 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 236)) ;
  cEnumerator_formalInputParameterListAST enumerator_13464 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_13464.hasCurrentObject ()) {
    var_formalArgumentList_13389.addAssign_operation (enumerator_13464.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_13464.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 240)), enumerator_13464.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 241)), enumerator_13464.current_mFormalArgumentName (HERE), enumerator_13464.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 238)) ;
    enumerator_13464.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 246)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 249)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 250)), var_formalArgumentList_13389, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 252))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 247)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 245)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                         extensionMethod_externFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@externRoutineDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externRoutineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList_14486 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 263)) ;
  cEnumerator_formalParameterListAST enumerator_14556 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_14556.hasCurrentObject ()) {
    var_formalArgumentList_14486.addAssign_operation (enumerator_14556.current_mFormalSelector (HERE), enumerator_14556.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_14556.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 268)), enumerator_14556.current_mFormalArgumentName (HERE), enumerator_14556.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 270))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 265)) ;
    enumerator_14556.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 273)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 276)), object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 277)), var_formalArgumentList_14486  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 274)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 272)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                         extensionMethod_externRoutineDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_semanticAnalysis (defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@routineDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_routineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                    GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineDeclarationAST * object = (const cPtr_routineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_routineDeclarationAST) ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList_15512 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 291)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_15606 ;
  GALGAS_analysisContext var_analysisContext_15628 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 296)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 298))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 293)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext_15628, object->mAttribute_mFormalArgumentList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 302)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 303)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 304)), GALGAS_string::makeEmptyString (), object->mAttribute_mRoutineInstructionList, object->mAttribute_mEndOfRoutineInstructionList, var_instructionList_15606, var_formalArgumentList_15512, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 299)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 313)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 316)), object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 317)), var_formalArgumentList_15512, GALGAS_bool (false), var_instructionList_15606  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 314)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 312)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_routineDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_routineDeclarationAST.mSlotID,
                                         extensionMethod_routineDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineDeclarationAST_semanticAnalysis (defineExtensionMethod_routineDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@functionDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_20107 ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList_20173 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_20208 ;
  GALGAS_string var_resultVariableCppName_20240 ;
  GALGAS_analysisContext var_analysisContext_20262 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 414)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 416))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 411)) ;
  {
  routine_analyzeFunctionBody (var_analysisContext_20262, object->mAttribute_mFormalArgumentList, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 420)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, var_formalInputParameterList_20173, var_returnType_20208, var_resultVariableCppName_20240, var_semanticInstructionListForGeneration_20107, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 417)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 433)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 436)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 437)), var_formalInputParameterList_20173, var_returnType_20208, var_resultVariableCppName_20240, var_semanticInstructionListForGeneration_20107  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 434)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 432)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                         extensionMethod_functionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionDeclarationAST_semanticAnalysis (defineExtensionMethod_functionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@onceFunctionDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onceFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_21618 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_21653 ;
  GALGAS_string var_resultVariableCppName_21685 ;
  GALGAS_analysisContext var_analysisContext_21707 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 459)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 461))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 456)) ;
  {
  GALGAS_formalInputParameterListForGeneration joker_22101 ; // Joker input parameter
  routine_analyzeFunctionBody (var_analysisContext_21707, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 464)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 465)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, joker_22101, var_returnType_21653, var_resultVariableCppName_21685, var_semanticInstructionListForGeneration_21618, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 462)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 478)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 481)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 482)), var_returnType_21653, var_resultVariableCppName_21685, var_semanticInstructionListForGeneration_21618  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 479)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 477)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                         extensionMethod_onceFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@filewrapperDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                        GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_wrapperFileMap var_wrapperFileMap_23563 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_23613 ;
  GALGAS_lstring joker_23515 ; // Joker input parameter
  GALGAS_lstringlist joker_23522 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_23619_2 ; // Joker input parameter
  GALGAS_bool joker_23619_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_23515, joker_23522, var_wrapperFileMap_23563, var_wrapperDirectoryMap_23613, joker_23619_2, joker_23619_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 501)) ;
  GALGAS_string var_absoluteSourcePath_23679 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 511)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_absoluteSourcePath_23679 = object->mAttribute_mFilewrapperPath.mAttribute_string ;
  }else if (kBoolFalse == test_0) {
    var_absoluteSourcePath_23679 = object->mAttribute_mSourceFileAbsolutePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 514)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 514)).add_operation (object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 514)) ;
  }
  const enumGalgasBool test_1 = var_absoluteSourcePath_23679.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 516)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 516)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 517)), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_23679, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 517)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 517))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 517)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_24152 = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 520)) ;
    cEnumerator_filewrapperTemplateListAST enumerator_24233 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
    while (enumerator_24233.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_24233.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 522)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 522)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (enumerator_24233.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 523)), GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_23679, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 523)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 523))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 523)) ;
      }
      GALGAS_string var_absoluteTemplatePath_24507 = var_absoluteSourcePath_23679.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 525)).add_operation (enumerator_24233.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 525)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList_24620 ;
      var_resultingInstructionList_24620.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath_24507, enumerator_24233.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 528))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 528)), var_resultingInstructionList_24620  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 528)) ;
      GALGAS_templateVariableMap var_templateVariableMap_24861 = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 530)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_24917 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 531)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_25018 (enumerator_24233.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
      while (enumerator_25018.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type_25038 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_25018.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 533)) ;
        GALGAS_string var_cppVarName_25156 = GALGAS_string ("in_").add_operation (enumerator_25018.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 534)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 534)) ;
        {
        var_templateVariableMap_24861.setter_insertKey (enumerator_25018.current_mFormalArgumentName (HERE), var_type_25038, var_cppVarName_25156, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 535)) ;
        }
        var_filewrapperTemplateFormalInputParameters_24917.addAssign_operation (enumerator_25018.current_mFormalTemplateSelector (HERE), var_type_25038, var_cppVarName_25156, enumerator_25018.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 536)) ;
        enumerator_25018.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration_25508 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 539)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext_25584 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_24861  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 540)) ;
      {
      routine_templateInstructionListAnalysis (var_templateAnalysisContext_25584, var_resultingInstructionList_24620, var_templateInstructionListForGeneration_25508, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 544)) ;
      }
      var_filewrapperTemplateListForGeneration_24152.addAssign_operation (enumerator_24233.current_mFilewrapperTemplateName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 547)), var_filewrapperTemplateFormalInputParameters_24917, var_templateInstructionListForGeneration_25508  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 546)) ;
      enumerator_24233.gotoNextObject () ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 553)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 556)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 557)), object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 558)), var_wrapperFileMap_23563, var_wrapperDirectoryMap_23613, var_filewrapperTemplateListForGeneration_24152  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 554)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 552)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                         extensionMethod_filewrapperDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_semanticAnalysis (defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionComponentDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  GALGAS_bool var_isPredefined_27527 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_27572 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_27617 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_27664 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_27715 ;
  constinArgument_inSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_isPredefined_27527, var_boolOptionMap_27572, var_uintOptionMap_27617, var_stringOptionMap_27664, var_stringListOptionMap_27715, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 578)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 588)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 591)), var_isPredefined_27527, object->mAttribute_mOptionComponentName.mAttribute_string, var_boolOptionMap_27572, var_uintOptionMap_27617, var_stringOptionMap_27664, var_stringListOptionMap_27715  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 589)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 587)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                         extensionMethod_optionComponentDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_semanticAnalysis (defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@galgas3SyntaxComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  GALGAS_string var_componentName_29050 = object->mAttribute_mSyntaxComponentName.mAttribute_string ;
  GALGAS_terminalMap var_terminalMap_29263 ;
  GALGAS_indexingListAST var_indexingListAST_29305 ;
  GALGAS_lstring var_indexingDirectory_29341 ;
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueName, var_terminalMap_29263, var_indexingListAST_29305, var_indexingDirectory_29341, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 631)) ;
  GALGAS_stringset var_indexNameSet_29426 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 638)) ;
  cEnumerator_indexingListAST enumerator_29469 (var_indexingListAST_29305, kEnumeration_up) ;
  while (enumerator_29469.hasCurrentObject ()) {
    var_indexNameSet_29426.addAssign_operation (enumerator_29469.current_mIndexName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 640)) ;
    enumerator_29469.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing_29541 = var_indexingDirectory_29341.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 642)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 642)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 644)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_lexiqueName_29705 = object->mAttribute_mLexiqueName.mAttribute_string ;
    GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_30069 ;
    {
    routine_semanticAnalysisOfSyntaxComponent (object->mAttribute_mNonterminalDeclarationList, object->mAttribute_mRuleList, var_componentName_29050, var_lexiqueName_29705, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_terminalMap_29263, var_indexNameSet_29426, var_hasIndexing_29541, object->mAttribute_mHasTranslateFeature, var_syntaxDeclarationForGeneration_30069, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 646)) ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_30069, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 659)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                         extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@galgas3GrammarComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_string constinArgument_inProductDirectory,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 674)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 675)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 675))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 675)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_30852 = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 678)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_30932 = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 679)) ;
  GALGAS_lstring var_lexiqueComponentName_30968 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 680)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_31092 = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 681)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList_31142 = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 682)) ;
  GALGAS_uint var_addedNonTerminalCount_31177 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_lstringlist enumerator_31211 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_31211.hasCurrentObject ()) {
    GALGAS_uint var_addedNonTerminalCountRef_31253 = var_addedNonTerminalCount_31177 ;
    GALGAS_string var_syntaxComponentName_31305 = enumerator_31211.current_mValue (HERE).mAttribute_string ;
    GALGAS_lstring var_lexiqueName_31439 ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_31508 ;
    GALGAS_syntaxRuleListAST var_ruleList_31547 ;
    GALGAS_bool var_hasTranslateFeature_31584 ;
    constinArgument_inSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.method_searchKey (enumerator_31211.current_mValue (HERE), var_lexiqueName_31439, var_nonterminalDeclarationList_31508, var_ruleList_31547, var_hasTranslateFeature_31584, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 687)) ;
    const enumGalgasBool test_1 = object->mAttribute_mHasTranslateFeature.operator_and (var_hasTranslateFeature_31584.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 695)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 695)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (enumerator_31211.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 696)), GALGAS_string ("as '").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 696)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 696)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 696))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 696)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = var_hasTranslateFeature_31584.operator_and (object->mAttribute_mHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 697)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 697)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mGrammarComponentName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 698)), GALGAS_string ("as '").add_operation (enumerator_31211.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 698)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 698)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 698))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 698)) ;
      }
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_lexiqueComponentName_30968.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_lexiqueComponentName_30968 = var_lexiqueName_31439 ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_lexiqueName_31439.mAttribute_string.objectCompare (var_lexiqueComponentName_30968.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (enumerator_31211.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 704)), GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName_31439.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 704)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 705)).add_operation (var_lexiqueComponentName_30968.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 705)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 706))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 704)) ;
      }
    }
    {
    routine_handleNonTerminalDeclarations (var_nonTerminalMapForGrammarAnalysis_30932, var_nonterminalDeclarationList_31508, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 709)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList (var_nonTerminalMapForGrammarAnalysis_30932, var_ruleList_31547, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)) ;
    }
    {
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis_30932, enumerator_31211.current_mValue (HERE), var_ruleList_31547, var_actuallyUsedTerminalSymbolMap_30852, var_syntaxComponentListForGrammarAnalysis_31092, var_addedNonTerminalCount_31177, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)) ;
    }
    GALGAS_uint var_i_32995 = GALGAS_uint ((uint32_t) 0U) ;
    if (var_addedNonTerminalCount_31177.isValid ()) {
      uint32_t variant_33008 = var_addedNonTerminalCount_31177.uintValue () ;
      bool loop_33008 = true ;
      while (loop_33008) {
        loop_33008 = GALGAS_bool (kIsStrictInf, var_i_32995.objectCompare (var_addedNonTerminalCount_31177.substract_operation (var_addedNonTerminalCountRef_31253, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 728)))).isValid () ;
        if (loop_33008) {
          loop_33008 = GALGAS_bool (kIsStrictInf, var_i_32995.objectCompare (var_addedNonTerminalCount_31177.substract_operation (var_addedNonTerminalCountRef_31253, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 728)))).boolValue () ;
        }
        if (loop_33008 && (0 == variant_33008)) {
          loop_33008 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 728)) ;
        }
        if (loop_33008) {
          variant_33008 -- ;
          var_nonTerminalToAddList_31142.addAssign_operation (var_syntaxComponentName_31305, var_i_32995  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 729)) ;
          var_i_32995.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 730)) ;
        }
      }
    }
    enumerator_31211.gotoNextObject () ;
  }
  GALGAS_stringset var_lexiqueComponentSet_33304 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 734)) ;
  GALGAS_lstring var_inIndexingDirectory_33524 ;
  GALGAS_terminalMap joker_33412 ; // Joker input parameter
  GALGAS_indexingListAST joker_33448 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (var_lexiqueComponentName_30968, joker_33412, joker_33448, var_inIndexingDirectory_33524, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 735)) ;
  GALGAS_bool var_hasIndexing_33552 = var_inIndexingDirectory_33524.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 741)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 741)) ;
  const enumGalgasBool test_5 = var_hasIndexing_33552.operator_and (object->mAttribute_mHasIndexing.mAttribute_bool.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 742)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 742)).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (object->mAttribute_mGrammarComponentName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 743)), GALGAS_string ("the grammar does not enable indexing, but the '").add_operation (var_lexiqueComponentName_30968.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 743)).add_operation (GALGAS_string ("' does"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 743))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 743)) ;
  }else if (kBoolFalse == test_5) {
    const enumGalgasBool test_6 = var_hasIndexing_33552.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 744)).operator_and (object->mAttribute_mHasIndexing.mAttribute_bool COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 744)).boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (object->mAttribute_mHasIndexing.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 745)), GALGAS_string ("the grammar enables indexing, but the '").add_operation (var_lexiqueComponentName_30968.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)).add_operation (GALGAS_string ("' does not"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)) ;
    }
  }
  GALGAS_uint var_startSymbolIndex_34134 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_34206 ;
  var_nonTerminalMapForGrammarAnalysis_30932.method_searchKey (object->mAttribute_mStartSymbolName, var_startSymbolIndex_34134, var_startSymbolAltMap_34206, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 749)) ;
  {
  routine_checkLabelMap (object->mAttribute_mStartSymbolName.mAttribute_location, object->mAttribute_mStartSymbolLabelList, var_nonTerminalMapForGrammarAnalysis_30932.getter_locationForKey (object->mAttribute_mStartSymbolName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 758)), var_startSymbolAltMap_34206, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 755)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_34586 = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 762)) ;
  cEnumerator_lstringlist enumerator_34626 (object->mAttribute_mUnusedNonterminalList, kEnumeration_up) ;
  while (enumerator_34626.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex_34713 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_34715 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_30932.method_searchKey (enumerator_34626.current_mValue (HERE), var_nonterminalIndex_34713, joker_34715, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 764)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_34586.setter_insertKey (enumerator_34626.current_mValue (HERE), var_nonterminalIndex_34713, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 765)) ;
    }
    enumerator_34626.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_34995 = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 768)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_35045 (var_nonTerminalMapForGrammarAnalysis_30932, kEnumeration_up) ;
  while (enumerator_35045.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_34995.addAssign_operation (enumerator_35045.current_lkey (HERE), enumerator_35045.current_mNonTerminalIndex (HERE), enumerator_35045.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 770)) ;
    enumerator_35045.gotoNextObject () ;
  }
  const enumGalgasBool test_7 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputGrammarRuleListInTexFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_string var_texFilePath_35360 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 774)).add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 774)).add_operation (GALGAS_string (".tex"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 774)) ;
    GALGAS_string var_s_35441 = GALGAS_string::makeEmptyString () ;
    cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_35502 (var_nonTerminalMapForGrammarAnalysis_30932, kEnumeration_up) ;
    while (enumerator_35502.hasCurrentObject ()) {
      var_s_35441.plusAssign_operation(GALGAS_string ("\\ruleSection{").add_operation (function_escapeForTex (enumerator_35502.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 777)).add_operation (GALGAS_string ("}\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 777)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 777)) ;
      cEnumerator_syntaxComponentListForGrammarAnalysis enumerator_35645 (var_syntaxComponentListForGrammarAnalysis_31092, kEnumeration_up) ;
      while (enumerator_35645.hasCurrentObject ()) {
        cEnumerator_productionRuleListForGrammarAnalysis enumerator_35715 (enumerator_35645.current (HERE).mAttribute_mProductionRulesList, kEnumeration_up) ;
        while (enumerator_35715.hasCurrentObject ()) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_35715.current (HERE).mAttribute_mLeftNonterminalSymbol.mAttribute_string.objectCompare (enumerator_35502.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 780)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_rowList temp_9 = GALGAS_rowList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 781)) ;
            GALGAS__32_stringlist temp_10 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 781)) ;
            temp_10.addAssign_operation (GALGAS_string ("P0start"), GALGAS_string ("[point] {}")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 781)) ;
            temp_9.addAssign_operation (temp_10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 781)) ;
            GALGAS_rowList var_rowArray_35831 = temp_9 ;
            GALGAS_stringlist var_arrowList_35897 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 782)) ;
            GALGAS_string var_currentArrows_35936 = GALGAS_string::makeEmptyString () ;
            cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_36006 (enumerator_35715.current (HERE).mAttribute_mInstructionList, kEnumeration_up) ;
            while (enumerator_36006.hasCurrentObject ()) {
              callExtensionMethod_tikzNodeForSyntaxInstruction ((const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_36006.current_mInstruction (HERE).ptr (), var_rowArray_35831, GALGAS_uint ((uint32_t) 0U), GALGAS_string ("P0start"), var_arrowList_35897, var_currentArrows_35936, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 785)) ;
              enumerator_36006.gotoNextObject () ;
            }
            var_arrowList_35897.addAssign_operation (var_currentArrows_35936  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 793)) ;
            GALGAS_location var_loc_36331 = enumerator_35715.current (HERE).mAttribute_mLeftNonterminalSymbol.mAttribute_location ;
            var_s_35441.plusAssign_operation(GALGAS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (enumerator_35645.current (HERE).mAttribute_mSyntaxComponentName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 795)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 796)).add_operation (function_escapeForTex (var_loc_36331.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 798)).getter_lastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 798)).getter_stringByDeletingPathExtension (SOURCE_FILE ("semanticAnalysis.galgas", 798)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 798)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 797)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 798)).add_operation (function_escapeForTex (var_loc_36331.getter_line (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 799)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 799)).add_operation (GALGAS_string ("}\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 799)).add_operation (GALGAS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 800)).add_operation (GALGAS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 795)) ;
            cEnumerator_rowList enumerator_36873 (var_rowArray_35831, kEnumeration_down) ;
            while (enumerator_36873.hasCurrentObject ()) {
              var_s_35441.plusAssign_operation(GALGAS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 804)) ;
              cEnumerator__32_stringlist enumerator_36938 (enumerator_36873.current_columns (HERE), kEnumeration_up) ;
              while (enumerator_36938.hasCurrentObject ()) {
                const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_36938.current (HERE).mAttribute_mValue_30_.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_11) {
                  var_s_35441.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 807)) ;
                }else if (kBoolFalse == test_11) {
                  var_s_35441.plusAssign_operation(GALGAS_string ("\\node (").add_operation (enumerator_36938.current (HERE).mAttribute_mValue_30_, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 809)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 809)).add_operation (enumerator_36938.current (HERE).mAttribute_mValue_31_, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 809)).add_operation (GALGAS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 809)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 809)) ;
                }
                enumerator_36938.gotoNextObject () ;
              }
              var_s_35441.plusAssign_operation(GALGAS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 812)) ;
              enumerator_36873.gotoNextObject () ;
            }
            var_s_35441.plusAssign_operation(GALGAS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 814)) ;
            cEnumerator_stringlist enumerator_37287 (var_arrowList_35897, kEnumeration_up) ;
            while (enumerator_37287.hasCurrentObject ()) {
              var_s_35441.plusAssign_operation(GALGAS_string ("  { [start chain]\n").add_operation (enumerator_37287.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 817)).add_operation (GALGAS_string ("  }\n"
                "\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 817)) ;
              enumerator_37287.gotoNextObject () ;
            }
            var_s_35441.plusAssign_operation(GALGAS_string ("\\end{tikzpicture}\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 845)) ;
          }
          enumerator_35715.gotoNextObject () ;
        }
        enumerator_35645.gotoNextObject () ;
      }
      enumerator_35502.gotoNextObject () ;
    }
    var_texFilePath_35360.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 850)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 850)) ;
    GALGAS_bool joker_38416 ; // Joker input parameter
    var_s_35441.method_writeToFileWhenDifferentContents (var_texFilePath_35360, joker_38416, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 851)) ;
  }
  GALGAS_stringset var_implementationFileHeader_38737 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 856)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_38796 (var_nonTerminalMapForGrammarAnalysis_30932, kEnumeration_up) ;
  while (enumerator_38796.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_38857 (enumerator_38796.current (HERE).mAttribute_mNonterminalSymbolParametersMap, kEnumeration_up) ;
    while (enumerator_38857.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_38898 (enumerator_38857.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_38898.hasCurrentObject ()) {
        switch (enumerator_38898.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t_39023 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_38898.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 862)) ;
            extensionMethod_addHeaderFileName (var_t_39023, var_implementationFileHeader_38737, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 863)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_38898.gotoNextObject () ;
      }
      enumerator_38857.gotoNextObject () ;
    }
    enumerator_38796.gotoNextObject () ;
  }
  const enumGalgasBool test_12 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_implementationFileHeader_38737 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 870)) ;
  }
  GALGAS_string var_HTMLFilePath_39456 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 873)).add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 873)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 873)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 873)) ;
  GALGAS_string var_grammarCppFile_39994 ;
  GALGAS_string var_grammarHTMLHelperContents_40037 ;
  {
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = object->mAttribute_mHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 886)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration (GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 875)), object->mAttribute_mGrammarComponentName, object->mAttribute_mGrammarClass, var_startSymbolIndex_34134, var_lexiqueComponentName_30968.mAttribute_string, var_actuallyUsedTerminalSymbolMap_30852, var_syntaxComponentListForGrammarAnalysis_31092, var_unusedNonTerminalSymbolsForGrammar_34586, var_HTMLFilePath_39456, var_nonTerminalSymbolSortedListForGrammarAnalysis_34995, var_hasIndexing_33552, temp_13, var_grammarCppFile_39994, var_grammarHTMLHelperContents_40037, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 874)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_15) {
    var_HTMLFilePath_39456.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 892)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 892)) ;
    GALGAS_bool joker_40350 ; // Joker input parameter
    var_grammarHTMLHelperContents_40037.method_writeToFileWhenDifferentContents (var_HTMLFilePath_39456, joker_40350, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 893)) ;
  }else if (kBoolFalse == test_15) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath_39456, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 895)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 902)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 902)), object->mAttribute_mGrammarComponentName.mAttribute_string, var_lexiqueComponentName_30968.mAttribute_string, var_nonTerminalMapForGrammarAnalysis_30932, var_nonTerminalToAddList_31142, var_hasIndexing_33552, object->mAttribute_mSyntaxComponents, object->mAttribute_mStartSymbolName.mAttribute_string, object->mAttribute_mHasTranslateFeature, var_grammarCppFile_39994  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 900)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 898)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                         extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis, NULL) ;

